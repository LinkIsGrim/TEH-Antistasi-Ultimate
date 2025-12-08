/* -------------------------------------------------------------------------- */
/*                                   defines                                  */
/* -------------------------------------------------------------------------- */

#define ENABLED 0
#define DISABLED 1
#define DESPAWN 2

private _players = [];
/* -------------------------------------------------------------------------- */
/*                             unified marker processor                       */
/* -------------------------------------------------------------------------- */

private _processMarker = {
    params ["_marker","_position","_forceAnchor"];

    // resolve marker side
    private _side = sidesX getVariable [_marker, sideUnknown];
	// resolve marker state
	private _state = spawner getVariable [_marker, DESPAWN];
    private _anchored = _forceAnchor;
       
    /* ---------------------- city civ (timer) handling ---------------------- */
    // This preserves the original _processCityCivMarker behaviour, using nearestObjects
    if (_marker in citiesX) then {
        private _spawnKey = _marker + "_civ";
        private _timeKey  = _spawnKey + "_time";

        // Check for any (live) player or a player corpse (originalside == teamPlayer)

        switch (spawner getVariable [_spawnKey, DESPAWN]) do {
            case ENABLED: {
                if (_anchored) exitWith { spawner setVariable [_timeKey, time + 30, false]; };
                if (spawner getVariable _timeKey > time) exitWith {};
                spawner setVariable [_spawnKey, DESPAWN, true];
            };
            case DESPAWN: {
                if (!_anchored) exitWith {};
                spawner setVariable [_spawnKey, ENABLED, true];
                spawner setVariable [_timeKey, time + 30, false];

                if !(_marker in destroyedSites) then {
                    // from _processCityCivMarker
                    [[_marker], "A3A_fnc_createAmbientCiv"] call A3A_fnc_scheduler;
                    [[_marker], "A3A_fnc_createAmbientCivTraffic"] call A3A_fnc_scheduler;
                    [[_marker], "SCRT_fnc_rivals_trySpawnWanderingGroup"] call A3A_fnc_scheduler;
                };
            };
        };

        // city civ handled — continue to generic flow (cities also spawn AI below)
    };

    if (_anchored == false) then {
        private _objs = nearestObjects [_position, ["Land","Air","Sea"], distanceSPWN, true];
        /* ---------------------- compute hostile sides for this marker ---------------------- */
        private _hostileSides = [];
        switch (_side) do {
            case Occupants:    { _hostileSides = [teamPlayer, Invaders]; };   // Occupant markers consider players + invaders hostile
            case Invaders:     { _hostileSides = [teamPlayer, Occupants]; };  // Invader markers consider players + occupants hostile
            case teamPlayer:   { _hostileSides = [Occupants, Invaders]; };    // Player markers consider both NPC factions hostile
        };

        /* ---------------------- nearestObjects sequential scan ---------------------- */
        // get everything inside distanceSPWN (user requested "all" types for now)
        
        {
            private _ent = _x;
            private _oside = _x getVariable ["originalside", (side _x)];
                    
            if ((_side != teamPlayer) && (_oside == _side)) then {
                //continue;
            } else {
                // any alive hostile
                if (alive _ent && ((side _ent) in _hostileSides)) then { _anchored = true };
                
                // any player corpses or rebel cars
                if ((_side != teamPlayer) && (_oside == teamPlayer) && (_ent isKindOf "Man" or canMove _ent)) then { _anchored = true };
                
                //that leaves an edgecase when the car is stolen and then player is killed in it but I don't want to check crews.
            };
            if (_anchored) exitWith {};

        } forEach _objs;
    };

    /* ---------------------- state machine (ENABLED / DISABLED / DESPAWN) ---------------------- */

    switch (_state) do {
        case ENABLED: {
            // if any hostile or marker forced to spawn -> keep enabled
            if (_anchored || {_marker in forcedSpawn}) exitWith {};
            // otherwise disable
            spawner setVariable [_marker, DISABLED, true];
        };

        case DISABLED: {
            // presence of hostile or forced spawn -> enable
            if (_anchored || {_marker in forcedSpawn}) then {
                spawner setVariable [_marker, ENABLED, true];

                // enable simulation for units tied to this marker
                {
                    if ((_x getVariable ["markerX", ""] == _marker) && { vehicle _x == _x }) then {
                        _x enableSimulationGlobal true;
                    };
                } forEach allUnits;
            } else {
                // no hostiles -> move to DESPAWN state
                spawner setVariable [_marker, DESPAWN, true];
            };
        };

        case DESPAWN: {
            // remain despawned unless hostile present or forced spawn
            if (!_anchored && {!(_marker in forcedSpawn)}) exitWith {};
            // otherwise spawn (enable) and call spawn routines
            spawner setVariable [_marker, ENABLED, true];

			if (_side == teamPlayer) then {
				switch (true) do {
					// FIA-specific spawns (from _processFIAMarker)
					case (_marker in watchpostsFIA): {
						[[_marker], "SCRT_fnc_outpost_createWatchpostDistance"] call A3A_fnc_scheduler;
					};
					case (_marker in roadblocksFIA): {
						[[_marker], "SCRT_fnc_outpost_createRoadblockDistance"] call A3A_fnc_scheduler;
					};
					case (_marker in aapostsFIA): {
						[[_marker], "SCRT_fnc_outpost_createAaDistance"] call A3A_fnc_scheduler;
					};
					case (_marker in atpostsFIA): {
						[[_marker], "SCRT_fnc_outpost_createAtDistance"] call A3A_fnc_scheduler;
					};
					case (_marker in hmgpostsFIA): {
						[[_marker], "SCRT_fnc_outpost_createHmgDistance"] call A3A_fnc_scheduler;
					};

					// SDK garrisons (from _processFIAMarker). Run only when marker is teamPlayer-type (FIA)
					case (!(_marker in controlsX) && {_side == teamPlayer}): {
						[[_marker], "A3A_fnc_createSDKGarrisons"] call A3A_fnc_scheduler;
					};
				};
			} else {
				// Spawn dispatch — keep all original subcases and annotate origin
				switch (true) do {
					case (_marker in citiesX): {
						// from _processOccupantMarker / _processInvaderMarker
						[[_marker], "A3A_fnc_createAICities"] call A3A_fnc_scheduler;
					};
					case (_marker in controlsX): {
						// from _processOccupantMarker / _processInvaderMarker
						[[_marker], "A3A_fnc_createAIcontrols"] call A3A_fnc_scheduler;
					};
					case (_marker in airportsX): {
						// from _processOccupantMarker / _processInvaderMarker
						[[_marker], "A3A_fnc_createAIAirplane"] call A3A_fnc_scheduler;
					};
					case (_marker in resourcesX);
					case (_marker in factories): {
						// from _processOccupantMarker / _processInvaderMarker
						[[_marker], "A3A_fnc_createAIresources"] call A3A_fnc_scheduler;
					};
					case (_marker in outposts);
					case (_marker in seaports): {
						// from _processOccupantMarker / _processInvaderMarker
						[[_marker], "A3A_fnc_createAIOutposts"] call A3A_fnc_scheduler;
					};
					case (_marker in milbases): {
						// from _processOccupantMarker / _processInvaderMarker
						[[_marker], "A3A_fnc_createAIMilbase"] call A3A_fnc_scheduler;
					};
					case ((_marker in milAdministrationsX) && {_side == Occupants}): {
							// skip milAdministration markers that aren't Occupants (they only belong to Occupants)
						// from _processOccupantMarker (special: only Occupants own milAdministrations)
						[[_marker], "A3A_fnc_createAIMilAdmin"] call A3A_fnc_scheduler;
					};
				};
			};
        };
    };
};

