/*
Author: Barbolani, Bob-Murphy, Wurzel0701, Triada, TEH Megamin

Description:
    Handles the spawned state of locations, scheduling spawning,
    handling simulation state of garrisons, and marking for de-spawning
    (de-spawning handled in the spawning code).

Arguments: <nil>
Return Value: <nil>
Scope: Server
Environment: Scheduled
Public: No
Dependencies:
    Occupants, Invaders, teamPlayer, markersX, forcedSpawn, spawner,
    controlsX, airportsX, milbases, resourcesX, factories, outposts, seports,
    A3A_fnc_createAICities, A3A_fnc_createAIcontrols,
    A3A_fnc_createAIAirplane, A3A_fnc_createAIresources, A3A_fnc_createAIOutposts,
    A3A_fnc_createSDKGarrisons

Example: [] spawn A3A_fnc_distance;
*/

/* -------------------------------------------------------------------------- */
/*                                   defines                                  */
/* -------------------------------------------------------------------------- */

// the spawn units array will update ones at this count cycles
/* -------------------------------------------------------------------------- */
/*                                   defines                                  */
/* -------------------------------------------------------------------------- */

#define ENABLED 0
#define DISABLED 1
#define DESPAWN 2

private _teamplayer = [];
private _occupants = [];
private _invaders = [];
private _players = [];

/* -------------------------------------------------------------------------- */
/*                             unified marker processor                       */
/* -------------------------------------------------------------------------- */

private _processMarker = {
    params ["_marker","_forceAnchor"];

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
        /* ---------------------- compute hostile sides for this marker ---------------------- */
        private _hostileSides = [[],[]];
        switch (_side) do {
            case Occupants:    { _hostileSides = [_teamplayer, _invaders]; };   // Occupant markers consider players + invaders hostile
            case Invaders:     { _hostileSides = [_teamplayer, _occupants]; };  // Invader markers consider players + occupants hostile
            case teamPlayer:   { _hostileSides = [_occupants, _invaders]; };    // Player markers consider both NPC factions hostile
        };

        _anchored = ( _hostileSides#0 inAreaArray [_marker, distanceSPWN,distanceSPWN] isNotEqualTo [] )
                 || ( _hostileSides#1 inAreaArray [_marker, distanceSPWN,distanceSPWN] isNotEqualTo [] )
                 || ( _marker in forcedSpawn );
    };

    /* ---------------------- state machine (ENABLED / DISABLED / DESPAWN) ---------------------- */

    switch (_state) do {
        case ENABLED: {
            // if any hostile or marker forced to spawn -> keep enabled
            if (_anchored) exitWith {};
            // otherwise disable
            spawner setVariable [_marker, DISABLED, true];
        };

        case DISABLED: {
            // presence of hostile or forced spawn -> enable
            if (_anchored) then {
                spawner setVariable [_marker, ENABLED, true];
            } else {
                // no hostiles -> move to DESPAWN state
                spawner setVariable [_marker, DESPAWN, true];
            };
        };

        case DESPAWN: {
            // remain despawned unless hostile present or forced spawn
            if (!_anchored) exitWith {};
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
    params ["_mrkr"];
    _players inAreaArray [_mrkr,distanceSPWN,distanceSPWN] isNotEqualTo [];
};

/* -------------------------------------------------------------------------- */
/*                                     start                                  */
/* -------------------------------------------------------------------------- */

if !(isServer) exitWith {};

waitUntil { sleep 0.1; if !(isnil "theBoss") exitWith { true }; false };

// Prepare spawner values for civ part of city spawning (keeps original init)
{ spawner setVariable [_x + "_civ", 2] } forEach citiesX;

/* ------------------------------ endless cycle ----------------------------- */

private _loopSleep          = 0.05;   // seconds: main loop pace, for a 300 markers map it should take ~15 seconds.
private _priorityInterval   = 1;      // seconds: how often we do near-vehicle pass
private _lastPriority = 0;            // last time we ran the priority pass

// MAIN LOOP

while { true } do {
    private _now = time;

    // 1) Collect units
    _occupants = units Occupants select { _x getVariable ["spawner", false] and _x == effectiveCommander vehicle _x };
    _invaders = units Invaders select { _x getVariable ["spawner", false] and _x == effectiveCommander vehicle _x };
    _teamplayer = units teamPlayer select { _x getVariable ["spawner", false] and _x == effectiveCommander vehicle _x };
    _teamplayer append (vehicles select {_x getVariable "originalSide" == teamPlayer && alive _x});

    private _markers = markersX + milAdministrationsX;
    {
        private _marker = _x;

        // 2) PRIORITY PASS (once per _priorityInterval seconds)
        if ((_now - _lastPriority) > _priorityInterval) then {
            _lastPriority = _now;

            private _playerList = allPlayers - entities "HeadlessClient_F";
            _players = [];
            { _players pushBackUnique vehicle _x; } forEach _playerList;

            // For each marker once per priority pass
            {
                // Skip markers already in ENABLED state (spawning/spawned)
                if (spawner getVariable [_x, DESPAWN] == ENABLED) then { continue };

                if ([_x] call _checkNearbyPlayers) then {
                    [_x, true] call _processMarker;
                };
            } forEach (_markers);
        };

        // 3) BACKGROUND SWEEP – one marker per loop, with its own sleep pacing
        private _forceAnchor = [_marker] call _checkNearbyPlayers;
        [_marker, _forceAnchor] call _processMarker;
        sleep _loopSleep;
    } forEach (_markers);
};