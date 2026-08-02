/*
 * This is the first initVar that gets called, and it gets called on both the client and the server.
 * Generally, this should only be constants.
 */

scriptName "initVarCommon.sqf";
#include "..\..\script_component.hpp"
FIX_LINE_NUMBERS()
Info("initVarCommon started");

////////////////////////////////////
// INITIAL SETTING AND VARIABLES ///
////////////////////////////////////
Info("Setting initial variables");
debug = false;
//A3A_customHintEnable = false; // Disables custom hints for boot duration. Is set to true in initClient.

////////////////////////////////////
//     BEGIN SIDES AND COLORS    ///
////////////////////////////////////

Occupants = west;
Invaders = east;
teamPlayer = independent;		// uh, probably don't need this yet unless something is busted?
Rivals = opfor; //east
colorOccupants = "colorBLUFOR";
colorInvaders = "colorOPFOR";
colorCivilian = "ColorCIV";
colorTeamPlayer = "colorGUER";
colorRivals = "ColorBrown";
respawnTeamPlayer = "respawn_guerrila";
posHQ = getMarkerPos respawnTeamPlayer;

// Town Data

private _cityData = ([false] call A3A_fnc_getCityData);
A3A_townData = createHashMapFromArray (_cityData#1);

////////////////////////////////////////
//     DECLARING PATCOM VARIABLES    ///
////////////////////////////////////////
Info("Initialising PATCOM Variables");

PATCOM_DEBUG = false; // Enable PATCOM specific debug.
PATCOM_VISUAL_RANGE = 400; // How far before PATCOM can start to detect enemies.
PATCOM_TARGET_TIME = 120; // How long before PATCOM unit forgets about an enemy.
PATCOM_ARTILLERY_MANAGER = true; // Allow Patcome to control AI Artillery. False is default A3 Artillery AI.
PATCOM_ARTILLERY_DELAY = 30; // How quickly artillery becomes available again after firing in seconds.
PATCOM_AI_STATICS = true; // Allow AI to find and arm statics near their group.
PATCOM_AI_STATIC_ARM = 120; // How long AI stay on static weapons after they arm them.

////////////////////////////////////////
//     DECLARING ITEM CATEGORIES     ///
////////////////////////////////////////
Info("Declaring item categories");

weaponCategories = ["Rifles", "Handguns", "MachineGuns", "MissileLaunchers", "Mortars", "RocketLaunchers", "Shotguns", "SMGs", "SniperRifles", "UsedLaunchers"];
itemCategories = ["Gadgets", "Bipods", "MuzzleAttachments", "PointerAttachments", "Optics", "Binoculars", "Compasses", "FirstAidKits", "GPS", "LaserDesignators",
	"Maps", "Medikits", "MineDetectors", "NVGs", "Radios", "Toolkits", "UAVTerminals", "Watches", "Glasses", "Headgear", "Vests", "Uniforms", "Backpacks"];

magazineCategories = ["MagArtillery", "MagBullet", "MagFlare", "Grenades", "MagLaser", "MagMissile", "MagRocket", "MagShell", "MagShotgun", "MagSmokeShell"];
explosiveCategories = ["Mine", "MineBounding", "MineDirectional"];
otherCategories = ["Unknown"];

//************************************************************************************************************
//ALL ITEMS THAT ARE MEMBERS OF CATEGORIES BELOW THIS LINE **MUST** BE A MEMBER OF ONE OF THE ABOVE CATEGORIES.
//************************************************************************************************************

//Categories that consist only of members of other categories, e.g, 'Weapons' contains items of every category from in weaponCategories;
aggregateCategories = ["Weapons", "Items", "Magazines", "Explosives"];

//All items in here *must* also be a member of one of the above categories.
//These are here because it's non-trivial to identify items in them. They might be a very specific subset of items, or the logic that identifies them might not be perfect.
//It's recommended that these categories be used with caution.
specialCategories = ["AA", "AT", "GrenadeLaunchers", "LightAttachments", "LaserAttachments", "Chemlights", "SmokeGrenades", "LaunchedSmokeGrenades", "LaunchedFlares", "HandFlares", "IRGrenades","LaserBatteries",
	"RebelUniforms", "CivilianUniforms", "BackpacksEmpty", "BackpacksTool", "BackpacksStatic", "BackpacksDevice", "BackpacksRadio", "CivilianVests", "ArmoredVests", "ArmoredHeadgear", "CosmeticHeadgear",
	"CosmeticGlasses", "ThermalNVGs", "OpticsClose", "OpticsMid", "OpticsLong", "ExplosiveCharges", "Disposable", "MinesAPERS", "MinesAT"]; ///could probably do some smart check for silencers and bipods, but I don't know anything about their configs


allCategoriesExceptSpecial = weaponCategories + itemCategories + magazineCategories + explosiveCategories + otherCategories + aggregateCategories;
allCategories = allCategoriesExceptSpecial + specialCategories;

// Initialize categoryOverrides. Clients need this for equipmentClassToCategories to work.
[] call A3A_fnc_categoryOverrides;

////////////////////////////////////
//     BEGIN MOD DETECTION       ///
////////////////////////////////////
Info("Starting mod detection");

// Load the climate here for the moment, because we need it early and globally
private _worldName = toLowerAnsi worldName;
A3A_climate = toLower (if (isText (missionConfigFile/"A3A"/"mapInfo"/_worldName/"climate")) then {
    getText (missionConfigFile/"A3A"/"mapInfo"/_worldName/"climate")
} else {
    getText (configFile/"A3A"/"mapInfo"/_worldName/"climate")
});

// Short Info of loaded mods needs to be added to this array. eg: `A3A_loadedTemplateInfoXML pushBack ["RHS","All factions will be replaced by RHS (AFRF &amp; USAF &amp; GREF)."];`
A3A_loadedTemplateInfoXML = [];

//Mod detection is done locally to each client, in case some clients have different modsets for some reason.
//Radio Detection
A3A_hasTFAR = isClass (configFile >> "CfgPatches" >> "task_force_radio");
A3A_hasACRE = isClass (configFile >> "cfgPatches" >> "acre_main");
A3A_hasTFARBeta = isClass (configFile >> "CfgPatches" >> "tfar_static_radios");
if (A3A_hasTFARBeta) then {A3A_hasTFAR = false};
//ACE Detection
A3A_hasACE = (!isNil "ace_common_fnc_isModLoaded");
A3A_hasACEHearing = isClass (configFile >> "CfgSounds" >> "ACE_EarRinging_Weak");
A3A_hasACEMedical = isClass (configFile >> "CfgSounds" >> "ACE_heartbeat_fast_3");

//ADV-CPR Pike Edition detection
A3A_hasADV = false;
if (A3A_hasACEMedical && isClass (configFile >> "CfgPatches" >> "adv_aceCPR")) then {A3A_hasADV = true; Info("ADV Detected.") };

//KAT medical detection
A3A_hasKAT = false;
if(A3A_hasACEMedical && isClass (configFile >> "CfgWeapons" >> "kat_scalpel")) then {A3A_hasKAT = true; Info("KAT MED Detected.") };

// Zeus enhanced
A3A_hasZen = (isClass (configFile >> "CfgPatches" >> "zen_common"));

// Zeus enhanced
A3A_hasZen = (isClass (configFile >> "CfgPatches" >> "zen_common"));

//Content Mods (Units, Vehicles, Weapons, Clothes etc.)
TEH_randomRifle = ["CUP_AK_47_M", 0.5,"CUP_AK_47_S", 0.5,"CUP_AK_74", 0.5,"CUP_AK_74_GL", 0.5,"CUP_AKS_74", 0.5,"CUP_AKS_74_U", 0.5,"CUP_AKS_74_UN_kobra", 0.5,"CUP_AKS_GOLD", 0.5,"CUP_arfile_Sa58_Carbine_RIS_AFG_desert", 0.5,"CUP_arfile_Sa58_Carbine_RIS_AFG_woodland", 0.5,"CUP_arifle_AK47", 0.5,"CUP_arifle_AK47_Early", 0.5,"CUP_arifle_AK47_GL", 0.5,"CUP_arifle_AK47_GL_Early", 0.5,"CUP_arifle_AK47_GL_top_rail", 0.5,"CUP_arifle_AK47_top_rail", 0.5,"CUP_arifle_AK74", 0.5,"CUP_arifle_AK74_Early", 0.5,"CUP_arifle_AK74_GL", 0.5,"CUP_arifle_AK74_GL_Early", 0.5,"CUP_arifle_AK74_GL_top_rail", 0.5,"CUP_arifle_AK74_top_rail", 0.5,"CUP_arifle_AK74M", 0.5,"CUP_arifle_AK74M_camo", 0.5,"CUP_arifle_AK74M_desert", 0.5,"CUP_arifle_AK74M_GL", 0.5,"CUP_arifle_AK74M_GL_camo", 0.5,"CUP_arifle_AK74M_GL_desert", 0.5,"CUP_arifle_AK74M_GL_railed", 0.5,"CUP_arifle_AK74M_GL_railed_camo", 0.5,"CUP_arifle_AK74M_GL_railed_desert", 0.5,"CUP_arifle_AK74M_GL_top_rail", 0.5,"CUP_arifle_AK74M_GL_top_rail_camo", 0.5,"CUP_arifle_AK74M_GL_top_rail_desert", 0.5,"CUP_arifle_AK74M_railed", 0.5,"CUP_arifle_AK74M_railed_afg", 0.5,"CUP_arifle_AK74M_railed_afg_camo", 0.5,"CUP_arifle_AK74M_railed_afg_desert", 0.5,"CUP_arifle_AK74M_railed_camo", 0.5,"CUP_arifle_AK74M_railed_desert", 0.5,"CUP_arifle_AK74M_top_rail", 0.5,"CUP_arifle_AK74M_top_rail_camo", 0.5,"CUP_arifle_AK74M_top_rail_desert", 0.5,"CUP_arifle_AKM", 0.5,"CUP_arifle_AKM_Early", 0.5,"CUP_arifle_AKM_GL", 0.5,"CUP_arifle_AKM_GL_Early", 0.5,"CUP_arifle_AKM_GL_top_rail", 0.5,"CUP_arifle_AKM_snds", 0.5,"CUP_arifle_AKM_top_rail", 0.5,"CUP_arifle_AKMN_railed", 0.5,"CUP_arifle_AKMN_railed_afg", 0.5,"CUP_arifle_AKMN_railed_afg_desert", 0.5,"CUP_arifle_AKMN_railed_desert", 0.5,"CUP_arifle_AKMS", 0.5,"CUP_arifle_AKMS_Early", 0.5,"CUP_arifle_AKMS_GL", 0.5,"CUP_arifle_AKMS_GL_Early", 0.5,"CUP_arifle_AKMS_GL_top_rail", 0.5,"CUP_arifle_AKMS_top_rail", 0.5,"CUP_arifle_AKS", 0.5,"CUP_arifle_AKS74", 0.5,"CUP_arifle_AKS74_Early", 0.5,"CUP_arifle_AKS74_GL", 0.5,"CUP_arifle_AKS74_GL_Early", 0.5,"CUP_arifle_AKS74_GL_top_rail", 0.5,"CUP_arifle_AKS74_top_rail", 0.5,"CUP_arifle_AKS74U", 0.5,"CUP_arifle_AKS74U_railed", 0.5,"CUP_arifle_AKS74U_top_rail", 0.5,"CUP_arifle_AKS74UN_kobra_snds", 0.5,"CUP_arifle_AKS_Base", 0.5,"CUP_arifle_AKS_Gold", 0.5,"CUP_arifle_AKS_top_rail", 0.5,"CUP_arifle_AUG_A1", 0.5,"CUP_arifle_AUG_Base", 0.5,"CUP_arifle_FNFAL", 0.5,"CUP_arifle_FNFAL5060", 0.5,"CUP_arifle_FNFAL5060_desert", 0.5,"CUP_arifle_FNFAL5060_railed", 0.5,"CUP_arifle_FNFAL5060_railed_desert", 0.5,"CUP_arifle_FNFAL5060_railed_sand", 0.5,"CUP_arifle_FNFAL5060_railed_woodland", 0.5,"CUP_arifle_FNFAL5060_rhodesian", 0.5,"CUP_arifle_FNFAL5060_sand", 0.5,"CUP_arifle_FNFAL5060_woodland", 0.5,"CUP_arifle_FNFAL5061", 0.5,"CUP_arifle_FNFAL5061_railed", 0.5,"CUP_arifle_FNFAL5061_rhodesian", 0.5,"CUP_arifle_FNFAL5061_wooden", 0.5,"CUP_arifle_FNFAL5061_wooden_railed", 0.5,"CUP_arifle_FNFAL5062", 0.5,"CUP_arifle_FNFAL5062_railed", 0.5,"CUP_arifle_FNFAL_desert", 0.5,"CUP_arifle_FNFAL_railed", 0.5,"CUP_arifle_FNFAL_railed_desert", 0.5,"CUP_arifle_FNFAL_railed_sand", 0.5,"CUP_arifle_FNFAL_railed_woodland", 0.5,"CUP_arifle_FNFAL_sand", 0.5,"CUP_arifle_FNFAL_woodland", 0.5,"CUP_arifle_G3A3_modern_ris", 0.5,"CUP_arifle_G3A3_modern_ris_black", 0.5,"CUP_arifle_G3A3_ris", 0.5,"CUP_arifle_G3A3_ris_black", 0.5,"CUP_arifle_G3A3_ris_vfg", 0.5,"CUP_arifle_G3A3_ris_vfg_black", 0.5,"CUP_arifle_Galil_556_black", 0.5,"CUP_arifle_Galil_black", 0.5,"CUP_arifle_Galil_SAR_black", 0.5,"CUP_arifle_Gewehr1", 0.5,"CUP_arifle_Gewehr1_railed", 0.5,"CUP_arifle_IMI_Romat", 0.5,"CUP_arifle_IMI_Romat_railed", 0.5,"CUP_arifle_L85A2", 0.5,"CUP_arifle_L85A2_G", 0.5,"CUP_arifle_L85A2_GL", 0.5,"CUP_arifle_L85A2_NG", 0.5,"CUP_arifle_L86A2", 0.5,"CUP_arifle_M16A1", 0.5,"CUP_arifle_M16A1E1", 0.5,"CUP_arifle_M16A1E1GL", 0.5,"CUP_arifle_M16A1GL", 0.5,"CUP_arifle_M16A1GL_FS", 0.5,"CUP_arifle_M16A1GL_USA", 0.5,"CUP_arifle_M16A2", 0.5,"CUP_arifle_M16A2_GL", 0.5,"CUP_arifle_RPK74", 0.5,"CUP_arifle_RPK74_45", 0.5,"CUP_arifle_RPK74_45_top_rail", 0.5,"CUP_arifle_RPK74_top_rail", 0.5,"CUP_arifle_RPK74M", 0.5,"CUP_arifle_RPK74M_railed", 0.5,"CUP_arifle_RPK74M_top_rail", 0.5,"CUP_arifle_Sa56_carbine_base", 0.5,"CUP_arifle_Sa58_base", 0.5,"CUP_arifle_Sa58_Carbine_RIS_AFG", 0.5,"CUP_arifle_Sa58_Carbine_RIS_VFG", 0.5,"CUP_arifle_Sa58_Carbine_RIS_VFG_desert", 0.5,"CUP_arifle_Sa58_Carbine_RIS_VFG_woodland", 0.5,"CUP_arifle_Sa58_Klec", 0.5,"CUP_arifle_Sa58_Klec_frontris", 0.5,"CUP_arifle_Sa58_Klec_rearris", 0.5,"CUP_arifle_Sa58_Klec_ris", 0.5,"CUP_arifle_Sa58_LMG_base", 0.5,"CUP_arifle_Sa58_short_base", 0.5,"CUP_arifle_Sa58_sporter_compact", 0.5,"CUP_arifle_Sa58_sporter_compact_rearris", 0.5,"CUP_arifle_Sa58P", 0.5,"CUP_arifle_Sa58P_des", 0.5,"CUP_arifle_Sa58P_frontris", 0.5,"CUP_arifle_Sa58P_frontris_desert", 0.5,"CUP_arifle_Sa58P_frontris_woodland", 0.5,"CUP_arifle_Sa58P_rearris", 0.5,"CUP_arifle_Sa58P_RIS1", 0.5,"CUP_arifle_Sa58P_v2", 0.5,"CUP_arifle_Sa58P_wood", 0.5,"CUP_arifle_Sa58P_woodland", 0.5,"CUP_arifle_Sa58Pi", 0.5,"CUP_arifle_Sa58RIS1", 0.5,"CUP_arifle_Sa58RIS1_des", 0.5,"CUP_arifle_Sa58RIS1_woodland", 0.5,"CUP_arifle_Sa58RIS2", 0.5,"CUP_arifle_Sa58RIS2_camo", 0.5,"CUP_arifle_Sa58RIS2_gl", 0.5,"CUP_arifle_Sa58RIS2_gl_desert", 0.5,"CUP_arifle_Sa58RIS2_gl_woodland", 0.5,"CUP_arifle_Sa58RIS2_woodland", 0.5,"CUP_arifle_Sa58s", 0.5,"CUP_arifle_Sa58s_rearris", 0.5,"CUP_arifle_Sa58V", 0.5,"CUP_arifle_Sa58V_camo", 0.5,"CUP_arifle_Sa58V_frontris", 0.5,"CUP_arifle_Sa58V_rearris", 0.5,"CUP_arifle_Sa58V_wood", 0.5,"CUP_arifle_Sa58V_woodland", 0.5,"CUP_arifle_SAIGA_MK03", 0.5,"CUP_arifle_SAIGA_MK03_top_rail", 0.5,"CUP_arifle_SAIGA_MK03_Wood", 0.5,"CUP_arifle_TYPE_56_2", 0.5,"CUP_arifle_TYPE_56_2_Early", 0.5,"CUP_arifle_TYPE_56_2_top_rail", 0.5,"CUP_Famas_F1", 0.5,"CUP_Famas_F1_Arid", 0.5,"CUP_Famas_F1_Rail", 0.5,"CUP_Famas_F1_Rail_Arid", 0.5,"CUP_Famas_F1_Rail_Wood", 0.5,"CUP_Famas_F1_Wood", 0.5,"CUP_FN_FAL", 0.5,"CUP_glaunch_M79", 0.5,"CUP_l85a2", 0.5,"CUP_l85a2_ris", 0.5,"CUP_l85a2_ris_ng", 0.5,"CUP_l85a2_ugl", 0.5,"CUP_launch_9K32Strela", 0.5,"CUP_launch_Igla", 0.5,"CUP_launch_M47", 0.5,"CUP_launch_M72A6", 0.5,"CUP_launch_M72A6_Special", 0.5,"CUP_launch_Metis", 0.5,"CUP_launch_RPG18", 0.5,"CUP_launch_RPG26", 0.5,"CUP_launch_RPG7V", 0.5,"CUP_launch_RPG7V_PGO7V", 0.5,"CUP_launch_RPG7V_PGO7V2", 0.5,"CUP_launch_RPG7V_PGO7V3", 0.5,"CUP_LeeEnfield", 0.5,"CUP_lmg_FNMAG", 0.5,"CUP_lmg_FNMAG_RIS", 0.5,"CUP_lmg_FNMAG_RIS_modern", 0.5,"CUP_lmg_L110A1", 0.5,"CUP_lmg_L7A2", 0.5,"CUP_lmg_L7A2_Flat", 0.5,"CUP_lmg_M240", 0.5,"CUP_lmg_M240_B", 0.5,"CUP_lmg_M240_norail", 0.5,"CUP_lmg_M249", 0.5,"CUP_lmg_M249_E1", 0.5,"CUP_lmg_M249_E2", 0.5,"CUP_lmg_m249_para", 0.5,"CUP_lmg_m249_para_gl", 0.5,"CUP_lmg_M60", 0.5,"CUP_lmg_M60A4", 0.5,"CUP_lmg_M60E4", 0.5,"CUP_lmg_M60E4_desert", 0.5,"CUP_lmg_M60E4_jungle", 0.5,"CUP_lmg_M60E4_jungle_Aimpoint_Laser", 0.5,"CUP_lmg_M60E4_norail", 0.5,"CUP_lmg_M60E4_norail_desert", 0.5,"CUP_lmg_M60E4_norail_jungle", 0.5,"CUP_lmg_M60E4_norail_wood", 0.5,"CUP_lmg_M60E4_wood", 0.5,"CUP_lmg_MG3", 0.5,"CUP_lmg_MG3_M145", 0.5,"CUP_lmg_MG3_rail", 0.5,"CUP_lmg_minimi", 0.5,"CUP_lmg_minimi_railed", 0.5,"CUP_lmg_minimipara", 0.5,"CUP_lmg_PKM", 0.5,"CUP_lmg_PKM_B50_vfg", 0.5,"CUP_lmg_PKM_front_rail_B50_vfg", 0.5,"CUP_lmg_PKM_top_rail", 0.5,"CUP_lmg_PKM_top_rail_B50_vfg", 0.5,"CUP_lmg_PKMN", 0.5,"CUP_lmg_UK59", 0.5,"CUP_M14_EP1", 0.5,"CUP_M16A2", 0.5,"CUP_M16A2GL", 0.5,"CUP_M24", 0.5,"CUP_M240", 0.5,"CUP_M249", 0.5,"CUP_M249_EP1", 0.5,"CUP_M24_des_EP1", 0.5,"CUP_M40A3", 0.5,"CUP_M47Launcher_EP1", 0.5,"CUP_M60A4_EP1", 0.5,"CUP_M60E4_base", 0.5,"CUP_M79_EP1", 0.5,"CUP_MAAWS", 0.5,"CUP_MG3_noeject_W", 0.5,"CUP_MG3_veh", 0.5,"CUP_MP5A5", 0.5,"CUP_MP5SD", 0.5];

A3A_hasCUP = isClass (configFile >> "CfgPatches" >> "CUP_Weapons_WeaponsCore");

//These are handled by a script in the Templates folder to keep integrators away from critical code.
//call A3A_fnc_detector;

////////////////////////////////////
//        BUILDINGS LISTS        ///
////////////////////////////////////
Info("Creating building arrays");

A3A_buildingWhitelist = [
	"Land_Cargo_Tower_V1_F","Land_Cargo_Tower_V1_No1_F","Land_Cargo_Tower_V1_No2_F","Land_Cargo_Tower_V1_No3_F","Land_Cargo_Tower_V1_No4_F","Land_Cargo_Tower_V1_No5_F","Land_Cargo_Tower_V1_No6_F","Land_Cargo_Tower_V1_No7_F","Land_Cargo_Tower_V2_F", "Land_Cargo_Tower_V3_F", "Land_Cargo_Tower_V4_F"
];
A3A_milBuildingWhitelist = A3A_buildingWhitelist + [
	"Land_Radar_01_HQ_F","Land_Cargo_HQ_V1_F","Land_Cargo_HQ_V2_F","Land_Cargo_HQ_V3_F","Land_Cargo_HQ_V4_F","Land_Cargo_Patrol_V1_F","Land_Cargo_Patrol_V2_F","Land_Cargo_Patrol_V3_F", "Land_Cargo_Patrol_V4_F","Land_HelipadSquare_F","Land_Posed","Land_Hlaska","Land_fortified_nest_small_EP1",
	"Land_fortified_nest_small","Fort_Nest","Fortress1","Land_GuardShed","Land_BagBunker_Small_F","Land_BagBunker_01_small_green_F","Land_vn_b_tower_01","Land_vn_o_shelter_05","Land_vn_bagbunker_01_small_green_f","Land_vn_bagbunker_small_f", "Land_vn_o_tower_01","Land_vn_o_tower_02", "Land_vn_o_tower_03","Land_vn_hut_tower_01", 
	"Land_vn_o_platform_05","Land_vn_o_platform_06","Land_vn_o_snipertree_01","Land_vn_o_snipertree_02","Land_vn_o_snipertree_03","Land_vn_o_snipertree_04","Land_vn_o_platform_01","Land_vn_o_platform_02","Land_vn_o_platform_03", "Land_vn_hlaska", "Land_vn_b_trench_bunker_04_01", "Land_vn_pillboxbunker_02_hex_f", "Land_vn_guardtower_01_f",
	"Land_vn_strazni_vez", "Land_vn_b_trench_firing_05", "Land_vn_cementworks_01_grey_f", "Land_vn_cementworks_01_brick_f", "Land_vn_radar_01_hq_f", "Land_vn_a_office01", "Land_SPE_Sandbag_Nest", 	"land_gm_euro_barracks_02_win",
	"land_bunker_garage",
	"Land_Hlidac_budka",
	"Land_Bunker_01_big_F",
	"Land_Bunker_01_tall_F",
	"Land_Bunker_01_small_F",
	"Land_Bunker_01_HQ_F",
	"Land_Mil_House",
	"Land_aif_strazni_vez",
	"Land_aif_hlaska",
	"Land_MBG_Killhouse_2",
	"WarfareBDepot",
	"Land_HelipadCivil_F",
	"Land_HelipadCircle_F",
	"Land_BludpadCircle",
	"Land_vn_b_helipad_01",
	"Land_Barracks_06_F",
	"Land_ControlTower_02_F",
	"Land_ControlTower_01_F",
	"Land_GuardHouse_02_F",
	"Land_GuardHouse_02_grey_F",
	"Land_ServiceHangar_01_L_F",
	"Land_ServiceHangar_01_R_F",
	"Land_MobileRadar_01_radar_F",
	"Land_i_Barracks_V1_F",
	"Land_i_Barracks_V2_F",
	"Land_u_Barracks_V2_F",
	"Land_Barracks_01_dilapidated_F",
	"Land_Barracks_01_grey_F",
	"Land_Barracks_01_camo_F",
	"land_gm_euro_barracks_01_win",
	"land_gm_euro_barracks_01",
	"land_gm_tower_bt_6_fuest_80",
	"land_gm_tower_bt_11_60",
	"land_gm_sandbags_02_bunker_high",
	"land_gm_woodbunker_01_bags",
	"land_gm_euro_misc_viewplatform_01",
	"Land_Strazni_vez",
	"Land_HBarrierTower_F",
	"Land_HBarrier_01_big_tower_green_F",
	"Land_Fort_Watchtower_EP1",
	"Land_Fort_Watchtower",
	"Land_HBarrier_01_tower_green_F",
	"Land_BagBunker_Tower_F",
	"Land_BagBunker_Large_F",
	"Land_fortified_nest_big_EP1",
	"Land_fortified_nest_big",
	"Land_BagBunker_01_large_green_F",
	"Land_GuardTower_01_F", 
	"Land_vn_bunker_small_01",
	"Land_vn_bunker_big_01",
	"Land_GuardBox_01_brown_F", 
	"Land_GuardBox_01_green_F", 
	"Land_GuardBox_01_smooth_F", 
	"Land_GuardTower_02_F",
	"Land_vn_guardtower_02_f",
	"Land_vn_guardtower_03_f",
	"Land_vn_guardtower_04_f",
	"Land_WW2_Bunker_H679",
	"Land_WW2_Bunker_Gun_R",
	"Land_WW2_Bunker_Gun_L",
	"Land_WW2_BET_Flak_Bettung",
	"Land_SPE_H612",
	"Land_SPE_H630",
	"Land_SPE_H667",
	"Land_SPE_H669",
	"Land_SPE_H679",
	"LAND_CSJ_gunpit",
	"LAND_uns_weapon_pit",
	"csj_VCbunk01",
	"Land_Vil_Tower",
	"A3U_StaticHolderSmall",
	"A3U_StaticHolderMediumAT",
	"A3U_StaticHolderMediumAA",
	"A3U_StaticHolderLargeAT",
	"A3U_StaticHolderLargeAA"
];
A3A_buildingBlacklist = [
	"Bridge_PathLod_base_F","Land_Slum_House03_F","Land_Bridge_01_PathLod_F","Land_Bridge_Asphalt_PathLod_F","Land_Bridge_Concrete_PathLod_F","Land_Bridge_HighWay_PathLod_F","Land_Bridge_01_F","Land_Bridge_Asphalt_F","Land_Bridge_Concrete_F","Land_Bridge_HighWay_F","Land_Canal_Wall_Stairs_F","warehouse_02_f",
	"cliff_wall_tall_f","cliff_wall_round_f","containerline_02_f","containerline_01_f","warehouse_01_f","quayconcrete_01_20m_f","airstripplatform_01_f","airport_02_terminal_f","cliff_wall_long_f","shop_town_05_f","Land_ContainerLine_01_F","Land_MilOffices_V1_F","Land_vn_b_trench_bunker_01_01","Land_vn_mil_barracks_i_ep1","Land_vn_barracks_03_f",
	"Land_vn_barracks_01","Land_vn_b_trench_bunker_02_01","Land_vn_b_trench_bunker_02_02","Land_vn_hootch_01_12","Land_vn_hootch_01_11","Land_vn_barracks_02_f","Land_vn_hootch_01_01","Land_vn_barracks_05_f","Land_vn_barracks_04_f","Land_vn_barracks_03_01","Land_vn_barracks_03","Land_vn_barracks_03_02","Land_vn_b_trench_bunker_02_04",
	"Land_vn_b_trench_bunker_02_03","Land_vn_b_trench_bunker_01_02","Land_vn_hootch_01_02","Land_vn_hootch_02_11","Land_vn_hootch_02_01","Land_vn_hootch_02_02","Land_vn_hootch_01_03","Land_vn_hootch_02_03","Land_vn_hootch_01_13","Land_vn_barracks_03_04","Land_vn_barracks_03_03","Land_vn_b_trench_bunker_03_02","Land_vn_b_trench_bunker_03_01",
	"Land_vn_quonset_02_01","Land_vn_quonset_02","Land_vn_quonset_01","Land_vn_hootch_01","Land_vn_hootch_02","Land_vn_barracks_02","Land_vn_barracks_02_01","Land_vn_barracks_04","Land_vn_b_trench_bunker_03_03","Land_vn_tent_mash_01_01","Land_vn_tent_mash_01_02","Land_vn_tent_01_03","Land_vn_tent_01_01","Land_vn_tent_01_02","Land_vn_tent_01_04",
	"Land_vn_barracks_04_01","Land_vn_barracks_04_02","Land_vn_b_trench_bunker_01_03","Land_vn_b_trench_bunker_03_04","Land_vn_tent_mash_01_04","Land_vn_tent_02_01","Land_vn_tent_02_02","Land_vn_tent_mash_01","Land_vn_tent_mash_02_03","Land_vn_tent_mash_02_04","Land_vn_hut_old02","Land_vn_tent_02_04","Land_vn_tent_02_03","Land_vn_tent_mash_02_02",
	"Land_vn_tent_mash_02_01","Land_vn_tent_mash_01_03","Land_vn_army_hut_storrage","Land_vn_army_hut_int","Land_vn_wf_field_hospital_east","Land_vn_army_hut2_int","Land_vn_army_hut3_long_int", "Land_vn_o_prop_cong_cage_01", "Land_vn_o_prop_cong_cage_02", "Land_vn_o_prop_cong_cage_03", "Land_SPE_bocage_long_mound", "Land_SPE_bocage_short_mound", "Land_SPE_bocage_short_mound_lc", "Land_SPE_bocage_long_mound_lc"

];
//Lights and Lamps array used for 'Blackout'
A3A_lampTypes = [
	"Lamps_Base_F", "PowerLines_base_F", "Land_LampDecor_F", "Land_LampHalogen_F", "Land_LampHarbour_F", "Land_LampShabby_F", "Land_NavigLight", "Land_runway_edgelight", "Land_PowerPoleWooden_L_F", "Land_SPE_StreetLamp_Off", "Land_SPE_StreetLamp", "Land_SPE_StreetLamp_pole_off", "Land_SPE_StreetLamp_pole", "Land_SPE_StreetLamp_wall_off", "Land_SPE_StreetLamp_wall", "Land_SPE_Ger_Lamp", "Land_SPE_US_Lamp", "Land_SPE_Onion_Lamp",     "land_gm_ge_lamp_02_02", 
    "land_gm_gc_lamp_02_02", 
    "land_gm_gc_lamp_03", 
    "land_gm_gc_lamp_04", 
    "land_gm_ge_lamp_01_01", 
    "land_gm_gc_lamp_01_02", 
    "land_gm_ge_lamp_02_01", 
    "land_gm_gc_lamp_02_01", 
    "land_gm_ge_lamp_03_01", 
    "land_gm_ge_lamp_03_02", 
    "land_gm_ge_lamp_04_01", 
    "land_gm_ge_lamp_04_02", 
    "land_gm_ge_lamp_05", 
    "land_gm_gc_lamp_01_01", 
    "land_gm_ge_lamp_01_02",
    "Land_LampAirport_F", 
    "Land_LampStreet_small_F", 
    "Land_LampStreet_F", 
    "Land_LampIndustrial_01_F", 
    "Land_LampIndustrial_02_F", 
    "Land_LampStreet_02_double_F", 
    "Land_LampStreet_02_amplion_F", 
    "Land_LampStreet_02_triple_F", 
    "Land_LampStreet_02_F",
    "Land_Lamp_Street1_EP1", 
    "Land_Lamp_Street2_EP1", 
    "Land_Lampa_Ind_EP1", 
    "Land_Lamp_Small_EP1", 
    "Land_Lampa_ind_b", 
    "Land_Lampa_ind", 
    "Land_Lampa_ind_zebr", 
    "Land_Lampa_cut", 
    "Land_Lampa_sidl_3", 
    "Land_Lampa_sidl_2", 
    "Land_Lampadrevo", 
    "Land_Lampa_sidl", 
    "Land_Lampazel", 
    "Land_Vo_seda", 
    "Land_Tlampac_vo_seda", 
    "Land_Vo_zlut", 
    "Land_Lampa_valec", 
    "Land_Lampa_vysoka", 
    "Land_vn_lampshabby_f_4xdir_close", 
    "Land_vn_lampshabby_f_4xdir_far", 
    "Land_vn_lampshabby_f_4xdir_normal"
];

////////////////////////////////////
//     SOUNDS AND ANIMATIONS     ///
////////////////////////////////////
Info("Compiling sounds and animations");

A3A_sounds_dogBark = ["x\A3A\addons\core\Music\dog_bark01.wss", "x\A3A\addons\core\Music\dog_bark02.wss", "x\A3A\addons\core\Music\dog_bark04.wss", "x\A3A\addons\core\Music\dog_bark05.wss", "x\A3A\addons\core\Music\dog_maul01.wss", "x\A3A\addons\core\Music\dog_yelp02.wss"];
injuredSounds =  // Todo: migrate functions to A3A_sounds_callMedic
[
	"a3\sounds_f\characters\human-sfx\Person0\P0_moan_13_words.wss","a3\sounds_f\characters\human-sfx\Person0\P0_moan_14_words.wss","a3\sounds_f\characters\human-sfx\Person0\P0_moan_15_words.wss","a3\sounds_f\characters\human-sfx\Person0\P0_moan_16_words.wss","a3\sounds_f\characters\human-sfx\Person0\P0_moan_17_words.wss",
	"a3\sounds_f\characters\human-sfx\Person0\P0_moan_18_words.wss","a3\sounds_f\characters\human-sfx\Person0\P0_moan_19_words.wss","a3\sounds_f\characters\human-sfx\Person0\P0_moan_20_words.wss","a3\sounds_f\characters\human-sfx\Person1\P1_moan_19_words.wss","a3\sounds_f\characters\human-sfx\Person1\P1_moan_20_words.wss",
	"a3\sounds_f\characters\human-sfx\Person1\P1_moan_21_words.wss","a3\sounds_f\characters\human-sfx\Person1\P1_moan_22_words.wss","a3\sounds_f\characters\human-sfx\Person1\P1_moan_23_words.wss","a3\sounds_f\characters\human-sfx\Person1\P1_moan_24_words.wss","a3\sounds_f\characters\human-sfx\Person1\P1_moan_25_words.wss",
	"a3\sounds_f\characters\human-sfx\Person1\P1_moan_26_words.wss","a3\sounds_f\characters\human-sfx\Person1\P1_moan_27_words.wss","a3\sounds_f\characters\human-sfx\Person1\P1_moan_28_words.wss","a3\sounds_f\characters\human-sfx\Person1\P1_moan_29_words.wss","a3\sounds_f\characters\human-sfx\Person1\P1_moan_30_words.wss",
	"a3\sounds_f\characters\human-sfx\Person1\P1_moan_31_words.wss","a3\sounds_f\characters\human-sfx\Person1\P1_moan_32_words.wss","a3\sounds_f\characters\human-sfx\Person1\P1_moan_33_words.wss","a3\sounds_f\characters\human-sfx\Person2\P2_moan_19_words.wss"
];
A3A_sounds_moan = injuredSounds;

A3A_sounds_soundInjured_low = [];
A3A_sounds_soundInjured_mid = [];
A3A_sounds_soundInjured_max = [];
[] call A3A_fnc_createCivilianTracks;

private _soundPersonParent = "a3\sounds_f\characters\human-sfx\";
for "_person" from 1 to 18 do {
	private _personFolder = str _person;
	if (_person < 10) then { _personFolder = "0" + _personFolder; };
	private _personFolder = "P" + _personFolder + "\";
	{
		private _soundList = missionNamespace getVariable ["A3A_sounds_soundInjured_" + _x, []];
		for "_level" from 1 to 5 do {
			_soundList pushBack (_soundPersonParent + _personFolder + "Soundinjured_"+_x+"_"+str _level+".wss");
		};
	} forEach ["Low","Mid","Max"];
};

belongings = [
	"Land_Document_01_F",
	"Land_File1_F",
	"Land_FilePhotos_F",
	"Land_File2_F",
	"Land_File_research_F",
	"Land_Notepad_F",
	"Land_PenBlack_F",
	"Land_TacticalBacon_F",
	"Land_TinContainer_F",
	"Land_Magazine_rifle_F",
	"Land_Antimalaricum_01_F",
	"Land_Bandage_F",
	"Land_Map_F",
	"Land_Map_unfolded_Malden_F",
	"Land_Matches_F",
	"Land_CanOpener_F",
	"Land_MobilePhone_old_F",
	"Land_MobilePhone_smart_F"
];

A3A_medicalProps = [
	"Land_Bandage_F",
	"Land_IntravenBag_01_empty_F",
	"MedicalGarbage_01_Bandage_F",
	"MedicalGarbage_01_Gloves_F",
	"MedicalGarbage_01_Injector_F",
	"MedicalGarbage_01_Packaging_F",
	"MedicalGarbage_01_FirstAidKit_F"
];

flareSounds = ["A3\Sounds_F\weapons\Flare_Gun\flaregun_1.wss", "A3\Sounds_F\weapons\Flare_Gun\flaregun_2.wss"];

medicAnims = ["AinvPknlMstpSnonWnonDnon_medic_1","AinvPknlMstpSnonWnonDnon_medic0","AinvPknlMstpSnonWnonDnon_medic1","AinvPknlMstpSnonWnonDnon_medic2"];

radioSoundsIn = ["a3\dubbing_radio_f\sfx\in2a.ogg", "a3\dubbing_radio_f\sfx\in2b.ogg", "a3\dubbing_radio_f\sfx\in2c.ogg"];
radioSoundsMid = ["a3\dubbing_radio_f\sfx\radionoise1.ogg", "a3\dubbing_radio_f\sfx\radionoise2.ogg", "a3\dubbing_radio_f\sfx\radionoise3.ogg"];
radioSoundsOut = ["a3\dubbing_radio_f\sfx\out2a.ogg", "a3\dubbing_radio_f\sfx\out2b.ogg", "a3\dubbing_radio_f\sfx\out2c.ogg"];

#include "varsHardcoded.hpp"

TEH_whitelistCivilianUniforms = ["U_C_IDAP_Man_cargo_F","U_C_IDAP_Man_Jeans_F","U_C_IDAP_Man_casual_F","U_C_IDAP_Man_shorts_F","U_C_IDAP_Man_Tee_F","U_C_IDAP_Man_TeeShorts_F","CUP_U_C_AirMedic_orange_01","CUP_U_C_AirMedic_red_01","CUP_U_C_AirMedic_yellow_01","U_I_C_Soldier_Bandit_4_F","U_I_C_Soldier_Bandit_1_F","U_I_C_Soldier_Bandit_2_F","U_I_C_Soldier_Bandit_5_F","U_I_C_Soldier_Bandit_3_F","U_C_ArtTShirt_01_v6_F","U_C_ArtTShirt_01_v1_F","U_C_Man_casual_2_F","U_C_ArtTShirt_01_v2_F","U_C_ArtTShirt_01_v4_F","U_C_Man_casual_1_F","U_C_Man_casual_3_F","U_C_ArtTShirt_01_v5_F","U_C_ArtTShirt_01_v3_F","CUP_U_O_CHDKZ_Bardak","CUP_U_O_CHDKZ_Lopotev","CUP_U_C_Citizen_01","CUP_U_C_Citizen_02","CUP_U_C_Citizen_04","CUP_U_C_Citizen_03","CUP_U_C_Priest_01","U_I_G_resistanceLeader_F","U_C_Poloshirt_blue","U_C_Poloshirt_burgundy","U_C_Poloshirt_redwhite","U_C_Poloshirt_salmon","U_C_Poloshirt_stripped","U_C_Poloshirt_tricolour","U_Competitor","U_C_ConstructionCoverall_Black_F","U_C_ConstructionCoverall_Red_F","U_C_ConstructionCoverall_Blue_F","U_C_ConstructionCoverall_Vrana_F","U_C_Uniform_Farmer_01_F","CUP_U_C_Fireman_01","U_C_FormalSuit_01_black_F","U_C_FormalSuit_01_blue_F","U_C_FormalSuit_01_gray_F","U_C_FormalSuit_01_khaki_F","U_C_FormalSuit_01_tshirt_black_F","U_C_FormalSuit_01_tshirt_gray_F","U_BG_Guerilla2_2","U_BG_Guerilla2_1","U_BG_Guerilla2_3","U_BG_Guerilla3_1","U_C_HunterBody_grn","U_OrestesBody","U_C_Journalist","CUP_O_TKI_Khet_Jeans_04","CUP_O_TKI_Khet_Jeans_02","CUP_O_TKI_Khet_Jeans_01","CUP_O_TKI_Khet_Jeans_03","CUP_O_TKI_Khet_Partug_04","CUP_O_TKI_Khet_Partug_02","CUP_O_TKI_Khet_Partug_01","CUP_O_TKI_Khet_Partug_07","CUP_O_TKI_Khet_Partug_08","CUP_O_TKI_Khet_Partug_05","CUP_O_TKI_Khet_Partug_06","CUP_O_TKI_Khet_Partug_03","CUP_U_C_Labcoat_02","CUP_U_C_Labcoat_03","CUP_U_C_Labcoat_01","U_C_E_LooterJacket_01_F","U_I_L_Uniform_01_tshirt_black_F","U_I_L_Uniform_01_tshirt_olive_F","U_I_L_Uniform_01_tshirt_skull_F","U_I_L_Uniform_01_tshirt_sport_F","U_Marshal","U_C_Mechanic_01_F","CUP_U_C_Mechanic_02","CUP_U_C_Mechanic_03","CUP_U_C_Mechanic_01","CUP_U_I_GUE_Anorak_01","CUP_U_I_GUE_Anorak_03","","CUP_U_I_GUE_Anorak_02","","CUP_U_B_USArmy_PilotOverall","CUP_U_B_USMC_PilotOverall","CUP_U_C_Rescuer_01","U_C_Paramedic_01_F","CUP_U_C_Pilot_01","CUP_I_B_PMC_Unit_20","CUP_I_B_PMC_Unit_21","CUP_I_B_PMC_Unit_19","CUP_I_B_PMC_Unit_17","CUP_I_B_PMC_Unit_13","CUP_I_B_PMC_Unit_14","CUP_I_B_PMC_Unit_15","CUP_I_B_PMC_Unit_12","CUP_I_B_PMC_Unit_3","CUP_I_B_PMC_Unit_2","CUP_I_B_PMC_Unit_1","CUP_I_B_PMC_Unit_4","CUP_I_B_PMC_Unit_7","CUP_I_B_PMC_Unit_6","CUP_I_B_PMC_Unit_5","CUP_I_B_PMC_Unit_8","CUP_I_B_PMC_Unit_11","CUP_I_B_PMC_Unit_10","CUP_I_B_PMC_Unit_9","CUP_I_B_PMC_Unit_42","CUP_I_B_PMC_Unit_41","CUP_I_B_PMC_Unit_43","CUP_I_B_PMC_Unit_40","CUP_I_B_PMC_Unit_39","CUP_I_B_PMC_Unit_36","CUP_I_B_PMC_Unit_38","CUP_I_B_PMC_Unit_37","CUP_I_B_PMC_Unit_24","CUP_I_B_PMC_Unit_23","CUP_U_C_Profiteer_02","CUP_U_C_Profiteer_03","CUP_U_C_Profiteer_01","CUP_U_C_Profiteer_04","CUP_U_C_racketeer_04","CUP_U_C_racketeer_01","CUP_U_C_racketeer_02","CUP_U_C_racketeer_03","CUP_U_I_RACS_PilotOverall","U_Rangemaster","CUP_U_C_Rocker_01","CUP_U_C_Rocker_03","CUP_U_C_Rocker_02","CUP_U_C_Rocker_04","U_C_Uniform_Scientist_01_formal_F","U_C_Uniform_Scientist_01_F","U_C_Uniform_Scientist_02_F","U_C_Uniform_Scientist_02_formal_F","U_C_man_sport_1_F","U_C_man_sport_3_F","U_C_man_sport_2_F","CUP_U_C_Suit_01","CUP_U_C_Suit_02","CUP_U_C_Suit_03","CUP_U_C_Functionary_jacket_02","CUP_U_C_Functionary_jacket_01","CUP_U_C_Functionary_jacket_03","U_C_Man_casual_6_F","U_C_Man_casual_4_F","U_C_Man_casual_5_F","CUP_U_C_Tracksuit_02","CUP_U_C_Tracksuit_01","CUP_U_C_Tracksuit_03","CUP_U_C_Tracksuit_04","CUP_U_C_Villager_01","CUP_U_C_Villager_04","CUP_U_C_Villager_02","CUP_U_C_Villager_03","CUP_U_C_Woodlander_01","CUP_U_C_Woodlander_02","CUP_U_C_Woodlander_03","CUP_U_C_Woodlander_04","CUP_U_C_Worker_03","CUP_U_C_Worker_04","CUP_U_C_Worker_02","CUP_U_C_Worker_01","U_C_WorkerCoveralls","U_C_Poor_1"];

Info("initVarCommon completed");
