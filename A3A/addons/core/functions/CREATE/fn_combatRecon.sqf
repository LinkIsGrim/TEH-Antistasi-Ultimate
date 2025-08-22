params ["_target", "_sideX"];

if !(_sideX == Occupants || _sideX == Invaders) exitWith {};

private _faction = [A3A_faction_occ, A3A_faction_inv] select (_sideX == Invaders);

// Direction and position
private _spawnDistance = 500 + (random 1000);
private _spawnDir = random 360;
private _markerPos = getMarkerPos _target;
private _spawnPos = _markerPos getPos [_spawnDistance, _spawnDir];

// Ensure position is safe
_spawnPos = [_spawnPos, 0, 50, 5, 0, 20, 0] call BIS_fnc_findSafePos;

// Select and spawn group
private _composition = [];
if (random 100 > 33) then {
	_composition = selectRandom (_faction get "groupsMilitiaMedium"); //4 men
} else { 
	_composition = selectRandom (_faction get "groupsMilitiaSquads"); //8 men
};
private _grp = [_spawnPos, _sideX, _composition] call A3A_fnc_spawnGroup;

// Initialize units
{
	[_x] call A3A_fnc_NATOinit;   // NATO init on unit
	_x setBehaviour "AWARE";    // stealth behavior
	_x setSpeedMode "FULL";    // walk
	_x enableAI "PATH";           // enable pathfinding
} forEach units _grp;

_grp setCombatMode "RED";
_grp setBehaviour "AWARE";
_grp setSpeedMode "FULL";
_grp setFormation "LINE";

private _wp = _grp addWaypoint [_markerPos, 15];
_wp setWaypointType "SAD";
_wp setWaypointBehaviour "AWARE";
_wp setWaypointSpeed "FULL";
_wp setWaypointCombatMode "RED";
_wp setWaypointFormation "LINE";

// === Monitor Result and capture the marker if possible ===
[_grp, _target] spawn {
	params ["_grp", "_target"];
	
	private _tickLimit = diag_tickTime + 1200;  // 15 min safety
	_allDead = false;

	waitUntil {
		sleep 60;

		_allDead = {alive _x} count units _grp == 0;
		[_target, teamPlayer] call A3A_fnc_zoneCheck;
		
		sidesX getVariable _target == side _grp ||
		_allDead || 
		diag_tickTime > _tickLimit;
	};
	
	if ({alive _x} count units _grp > 0) then {
		[_grp] spawn A3A_fnc_enemyReturnToBase;
	};
};
