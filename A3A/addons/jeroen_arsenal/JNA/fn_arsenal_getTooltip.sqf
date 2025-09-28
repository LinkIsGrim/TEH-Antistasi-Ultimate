#include "\A3\Ui_f\hpp\defineResinclDesign.inc"
#include "tehBulletPile.inc"

params ["_item"];
private _itemTypeName = _item call BIS_fnc_itemType select 1;
//Tooltip

if !(_item in jna_tooltips) then {

    private _text = "Item code: " + _item;

    switch (_itemTypeName) do {
        case("AssaultRifle");
        case("MachineGun");
        case("SniperRifle");
        case("Shotgun");
        case("Rifle");
        case("SubmachineGun"): {
            _wpnbarrellenmm = getNumber (configfile >> "CfgWeapons" >> _item >> "ACE_barrelLength");
            _wpnbarrellenin = _wpnbarrellenmm / 25.4;
            _mag1 = getArray (configfile >> "CfgWeapons" >> _item >> "magazines") select 0;
            _mag1name = getText (configfile >> "CfgMagazines" >> _mag1 >> "displayName");
            _dex = (getNumber (configfile >> "CfgWeapons" >> _item >> "dexterity")) * 5;
            _text = _text + "\nBarrel: " + str _wpnbarrellenmm + "mm / " + str ([_wpnbarrellenin, 1] call BIS_fnc_cutDecimals) + "in" +
                    "\nDefault ammo: " + _mag1name +
                    "\nHandling: " + str _dex + "/10";
        };

        case("Launcher");
        case("MissileLauncher");
        case("RocketLauncher"): {
            _magName = getarray(configFile >> "CfgWeapons" >> _item >> "magazines") select 0;
            if (_magName == "CBA_FakeLauncherMagazine") then {
                _text = "No data";
            } else {
                _ammoName = getText(configFile >> "CfgMagazines" >> _magName >> "ammo");
                _ammoHit = getNumber(configfile >> "CfgAmmo" >> _ammoName >> "hit");
                _ammoCal = getNumber(configfile >> "CfgAmmo" >> _ammoName >> "caliber");
                _ammoSplash = getNumber(configfile >> "CfgAmmo" >> _ammoName >> "indirectHit");
                _ammoSplashRange = getNumber(configfile >> "CfgAmmo" >> _ammoName >> "indirectHitRange");
                _ammoMaxSpeed = getNumber(configfile >> "CfgAmmo" >> _ammoName >> "maxSpeed");
                _ammoSub = getText(configFile >> "CfgAmmo" >> _ammoName >> "submunitionAmmo");
                _ammoSubHit = getNumber(configfile >> "CfgAmmo" >> _ammoSub >> "hit");
                _ammoSubCal = getNumber(configfile >> "CfgAmmo" >> _ammoSub >> "caliber");
                _text  = _text + "\nMain: " + str _ammoHit + "@" + str _ammoCal + "ap" +
                        "\nSubmunition: "+ str _ammoSubHit + "@" + str ([_ammoSubCal, 1] call BIS_fnc_cutDecimals) +"ap" +
                        "\nSplash: " + str _ammoSplash + "@" + str _ammoSplashRange + "m" +
                        "\nMax speed: "+ str _ammoMaxSpeed +"m/s";
            };
            
            _lockTime = getNumber(configFile >> "CfgWeapons" >> _item >> "weaponLockDelay");
            if (_lockTime > 0) then {
                _text = _text + "\nLock time: " + str _lockTime + "s";
            };
        };

        case("Headgear");
        case("Vest"): {
            _hitpoints = configProperties [configfile >> "CfgWeapons" >> _item >> "ItemInfo" >> "HitpointsProtectionInfo"];
            {
                _part = configName _x;
                _armor = getNumber(configfile >> "CfgWeapons" >> _item >> "ItemInfo" >> "HitpointsProtectionInfo" >> _part >> "armor");
                _pt = getNumber(configfile >> "CfgWeapons" >> _item >> "ItemInfo" >> "HitpointsProtectionInfo" >> _part >> "passthrough");
                _text  = _text + "\n" + _part + ": " + str _armor + " (" + str (_pt*100) + "% passthrough)";
            } forEach (_hitpoints);
        };
        
                    
        case("AccessoryMuzzle"): {
            _silencerVF = getNumber(configfile >> "CfgWeapons" >> _item >> "ItemInfo" >> "AmmoCoef" >> "visibleFire");
            _silencerVFT = getNumber(configfile >> "CfgWeapons" >> _item >> "ItemInfo" >> "AmmoCoef" >> "visibleFireTime");
            _silencerAF = getNumber(configfile >> "CfgWeapons" >> _item >> "ItemInfo" >> "AmmoCoef" >> "audibleFire");
            _silencerAFT = getNumber(configfile >> "CfgWeapons" >> _item >> "ItemInfo" >> "AmmoCoef" >> "audibleFireTime");
            _silencerHit = getNumber(configfile >> "CfgWeapons" >> _item >> "ItemInfo" >> "AmmoCoef" >> "hit");
            _silencerAir = getNumber(configfile >> "CfgWeapons" >> _item >> "ItemInfo" >> "AmmoCoef" >> "airFriction");
            _text  = _text + "\nFlash/Time: " + str _silencerVF + "/" + str _silencerVFT +
                    "\nSound/Time: " + str _silencerAF + "/" + str _silencerAFT +
                    "\nPerformance: " + str _silencerHit + "/" + str _silencerAir;
        };
        case("AccessorySights"): {
            _optics = configProperties [configfile >> "CfgWeapons" >> _item >> "ItemInfo" >> "OpticsModes"];
            {
                _mode = configName _x;
                _zoom = 0.25 / getNumber(configfile >> "CfgWeapons" >> _item >> "ItemInfo" >> "OpticsModes" >> _mode >> "opticsZoomMin");
                _text  = _text + "\n" + _mode + ": x" + str ([_zoom, 1] call BIS_fnc_cutDecimals);
            } forEach (_optics);
        };
        
        case ("Bullet"): {
            _magName = getText(configFile >> "CfgMagazines" >> _item >> "displayName");
            _ammoName = getText(configFile >> "CfgMagazines" >> _item >> "ammo");
            _ammoHit = getNumber(configfile >> "CfgAmmo" >> _ammoName >> "hit");
            _ammoCal = getNumber(configfile >> "CfgAmmo" >> _ammoName >> "caliber");
            _ammoSpeed = getNumber(configfile >> "CfgAmmo" >> _ammoName >> "typicalSpeed");
            _ammoMass = getNumber(configFile >> "CfgMagazines" >> _item >> "mass") * 50;
            _bulletMass = getNumber(configfile >> "CfgAmmo" >> _ammoName >> "ACE_bulletMass");
            _text = _magName + 
                    "\nBullet code: " + _ammoName +
                    "\nDamage: " + str ([_ammoHit, 1] call BIS_fnc_cutDecimals) + "@" + str ([_ammoCal, 2] call BIS_fnc_cutDecimals) + "ap" +
                    "\nRef. muzzle speed: "+ str _ammoSpeed + "m/s" +
                    "\nRef. muzzle energy: " + str floor ((_bulletMass * _ammoSpeed * _ammoSpeed) / 2000) + "J" +
                    "\nWeight: " + str _ammoMass + "g";
        };
        
        case ("Rocket");
        case ("Missile");
        case ("Shell");
        case ("Grenade"): {
            _ammoName = getText(configFile >> "CfgMagazines" >> _item >> "ammo");
            _ammoHit = getNumber(configfile >> "CfgAmmo" >> _ammoName >> "hit");
            _ammoCal = getNumber(configfile >> "CfgAmmo" >> _ammoName >> "caliber");
            _ammoSplash = getNumber(configfile >> "CfgAmmo" >> _ammoName >> "indirectHit");
            _ammoSplashRange = getNumber(configfile >> "CfgAmmo" >> _ammoName >> "indirectHitRange");
            _ammoMaxSpeed = getNumber(configfile >> "CfgAmmo" >> _ammoName >> "maxSpeed");
            _ammoSub = getText(configFile >> "CfgAmmo" >> _ammoName >> "submunitionAmmo");
            _ammoSubHit = getNumber(configfile >> "CfgAmmo" >> _ammoSub >> "hit");
            _ammoSubCal = getNumber(configfile >> "CfgAmmo" >> _ammoSub >> "caliber");
            _text = "Main: " + str _ammoHit + "@" + str _ammoCal + "ap" +
                    "\nSubmunition: "+ str _ammoSubHit + "@" + str ([_ammoSubCal, 1] call BIS_fnc_cutDecimals) +"ap" +
                    "\nSplash: " + str _ammoSplash + "@" + str _ammoSplashRange + "m" +
                    "\nMax speed: "+ str _ammoMaxSpeed +"m/s";
        };
        default {
            _text = "Code: " + _item;
        };
    };

    jna_tooltips set [_item,_text];
};

