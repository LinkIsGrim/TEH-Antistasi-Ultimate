private _allMarkers = [];
while { revealX } do {
	{
		if ((side _x == Invaders) || (side _x == Occupants)) then {
			private _lead = leader _x;
			private _veh = vehicle _lead;
			private _pos = getPosATL _lead;

			private _typeX = switch (true) do {
				case (_veh isKindOf "Truck" || _veh isKindOf "Car"): { "motor_inf" };
				case (_veh isKindOf "Wheeled_APC_F"): { "mech_inf" };
				case (_veh isKindOf "Tank"): { "armor" };
				case (_veh isKindOf "Plane_Base_F"): { "plane" };
				case (_veh isKindOf "UAV_02_base_F"): { "uav" };
				case (_veh isKindOf "Helicopter"): { "air" };
				case (_veh isKindOf "Boat_F"): { "naval" };
				case (_veh isKindOf "StaticWeapon"): { "antiair" };
				case (_veh isKindOf "Man"): { "inf" };
				default { "unknown" };
			};

			private _formatX = if (side _x == Occupants) then {"b"} else {"o"};
			private _color = if (side _x == Occupants) then { colorOccupants } else { colorInvaders };

			private _mrkName = format ["reveal-%1", _x];
			_allMarkers pushBack _mrkName;

			private _mrk = createMarkerLocal [_mrkName, _pos];
			_mrk setMarkerTypeLocal format ["%1_%2", _formatX, _typeX];
			_mrk setMarkerColorLocal _color;
			_mrk setMarkerTextLocal ((str _x) select [2]);
			_mrk setMarkerAlphaLocal 0.66;
			if (_pos isNotEqualTo [0,0,0]) then {
				_mrk setMarkerPosLocal _pos;
			} else {
				deleteMarker _mrkName;
			};
		};
	} forEach allGroups;

	sleep 15;

	{ deleteMarker _x } forEach _allMarkers;
};