#include "tehBulletPile.inc"

params["_item",["_arrayCargo",jna_dataList]];

private _ammoCapacity = getNumber (configfile >> "CfgMagazines" >> _item >> "count");
private _ammoName = getText(configFile >> "CfgMagazines" >> _item >> "ammo");
private _ammoIdx = _arrayCargo # IDC_RSCDISPLAYARSENAL_TAB_CARGOBULLET findif { _x # 0 isEqualTo _ammoName};
private _ammoBin = -1;
private _ammoToLoad = 0;
if (_ammoIdx > -1) then {
    _ammoBin = _arrayCargo # IDC_RSCDISPLAYARSENAL_TAB_CARGOBULLET # _ammoIdx # 1;
    if (( _ammoBin != -1) and (_ammoBin < _ammoCapacity)) then {
        _ammoToLoad = _ammoBin;
    } else {
        _ammoToLoad = _ammoCapacity;
    };
};


[IDC_RSCDISPLAYARSENAL_TAB_CARGOBULLET, _ammoName, _ammoToLoad];