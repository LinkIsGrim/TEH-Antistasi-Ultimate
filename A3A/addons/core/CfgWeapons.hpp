class CfgWeapons
{
    class ItemCore;
    class InventoryItem_Base_F;

    class A3AP_SelfReviveKit: ItemCore
    {
        author = "Socrates";
        displayName = "$STR_A3AP_items_crrk_name";
        model = "\A3\Props_F_Orange\Humanitarian\Camps\FirstAidKit_01_closed_F.p3d";
        scope = 2;      
        scopeArsenal = 2;
        scopeCurator = 2;
        detectRange = -1;
        simulation= "ItemMineDetector";
        picture = EQPATHTOFOLDER(core,Pictures\Items\revive_kit.paa);
        descriptionShort = "$STR_A3AP_items_crrk_desc";
        class ItemInfo: InventoryItem_Base_F
        {
            mass=80;
            allowedSlots[] = {901};
        };
    };
	
	class UGL_F {
		aiDispersionCoefX = 21;
		aiDispersionCoefY = 21;
		aiRateOfFire = 10;
		aiRateOfFireDistance = 150;
		minRange = 50;
		minRangeProbab = 0.15;
		midRange = 150;
		midRangeProbab = 0.10;
		maxRange = 300;
		maxRangeProbab = 0.05;
	};

};
