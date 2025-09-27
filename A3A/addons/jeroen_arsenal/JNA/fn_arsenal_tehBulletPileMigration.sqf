/*
    One-time migration to the new bullet pile system.

    Iterates over arsenal magazines (jna_dataList #IDC_RSCDISPLAYARSENAL_TAB_CARGOMAGALL) and converts them into ammo counts (jna_dataList #27).

    Each entry in jna_dataList #IDC_RSCDISPLAYARSENAL_TAB_CARGOMAGALL is [magazineName, totalBulletCount].
    - If count = -1 → unlimited, just add unlimited ammo of the magazine’s ammo type.
    - If count != -1 → calculate magazine capacity from config, convert into total bullets,
      remove excessive mags, then add bullets.
*/
#include "\A3\Ui_f\hpp\defineResinclDesign.inc"
#include "tehBulletPile.inc" 

private _magList = jna_dataList # IDC_RSCDISPLAYARSENAL_TAB_CARGOMAGALL;
jna_dataList set [IDC_RSCDISPLAYARSENAL_TAB_CARGOBULLET,[]];

{
    _magName = _x # 0;
    _bulletCount = _x # 1;

    // Resolve ammo type for magazine
    private _ammoName = getText (configFile >> "CfgMagazines" >> _magName >> "ammo");
    if (_ammoName isEqualTo "") then { continue };   // skip invalid entries

    if (_bulletCount != -1) then {
        // magazine capacity
        private _magCapacity = getNumber (configFile >> "CfgMagazines" >> _magName >> "count");
        if (isNil "_magCapacity" or _magCapacity < 1) then { continue };    // avoid div/0

        // number of full magazines that arsenal thinks it has
        private _fullMags = ceil (_bulletCount / _magCapacity);

        // remove mags entry, adjusting amount
        [IDC_RSCDISPLAYARSENAL_TAB_CARGOMAGALL, _magName, (_bulletCount - _fullMags)] call JN_fnc_arsenal_removeItem;
    };

    // finally add ammo with same count (unlocked = -1, finite = number of bullets)
    [IDC_RSCDISPLAYARSENAL_TAB_CARGOBULLET, _ammoName, _bulletCount] call JN_fnc_arsenal_addItem;

} forEach _magList;