params ["_unit","_instigator"];

private _side = _unit getVariable "originalSide";

// Only occupiers/invaders get SWAT-style response
if !(_side in [Occupants, Invaders]) exitWith {};

private _incidentPos = getPosATL _unit;

// War tier for scaling team size
private _warTier = missionNamespace getVariable ["tierWar", 0];

// Cities controlled by this side (citiesX = array of marker names)
private _policeCities = citiesX select { sidesX getVariable [_x, sideUnknown] == _side };
if (_policeCities isEqualTo []) exitWith {};

// First nearest city
private _loc = [_policeCities, _incidentPos] call BIS_fnc_nearestPosition;
private _nearestPos  = getMarkerPos _loc;

// If we're basically *in* that city (<200m), try second nearest
if (_incidentPos distance2D _nearestPos < 200) then {
    _policeCities = _policeCities - [_loc];
    if (_policeCities isEqualTo []) exitWith {};

    _loc = [_policeCities, _incidentPos] call BIS_fnc_nearestPosition;
};

diag_log "Chosen city for SWAT spawn:";
diag_log _loc;
	
// Hardcoded SWAT transport
private _vehClass = "B_GEN_Van_02_vehicle_F";
private _spawnPos = (getMarkerPos _loc) findEmptyPosition [5, 40, _vehClass];
if (_spawnPos isEqualTo []) exitWith {};

private _veh = createVehicle [_vehClass, _spawnPos, [], 0, "NONE"];

// Create SWAT group on same side as dead cop
private _grp = createGroup _side;

private _skill = (0.1 * A3A_enemySkillMul) + (0.07 * (1 max A3A_activePlayerCount^0.5)) + (0.01 * tierWar);
// Commander first → becomes leader
private _commander = _grp createUnit ["B_GEN_Commander_F", _spawnPos, [], 0, "NONE"];
_commander setSkill _skill*1.1;

// Group size: commander + N grunts (max 11 seats in van)
private _gruntCount = 4 + _warTier;
if (_gruntCount > 10) then { _gruntCount = 10; };

for "_i" from 1 to _gruntCount do {
    private _u = _grp createUnit ["B_GEN_Soldier_F", _spawnPos, [], 0, "NONE"];

    // Override headgear
    removeHeadgear _u;
    _u addHeadgear "H_PASGT_basic_blue_F";

    _u setSkill _skill*1.05;
};

// Initial group behaviour while mounted
_grp setCombatMode "YELLOW";      // will shoot if threatened
_grp setBehaviour "AWARE";
_grp setSpeedMode "FULL";
_grp setFormation "COLUMN";

// Load everyone into the van
{ _x moveInAny _veh } forEach units _grp;

// Turn on emergency lights (if supported)
_veh animateSource ["lights_em_hide", 1];
[_veh,'CustomSoundController1',1,0.2] remoteExec ['BIS_fnc_setCustomSoundController', 0, ['CustomSoundController1', netID this] joinString ':'];

// Waypoint: drive to crime scene
private _wp = _grp addWaypoint [_incidentPos, 0];
_wp setWaypointType "MOVE";
_wp setWaypointBehaviour "AWARE";
_wp setWaypointSpeed "FULL";
_wp setWaypointCombatMode "YELLOW";
_wp setWaypointFormation "COLUMN";

// Spawn behaviour thread: disembark, search, then RTB
[_grp, _veh, _incidentPos, _instigator] spawn {
	params ["_grp", "_veh", "_incidentPos", "_instigator"];

	// === Phase 1: arrive and disembark near the scene ===
	waitUntil {
		sleep 1;
		({ alive _x } count units _grp == 0)
		|| { !alive _veh }
		|| { !canMove _veh }
		|| { (leader _grp distance2D _incidentPos) < 60 }
	};

	// Everyone dead → nothing more to do
	if ({ alive _x } count units _grp == 0) exitWith {};

	// Force disembark
	{
		if (alive _x) then {
			unassignVehicle _x;
			[_x] orderGetIn false;
			doGetOut _x;
		};
	} forEach units _grp;
	
	//turn off sirens
	[_veh, 'CustomSoundController1',0,0.4] remoteExec ['BIS_fnc_setCustomSoundController', 0, ['CustomSoundController1', netID this] joinString ':'];

	// Aggressive posture on foot
	_grp setCombatMode "RED";
	_grp setBehaviour "AWARE";
	_grp setSpeedMode "FULL";
	_grp setFormation "LINE";

	// Clear old waypoints (drive-to)
	while {count waypoints _grp > 0} do {
		deleteWaypoint [_grp, 0];
	};

	// Choose search position: instigator if valid, else incident pos
	private _searchPos =
		if (!isNull _instigator && {alive _instigator}) then {
			getPosWorld _instigator
		} else {
			_incidentPos
		};

	// Search-and-destroy around target area
	private _wpSearch = _grp addWaypoint [_searchPos, 10];
	_wpSearch setWaypointType "SAD";
	_wpSearch setWaypointBehaviour "AWARE";
	_wpSearch setWaypointSpeed "FULL";
	_wpSearch setWaypointCombatMode "RED";
	_wpSearch setWaypointFormation "LINE";

	// === Phase 2: monitor situation and eventually RTB ===

	private _tickLimit = diag_tickTime + 900;   // 15 min max
	private _allDead = false;

	waitUntil {
		sleep 20;
		_allDead = { alive _x } count units _grp == 0;

		_allDead
		|| { isNull _instigator || !alive _instigator }
		|| { diag_tickTime > _tickLimit }
	};

	if (_allDead) exitWith {};

	// Done here → clear waypoints
	while {count waypoints _grp > 0} do {
		deleteWaypoint [_grp, 0];
	};

	// Try to re-use their own van if it's still usable and nearby
	if (
		!isNull _veh
		&& { _veh isKindOf "Car" }
		&& { alive _veh }
		&& { count crew _veh == 0 }
		&& { (leader _grp) distance2D _veh < 300 }
	) then {
		private _passengers = [];
		{
			if (alive _x) then {
				_x assignAsCargo _veh;
				_passengers pushBack _x;
			};
		} forEach units _grp;
		_passengers orderGetIn true;

		private _lead = leader _grp;
		_lead assignAsDriver _veh;
		[_lead] orderGetIn true;

		// Give them some time to mount before RTB logic kicks in
		sleep 90;
	};

	// Hand off to global RTB logic
	[_grp] spawn A3A_fnc_enemyReturnToBase;
};