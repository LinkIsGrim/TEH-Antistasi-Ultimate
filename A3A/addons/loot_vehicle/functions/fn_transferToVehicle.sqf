params ["_targetVehicle","_containerList", "_player"];

private _total = (count _containerList);
private _current = 0;
systemChat format["LootVehicle: Moving from %1 containers to %2",_total,getText (configFile >> "CfgVehicles" >> typeOf _targetVehicle >> "displayname")];

private _interrupted  = false;

// Get all items from each container
{
	_current = _current + 1;
	if (_interrupted || (isNull _targetVehicle)) then { break; };
	
	if (_x getVariable ["hasIntel", false]) then {
		[_x] spawn {
			params ["_intel"];
			_mrk = createMarkerLocal [str (random 9999), getPosATL _intel];
			_mrk setMarkerTypeLocal "hd_dot_noShadow";
			_mrk setMarkerTextLocal "Intel";
			_mrk setMarkerColor "ColorGreen";
			sleep 60;
			deleteMarkerLocal _mrk;
		};
		continue;
	};
	
	if ((isNull _x) || (_x getVariable ["isLooted", false]) || (_x isEqualTo _targetVehicle) || (_x isKindOf "B_supplyCrate_F") || (_x isKindOf "IG_supplyCrate_F")) then { continue; };
	
	_x setVariable ["isLooted", true, true];
		
	//count weights	
	private _weight = loadAbs _x; 
	private _timer = ceil ((_weight * LootVehicleSpeed)/100);
	
	//call the progress bar
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
			_container setVariable ["isLooted", false, true];
			systemChat "LootVehicle: RIP";
		};
		
		//LOOT TO TARGET
		private _isBusy = "lootWrite";

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
			deleteVehicle _container;
		} else { 
			clearItemCargoGlobal _container;
			clearMagazineCargoGlobal _container;
			clearWeaponCargoGlobal _container;
			clearBackpackCargoGlobal _container;
		};
	}, {
		_container = _args select 1;
		_container setVariable ["break",true];
	}, format[ "(%1/%2) Looting %3...", _current, _total, getText (configFile >> "CfgVehicles" >> typeOf _x >> "displayname")]] call ace_common_fnc_progressBar;

	sleep (_timer + 0.1);
	if (!isNull _x) then {
		_interrupted = _x getVariable ["break",false];
		_x setVariable ["break", false];
		_x setVariable ["isLooted", false, true];
	};
} forEach _containerList;

private _more = count (nearestObjects[_targetVehicle,["CAManBase","WeaponHolder","WeaponHolderSimulated","ReammoBox_F"],LootVehicleDistance] select {!alive _x || !((_x isKindOf "CAManBase")|| (_x isKindOf "B_supplyCrate_F") || (_x isKindOf "IG_supplyCrate_F"))});
if (_more > 0) then {
	systemChat format["LootVehicle: Not all done, %1 more to go", str _more];
} else {
	systemChat "LootVehicle: All done";
};