private _checkNearbyPlayers = {
    params ["_mPos"];
    private _playerFound = false;
    {
        private _veh = _x;
        if ((_veh distance2D _mPos) < distanceSPWN) exitWith { _playerFound = true };
    } forEach _players;

    _playerFound;
};

/* -------------------------------------------------------------------------- */
/*                                     start                                  */
/* -------------------------------------------------------------------------- */

if !(isServer) exitWith {};

waitUntil { sleep 0.1; if !(isnil "theBoss") exitWith { true }; false };

// Prepare spawner values for civ part of city spawning (keeps original init)
{ spawner setVariable [_x + "_civ", 2] } forEach citiesX;

/* ------------------------------ endless cycle ----------------------------- */

private _processableMarkers = markersX + milAdministrationsX;

private _loopSleep          = 0.05;   // seconds: main loop pace
private _priorityInterval   = 1;      // seconds: how often we do near-vehicle pass

// PRECOMPUTE STATIC MARKER DATA

private _markerCount  = count _processableMarkers;
private _markerPoses  = _processableMarkers apply { getMarkerPos _x };
private _markerIndex  = -1;  // round-robin for background sweep
private _lastPriority = 0;   // last time we ran the priority pass

// MAIN LOOP

while { true } do {
    private _now = time;

    // 1) Collect unique player vehicles (including players on foot as their own "vehicle")
    private _playerList = allPlayers - entities "HeadlessClient_F";
    _players = [];
    {
        private _veh = vehicle _x;
        if (!isNull _veh && {alive _veh}) then {
            if !(_veh in _players) then {
                _players pushBack _veh;
            };
        };
    } forEach _playerList;

    // 2) PRIORITY PASS (once per _priorityInterval seconds)
    if ((_now - _lastPriority) > _priorityInterval) then {
        _lastPriority = _now;

        // For each marker once per priority pass
        for "_i" from 0 to (_markerCount - 1) do {
            private _marker = _processableMarkers select _i;

            // Skip markers already in ENABLED state (spawning/spawned)
            private _state = spawner getVariable [_marker, DESPAWN];
            if (_state == ENABLED) then { continue };

            private _mPos          = _markerPoses select _i;
            private _forceAnchor = [_mPos] call _checkNearbyPlayers;

            if (_forceAnchor) then {
                // Unified processor decides spawn/despawn etc based on marker state/logic
                [_marker, _mPos,_forceAnchor] call _processMarker;
            };
        };
    };

    // 3) BACKGROUND SWEEP – one marker per loop, with its own sleep pacing

    _markerIndex = _markerIndex + 1;
    if (_markerIndex >= _markerCount) then { _markerIndex = 0 };

    private _bgMarker = _processableMarkers select _markerIndex;
    private _bgPos    = _markerPoses select _markerIndex;
    
    private _forceAnchor = [_bgPos] call _checkNearbyPlayers;
    [_bgMarker, _bgPos, _forceAnchor] call _processMarker;

    // 4) Global loop sleep (this also spreads background sweep because we do 1 marker/loop)
    sleep _loopSleep;
};