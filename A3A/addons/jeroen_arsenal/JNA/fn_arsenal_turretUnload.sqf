/*
    Author: TEH Antistasi Ultimate

    Description:
        Moves all ammunition from every vehicle turret magazine into the
        Jeroen Arsenal, then recreates the original magazine layout empty.

    Params:
        0: OBJECT - Vehicle to unload

    Returns:
        HASHMAP - Ammo classnames and quantities added to the arsenal
*/
#include "tehBulletPile.inc"

params [
    ["_veh", objNull, [objNull]]
];

if (isNull _veh) exitWith {
    createHashMap
};

private _magazines = magazinesAllTurrets _veh;
private _ammoToStore = createHashMap;

{
    _x params [
        "_magazineClass",
        "_turretPath",
        "_ammoCount"
    ];

    if (_ammoCount > 0) then {
        private _ammoClass = getText (
            configFile
            >> "CfgMagazines"
            >> _magazineClass
            >> "ammo"
        );

        if (_ammoClass != "") then {
            _ammoToStore set [
                _ammoClass,
                (_ammoToStore getOrDefault [_ammoClass, 0]) + _ammoCount
            ];
        };
    };
} forEach _magazines;

{
    [27, _x, _y] call jn_fnc_arsenal_addItem;
} forEach _ammoToStore;

_veh setVehicleAmmo 0;

_ammoToStore
