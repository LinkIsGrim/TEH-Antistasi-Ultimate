private _rebelBases = [];
private _markerMap = createHashMap;

while { revealX } do {
	private _activeVehicles = [];
    
	private _rebelBases = (airportsX + outposts + seaports + factories + resourcesX + milbases) select { sidesX getVariable _x == teamPlayer };
	_rebelBases pushBack "Synd_HQ";
	
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
			

			
			private _formatX = if (side _x == Occupants) then {"b"} else {"o"};
			private _color = if (side _x == Occupants) then { colorOccupants } else { colorInvaders };

			private _mrkName = format ["reveal-%1", _x];
			private _mrk = _mrkName;

			// -1 - not tracked, 0 - expired, 1 - active
			private _status = _markerMap getOrDefault [_mrkName, -1]; 
			
			if (_status == -1) then {
				_mrk = createMarkerLocal [_mrkName, _pos];
				_mrk setMarkerTypeLocal format ["%1_%2", _formatX, _typeX];
				_mrk setMarkerColorLocal _color;
				_mrk setMarkerTextLocal ((str _x) select [2]);
				_markerMap set [_mrkName, 1];
			} else {
				_mrk setMarkerPosLocal _pos;
				_markerMap set [_mrkName, 1];
			};
			
			//squad getting out of the car should be resized
			if (_typeX isNotEqualTo "inf") then {
				_mrk setMarkerSizeLocal [1.2,1.2];
			} else {
				_mrk setMarkerSizeLocal [0.8,0.8];
			};
			
			//hide the runners
			private _outmarker = false;
			if (_typeX in ["antiair","inf"]) then {
				_loc = [_rebelBases, _pos] call BIS_fnc_nearestPosition;
				_outmarker = _pos distance2D getMarkerPos _loc > 1500;
			};
			
			if (_outmarker) then {
				_mrk setMarkerAlphaLocal 0;
			} else {
				if (_typeX isNotEqualTo "inf") then {
					_mrk setMarkerAlphaLocal 1;
				} else {
					_mrk setMarkerAlphaLocal 0.66;
				};
			};
		};
	} forEach allGroups;

	// Garbage collection pass
	{
		private _mrk = _x;
		private _status = _markerMap get _x;
		if (_status == 1) then {
			_markerMap set [_mrk, 0];  // Mark for next cycle
		} else {
			_mrk setMarkerAlphaLocal 0;  // Hide stale marker
		};
	} forEach _markerMap;

	sleep 15;
};

// remove all
{
	private _mrk = _x;
	deleteMarker _mrk;
} forEach _markerMap;