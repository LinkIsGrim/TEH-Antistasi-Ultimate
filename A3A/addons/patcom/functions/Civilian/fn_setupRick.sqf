#include "dialogUtils.sqf"
params ["_rick"];

_rick setVariable ["TEH_CivRole", "Rick", true];
_rick setVariable ["TEH_RebelLoyalty", true, true];
removeUniform _rick;
removeVest _rick;
removeBackpack _rick;
removeHeadgear _rick;
removeGoggles _rick;

_rick forceAddUniform "U_C_Man_casual_3_F";
_rick addBackpack "B_CivilianBackpack_01_Sport_Green_F";
_rick addHeadgear "H_Bandanna_surfer_grn";

private _currency = A3A_faction_civ get "currencySymbol";

_rick addAction [
    format ["Buy a pistol (300%1)",_currency],
    {
        params ["_target", "_caller", "_actionId", "_arguments"];
        _arguments params ["_sayToCaller"];

        // Pity gun settings. Local to this action on purpose.
        private _price = 300;
        private _weapon = "hgun_Pistol_01_F";
        private _magazine = "10Rnd_9x21_Mag";
        private _magazineCount = 3;
        private _boxClass = "Box_Syndicate_Ammo_F";

        private _money = _caller getVariable ["moneyX", 0];
        if (_money < _price) exitWith {
            [_target, _caller, format [
                "Come back with %1%2. Charity died before the revolution.",
                _price,
                A3A_faction_civ get "currencySymbol"
            ]] call _sayToCaller;
            false
        };

        _caller setVariable ["moneyX", _money - _price, owner _caller];

        private _expenseText = format [
            localize "STR_comms_mp_givemoney",
            name _caller,
            _price,
            A3A_faction_civ get "currencySymbol"
        ];
        [petros, "income", _expenseText] remoteExec ["A3A_fnc_commsMP", _caller];

        private _dropPos = _target modelToWorld [0, 1.2, 0];

        private _box = _boxClass createVehicle _dropPos;
        _box setDir (getDir _target);

        clearWeaponCargoGlobal _box;
        clearMagazineCargoGlobal _box;
        clearItemCargoGlobal _box;
        clearBackpackCargoGlobal _box;

        _box addWeaponCargoGlobal [_weapon, 1];
        _box addMagazineCargoGlobal [_magazine, _magazineCount];
        _box addBackpackCargoGlobal ["B_LegStrapBag_olive_F",1];

        _box setVariable ["TEH_IntroPistolBox", true, true];
        _box setVariable ["TEH_PurchasedByUID", getPlayerUID _caller, true];

        [_caller, _caller, format [
            "Here. %1%2. Better not wave it around.",
            _price,
            A3A_faction_civ get "currencySymbol"
        ]] call _sayToCaller;

        sleep 1;
        _target playAction "PutDown";
        [_target, _caller, "In the box. Hide it properly, or don't blame me when everyone starts screaming."] call _sayToCaller;

        true
    },
    _actionArgs,
    1.5,
    true,
    true,
    "",
    format [
        "%1 && {_target getVariable ['TEH_CivRole', ''] isEqualTo 'Rick'}",
        _commonCondition
    ],
    3,
    false,
    "",
    ""
];

_rick addAction [
    "Join the resistance",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];
        _arguments params ["_sayToCaller"];

        if (_caller getVariable ["TEH_Rebel", false]) exitWith {
            [_target, _caller, "You are already in. Try not to make me regret it."] call _sayToCaller;
            true
        };

         private _oldHandle = missionNamespace getVariable ["TEH_PickleRickMarkerHandle", scriptNull];

        if (!isNull _oldHandle) then {
            terminate _oldHandle;
        };

        deleteMarkerLocal "TEH_PickleRickMarker";

        private _handle = [_target] spawn {
            params ["_rick"];

            private _markerName = "TEH_PickleRickMarker";

            deleteMarkerLocal _markerName;

            private _marker = createMarkerLocal [_markerName, getPosATL _rick];
            _marker setMarkerTypeLocal "n_inf";
            _marker setMarkerColorLocal "ColorIndependent";
            _marker setMarkerTextLocal "Pickle Rick";
            _marker setMarkerSizeLocal [0.75, 0.75];
            _mrk setMarkerAlphaLocal 1;

            waitUntil {
                sleep 15;

                if (!isNull _rick && {alive _rick}) then {
                    _marker setMarkerPosLocal getPosATL _rick;
                    false
                } else {
                    true
                };
            };

            deleteMarkerLocal _markerName;
            missionNamespace setVariable ["TEH_PickleRickMarkerHandle", scriptNull];
        };

        missionNamespace setVariable ["TEH_PickleRickMarkerHandle", _handle];

        private _primary = primaryWeapon _caller;
        private _vest = vest _caller;
        private _score = _caller getVariable ["score", 0];

        private _primaryType = "";
        if (_primary != "") then {
            private _itemType = [_primary] call BIS_fnc_itemType;
            _primaryType = _itemType param [1, ""];
        };

        private _hasPrimary = _primary != "";
        private _hasValidPrimary = _hasPrimary && {!(_primaryType isEqualTo "Shotgun")};
        private _hasVest = _vest != "";
        private _hasScore = _score > 0;

        private _missing = [];
        private _progress = [];

        if (!_hasPrimary) then {
            _missing pushBack "Bring a real weapon. SMG, rifle, machine gun, sniper rifle — something that says you can fight.";
        } else {
            if (!_hasValidPrimary) then {
                _missing pushBack "A shotgun is not enough. Good for alleys, bad for joining an army.";
            } else {
                _progress pushBack "The weapon works. At least you are not here with a kitchen knife.";
            };
        };

        if (!_hasVest) then {
            _missing pushBack "Find a vest. Petros needs fighters, not fresh meat.";
        } else {
            _progress pushBack "The vest is a start. You dressed like someone planning to survive.";
        };

        if (!_hasScore) then {
            _missing pushBack "And do something useful first. Hit the occupiers, take a trophy, avoid shooting friends.";
        } else {
            _progress pushBack "People have heard about you. That helps.";
        };

        if !(_missing isEqualTo []) exitWith {
            private _report = ["Not yet."] + _missing + _progress;
            [_target, _caller, _report joinString " "] call _sayToCaller;
            false
        };

        _caller setVariable ["TEH_Rebel", true, true];

        respawnTeamPlayer setMarkerAlphaLocal 1;
        petros setCaptive false;

        [_target, _caller, "Alright. Real weapon, armor, and a name that is not completely worthless. Welcome to the resistance. You can use our services, and HQ is revealed to you"] call _sayToCaller;

        true
    },
    _actionArgs,
    1.5,
    true,
    true,
    "",
    format [
        "%1 && {_target getVariable ['TEH_CivRole', ''] isEqualTo 'Rick'} && TEH_WarTierZero",
        _commonCondition
    ],
    3,
    false,
    "",
    ""
];