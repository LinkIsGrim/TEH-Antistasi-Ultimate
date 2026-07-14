/*
    Author: TEH Antistasi Ultimate

    Description:
        Loads every existing vehicle turret magazine from the Jeroen Arsenal.
        Each magazine instance is recreated with as much ammunition as is
        currently available in jna_datalist.

    Params:
        0: OBJECT - Vehicle to load

    Returns:
        ARRAY - Arsenal removal entries used while loading
*/
#include "tehBulletPile.inc"

params [
    ["_veh", objNull, [objNull]]
];

if (isNull _veh) exitWith {
    false
};

private _magazines = magazinesAllTurrets _veh;

// Recreate every original magazine instance and fill it from the current
// Jeroen Arsenal state. Zero available ammunition recreates an empty magazine.
{
    _x params [
        "_magazineClass",
        "_turretPath"
    ];

    private _ammoToLoad = [_magazineClass] call JN_fnc_arsenal_magLoadBullets;
    private _ammoCount = _ammoToLoad # 2;

    _veh addMagazineTurret [
        _magazineClass,
        _turretPath,
        _ammoCount
    ];

    _ammoToLoad call jn_fnc_arsenal_removeItem;
    _removedItems pushBack _ammoToLoad;
} forEach _magazines;

true