private _amounts = "";
if (_itemTypeName isEqualTo "Bullet") then {
    private _mag = _item;
    private _ammo = getText(configFile >> "CfgMagazines" >> _mag >> "ammo");
    private _ammoIdx = jna_dataList # IDC_RSCDISPLAYARSENAL_TAB_CARGOBULLET findif { _x # 0 isEqualTo _ammo};
    private _ammoLeft = 0;

    if (_ammoIdx > -1) then {
        _ammoLeft = jna_dataList # IDC_RSCDISPLAYARSENAL_TAB_CARGOBULLET # _ammoIdx # 1;

        private ["_suffix","_prefix"];
		if(_ammoLeft == -1) then {
            _amounts = "[   ∞  ]";
        } else {
			_suffix = "";
			if(_ammoLeft > 999)then{
				_ammoLeft = round(_ammoLeft/1000);_suffix="k";
				_prefix = switch true do{
					case(_ammoLeft>=100):{_ammoLeft = 99; "";};
					case(_ammoLeft>=10):{"";};
					case(_ammoLeft>=0):{"0";};
				};
			}else{
				_prefix = switch true do{
					case(_ammoLeft>=100):{"";};
					case(_ammoLeft>=10):{"0";};
					case(_ammoLeft>=0):{"00";};
				};
			};
            _amounts = "[ " + _prefix + (str _ammoLeft) + _suffix + " ]";
        };
    } else {
        _amounts = "No";
    };

    _amounts = "\n\n" + _amounts + " ammo left";
};

(jna_tooltips get _item) + _amounts;