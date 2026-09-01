/* private _hasWs = "ws" in A3A_enabledDLC;
private _hasMarksman = "mark" in A3A_enabledDLC;
private _hasLawsOfWar = "orange" in A3A_enabledDLC;
private _hasTanks = "tank" in A3A_enabledDLC;
private _hasContact = "enoch" in A3A_enabledDLC;
private _hasJets = "jets" in A3A_enabledDLC;
private _hasHelicopters = "heli" in A3A_enabledDLC;
private _hasArtOfWar = "aow" in A3A_enabledDLC;
private _hasApex = "expansion" in A3A_enabledDLC;
private _hasGM = "gm" in A3A_enabledDLC;
private _hasCSLA = "csla" in A3A_enabledDLC;
private _hasRF = "rf" in A3A_enabledDLC;
private _hasSOG = "vn" in A3A_enabledDLC;
private _hasSPE = "spe" in A3A_enabledDLC;
private _hasEF = "ef" in A3A_enabledDLC; */ ///dlc stuff if your templates needs it

//////////////////////////
//       Vehicles       //
//////////////////////////    

["vehiclesCivCar", []] call _fnc_saveToTemplate;             //this line determines civilian cars -- Example: ["vehiclesCivCar", ["C_Offroad_01_F"]] -- Array, can contain multiple assets

["vehiclesCivIndustrial", []] call _fnc_saveToTemplate;             //this line determines civilian trucks -- Example: ["vehiclesCivIndustrial", ["C_Truck_02_transport_F"]] -- Array, can contain multiple assets

["vehiclesCivHeli", []] call _fnc_saveToTemplate;            //this line determines civilian helis -- Example: ["vehiclesCivHeli", ["C_Heli_Light_01_civil_F"]] -- Array, can contain multiple assets

["vehiclesCivPlanes", []] call _fnc_saveToTemplate;          // this line determines civilian planes -- Example: ["vehiclesCivPlanes", ["C_Plane_Civil_01_F"]] -- Array, can contain multiple assets

["vehiclesCivBoat", []] call _fnc_saveToTemplate;             //this line determines civilian boats -- Example: ["vehiclesCivBoat", ["C_Boat_Civil_01_F"]] -- Array, can contain multiple assets

["vehiclesCivRepair", []] call _fnc_saveToTemplate;            //this line determines civilian repair vehicles

["vehiclesCivMedical", []] call _fnc_saveToTemplate;        //this line determines civilian medic vehicles

["vehiclesCivFuel", []] call _fnc_saveToTemplate;            //this line determines civilian fuel vehicles


["variants", []] call _fnc_saveToTemplate;                 //this line determines particular paintjob/camo for a vehicle --  Example: ["I_Heli_Transport_02_F", ["Dahoman", 1]] -- Array, can contain multiple assets

["animations", []] call _fnc_saveToTemplate;                //     -- Example: ["vehClass", ["animsourcefromgarage1", 0.3, "animsourcefromgarage2", 0.25, "animsourcefromgarage3", 0.3, "animsourcefromgarage4", 0.3]] -- Array, can contain multiple assets

/////////////////////////////////
///  Identities and currency  ///
////////////////////////////////

["currencySymbol", ""] call _fnc_saveToTemplate;

["faces", []] call _fnc_saveToTemplate;

//////////////////////////
//       Loadouts       //
//////////////////////////

private _civUniforms = [];          //Uniforms given to Normal Civs

private _pressUniforms = [];            //Uniforms given to Press/Journalists

private _vipUniforms = [];            //Uniforms given to VIP

private _workerUniforms = [];           //Uniforms given to Workers at Factories/Resources

private _dlcUniforms = [];          //Uniforms given if DLCs are enabled, only given to the Arsenal not Civilians

if (_hasApex) then {_dlcUniforms append [];
};

if (_hasLawsOfWar) then {_dlcUniforms append [];
};

["uniforms", _civUniforms + _pressUniforms + _workerUniforms + _dlcUniforms] call _fnc_saveToTemplate;          //Uniforms given to the Arsenal, Allowed for Undercover and given to Rebel Ai that go Undercover

_civhats = [];

["headgear", _civHats] call _fnc_saveToTemplate;            //Headgear given to Normal Civs, Workers, Undercover Rebels.

private _loadoutData = call _fnc_createLoadoutData;

_loadoutData set ["uniforms", _civUniforms];
_loadoutData set ["helmets", _civHats];

_loadoutData set ["pressUniforms", _pressUniforms];
_loadoutData set ["pressVests", _pressVests];
_loadoutData set ["pressHelmets", _pressHelmets];

_loadoutData set ["workerUniforms", _workerUniforms];
_loadoutData set ["workerHelmets", _workerHelmets];

_loadoutData set ["maps", ["ItemMap"]];
_loadoutData set ["watches", ["ItemWatch"]];
_loadoutData set ["compasses", ["ItemCompass"]];

