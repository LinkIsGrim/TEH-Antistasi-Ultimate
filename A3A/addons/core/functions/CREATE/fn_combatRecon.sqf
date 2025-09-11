params ["_target", "_sideX"];

if !(_sideX == Occupants || _sideX == Invaders) exitWith {};

private _faction = [A3A_faction_occ, A3A_faction_inv] select (_sideX == Invaders);

// Direction and position
private _markerPos = getMarkerPos _target;
private _midWaypoint = [_markerPos, 250, 350, 5, 0, 20, 0] call BIS_fnc_findSafePos;

_potentials = outposts + airportsX + milbases + resourcesX + factories + seaports;
_potentials = _potentials select { (spawner getVariable _x == 2) and (sidesX getVariable [_x, sideUnknown] == _sideX) and (_markerPos distance2d (getMarkerPos _x) < 2000) };
if (count _potentials == 0) exitWith { }; //too far from the frontline
_spawnPos = getMarkerPos (selectRandom _potentials);

// Ensure position is safe
_spawnPos = [_spawnPos, 0, 50, 5, 0, 20, 0] call BIS_fnc_findSafePos;

// Select and spawn group
private _composition = [];
if (random 100 > (15 + 3 * tierWar)) then {
	_composition = selectRandom (_faction get "groupsMilitiaMedium"); //4 men
} else { 
	_composition = selectRandom (_faction get "groupsMilitiaSquads"); //8 men
};
private _grp = [_spawnPos, _sideX, _composition] call A3A_fnc_spawnGroup;

// Initialize units
{
	[_x] call A3A_fnc_NATOinit;   // NATO init on unit
	_x setBehaviour "AWARE";    // stealth behavior
	_x setSpeedMode "NORMAL";    // walk
	_x enableAI "PATH";           // enable pathfinding
} forEach units _grp;

_grp setCombatMode "RED";
_grp setBehaviour "AWARE";
_grp setSpeedMode "NORMAL";
_grp setFormation "LINE";

private _wp0 = _grp addWaypoint [_midWaypoint, 15];
_wp0 setWaypointType "MOVE";
_wp0 setWaypointBehaviour "AWARE";
_wp0 setWaypointSpeed "NORMAL";
_wp0 setWaypointCombatMode "RED";
_wp0 setWaypointFormation "LINE";

private _wp1 = _grp addWaypoint [_markerPos, 15];
_wp1 setWaypointType "SAD";
_wp1 setWaypointBehaviour "COMBAT";
_wp1 setWaypointSpeed "FULL";
_wp1 setWaypointCombatMode "RED";
_wp1 setWaypointFormation "LINE";


// === Monitor Result and capture the marker if possible ===
[_grp, _target] spawn {
	params ["_grp", "_target"];
	
	private _tickLimit = diag_tickTime + 1200;  // 20 min safety
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
