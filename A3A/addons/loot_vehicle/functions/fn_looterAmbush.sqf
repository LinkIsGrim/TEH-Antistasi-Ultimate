params ["_target", "_vehicle"];

// Settings
private _spawnDistance = 150 + random 50; // 100 to 200 meters

// Direction and position
private _dirToPlayer = getDir _target;
private _spawnDir = _dirToPlayer + 180 + (random 60 - 30); // +/- 30° cone behind
private _spawnPos = _target getPos [_spawnDistance, _spawnDir];

// Ensure position is safe
_spawnPos = [_spawnPos, 0, 50, 5, 0, 20, 0] call BIS_fnc_findSafePos;

// Determine faction
//private _sideX = if (sidesX getVariable [_markerX, sideUnknown] == Occupants) then { Occupants } else { Invaders };
private _sideX = Occupants;
//private _faction = Faction(_sideX);
private _faction = A3A_faction_occ;

// Select and spawn group
private _specOps = selectRandom (_faction get "groupSpecOpsRandom");
private _grp = [_spawnPos, _sideX, _specOps] call A3A_fnc_spawnGroup;

// Initialize units
{
	[_x] call A3A_fnc_NATOinit;   // NATO init on unit
	_x setUnitPos "MIDDLE";       // crouch
	_x setBehaviour "STEALTH";    // stealth behavior
	_x setSpeedMode "LIMITED";    // walk
	_x enableAI "PATH";           // enable pathfinding
} forEach units _grp;

// Set group behavior
_grp setCombatMode "GREEN";     // fire if fired upon
_grp setBehaviour "STEALTH";    // stealthy movement
_grp setSpeedMode "LIMITED";    // walk
_grp setFormation "STAG COLUMN";

// === Waypoint 1: Stealthy approach ===
private _wp1Pos = _target getPos [100, _spawnDir];
private _wp1 = _grp addWaypoint [_wp1Pos, 10];
_wp1 setWaypointType "MOVE";
_wp1 setWaypointBehaviour "STEALTH";
_wp1 setWaypointSpeed "LIMITED";
_wp1 setWaypointCombatMode "GREEN";
_wp1 setWaypointFormation "STAG COLUMN";

// === Waypoint 2: Engage target ===
private _wp2 = _grp addWaypoint [getPos _target, 5];
_wp2 setWaypointType "SAD";
_wp2 setWaypointBehaviour "AWARE";
_wp2 setWaypointSpeed "FULL";
_wp2 setWaypointCombatMode "RED";
_wp2 setWaypointFormation "LINE";

// === Monitor Result and Hijack if possible ===
[_grp, _target, _vehicle] spawn {
	params ["_grp", "_target", "_vehicle"];
	
	private _origin = getPos _vehicle;
	private _tickLimit = diag_tickTime + 900;  // 15 min safety
	_allDead = false;

	waitUntil {
		sleep 60;
		_allDead = {alive _x} count units _grp == 0;

		_allDead || 
		!alive _target || 
		(_target distance2D _origin > 500) || 
		diag_tickTime > _tickLimit
	};

	// Set group behavior
	_grp setCombatMode "RED";     // fire if fired upon
	_grp setBehaviour "AWARE";    // stealthy movement
	_grp setSpeedMode "FULL";    // walk
	_grp setFormation "STAG COLUMN";
	while {count waypoints _grp > 0} do { deleteWaypoint [_grp, 0] };
	if (_allDead) exitWith {};  // all ambushers dead

	if (
		!isNull _vehicle &&
		{_vehicle isKindOf "Car"} &&
		{_vehicle distance2D (leader _grp) < 300} &&
		{damage _vehicle < 1} &&
		{count crew _vehicle == 0}
	) then {
		// Repair + Refuel (if needed)
		_vehicle setDamage 0;
		_vehicle setFuel 1;

		
		// Board
		_passengers = [];
		{
			if (alive _x) then {
				_x assignAsCargo _vehicle;
				_passengers pushBack _x;
			};
		} forEach units _grp;
		_passengers orderGetIn true;
		
		_lead = leader _grp;
		_lead assignAsDriver _vehicle;
		[_lead] orderGetIn true;

		sleep 90;
	};
	
	[_grp] spawn A3A_fnc_enemyReturnToBase;
};
