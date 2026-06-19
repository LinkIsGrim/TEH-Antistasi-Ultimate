/* this procedure is called when "Quick Resupply" (or however it's named) is used on the Arsenal box
   adds missing ACE medicine (doesn't replace existing)
   reloads magazines in the inventory (by technically replacing with new mags) */
#include "tehBulletPile.inc"

cache = {
    params ["_map","_key","_value"];
    private _current = _map getOrDefault [_key, 0];
    _map set [_key, _current + _value];
};

//Tally the meds.
private _meds = createHashMapFromArray [
["ACE_morphine", 2],
["ACE_epinephrine", 2],
["ACE_fieldDressing", 8],
["ACE_splint", 2],
["ACE_salineIV_500", 1],
["ACE_plasmaIV_500", 1],
["ACE_bloodIV_500", 1]];

{
	switch (true) do {
		case (_x in _meds): {[_meds, _x, -1] call cache;};
		case (_x in ["ACE_fieldDressing","ACE_packingBandage","ACE_elasticBandage","ACE_quikclot"]): { [_meds, "ACE_fieldDressing", -1] call cache; };
		case ("salineIV" in _x): { [_meds,"ACE_salineIV_500",-1] call cache;};
		case ("plasmaIV" in _x): { [_meds, "ACE_plasmaIV_500", -1] call cache;};
		case ("bloodIV" in _x): { [_meds,"ACE_bloodIV_500", -1] };
	};
} forEach itemCargo player;

if (TEH_civStart isNotEqualTo 1 || tierWar > 1) then {
    {
        for "_i" from 1 to (_meds get _x) do {
            player addItem _x;
        };
    } forEach _meds;
};

//tallies
private _magBox = createHashMap;
private _ammoBox = createHashMap;
private _needed = createHashMap;

private _invNonEmptyMags = +magazinesAmmo player; //array copy to avoid iteration issues
private _loadedMags = (magazinesAmmoFull player) select { _x#2 };

//tally needed ammo to _needed
{
    private _ammoName = getText(configFile >> "CfgMagazines" >> _x#0 >> "ammo");
    private _cap = getNumber (configfile >> "CfgMagazines" >> _x#0 >> "count");
    [_needed, _ammoName,_cap] call cache;
} forEach _loadedMags;

{
    private _ammoName = getText(configFile >> "CfgMagazines" >> _x >> "ammo");
    private _cap = getNumber (configfile >> "CfgMagazines" >> _x >> "count");
    [_needed,_ammoName,_cap] call cache;
} forEach (magazineCargo player);

//tally loaded ammo to _ammoBox
{ 
    private _oldMag = _x#0;
    private _ammoName = getText(configFile >> "CfgMagazines" >> _x#0 >> "ammo");
    [_ammoBox,_ammoName,_x#1] call cache;
} forEach _invNonEmptyMags + _loadedMags;

//check what we need from the arsenal
private _enoughAmmo = true;
{
    private _neededAmmo = _needed get _x;
    private _loaded = _ammoBox getOrDefault [_x,0];
    private _ammoName = _x;
    private _ammoIdx = jna_dataList # IDC_RSCDISPLAYARSENAL_TAB_CARGOBULLET findif { _x # 0 isEqualTo _ammoName};
    private _ammoBin = 0;
    if (_ammoIdx > -1) then {
        _ammoBin = jna_dataList # IDC_RSCDISPLAYARSENAL_TAB_CARGOBULLET # _ammoIdx # 1;
    };

    if (_neededAmmo - _loaded > _ammoBin && _ammoBin >= 0) then {
        systemChat format ["Not enough %1 ammo to reload all magazines", _x];
        _enoughAmmo = false;
    };
} forEach _needed;

if (not _enoughAmmo) exitWith {["Quick Resupply", "Not enough ammo in the arsenal, try to repack manually."] call A3A_fnc_customHint;};

//count mags in the inventory containers (not loaded)
private _allmags = +magazineCargo player;
{
   [_magBox,_x,1] call cache;
   player removeMagazine _x;
} forEach _allmags;

// PROCESS LOADED MAGS
{        
    private _loadedMag = _x#0;
    //_x#3 is weapon slot of sort
    switch (_x#3) do {
        case 1: {
            player removePrimaryWeaponItem _loadedMag;
            player addPrimaryWeaponItem _loadedMag;
        };
        case 2: {
            player removeHandgunItem _loadedMag;
            player addHandgunItem _loadedMag;
        };
    };
} forEach _loadedMags;

//reload inventory mags
{
    player addMagazine _x; 
} forEach _allmags;

//commit difference from the arsenal
{
    private _neededAmmo = _needed get _x;
    private _loaded = _ammoBox getOrDefault [_x,0];
    [IDC_RSCDISPLAYARSENAL_TAB_CARGOBULLET,_x,(_neededAmmo - _loaded)] call JN_fnc_arsenal_removeItem;

} forEach _needed;