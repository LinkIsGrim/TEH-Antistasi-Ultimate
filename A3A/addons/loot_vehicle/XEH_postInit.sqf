[
    "LootVehicleDistance", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    ["Max Transfer Distance", "Maxium distance interaction will show from target vehicle"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "Antistasi Ultimate", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [1, 100, 15, 1], // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;
[
    "LootVehicleSpeed", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "SLIDER", // setting type
    ["Transfer speed in seconds", "Amount of seconds to transfer 100 units of weight\nFor example, most rifles in the game are 100 weight units, so a value of 1 second would take 1 second to transfer\nSet to 0 to disable interaction time."], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "Antistasi Ultimate", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    [0, 10, 1, 1], // data for this setting: [min, max, default, number of shown trailing decimals]
    1, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

private _unloadToBox = [
    "LootVehicleTransferAction", "Pack to the box", "a3\ui_f\data\IGUI\Cfg\Actions\unloadVehicle_ca.paa",
    {
        params ["_target", "_player"];
        
		private _pos = getPosATL _target;
		private _box = createVehicle ["VirtualReammoBox_small_F", [_pos select 0, _pos select 1, (_pos select 2) + 1], [], 0, "CAN_COLLIDE"];
		
        [_box,[_target],_player] spawn loot_vehicle_fnc_transferToVehicle;
    },
    {
        params ["_target", "_player"];
		!alive _target;
    },
    {}
] call ace_interact_menu_fnc_createAction;

["CAManBase", 0, ["ACE_MainActions"], _unloadToBox, true] call ace_interact_menu_fnc_addActionToClass;

private _transferBetweenAction = [
    "LootVehicleTransferAction", "Unload Cargo", "a3\ui_f\data\IGUI\Cfg\Actions\unloadVehicle_ca.paa",
    {
        params ["_target", "_player"];
        
        (nearestObjects [_player, ace_cargo_cargoHolderTypes, LootVehicleDistance]) select {
            (_x != _target) && {([_target, _x] call ace_interaction_fnc_getInteractionDistance) < LootVehicleDistance}
        } params [["_nearestVehicle", objNull]];
        
        if (isNull _nearestVehicle) then {
            systemChat "LootVehicle: Error: couldn't find any nearby vehicle";
        } else {
            systemChat "LootVehicle: Using nearest vehicle";
            [_nearestVehicle,[_target],_player] call loot_vehicle_fnc_transferToVehicle;
        };
    },
    {
        count ((nearestObjects [_target, ace_cargo_cargoHolderTypes, LootVehicleDistance]) select {
            (_x != _target) && {([_target, _x] call ace_interaction_fnc_getInteractionDistance) < LootVehicleDistance}
        }) > 0;
    },
    {
        private _statement = {
            params ["_target", "_player", "_vehicle"];
            [_vehicle,[_target],_player] call loot_vehicle_fnc_transferToVehicle;
        };
        
        private _vehicles = (nearestObjects [_target, ["landVehicle","air","ship"], LootVehicleDistance]) select {
            (_x != _target) && {([_target, _x] call ace_interaction_fnc_getInteractionDistance) < LootVehicleDistance} && (getNumber(configFile >> "CfgVehicles" >> typeOf _x >> "transportMaxBackpacks") + getNumber(configFile >> "CfgVehicles" >> typeOf _x >> "transportMaxMagazines") + getNumber(configFile >> "CfgVehicles" >> typeOf _x >> "transportMaxWeapons") != 0)
        };

        [_vehicles, _statement, _target] call ace_interact_menu_fnc_createVehiclesActions;
    }
] call ace_interact_menu_fnc_createAction;

private _storeLootSellVehicle = [
    "LootVehicleSellAction", "Sell Vehicle", "",
    {
        params ["_target", "_player"];
        
        [_player,_target] spawn A3A_fnc_sellVehicle;
    },
    {
		params ["_target", "_player"];
        count crew _target == 0;
    },
    {}] call ace_interact_menu_fnc_createAction;

private _actionVehicle = [
    "LootVehicleGatherAllLoot", "Gather all loot", "a3\ui_f\data\IGUI\Cfg\Actions\loadVehicle_ca.paa",
    {
        params ["_target", "_player"];
		_dist = 10000;
		_leads = [];
		{
			if ((side _x == Occupants || side _x == Invaders) && side leader _x == side _x) then {
				_leads pushBack leader _x;
			};
		} forEach allGroups;
		
		if (count _leads > 0) then {
			_toL = [_leads,_target] call BIS_fnc_nearestPosition;
			_dist = floor (_target distance2D _toL) - 50;
			_dist = _dist max 5;
		};
		
		systemChat format["LootVehicle: Sending troops to gather loot in %1 m area",_dist];
		
		//first dropped weapons, as they are erased with the body otherwise
        private _holders =  nearestObjects[_target,["WeaponHolderSimulated"],_dist];
		//then everything else
		private _containerList = (nearestObjects[_target,["CAManBase","WeaponHolder","ReammoBox_F"],_dist] select {!alive _x || !(_x isKindOf "CAManBase")});
		private _loots = _holders + _containerList;
        [_target,_loots,_player] spawn loot_vehicle_fnc_transferToVehicle;
    },
    {
        true;
    },
    {}] call ace_interact_menu_fnc_createAction;

{
    [_x, 0, ["ACE_MainActions"], _transferBetweenAction, true] call ace_interact_menu_fnc_addActionToClass;
    [_x, 1, ["ACE_MainActions"], _transferBetweenAction, true] call ace_interact_menu_fnc_addActionToClass;
	[_x, 0, ["ACE_MainActions"], _storeLootSellVehicle, true] call ace_interact_menu_fnc_addActionToClass;
    [_x, 1, ["ACE_MainActions"], _storeLootSellVehicle, true] call ace_interact_menu_fnc_addActionToClass;
    [_x, 0, ["ACE_MainActions"], _actionVehicle, true] call ace_interact_menu_fnc_addActionToClass;
    [_x, 1, ["ACE_MainActions"], _actionVehicle, true] call ace_interact_menu_fnc_addActionToClass;
} forEach ["landVehicle","air","ship"];

["ReammoBox_F", 0, ["ACE_MainActions"], _actionVehicle, true] call ace_interact_menu_fnc_addActionToClass;
["ReammoBox_F", 1, ["ACE_MainActions"], _actionVehicle, true] call ace_interact_menu_fnc_addActionToClass;