_loadoutData set ["vipUniforms", _vipUniforms];
_loadoutData set ["sidearms", []];

private _manTemplate = {
    ["helmets"] call _fnc_setHelmet;
    ["uniforms"] call _fnc_setUniform;

    ["items_medical_standard"] call _fnc_addItemSet;

    ["maps"] call _fnc_addMap;
    ["watches"] call _fnc_addWatch;
    ["compasses"] call _fnc_addCompass;
};
private _workerTemplate = {
    [["workerHelmets", "helmets"] call _fnc_fallback] call _fnc_setHelmet;
    ["workerUniforms"] call _fnc_setUniform;

    ["items_medical_standard"] call _fnc_addItemSet;

    ["maps"] call _fnc_addMap;
    ["watches"] call _fnc_addWatch;
    ["compasses"] call _fnc_addCompass;
};
private _pressTemplate = {
    [["pressHelmets", "helmets"] call _fnc_fallback] call _fnc_setHelmet;
    ["pressVests"] call _fnc_setVest;
    ["pressUniforms"] call _fnc_setUniform;

    ["items_medical_standard"] call _fnc_addItemSet;

    ["maps"] call _fnc_addMap;
    ["watches"] call _fnc_addWatch;
    ["compasses"] call _fnc_addCompass;
};
private _vipTemplate = {
    ["vipUniforms"] call _fnc_setUniform;

    ["items_medical_standard"] call _fnc_addItemSet;

    ["maps"] call _fnc_addMap;
    ["watches"] call _fnc_addWatch;
    ["compasses"] call _fnc_addCompass;

    ["sidearms"] call _fnc_setHandgun;
    ["handgun", 2] call _fnc_addMagazines;
};
private _prefix = "militia";
private _unitTypes = [
    ["VIP", _vipTemplate],
    ["Press", _pressTemplate],
    ["Worker", _workerTemplate],
    ["Man", _manTemplate]
];

[_prefix, _unitTypes, _loadoutData] call _fnc_generateAndSaveUnitsToTemplate;

// [TEH] Optional civilian equipment overrides.
// If a key is not defined, TEH falls back to the default vanilla equipment.

// Rick's green civilian clothing. One entry is selected randomly from each list.
["TEH_rickUniforms", ["U_C_Man_casual_3_F"]] call _fnc_saveToTemplate;
["TEH_rickHeadgears", ["H_Bandanna_surfer_grn"]] call _fnc_saveToTemplate;
["TEH_rickBackpacks", ["B_CivilianBackpack_01_Sport_Green_F"]] call _fnc_saveToTemplate;

// Town mechanic's clothing. One entry is selected randomly from each list.
["TEH_mechanicUniforms", ["U_C_Mechanic_01_F"]] call _fnc_saveToTemplate;
["TEH_mechanicHeadgears", ["H_Cap_red"]] call _fnc_saveToTemplate;

// Bandits settings
["TEH_banditUniforms", ["U_C_E_LooterJacket_01_F"]] call _fnc_saveToTemplate;
["TEH_banditHeadgears", ["H_Cap_blk"]] call _fnc_saveToTemplate;
["TEH_banditHeads", ["RussianHead_1", "RussianHead_2", "RussianHead_3", "RussianHead_4", "RussianHead_5"]] call _fnc_saveToTemplate;
["TEH_banditVoices", ["male01rus", "male02rus", "male03rus"]] call _fnc_saveToTemplate;

// Civilian long guns used by bandits.
// Bandits have a 50% chance to receive a weapon from this pool.
// Weapon loadout format: [weapon, muzzle, pointer, optic, magazines, secondary ammo, bipod]
private _TEH_civilianPrimaryLoadouts = [
    ["sgun_HunterShotgun_01_F", "", "", "", ["2Rnd_12Gauge_Pellets", "2Rnd_12Gauge_Pellets", "2Rnd_12Gauge_Pellets"], [], ""],
    ["sgun_HunterShotgun_01_sawedoff_F", "", "", "", ["2Rnd_12Gauge_Pellets", "2Rnd_12Gauge_Pellets", "2Rnd_12Gauge_Pellets"], [], ""]
];
["TEH_civilianPrimaryLoadouts", _TEH_civilianPrimaryLoadouts] call _fnc_saveToTemplate;

// Civilian handguns used by bandits and sold by Rick.
// Bandits have a 50% chance to receive a weapon from this pool.
private _TEH_civilianHandgunLoadouts = [
    ["hgun_Pistol_01_F", "", "", "", ["10Rnd_9x21_Mag", "10Rnd_9x21_Mag", "10Rnd_9x21_Mag"], [], ""],
    ["hgun_P07_F", "", "", "", ["16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"], [], ""]
];
["TEH_civilianHandgunLoadouts", _TEH_civilianHandgunLoadouts] call _fnc_saveToTemplate;
