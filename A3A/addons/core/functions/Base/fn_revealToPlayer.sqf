private _rebelBases = [];
private _markerMap = createHashMap;

while { revealX } do {

	private _activeVehicles = [];
    
	if ([player] call A3A_fnc_hasRadio) then {
		private _rebelBases = (airportsX + outposts + seaports + factories + resourcesX + milbases) select { sidesX getVariable _x == teamPlayer };
		_rebelBases pushBack "Synd_HQ";
		{
			
			if ((side _x == Invaders) || (side _x == Occupants)) then {
				private _lead = leader _x;
				private _pos = getPosATL _lead;
				private _veh = vehicle _lead;
				
				//Flag to hide an active group
				//This particular case is about dead/surrendered group
				private _hide = side _lead isNotEqualTo side _x;
				
				private _infantry = false;
				private _statics = false;
				//if squad is sharing a ride, don't draw it.
				private _typeX = switch (true) do {
					case (_veh isKindOf "UAV_02_base_F" || _veh isKindOf "UAV"): { "uav" };
					case (_veh isKindOf "Helicopter"): { "air" };
					case (_veh isKindOf "Tank"): { "armor" };
					case (_veh isKindOf "Wheeled_APC_F"): { "mech_inf" };
					case (_veh isKindOf "Truck" || _veh isKindOf "Car"): { "motor_inf" };
					case (_veh isKindOf "Plane_Base_F"): { "plane" };
					case (_veh isKindOf "Boat_F"): { "naval" };
					case (_veh isKindOf "StaticMortar" || _veh isKindOf "StaticCannon" || _veh isKindOf "B_Ship_MRLS_01_F"): {"mortar"};
					case (_veh isKindOf "StaticWeapon"): { _statics = true; "antiair" };
					case (_veh isKindOf "Man"): { _infantry = true; "inf" };
					default { "unknown" };
				};

				
				if (_veh in _activeVehicles) then {
					_hide = true;
				} else {
					if (!_infantry) then {
						_activeVehicles pushBack _veh;
					};
				};

				//Get marker name (e.g. reveal-R Alpha 1-1)
				private _mrkName = format ["reveal-%1", _x];
				private _mrk = _mrkName;
				
				if (_infantry && _x getVariable ["hiddenGroup", false]) then {
					_hide = true;
				};
				
				if ((_statics || _infantry) && !_hide) then {
					_loc = [_rebelBases, _pos] call BIS_fnc_nearestPosition;
					_hide = (_pos distance2D getMarkerPos _loc > 1500);
				};

				// -1 - not tracked, 0 - expired, 1 - active
				private _status = _markerMap getOrDefault [_mrkName, -1]; 

				if (_hide) then {
					_mrk setMarkerAlphaLocal 0;
				} else {
					private _formatX = if (side _x == Occupants) then {"b"} else {"o"};
					private _color = if (side _x == Occupants) then { colorOccupants } else { colorInvaders };
					
					if (_status == -1) then {
						_mrk = createMarkerLocal [_mrkName, _pos];
						_mrk setMarkerColorLocal _color;
						_mrk setMarkerTextLocal ((str _x) select [2]);
						
					} else {
						_mrk setMarkerPosLocal _pos;
					};
					
					//set marker as active
					_markerMap set [_mrkName, 1];
					
					//if group is recreated or leaves vehicle
					_mrk setMarkerTypeLocal format ["%1_%2", _formatX, _typeX];
					
					//squad getting out of the car should be resized
					if (!_infantry) then {
						_mrk setMarkerSizeLocal [1.2,1.2];
					} else {
						_mrk setMarkerSizeLocal [0.8,0.8];
					};
					
					if (!_infantry) then {
						_mrk setMarkerAlphaLocal 1;
					} else {
						_mrk setMarkerAlphaLocal 0.66;
					};
				};
			};
		} forEach allGroups;
	};

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
	deleteMarkerLocal _mrk;
} forEach _markerMap;