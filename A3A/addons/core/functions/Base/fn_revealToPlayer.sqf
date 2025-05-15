private _rebelBases = ["Synd_HQ"];

while { revealX } do {

	private _allMarkers = [];
	private _activeVehicles = [];

	{
		if (!([player] call A3A_fnc_hasRadio)) then { break; };
		
		if ((side _x == Invaders) || (side _x == Occupants)) then {
			private _lead = leader _x;
			private _pos = getPosATL _lead;

			if ((side _lead isNotEqualTo side _x) || (_pos isEqualTo [0,0,0])) then { continue; };
			
			private _veh = vehicle _lead;
			
			//if squad is sharing a ride, don't draw it.
			if (_veh in _activeVehicles) then { continue; };
			_activeVehicles pushBack _veh;

			private _typeX = switch (true) do {
				case (_veh isKindOf "UAV_02_base_F" || _veh isKindOf "UAV"): { "uav" };
				case (_veh isKindOf "Helicopter"): { "air" };
				case (_veh isKindOf "Tank"): { "armor" };
				case (_veh isKindOf "Wheeled_APC_F"): { "mech_inf" };
				case (_veh isKindOf "Truck" || _veh isKindOf "Car"): { "motor_inf" };
				case (_veh isKindOf "Plane_Base_F"): { "plane" };
				case (_veh isKindOf "Boat_F"): { "naval" };
				case (_veh isKindOf "StaticWeapon"): { "antiair" };
				case (_veh isKindOf "Man"): { "inf" };
				default { "unknown" };
			};
			
			if (_typeX in ["antiair","inf"]) then {
				_loc = [_rebelBases, _pos] call BIS_fnc_nearestPosition;
				if (_pos distance2D getMarkerPos _loc > 1500) then { continue; };
			};
			
			private _formatX = if (side _x == Occupants) then {"b"} else {"o"};
			private _color = if (side _x == Occupants) then { colorOccupants } else { colorInvaders };

			private _mrkName = format ["reveal-%1", _x];
			_allMarkers pushBack _mrkName;

			private _mrk = createMarkerLocal [_mrkName, _pos];
			_mrk setMarkerTypeLocal format ["%1_%2", _formatX, _typeX];
			_mrk setMarkerColorLocal _color;
			if (_typeX isNotEqualTo "inf") then {
				_mrk setMarkerSizeLocal [1.2,1.2];
				_mrk setMarkerAlphaLocal 1.0;
			} else {
				_mrk setMarkerSizeLocal [0.8,0.8];
				_mrk setMarkerAlphaLocal 0.66;
			};
			_mrk setMarkerTextLocal ((str _x) select [2]);
		};
	} forEach allGroups;

	_rebelBases =  markersX select { sidesX getVariable _x == teamPlayer };

	sleep 15;


	{ deleteMarkerLocal _x } forEach _allMarkers;
};