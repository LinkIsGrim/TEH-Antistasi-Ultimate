_filename = "fn_VEHdespawner";
params ["_veh", ["_checkNonRebel", false]];

if (_veh getVariable ["ownerSide", teamPlayer] == teamPlayer) exitWith {};			// don't use this for rebel vehicles
if (!isNil {_veh getVariable "inDespawner"}) exitWith {};
_veh setVariable ["inDespawner", true, true];
_veh setVariable ["A3A_despawnerHandle", _thisScript];

while {alive _veh} do
{
	sleep 60;
	if !(alive _veh) exitWith {};

	private _shouldDespawn = {
		// Don't despawn if vehicle's crew is dead or vehicle is attached to something
		if (({alive _x} count crew _veh) == 0) exitWith { false };
		if (!isNull attachedTo _veh) exitWith { false };

		private _vehSide = side _veh;
		private _bases = [];

		// Select appropriate bases by vehicle type and side
		if (_veh isKindOf "Air") then {
			_bases = (airportsX + ["CSAT_carrier", "NATO_carrier"]) select { sidesX getVariable [_x, sideUnknown] == _vehSide };
		} else {
			_bases = (airportsX + outposts + seaports + milbases) select { sidesX getVariable [_x, sideUnknown] == _vehSide };
		};

		if (_bases isEqualTo []) exitWith { false };

		private _nearestBase = [_bases, _veh] call BIS_fnc_nearestPosition;
		if (_veh distance2D getMarkerPos _nearestBase > 200) exitWith { false };

		true;
	};
	
	if (call _shouldDespawn) exitWith { [group _veh] spawn A3A_fnc_groupDespawner; };
};
