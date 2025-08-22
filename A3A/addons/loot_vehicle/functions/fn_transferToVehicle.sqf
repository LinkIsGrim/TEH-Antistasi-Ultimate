params ["_targetVehicle","_containerList", "_player", "_ignoreIntel"];

private _total = (count _containerList);
private _current = 0;
systemChat format["LootVehicle: Moving from %1 containers to %2",_total,getText (configFile >> "CfgVehicles" >> typeOf _targetVehicle >> "displayname")];

private _interrupted  = false;

// Get all items from each container
{
	_current = _current + 1;

	if (_interrupted || (isNull _targetVehicle)) then {
		systemChat "LootVehicle: Gathering is interrupted";
		break;
	};
	
	if (isNull _x) then { continue; };
	if ((_x getVariable ["LV_isLooted", false]) || (_x isEqualTo _targetVehicle)) then { continue; };
	
	if (_x getVariable ["hasIntel", false] && !_ignoreIntel) then {
		//Not in the water or below ground
		_depth = floor((getPosATL _x) # 2 * 100) / 100;
		if (!surfaceIsWater position _x && (_depth > -2)) then {
			systemChat format["LootVehicle: Intel discovered! (%1m ATL)",_depth];
			[_x] spawn {
				params ["_intel"];
				_mrk = createMarkerLocal [str (random 9999), getPosATL _intel];
				_mrk setMarkerTypeLocal "hd_dot_noShadow";
				_mrk setMarkerTextLocal "Intel";
				_mrk setMarkerColor "ColorGreen";
				sleep 120;
				deleteMarker _mrk;
			};
			continue;
		};
	};
	
	_x setVariable ["LV_isLooted", true, true];
	_x setVariable ["LV_isInterrupted",false, true];
	
	//count weights
	
	private _timer = if (_x isKindOf "ReammoBox_F") then { 1; } else {
		_weight = loadAbs _x;
		if (_weight == 0 && !(_x isKindOf "Car")) then {
			deleteVehicle _x;
			continue;
		};
		ceil ((_weight * LootVehicleSpeed)/100);
		
	};
	
	//call the progress bar
	_timestamp = time;
	[_timer, [_targetVehicle, _x], {
		_vehicle = _args select 0;
		_container = _args select 1;

		_items = [];
		_backpacks = [];

		//write down all items
		if (_container isKindOf "CAManBase") then {
			if (primaryWeapon _container != "") then{
				_items append (_container weaponAccessories primaryWeapon _container);
				_items pushBack ((primaryWeapon _container) call BIS_fnc_baseWeapon);
			};
			if (secondaryWeapon _container != "") then{
				_items append (_container weaponAccessories secondaryWeapon _container);
				_items pushBack ((secondaryWeapon _container) call BIS_fnc_baseWeapon);
				_items pushBack (secondaryWeapon _container);
			};
			if (handgunWeapon _container != "") then{
				_items append (_container weaponAccessories handgunWeapon _container);
				_items pushBack ((handgunWeapon _container) call BIS_fnc_baseWeapon);
			};
			_items append assignedItems [_container, true, true];

			private _backpack = backpack _container;
			if !(_backpack isEqualTo "") then {
				_items append magazineCargo backpackContainer _container;
				_items append itemCargo backpackContainer _container;
				{
					_items pushBack (_x call BIS_fnc_baseWeapon);
				} forEach (weaponCargo backpackContainer _container);
				{
					_items append (_x select {!(typeName _container == "ARRAY")} select [1,6]);
				} forEach (weaponsItemsCargo backpackContainer _container);
				_backpacks pushBack (_backpack call BIS_fnc_basicBackpack);
				{
					_backpacks pushBack (_x call BIS_fnc_basicBackpack);
				} forEach backpackCargo (backpackContainer _container);
			};
			private _uniform = uniform _container;
			if !(_uniform isEqualTo "")then {
				_items append itemCargo uniformContainer _container;
				_items append magazineCargo uniformContainer _container;
				{
					_items pushBack _x;
				} forEach (weaponCargo uniformContainer _container);
				{
					_items append (_x select {!(typeName _x == "ARRAY")} select [1,6]);
						
				} forEach (weaponsItemsCargo uniformContainer _container);
				_items pushBack _uniform;
			};
			private _vest = vest _container;
			if !(_vest isEqualTo "") then {
				_items append itemCargo vestContainer _container;
				_items append magazineCargo vestContainer _container;
				{
					_items pushBack (_x call BIS_fnc_baseWeapon);
				} forEach (weaponCargo vestContainer _container);
				{
					_items append (_x select {!(typeName _x == "ARRAY")} select [1,6]);
				} forEach (weaponsItemsCargo vestContainer _container);
				_items pushBack _vest;
			};
		} else {
			_items append magazineCargo _container;
			_items append itemCargo _container;
			{
				_weap = (_x call BIS_fnc_baseWeapon);

				_items pushBack _weap;
				
			} forEach weaponCargo _container;
			{
					_items append (_x select [1,3]);
					if (_x select 4 isNotEqualTo []) then {
						_items pushBack (_x select 4 select 0);
					};
					if (_x select 5 isNotEqualTo []) then {
						_items pushBack (_x select 5 select 0);
					};
					_items pushBack (_x select 6);
						
			} forEach (weaponsItemsCargo _container);
			{
				_backpacks pushBack (_x call BIS_fnc_basicBackpack);
			} forEach backpackCargo _container;
			{
				_items append itemCargo (_x select 1);
				_items append magazineCargo (_x select 1);
				{
					_items pushBack (_x call BIS_fnc_baseWeapon);
				} forEach weaponCargo (_x select 1);
				{
					_items append (_x select {!(typeName _x == "ARRAY")} select [1,5]);
				} forEach (weaponsItemsCargo (_x select 1));
				{
					_backpacks pushBack (_x call BIS_fnc_basicBackpack);
				} forEach backpackCargo (_x select 1);
			} forEach (everyContainer _container);
		};
		
		// Filter empty items out to reduce write time
		_items = _items select { _x != "" };

		//is vehicle still alive?
		if (isNull _vehicle) exitWith {
			_container setVariable ["LV_isLooted", false, true];
			systemChat "LootVehicle: RIP";
		};
		
		//LOOT TO TARGET
		private _isBusy = "LV_lootWrite";

		waitUntil { !(_vehicle getVariable [_isBusy, false]) };

		// Lock
		_vehicle setVariable [_isBusy, true, true];

		// Actually move loot
		{
			_vehicle addItemCargoGlobal [_x, 1];
		} forEach _items;
		{
			_vehicle addBackpackCargoGlobal [_x, 1];
		} forEach _backpacks;

		// Unlock
		_vehicle setVariable [_isBusy, false, true];


		if (_container isKindOf "ReammoBox_F" || _container isKindOf "CAManBase") then {
			if (1000 > random 100000) then {
				private _cside = _container getVariable["originalside", sideUnknown];
				[_cside, _player, _vehicle] spawn loot_vehicle_fnc_looterAmbush;
			};
			deleteVehicle _container;			
		} else { 
			clearItemCargoGlobal _container;
			clearMagazineCargoGlobal _container;
			clearWeaponCargoGlobal _container;
			clearBackpackCargoGlobal _container;
		};
	}, {
		_container = _args select 1;
		_container setVariable ["LV_isInterrupted",true];
		systemChat format["LootVehicle: Gathering is interrupted at %1s. Error code: %2", _elapsedTime, _errorCode];
	}, format[ "(%1/%2) Looting %3...", _current, _total, getText (configFile >> "CfgVehicles" >> typeOf _x >> "displayname")]] call ace_common_fnc_progressBar;


	//Container is deleted, or fail clause executed, or waiting timed out
	waitUntil { sleep 0.1; (isNull _x  || _x getVariable ["LV_isInterrupted", false] || {(time - _timestamp) > (_timer + 5)}); };
	
	if (!isNull _x) then {
		_interrupted = _x getVariable ["LV_isInterrupted",false];
		_x setVariable ["LV_isInterrupted", false, true];
		_x setVariable ["LV_isLooted", false, true];
	};
} forEach _containerList;

systemChat "LootVehicle: Done";