import json

#This script generates a template for all 12 rebel unit classes so that only special weapons are to be redacted in the loadout editor.
# Config
mag_type = "KAR_25Rnd_Fury"
mag_capacity = 25
mag_amount = 8
primary_weapon = ["KAR_XM7", "muzzle_snds_H_snd_F", "ACE_acc_pointer_green", "ACE_optic_MRCO_2D", [mag_type, mag_capacity], [], ""]
uniform = "CUP_U_B_BDUv2_roll2_gloves_Urban"
vest = "CUP_V_PMC_CIRAS_Black_Patrol"
helmet = "CUP_H_OpsCore_Black"
facewear = "CUP_G_Scarf_Face_Red"
backpack_type = "B_Carryall_blk"

medical_items = [["ACE_bloodIV_500", 1], ["ACE_fieldDressing", 12], ["ACE_plasmaIV_500", 1],
                 ["ACE_salineIV_500", 1], ["ACE_splint", 4], ["ACE_epinephrine", 3], ["ACE_morphine", 3]]

standard_items = ["ItemMap", "", "ItemRadio", "ItemCompass", "ItemWatch", "ACE_NVG_Gen4_Black_WP"]
binocular = ["Binocular", "", "", "", [], [], ""]

# Class definitions
class_names = [
    "loadouts_reb_militia_LAT", "loadouts_reb_militia_ExplosivesExpert", "loadouts_reb_militia_staticCrew",
    "loadouts_reb_militia_Rifleman", "loadouts_reb_militia_AA", "loadouts_reb_militia_Sniper",
    "loadouts_reb_militia_Grenadier", "loadouts_reb_militia_MachineGunner", "loadouts_reb_militia_Medic",
    "loadouts_reb_militia_SquadLeader", "loadouts_reb_militia_AT", "loadouts_reb_militia_Engineer"
]

# Special backpacks
backpacks = {
    "loadouts_reb_militia_Medic": [backpack_type, [["ACE_surgicalKit", 1], ["ACE_fieldDressing", 30],
                                                   ["ACE_morphine", 8], ["ACE_epinephrine", 8],
                                                   ["ACE_adenosine", 4], ["ACE_plasmaIV_500", 4],
                                                   ["ACE_salineIV_500", 4], ["ACE_bloodIV_500", 4],
                                                   ["ACE_splint", 8]]],
    "loadouts_reb_militia_Engineer": [backpack_type, [["ToolKit", 1], ["ACE_Fortify", 1], ["ACE_wirecutter", 1], ["ACE_EntrenchingTool", 1]]],
    "loadouts_reb_militia_ExplosivesExpert": [backpack_type, [["ACE_DefusalKit", 1], ["ACE_Clacker", 1], ["ToolKit", 1], ["MineDetector", 1],["DemoCharge_Remote_Mag",2]]]
}

# Build output
classes = []
for classname in class_names:
    # Default backpack or special one
    backpack = backpacks.get(classname, [backpack_type, []])

    unit = [
        primary_weapon,
        [],
        [],
        [uniform, medical_items],
        [vest, [mag_type, mag_amount, mag_capacity]],
        backpack,
        helmet,
        facewear,
        binocular,
        standard_items
    ]
    classes.append([classname, unit])

output = "rebelLoadouts = " + json.dumps(classes, indent=None) + ";"
print(output)