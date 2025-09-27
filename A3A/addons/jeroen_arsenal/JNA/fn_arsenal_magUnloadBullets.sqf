#include "tehBulletPile.inc"
//Takes [Magazine name, Bullet amount] from magazine cargo.

params["_item","_ammoReturn"];

_ammoName = getText(configFile >> "CfgMagazines" >> _item >> "ammo");

[IDC_RSCDISPLAYARSENAL_TAB_CARGOBULLET, _ammoName, _ammoReturn];