		///////////////////////////////////////////////////////
		// CUP
		///////////////////////////////////////////////////////
		class handgunsCup 
		{
			displayName = __EVAL(formatText ["%1 %2", localize "STR_A3AU_cup", localize "STR_A3AU_handguns"]);
			picture = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\handgun_ca.paa";

			ITEM(hgun_Rook40_F, 150, PISTOL_STOCK);

			ITEM(hgun_ACPC2_F, 200, PISTOL_STOCK);
			ITEM(CUP_hgun_Colt1911, 200, PISTOL_STOCK);
			ITEM(CUP_hgun_Mk23, 250, PISTOL_STOCK);

			ITEM(CUP_hgun_Compact, 150, PISTOL_STOCK);
			ITEM(CUP_hgun_Duty, 125, PISTOL_STOCK);
			ITEM(CUP_hgun_Phantom, 200, PISTOL_STOCK);

			ITEM(CUP_hgun_M9, 200, PISTOL_STOCK);
			ITEM(CUP_hgun_Browning_HP, 200, PISTOL_STOCK);
			ITEM(CUP_hgun_M9A1, 200, PISTOL_STOCK);

			ITEM(CUP_hgun_Glock17, 250, PISTOL_STOCK);
			ITEM(CUP_hgun_Glock17_blk, 250, PISTOL_STOCK);
			ITEM(CUP_hgun_Glock17_tan, 250, PISTOL_STOCK);

			ITEM(hgun_Pistol_heavy_01_F, 450, PISTOL_STOCK);

			ITEM(CUP_hgun_Deagle, 400, PISTOL_STOCK);
			ITEM(CUP_hgun_PB6P9, 250, PISTOL_STOCK);
			ITEM(CUP_hgun_PMM, 200, PISTOL_STOCK);
			ITEM(CUP_hgun_TaurusTracker455_gold, 500, PISTOL_STOCK);
			ITEM(CUP_hgun_TEC9, 150, PISTOL_STOCK);
			ITEM(CUP_hgun_TEC9_FA, 300, PISTOL_STOCK);
			ITEM(CUP_hgun_Mac10, 350, PISTOL_STOCK);

			ITEM(hgun_Pistol_heavy_02_F, 800, PISTOL_STOCK);

			ITEM(CUP_hgun_MP7, 800, PISTOL_STOCK);
			ITEM(CUP_hgun_MP7_desert, 800, PISTOL_STOCK);
			ITEM(CUP_hgun_MP7_woodland, 800, PISTOL_STOCK);

			ITEM(CUP_hgun_BallisticShield_Armed, 666, 100);
			ITEM(CUP_hgun_BallisticShield_Armed_M9, 666, 100);
			ITEM(CUP_hgun_BallisticShield_PMM, 666, 100);
		};

		class smgCup 
		{
			displayName = __EVAL(formatText ["%1 %2", localize "STR_A3AU_cup", localize "STR_A3AU_smgs"]);
			picture = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\primaryWeapon_ca.paa";

			ITEM(CUP_bizon, MOD556 * 0.6, 100);
			ITEM(CUP_bizon_silenced, MOD556 * 0.6, 100);

			ITEM(CUP_Evo_ACR, MOD556 * 0.6, 100);
			ITEM(CUP_Evo_mrad_ACR, MOD556 * 0.6, 100);
			ITEM(CUP_Evo_sd_ACR, MOD556 * 0.6, 100);

			ITEM(CUP_MP5A5, MOD556 * 0.6, 100);
			ITEM(CUP_MP5SD, MOD556 * 0.6, 100);

			ITEM(CUP_smg_BallisticShield_MP7, MOD556 * 0.6, 100);
			ITEM(CUP_smg_BallisticShield_PP19, MOD556 * 0.6, 100);
			ITEM(CUP_smg_BallisticShield_Sa61, MOD556 * 0.6, 100);
			ITEM(CUP_smg_bizon, MOD556 * 0.6, 100);
			ITEM(CUP_smg_EVO, MOD556 * 0.6, 100);
			ITEM(CUP_smg_M3A1, MOD556 * 0.6, 100);
			ITEM(CUP_smg_M3A1_blk, MOD556 * 0.6, 100);
			ITEM(CUP_smg_M3A1_blk_SD, MOD556 * 0.6, 100);
			ITEM(CUP_smg_M3A1_grn, MOD556 * 0.6, 100);
			ITEM(CUP_smg_M3A1_grn_SD, MOD556 * 0.6, 100);
			ITEM(CUP_smg_M3A1_SD, MOD556 * 0.6, 100);
			ITEM(CUP_smg_Mac10, MOD556 * 0.6, 100);
			ITEM(CUP_smg_Mac10_rail, MOD556 * 0.6, 100);
			ITEM(CUP_smg_MP5A5, MOD556 * 0.6, 100);
			ITEM(CUP_smg_MP5A5_Rail, MOD556 * 0.6, 100);
			ITEM(CUP_smg_MP5A5_Rail_AFG, MOD556 * 0.6, 100);
			ITEM(CUP_smg_MP5A5_Rail_VFG, MOD556 * 0.6, 100);
			ITEM(CUP_smg_MP5SD6, MOD556 * 0.6, 100);
			ITEM(CUP_smg_MP7, MOD556 * 0.6, 100);
			ITEM(CUP_smg_MP7_desert, MOD556 * 0.6, 100);
			ITEM(CUP_smg_MP7_desert_zeiss, MOD556 * 0.6, 100);
			ITEM(CUP_smg_MP7_woodland, MOD556 * 0.6, 100);
			ITEM(CUP_smg_MP7_zeiss, MOD556 * 0.6, 100);
			ITEM(CUP_smg_p90_black, MOD556 * 0.6, 100);
			ITEM(CUP_smg_p90_olive, MOD556 * 0.6, 100);
			ITEM(CUP_smg_PS90_olive, MOD556 * 0.6, 100);
			ITEM(CUP_smg_SA61, OLD556 * 0.6, 100);
			ITEM(CUP_smg_SA61_RIS, OLD556 * RAIL * 0.6, 100);
			ITEM(CUP_smg_saiga9, MOD556 * 0.6, 100);
			ITEM(CUP_smg_UZI, MOD556 * 0.6, 100);
			ITEM(CUP_smg_vityaz, MOD556 * 0.6, 100);
			ITEM(CUP_smg_vityaz_top_rail, MOD556 * 0.6, 100);
			ITEM(CUP_smg_vityaz_vfg, MOD556 * 0.6, 100);
			ITEM(CUP_smg_vityaz_vfg_front_rail, MOD556 * 0.6, 100);
			ITEM(CUP_smg_vityaz_vfg_top_rail, MOD556 * 0.6, 100);
			ITEM(CUP_arifle_XM8_Compact, MOD556 * 0.6, 100);
			ITEM(CUP_arifle_XM8_Compact_FG, MOD556 * 0.6, 100);
			ITEM(CUP_arifle_XM8_Compact_FG_Green, MOD556 * 0.6, 100);
			ITEM(CUP_arifle_XM8_Compact_FG_OD, MOD556 * 0.6, 100);
			ITEM(CUP_arifle_XM8_Compact_FG_Rail, RAIL * MOD556 * 0.6, 100);
			ITEM(CUP_arifle_XM8_Compact_FG_Rail_Green, RAIL * MOD556 * 0.6, 100);
			ITEM(CUP_arifle_XM8_Compact_FG_Rail_OD, RAIL * MOD556 * 0.6, 100);
			ITEM(CUP_arifle_XM8_Compact_FG_Rail_Tan, RAIL * MOD556 * 0.6, 100);
			ITEM(CUP_arifle_XM8_Compact_FG_Tan, MOD556 * 0.6, 100);
			ITEM(CUP_arifle_XM8_Compact_Green, MOD556 * 0.6, 100);
			ITEM(CUP_arifle_XM8_Compact_OD, MOD556 * 0.6, 100);
			ITEM(CUP_arifle_XM8_Compact_Rail, RAIL * MOD556 * 0.6, 100);
			ITEM(CUP_arifle_XM8_Compact_Rail_Green, RAIL * MOD556 * 0.6, 100);
			ITEM(CUP_arifle_XM8_Compact_Rail_OD, RAIL * MOD556 * 0.6, 100);
			ITEM(CUP_arifle_XM8_Compact_Rail_Tan, RAIL * MOD556 * 0.6, 100);
			ITEM(CUP_arifle_XM8_Compact_Tan, MOD556 * 0.6, 100);
		};

		class launchersCup 
		{
			displayName = __EVAL(formatText ["%1 %2", localize "STR_A3AU_cup", localize "STR_A3AU_launchers"]);
			picture = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\secondaryWeapon_ca.paa";

			ITEM(CUP_launch_RShG2, DISPOSABLE_AP, 50);
			ITEM(CUP_launch_RPG26, DISPOSABLE_AT, 50);

			ITEM(CUP_launch_M72A6, DISPOSABLE_AT, 50);

			ITEM(CUP_launch_BF3, DISPOSABLE_AT * 1.5, 50);
			ITEM(CUP_launch_HCPF3, DISPOSABLE_AT * 1.5, 50);
			ITEM(CUP_launch_PzF3, DISPOSABLE_AT * 1.5, 50);

			ITEM(CUP_launch_NLAW, DISPOSABLE_AT * 2, 10);

			ITEM(CUP_launch_RPG7V, RPG_RELOADABLE, 50);

			ITEM(launch_RPG32_F, RPG_RELOADABLE, LAUNCHER_STOCK);
			ITEM(launch_RPG32_green_F, RPG_RELOADABLE, LAUNCHER_STOCK);
			ITEM(launch_RPG32_ghex_F, RPG_RELOADABLE, LAUNCHER_STOCK);

			ITEM(launch_MRAWS_olive_F, RPG_RELOADABLE, LAUNCHER_STOCK);
			ITEM(launch_MRAWS_olive_rail_F, RPG_RELOADABLE * RAIL, LAUNCHER_STOCK);
			ITEM(launch_MRAWS_green_F, RPG_RELOADABLE, LAUNCHER_STOCK);
			ITEM(launch_MRAWS_green_rail_F, RPG_RELOADABLE * RAIL, LAUNCHER_STOCK);
			ITEM(launch_MRAWS_sand_F, RPG_RELOADABLE, LAUNCHER_STOCK);
			ITEM(launch_MRAWS_sand_rail_F, RPG_RELOADABLE * RAIL, LAUNCHER_STOCK);
			ITEM(CUP_launch_MAAWS, RPG_RELOADABLE, LAUNCHER_STOCK);

			ITEM(CUP_launch_Mk153Mod0, RPG_RELOADABLE, LAUNCHER_STOCK);
			ITEM(CUP_launch_Mk153Mod0_blk, RPG_RELOADABLE, LAUNCHER_STOCK);

			ITEM(launch_O_Vorona_brown_F, WIRE_AT_LAUNCHER, 4);
			ITEM(launch_O_Vorona_green_F, WIRE_AT_LAUNCHER, 4);

			ITEM(CUP_launch_M136, DISPOSABLE_AT * 1.25, 50);
			ITEM(CUP_launch_RPG18, DISPOSABLE_AT, 50);

			ITEM(CUP_launch_APILAS, DISPOSABLE_AP, 50);

			ITEM(CUP_launch_FIM92Stinger, DISPOSABLE_AA_SET, 50);
			ITEM(CUP_launch_Igla, DISPOSABLE_AA_SET - 200, 50);
			ITEM(CUP_launch_9K32Strela, DISPOSABLE_AA_SET / 2, 50);
			
			ITEM(CUP_launch_M47, WIRE_AT_LAUNCHER, 8);
			ITEM(CUP_launch_Javelin, FAF_AT_LAUNCHER, 3);
		};

		class launcherMagazinesCup 
		{
			displayName = __EVAL(formatText ["%1 %2", localize "STR_A3AU_cup", localize "STR_A3AU_launcherAmmo"]);
			picture = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\cargoMag_ca.paa";

			class CUP_SMAW_Spotting {
				price = 10;
				stock = 50;
			};
			class CUP_SMAW_HEDP_M {
				price = RPG_AT_ROUND;
				stock = 50;
			};
			class CUP_SMAW_HEAA_M {
				price = RPG_THERM_ROUND;
				stock = 50;
			};
			class CUP_SMAW_NE_M {
				price = RPG_THERM_ROUND;
				stock = 50;
			};

			class CUP_PG7V_M {
				price = RPG_HE_ROUND;
				stock = 50;
			};
			class CUP_PG7VL_M {
				price = RPG_AT_ROUND;
				stock = 50;
			};
			class CUP_OG7_M {
				price = RPG_HE_ROUND;
				stock = 50;
			};
			class CUP_PG7VR_M {
				price = RPG_THERM_ROUND;
				stock = 50;
			};
			class CUP_TBG7V_M {
				price = RPG_THERM_ROUND;
				stock = 50;
			};

			class RPG7_F {
				price = RPG_HE_ROUND;
				stock = 50;
			};
			class NLAW_F {
				price = 300;
				stock = 30;
			};
			class MRAWS_HEAT_F {
				price = RPG_THERM_ROUND;
				stock = 50;
			};
			class CUP_MAAWS_HEAT_M {
				price = RPG_THERM_ROUND;
				stock = 50;
			};
			class MRAWS_HEAT55_F {
				price = RPG_AT_ROUND;
				stock = 50;
			};
			class CUP_MAAWS_HEDP_M {
				price = RPG_THERM_ROUND;
				stock = 50;
			};
			class MRAWS_HE_F {
				price = RPG_HE_ROUND;
				stock = 50;
			};
			class RPG32_HE_F {
				price = RPG_HE_ROUND;
				stock = 50;
			};
			class RPG32_F {
				price = RPG_AT_ROUND;
				stock = 50;
			};
			class Vorona_HE {
				price = WIRE_AT_MISSILE;
				stock = 15;
			};
			class Vorona_HEAT {
				price = WIRE_AT_MISSILE;
				stock = 15;
			};
			
			class CUP_AT13_M {
				price = WIRE_AT_MISSILE;
				stock = 15;
			};

			class CUP_Javelin_M {
				price = FAF_AT_MISSILE;
				stock = 50;
			};

			class CUP_Dragon_EP1_M {
				price = WIRE_AT_MISSILE;
				stock = 15;
			};
		};

		class specialWeaponsCup 
		{
			displayName = __EVAL(formatText ["%1 %2", localize "STR_A3AU_cup", localize "STR_A3AU_specialWeapons"]);
			picture = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\primaryWeapon_ca.paa";

			ITEM(CUP_hgun_BallisticShield_Armed, 300, RIFLE_STOCK);

			ITEM(CUP_glaunch_6G30, 1200, 100);
			ITEM(CUP_glaunch_M32, 1200, 100);
			ITEM(CUP_glaunch_M79, 1200, 100);
			ITEM(CUP_glaunch_Mk13, 1200, 100);
			ITEM(CUP_M79_EP1, 1200, 100);

			ITEM(CUP_sgun_AA12, 1000, RIFLE_STOCK);
			ITEM(CUP_sgun_SPAS12, 1000, 100);

			ITEM(CUP_AA12_PMC, 1000, 100);
			ITEM(CUP_PMC_AS50_scoped, 2000, 100);
			

			ITEM(CUP_arifle_AFU_ACR_blk_556_rd_snds, 1750, 100);
			ITEM(CUP_arifle_AFU_ACRC_wdl_556_flash_specter_laser, 1700, 100);
			ITEM(CUP_arifle_AFU_AK12_AFG_lush_1P87_snds, MOD545, 100);
			ITEM(CUP_arifle_AFU_AK74M_camo_ekp_flash_snds, OLD545, 100);
			ITEM(CUP_arifle_AFU_AK74M_GL_camo_kobra_snds, OLDGL545, 100);
			ITEM(CUP_arifle_AFU_G36C_hex_llm_micro, MOD556, 100);
			ITEM(CUP_arifle_AFU_G3A3_modern_ris_pvs10_bipod, OLD762, 100);
			ITEM(CUP_arifle_AFU_M4A1_MOE_short_wdl_AIM, OLD556, 100);
			ITEM(CUP_arifle_AFU_Mk16_STD_EGLM_rd_flash_snds, MODGL556, 100);

			ITEM(CUP_BAF_L110A1_Aim, 1500, 100);
			ITEM(CUP_BAF_L7A2_GPMG, 1500, 100);
			ITEM(CUP_BAF_NLAW_Launcher, 1100, 100);
			ITEM(CUP_BAF_AS50_scoped, 2000, 100);
			ITEM(CUP_BAF_LRR_scoped, 1500, 100);
			ITEM(CUP_BAF_LRR_scoped_W, 1500, 100);
			ITEM(CUP_BAF_L85A2_RIS_ACOG, MOD556, 100);
			ITEM(CUP_BAF_L85A2_RIS_CWS, MOD556, 100);
			ITEM(CUP_BAF_L85A2_RIS_SUSAT, MOD556, 100);
			ITEM(CUP_BAF_L85A2_UGL_ACOG, MOD556, 100);
			ITEM(CUP_BAF_L85A2_UGL_SUSAT, MOD556, 100);
			ITEM(CUP_BAF_L86A2_ACOG, MOD556, 100);

		};

		class sniperRiflesCup 
		{
			displayName = __EVAL(formatText ["%1 %2", localize "STR_A3AU_cup", localize "STR_A3AU_sniperRifles"]);
			picture = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\primaryWeapon_ca.paa";

ITEM(CUP_srifle_AS50, SNIP127 * 2, 100);
ITEM(CUP_srifle_AWM_blk, MOD762 * 2, 100);
ITEM(CUP_srifle_AWM_des, MOD762 * 2, 100);
ITEM(CUP_srifle_AWM_wdl, MOD762 * 2, 100);
ITEM(CUP_srifle_CZ550, OLD762 * 2, 100);
ITEM(CUP_srifle_CZ550_rail, OLD762 * RAIL * 2, 100);
ITEM(CUP_srifle_CZ750, MOD762 * 2, 100);
ITEM(CUP_CZ_750_S1_ACR, MOD762 * 2, 100);
ITEM(CUP_srifle_G22_blk, MOD762 * 2, 100);
ITEM(CUP_srifle_G22_des, MOD762 * 2, 100);
ITEM(CUP_srifle_G22_wdl, MOD762 * 2, 100);
ITEM(CUP_srifle_ksvk, SNIP127 * 2, 100);
ITEM(CUP_srifle_L129A1, MOD762 * 2, 100);
ITEM(CUP_srifle_L129A1_ctrg, MOD762 * 2, 100);
ITEM(CUP_srifle_L129A1_ctrgt, MOD762 * 2, 100);
ITEM(CUP_srifle_L129A1_d, MOD762 * 2, 100);
ITEM(CUP_srifle_L129A1_HG, MOD762 * 2, 100);
ITEM(CUP_srifle_L129A1_HG_ctrg, MOD762 * 2, 100);
ITEM(CUP_srifle_L129A1_HG_ctrgt, MOD762 * 2, 100);
ITEM(CUP_srifle_L129A1_HG_d, MOD762 * 2, 100);
ITEM(CUP_srifle_L129A1_HG_w, MOD762 * 2, 100);
ITEM(CUP_srifle_L129A1_w, MOD762 * 2, 100);
ITEM(CUP_srifle_LeeEnfield, OLD762 * 2, 100);
ITEM(CUP_srifle_LeeEnfield_rail, OLD762 * RAIL * 2, 100);
ITEM(CUP_srifle_LeeEnfield_T, OLD762 * 2, 100);
ITEM(CUP_srifle_M107_Desert, SNIP127 * 2, 100);
ITEM(CUP_srifle_M107_Pristine, SNIP127 * 2, 100);
ITEM(CUP_srifle_M107_Snow, SNIP127 * 2, 100);
ITEM(CUP_srifle_M107_Woodland, SNIP127 * 2, 100);
ITEM(CUP_srifle_M110, MOD762 * 2, 100);
ITEM(CUP_srifle_M110_black, MOD762 * 2, 100);
ITEM(CUP_srifle_m110_kac, MOD762 * 2, 100);
ITEM(CUP_srifle_m110_kac_black, MOD762 * 2, 100);
ITEM(CUP_srifle_m110_kac_woodland, MOD762 * 2, 100);
ITEM(CUP_srifle_M110_woodland, MOD762 * 2, 100);
ITEM(CUP_srifle_M14, OLD762 * 2, 100);
ITEM(CUP_srifle_M14_DMR, OLD762 * 2, 100);
ITEM(CUP_srifle_M2010_blk, MOD762 * 2, 100);
ITEM(CUP_srifle_M2010_ctrg, MOD762 * 2, 100);
ITEM(CUP_srifle_M2010_ctrgt, MOD762 * 2, 100);
ITEM(CUP_srifle_M2010_dsrt, MOD762 * 2, 100);
ITEM(CUP_srifle_M2010_hex, MOD762 * 2, 100);
ITEM(CUP_srifle_M2010_wdl, MOD762 * 2, 100);
ITEM(CUP_srifle_M2010_winter, MOD762 * 2, 100);
ITEM(CUP_srifle_M21, OLD762 * 2, 100);
ITEM(CUP_srifle_M21_artel, OLD762 * 2, 100);
ITEM(CUP_srifle_M21_ris, OLD762 * RAIL * 2, 100);
ITEM(CUP_srifle_M24_blk, OLD762 * 2, 100);
ITEM(CUP_srifle_M24_des, OLD762 * 2, 100);
ITEM(CUP_srifle_M24_ghillie, OLD762 * 2, 100);
ITEM(CUP_srifle_M24_wdl, OLD762 * 2, 100);
ITEM(CUP_srifle_M40A3, OLD762 * 2, 100);
ITEM(CUP_srifle_Mk12SPR, OLD556 * 2, 100);
ITEM(CUP_srifle_Mk18_blk, MOD762 * 2, 100);
ITEM(CUP_srifle_Mk18_des, MOD762 * 2, 100);
ITEM(CUP_srifle_Mk18_wdl, MOD762 * 2, 100);
ITEM(CUP_srifle_Mosin_Nagant, OLD762 * 2, 100);
ITEM(CUP_srifle_Remington700, OLD762 * 2, 100);
ITEM(CUP_srifle_RSASS_Black, MOD762 * 2, 100);
ITEM(CUP_srifle_RSASS_Dazzle, MOD762 * 2, 100);
ITEM(CUP_srifle_RSASS_Jungle, MOD762 * 2, 100);
ITEM(CUP_srifle_RSASS_Sand, MOD762 * 2, 100);
ITEM(CUP_srifle_RSASS_WDL, MOD762 * 2, 100);
ITEM(CUP_srifle_RSASS_WDLNet, MOD762 * 2, 100);
ITEM(CUP_srifle_RSASS_Winter, MOD762 * 2, 100);
ITEM(CUP_srifle_SVD, OLD762 * 2, 100);
ITEM(CUP_srifle_SVD_des, OLD762 * 2, 100);
ITEM(CUP_srifle_SVD_des_top_rail, OLD762 * RAIL * 2, 100);
ITEM(CUP_srifle_SVD_top_rail, OLD762 * RAIL * 2, 100);
ITEM(CUP_srifle_SVD_wdl, OLD762 * 2, 100);
ITEM(CUP_srifle_SVD_wdl_ghillie, OLD762 * 2, 100);
ITEM(CUP_srifle_SVD_wdl_top_rail, OLD762 * RAIL * 2, 100);
ITEM(CUP_srifle_VSSVintorez, MOD762 * 2, 100);
ITEM(CUP_srifle_VSSVintorez_top_rail, MOD762 * 2, 100);
ITEM(CUP_srifle_VSSVintorez_VFG, MOD762 * 2, 100);
ITEM(CUP_srifle_VSSVintorez_VFG_top_rail, MOD762 * 2, 100);
ITEM(CUP_VSS_vintorez, MOD762 * 2, 100);

ITEM(CUP_SVD, OLD762 * 2, 100);
ITEM(CUP_SVD_CAMO, OLD762 * 2, 100);
ITEM(CUP_SVD_camo_d, OLD762 * 2, 100);
ITEM(CUP_SVD_camo_d_half, OLD762 * 2, 100);
ITEM(CUP_SVD_camo_g, OLD762 * 2, 100);
ITEM(CUP_SVD_camo_g_half, OLD762 * 2, 100);

ITEM(CUP_m8_sharpshooter, MOD556 * 2, 100);

ITEM(CUP_M24, OLD762 * 2, 100);
ITEM(CUP_M40A3, OLD762 * 2, 100);
ITEM(CUP_M107, SNIP127 * 2, 100);

ITEM(CUP_DMR, OLD762 * 2, 100);

ITEM(CUP_arifle_XM8_Sharpshooter, MOD556 * 2, 100);
ITEM(CUP_arifle_XM8_Sharpshooter_FG, MOD556 * 2, 100);
ITEM(CUP_arifle_XM8_Sharpshooter_FG_Green, MOD556 * 2, 100);
ITEM(CUP_arifle_XM8_Sharpshooter_FG_OD, MOD556 * 2, 100);
ITEM(CUP_arifle_XM8_Sharpshooter_FG_Rail, MOD556 * 2, 100);
ITEM(CUP_arifle_XM8_Sharpshooter_FG_Rail_Green, MOD556 * 2, 100);
ITEM(CUP_arifle_XM8_Sharpshooter_FG_Rail_OD, MOD556 * 2, 100);
ITEM(CUP_arifle_XM8_Sharpshooter_FG_Rail_Shark, MOD556 * 2, 100);
ITEM(CUP_arifle_XM8_Sharpshooter_FG_Rail_Tan, MOD556 * 2, 100);
ITEM(CUP_arifle_XM8_Sharpshooter_FG_Shark, MOD556 * 2, 100);
ITEM(CUP_arifle_XM8_Sharpshooter_FG_Tan, MOD556 * 2, 100);
ITEM(CUP_arifle_XM8_Sharpshooter_Green, MOD556 * 2, 100);
ITEM(CUP_arifle_XM8_Sharpshooter_OD, MOD556 * 2, 100);
ITEM(CUP_arifle_XM8_Sharpshooter_Rail, MOD556 * 2, 100);
ITEM(CUP_arifle_XM8_Sharpshooter_Rail_Green, MOD556 * 2, 100);
ITEM(CUP_arifle_XM8_Sharpshooter_Rail_OD, MOD556 * 2, 100);
ITEM(CUP_arifle_XM8_Sharpshooter_Rail_Shark, MOD556 * 2, 100);
ITEM(CUP_arifle_XM8_Sharpshooter_Rail_Tan, MOD556 * 2, 100);
ITEM(CUP_arifle_XM8_Sharpshooter_Shark, MOD556 * 2, 100);
ITEM(CUP_arifle_XM8_Sharpshooter_Tan, MOD556 * 2, 100);


		};

		class mgCup 
		{
			displayName = __EVAL(formatText ["%1 %2", localize "STR_A3AU_cup", localize "STR_A3AU_mgs"]);
			picture = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\primaryWeapon_ca.paa";

ITEM(CUP_arifle_MG36, MOD556 * 1.5, 100);
ITEM(CUP_arifle_MG36_camo, MOD556 * 1.5, 100);
ITEM(CUP_arifle_MG36_hex, MOD556 * 1.5, 100);
ITEM(CUP_arifle_MG36_wdl, MOD556 * 1.5, 100);

ITEM(CUP_arifle_RPK74, OLD545 * 1.5, 100);
ITEM(CUP_arifle_RPK74_45, OLD545 * 1.5, 100);
ITEM(CUP_arifle_RPK74_45_top_rail, OLD545 * RAIL * 1.5, 100);
ITEM(CUP_arifle_RPK74_top_rail, OLD545 * RAIL * 1.5, 100);
ITEM(CUP_arifle_RPK74M, OLD545 * 1.5, 100);
ITEM(CUP_arifle_RPK74M_railed, OLD545 * RAIL * 1.5, 100);
ITEM(CUP_arifle_RPK74M_top_rail, OLD545 * RAIL * 1.5, 100);

ITEM(CUP_arifle_XM8_SAW, MOD556 * 1.5, 100);
ITEM(CUP_arifle_XM8_SAW_FG, MOD556 * 1.5, 100);
ITEM(CUP_arifle_XM8_SAW_FG_Green, MOD556 * 1.5, 100);
ITEM(CUP_arifle_XM8_SAW_FG_OD, MOD556 * 1.5, 100);
ITEM(CUP_arifle_XM8_SAW_FG_Rail, MOD556 * 1.5, 100);
ITEM(CUP_arifle_XM8_SAW_FG_Rail_Green, MOD556 * 1.5, 100);
ITEM(CUP_arifle_XM8_SAW_FG_Rail_OD, MOD556 * 1.5, 100);
ITEM(CUP_arifle_XM8_SAW_FG_Rail_Shark, MOD556 * 1.5, 100);
ITEM(CUP_arifle_XM8_SAW_FG_Rail_Tan, MOD556 * 1.5, 100);
ITEM(CUP_arifle_XM8_SAW_FG_Shark, MOD556 * 1.5, 100);
ITEM(CUP_arifle_XM8_SAW_FG_Tan, MOD556 * 1.5, 100);
ITEM(CUP_arifle_XM8_SAW_Green, MOD556 * 1.5, 100);
ITEM(CUP_arifle_XM8_SAW_OD, MOD556 * 1.5, 100);
ITEM(CUP_arifle_XM8_SAW_Rail, MOD556 * 1.5, 100);
ITEM(CUP_arifle_XM8_SAW_Rail_Green, MOD556 * 1.5, 100);
ITEM(CUP_arifle_XM8_SAW_Rail_OD, MOD556 * 1.5, 100);
ITEM(CUP_arifle_XM8_SAW_Rail_Shark, MOD556 * 1.5, 100);
ITEM(CUP_arifle_XM8_SAW_Rail_Tan, MOD556 * 1.5, 100);
ITEM(CUP_arifle_XM8_SAW_Shark, MOD556 * 1.5, 100);
ITEM(CUP_arifle_XM8_SAW_Tan, MOD556 * 1.5, 100);
ITEM(CUP_arifle_L86A2, MOD556 * 1.5, 100);
ITEM(CUP_lmg_FNMAG, OLD762 * 1.5, 100);
ITEM(CUP_lmg_FNMAG_RIS, OLD762 * RAIL * 1.5, 100);
ITEM(CUP_lmg_FNMAG_RIS_modern, OLD762 * RAIL * 1.5, 100);
ITEM(CUP_lmg_L7A2, MOD762 * 1.5, 100);
ITEM(CUP_lmg_L7A2_Flat, MOD762 * 1.5, 100);
ITEM(CUP_lmg_M240, MOD762 * 1.5, 100);
ITEM(CUP_lmg_M240_B, MOD762 * 1.5, 100);
ITEM(CUP_lmg_M240_norail, MOD762 * 1.5, 100);
ITEM(CUP_lmg_M249, MOD556 * 1.5, 100);
ITEM(CUP_lmg_M249_E1, MOD556 * 1.5, 100);
ITEM(CUP_lmg_M249_E2, MOD556 * 1.5, 100);
ITEM(CUP_lmg_m249_para, MOD556 * 1.5, 100);
ITEM(CUP_lmg_m249_para_gl, MODGL556 * 1.5, 100);
ITEM(CUP_lmg_m249_pip1, MOD556 * 1.5, 100);
ITEM(CUP_lmg_m249_pip2, MOD556 * 1.5, 100);
ITEM(CUP_lmg_m249_pip3, MOD556 * 1.5, 100);
ITEM(CUP_lmg_m249_pip4, MOD556 * 1.5, 100);
ITEM(CUP_lmg_m249_SQuantoon, MOD556 * 1.5, 100);
ITEM(CUP_lmg_M60, OLD762 * 1.5, 100);
ITEM(CUP_lmg_M60E4, OLD762 * 1.5, 100);
ITEM(CUP_lmg_M60E4_desert, OLD762 * 1.5, 100);
ITEM(CUP_lmg_M60E4_jungle, OLD762 * 1.5, 100);
ITEM(CUP_lmg_M60E4_norail, OLD762 * RAIL * 1.5, 100);
ITEM(CUP_lmg_M60E4_norail_desert, OLD762 * RAIL * 1.5, 100);
ITEM(CUP_lmg_M60E4_norail_jungle, OLD762 * RAIL * 1.5, 100);
ITEM(CUP_lmg_M60E4_norail_wood, OLD762 * RAIL * 1.5, 100);
ITEM(CUP_lmg_M60E4_wood, OLD762 * 1.5, 100);
ITEM(CUP_lmg_MG3, OLD762 * 1.5, 100);
ITEM(CUP_lmg_MG3_M145, OLD762 * 1.5, 100);
ITEM(CUP_lmg_MG3_rail, OLD762 * RAIL * 1.5, 100);
ITEM(CUP_lmg_minimi, MOD556 * 1.5, 100);
ITEM(CUP_lmg_minimi_railed, MOD556 * 1.5, 100);
ITEM(CUP_lmg_minimipara, MOD556 * 1.5, 100);
ITEM(CUP_lmg_Mk48, MOD762 * 1.5, 100);
ITEM(CUP_lmg_Mk48_des, MOD762 * 1.5, 100);
ITEM(CUP_lmg_Mk48_nohg, MOD762 * 1.5, 100);
ITEM(CUP_lmg_Mk48_nohg_des, MOD762 * 1.5, 100);
ITEM(CUP_lmg_Mk48_nohg_od, MOD762 * 1.5, 100);
ITEM(CUP_lmg_Mk48_nohg_tan, MOD762 * 1.5, 100);
ITEM(CUP_lmg_Mk48_nohg_wdl, MOD762 * 1.5, 100);
ITEM(CUP_lmg_Mk48_od, MOD762 * 1.5, 100);
ITEM(CUP_lmg_Mk48_tan, MOD762 * 1.5, 100);
ITEM(CUP_lmg_Mk48_wdl, MOD762 * 1.5, 100);
ITEM(CUP_lmg_Pecheneg, MOD762 * 1.5, 100);
ITEM(CUP_lmg_Pecheneg_B50_vfg, MOD762 * 1.5, 100);
ITEM(CUP_lmg_Pecheneg_desert, MOD762 * 1.5, 100);
ITEM(CUP_lmg_Pecheneg_top_rail, MOD762 * 1.5, 100);
ITEM(CUP_lmg_Pecheneg_top_rail_B50_vfg, MOD762 * 1.5, 100);
ITEM(CUP_lmg_Pecheneg_woodland, MOD762 * 1.5, 100);
ITEM(CUP_lmg_PKM, OLD762 * 1.5, 100);
ITEM(CUP_lmg_PKM_B50_vfg, OLD762 * RAIL * 1.5, 100);
ITEM(CUP_lmg_PKM_front_rail_B50_vfg, OLD762 * RAIL * 1.5, 100);
ITEM(CUP_lmg_PKM_top_rail, OLD762 * RAIL * 1.5, 100);
ITEM(CUP_lmg_PKM_top_rail_B50_vfg, OLD762 * RAIL * 1.5, 100);
ITEM(CUP_lmg_PKMN, OLD762 * RAIL * 1.5, 100);
ITEM(CUP_lmg_UK59, MOD762 * 1.5, 100);
ITEM(CUP_M240, MOD762 * 1.5, 100);
ITEM(CUP_M249, MOD556 * 1.5, 100);


ITEM(CUP_m8_SAW, MOD556 * 1.5, 100);

ITEM(CUP_MG36, MOD556 * 1.5, 100);
ITEM(CUP_MG36_camo, MOD556 * 1.5, 100);

ITEM(CUP_Mk_48, MOD762 * 1.5, 100);

ITEM(CUP_Pecheneg, MOD762 * 1.5, 100);
ITEM(CUP_PK, OLD762 * 1.5, 100);

ITEM(CUP_UK59_ACR, MOD762 * 1.5, 100);

ITEM(CUP_RPK_74, OLD545 * 1.5, 100);
		};

		class riflesCup 
		{
			displayName = __EVAL(formatText ["%1 %2", localize "STR_A3AU_cup", localize "STR_A3AU_rifles"]);
			picture = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\primaryWeapon_ca.paa";

ITEM(CUP_AK_107, MOD545, 100);
ITEM(CUP_AK_47_M, OLD762, 100);
ITEM(CUP_AK_47_S, OLD762, 100);
ITEM(CUP_AK_74, OLD545, 100);
ITEM(CUP_AK_74_GL, OLD5GL545, 100);
ITEM(CUP_AKS_74, OLD762, 100);
ITEM(CUP_AKS_74_U, OLD545, 100);
ITEM(CUP_AKS_GOLD, 9999, 100);

ITEM(CUP_arfile_Sa58_Carbine_RIS_AFG_desert, OLD762 * RAIL, 100);
ITEM(CUP_arfile_Sa58_Carbine_RIS_AFG_woodland, OLD762 * RAIL, 100);
ITEM(CUP_arifle_ACR_blk_556, MOD556, 100);
ITEM(CUP_arifle_ACR_blk_68, MOD65, 100);
ITEM(CUP_arifle_ACR_DMR_blk_556, MOD556, 100);
ITEM(CUP_arifle_ACR_DMR_blk_68, MOD65, 100);
ITEM(CUP_arifle_ACR_DMR_snw_556, MOD556, 100);
ITEM(CUP_arifle_ACR_DMR_snw_68, MOD65, 100);
ITEM(CUP_arifle_ACR_DMR_tan_556, MOD556, 100);
ITEM(CUP_arifle_ACR_DMR_tan_68, MOD65, 100);
ITEM(CUP_arifle_ACR_DMR_wdl_556, MOD556, 100);
ITEM(CUP_arifle_ACR_DMR_wdl_68, MOD65, 100);
ITEM(CUP_arifle_ACR_EGLM_blk_556, MODGL556, 100);
ITEM(CUP_arifle_ACR_EGLM_blk_68, MODGL65, 100);
ITEM(CUP_arifle_ACR_EGLM_snw_556, MODGL556, 100);
ITEM(CUP_arifle_ACR_EGLM_snw_68, MODGL65, 100);
ITEM(CUP_arifle_ACR_EGLM_tan_556, MODGL556, 100);
ITEM(CUP_arifle_ACR_EGLM_tan_68, MODGL65, 100);
ITEM(CUP_arifle_ACR_EGLM_wdl_556, MODGL556, 100);
ITEM(CUP_arifle_ACR_EGLM_wdl_68, MODGL65, 100);
ITEM(CUP_arifle_ACR_snw_556, MOD556, 100);
ITEM(CUP_arifle_ACR_snw_68, MOD65, 100);
ITEM(CUP_arifle_ACR_tan_556, MOD556, 100);
ITEM(CUP_arifle_ACR_tan_68, MOD65, 100);
ITEM(CUP_arifle_ACR_wdl_556, MOD556, 100);
ITEM(CUP_arifle_ACR_wdl_68, MOD65, 100);
ITEM(CUP_arifle_ACRC_blk_556, MOD556, 100);
ITEM(CUP_arifle_ACRC_blk_68, MOD65, 100);
ITEM(CUP_arifle_ACRC_EGLM_blk_556, MODGL556, 100);
ITEM(CUP_arifle_ACRC_EGLM_blk_68, MODGL65, 100);
ITEM(CUP_arifle_ACRC_EGLM_snw_556, MODGL556, 100);
ITEM(CUP_arifle_ACRC_EGLM_snw_68, MODGL65, 100);
ITEM(CUP_arifle_ACRC_EGLM_tan_556, MODGL556, 100);
ITEM(CUP_arifle_ACRC_EGLM_tan_68, MODGL65, 100);
ITEM(CUP_arifle_ACRC_EGLM_wdl_556, MODGL556, 100);
ITEM(CUP_arifle_ACRC_EGLM_wdl_68, MODGL65, 100);
ITEM(CUP_arifle_ACRC_snw_556, MOD556, 100);
ITEM(CUP_arifle_ACRC_snw_68, MOD65, 100);
ITEM(CUP_arifle_ACRC_tan_556, MOD556, 100);
ITEM(CUP_arifle_ACRC_tan_68, MOD65, 100);
ITEM(CUP_arifle_ACRC_wdl_556, MOD556, 100);
ITEM(CUP_arifle_ACRC_wdl_68, MOD65, 100);

ITEM(CUP_arifle_AG36, MODGL556, 100);
ITEM(CUP_arifle_AG36_camo, MODGL556, 100);
ITEM(CUP_arifle_AG36_wdl, MODGL556, 100);
ITEM(CUP_arifle_AK101, MOD556, 100);
ITEM(CUP_arifle_AK101_GL, MODGL556, 100);
ITEM(CUP_arifle_AK101_GL_railed, MODGL556, 100);
ITEM(CUP_arifle_AK101_GL_top_rail, MODGL556, 100);
ITEM(CUP_arifle_AK101_railed, MOD556, 100);
ITEM(CUP_arifle_AK101_top_rail, MOD556, 100);
ITEM(CUP_arifle_AK102, MOD556, 100);
ITEM(CUP_arifle_AK102_railed, MOD556, 100);
ITEM(CUP_arifle_AK102_top_rail, MOD556, 100);
ITEM(CUP_arifle_AK103, MOD762, 100);
ITEM(CUP_arifle_AK103_GL, MODGL762, 100);
ITEM(CUP_arifle_AK103_GL_railed, MODGL762, 100);
ITEM(CUP_arifle_AK103_GL_top_rail, MODGL762, 100);
ITEM(CUP_arifle_AK103_railed, MOD762, 100);
ITEM(CUP_arifle_AK103_top_rail, MOD762, 100);
ITEM(CUP_arifle_AK104, MOD762, 100);
ITEM(CUP_arifle_AK104_railed, MOD762, 100);
ITEM(CUP_arifle_AK104_top_rail, MOD762, 100);
ITEM(CUP_arifle_AK105, MOD545, 100);
ITEM(CUP_arifle_AK105_railed, MOD545, 100);
ITEM(CUP_arifle_AK105_top_rail, MOD545, 100);
ITEM(CUP_arifle_AK107, MOD545, 100);
ITEM(CUP_arifle_AK107_GL, MODGL545, 100);
ITEM(CUP_arifle_AK107_GL_railed, MODGL545, 100);
ITEM(CUP_arifle_AK107_GL_top_rail, MODGL545, 100);
ITEM(CUP_arifle_AK107_railed, MOD545, 100);
ITEM(CUP_arifle_AK107_top_rail, MOD545, 100);
ITEM(CUP_arifle_AK108, MOD556, 100);
ITEM(CUP_arifle_AK108_GL, MODGL556, 100);
ITEM(CUP_arifle_AK108_GL_railed, MODGL556, 100);
ITEM(CUP_arifle_AK108_GL_top_rail, MODGL556, 100);
ITEM(CUP_arifle_AK108_railed, MOD556, 100);
ITEM(CUP_arifle_AK108_top_rail, MOD556, 100);
ITEM(CUP_arifle_AK109, MOD762, 100);
ITEM(CUP_arifle_AK109_GL, MODGL762, 100);
ITEM(CUP_arifle_AK109_GL_railed, MODGL762, 100);
ITEM(CUP_arifle_AK109_GL_top_rail, MODGL762, 100);
ITEM(CUP_arifle_AK109_railed, MOD762, 100);
ITEM(CUP_arifle_AK109_top_rail, MOD762, 100);
ITEM(CUP_arifle_AK12_AFG_arid, MOD545, 100);
ITEM(CUP_arifle_AK12_AFG_bicolor, MOD545, 100);
ITEM(CUP_arifle_AK12_AFG_black, MOD545, 100);
ITEM(CUP_arifle_AK12_AFG_lush, MOD545, 100);
ITEM(CUP_arifle_AK12_AFG_snowtiger, MOD545, 100);
ITEM(CUP_arifle_AK12_AFG_tan, MOD545, 100);
ITEM(CUP_arifle_AK12_AFG_tiger, MOD545, 100);
ITEM(CUP_arifle_AK12_AFG_winter, MOD545, 100);
ITEM(CUP_arifle_AK12_AFG_wood, MOD545, 100);
ITEM(CUP_arifle_AK12_arid, MOD545, 100);
ITEM(CUP_arifle_AK12_bicolor, MOD545, 100);
ITEM(CUP_arifle_AK12_black, MOD545, 100);
ITEM(CUP_arifle_AK12_GP34_arid, MODGL545, 100);
ITEM(CUP_arifle_AK12_GP34_bicolor, MODGL545, 100);
ITEM(CUP_arifle_AK12_GP34_black, MODGL545, 100);
ITEM(CUP_arifle_AK12_GP34_lush, MODGL545, 100);
ITEM(CUP_arifle_AK12_GP34_snowtiger, MODGL545, 100);
ITEM(CUP_arifle_AK12_GP34_tan, MODGL545, 100);
ITEM(CUP_arifle_AK12_GP34_tiger, MODGL545, 100);
ITEM(CUP_arifle_AK12_GP34_winter, MODGL545, 100);
ITEM(CUP_arifle_AK12_GP34_wood, MODGL545, 100);
ITEM(CUP_arifle_AK12_lush, MOD545, 100);
ITEM(CUP_arifle_AK12_snowtiger, MOD545, 100);
ITEM(CUP_arifle_AK12_tan, MOD545, 100);
ITEM(CUP_arifle_AK12_tiger, MOD545, 100);
ITEM(CUP_arifle_AK12_VG_arid, MOD545, 100);
ITEM(CUP_arifle_AK12_VG_bicolor, MOD545, 100);
ITEM(CUP_arifle_AK12_VG_black, MOD545, 100);
ITEM(CUP_arifle_AK12_VG_lush, MOD545, 100);
ITEM(CUP_arifle_AK12_VG_snowtiger, MOD545, 100);
ITEM(CUP_arifle_AK12_VG_tan, MOD545, 100);
ITEM(CUP_arifle_AK12_VG_tiger, MOD545, 100);
ITEM(CUP_arifle_AK12_VG_winter, MOD545, 100);
ITEM(CUP_arifle_AK12_VG_wood, MOD545, 100);
ITEM(CUP_arifle_AK12_winter, MOD545, 100);
ITEM(CUP_arifle_AK12_wood, MOD545, 100);
ITEM(CUP_arifle_AK15_AFG_arid, MOD762, 100);
ITEM(CUP_arifle_AK15_AFG_bicolor, MOD762, 100);
ITEM(CUP_arifle_AK15_AFG_black, MOD762, 100);
ITEM(CUP_arifle_AK15_AFG_lush, MOD762, 100);
ITEM(CUP_arifle_AK15_AFG_snowtiger, MOD762, 100);
ITEM(CUP_arifle_AK15_AFG_tan, MOD762, 100);
ITEM(CUP_arifle_AK15_AFG_tiger, MOD762, 100);
ITEM(CUP_arifle_AK15_AFG_winter, MOD762, 100);
ITEM(CUP_arifle_AK15_AFG_wood, MOD762, 100);
ITEM(CUP_arifle_AK15_arid, MOD762, 100);
ITEM(CUP_arifle_AK15_bicolor, MOD762, 100);
ITEM(CUP_arifle_AK15_black, MOD762, 100);
ITEM(CUP_arifle_AK15_GP34_arid, MODGL762, 100);
ITEM(CUP_arifle_AK15_GP34_bicolor, MODGL762, 100);
ITEM(CUP_arifle_AK15_GP34_black, MODGL762, 100);
ITEM(CUP_arifle_AK15_GP34_lush, MODGL762, 100);
ITEM(CUP_arifle_AK15_GP34_snowtiger, MODGL762, 100);
ITEM(CUP_arifle_AK15_GP34_tan, MODGL762, 100);
ITEM(CUP_arifle_AK15_GP34_tiger, MODGL762, 100);
ITEM(CUP_arifle_AK15_GP34_winter, MODGL762, 100);
ITEM(CUP_arifle_AK15_GP34_wood, MODGL762, 100);
ITEM(CUP_arifle_AK15_lush, MOD762, 100);
ITEM(CUP_arifle_AK15_snowtiger, MOD762, 100);
ITEM(CUP_arifle_AK15_tan, MOD762, 100);
ITEM(CUP_arifle_AK15_tiger, MOD762, 100);
ITEM(CUP_arifle_AK15_VG_arid, MOD762, 100);
ITEM(CUP_arifle_AK15_VG_bicolor, MOD762, 100);
ITEM(CUP_arifle_AK15_VG_black, MOD762, 100);
ITEM(CUP_arifle_AK15_VG_lush, MOD762, 100);
ITEM(CUP_arifle_AK15_VG_snowtiger, MOD762, 100);
ITEM(CUP_arifle_AK15_VG_tan, MOD762, 100);
ITEM(CUP_arifle_AK15_VG_tiger, MOD762, 100);
ITEM(CUP_arifle_AK15_VG_winter, MOD762, 100);
ITEM(CUP_arifle_AK15_VG_wood, MOD762, 100);
ITEM(CUP_arifle_AK15_winter, MOD762, 100);
ITEM(CUP_arifle_AK15_wood, MOD762, 100);
ITEM(CUP_arifle_AK19_AFG_arid, MOD556, 100);
ITEM(CUP_arifle_AK19_AFG_bicolor, MOD556, 100);
ITEM(CUP_arifle_AK19_AFG_black, MOD556, 100);
ITEM(CUP_arifle_AK19_AFG_lush, MOD556, 100);
ITEM(CUP_arifle_AK19_AFG_snowtiger, MOD556, 100);
ITEM(CUP_arifle_AK19_AFG_tan, MOD556, 100);
ITEM(CUP_arifle_AK19_AFG_tiger, MOD556, 100);
ITEM(CUP_arifle_AK19_AFG_winter, MOD556, 100);
ITEM(CUP_arifle_AK19_AFG_wood, MOD556, 100);
ITEM(CUP_arifle_AK19_arid, MOD556, 100);
ITEM(CUP_arifle_AK19_bicolor, MOD556, 100);
ITEM(CUP_arifle_AK19_black, MOD556, 100);
ITEM(CUP_arifle_AK19_GP34_arid, MODGL556, 100);
ITEM(CUP_arifle_AK19_GP34_bicolor, MODGL556, 100);
ITEM(CUP_arifle_AK19_GP34_black, MODGL556, 100);
ITEM(CUP_arifle_AK19_GP34_lush, MODGL556, 100);
ITEM(CUP_arifle_AK19_GP34_snowtiger, MODGL556, 100);
ITEM(CUP_arifle_AK19_GP34_tan, MODGL556, 100);
ITEM(CUP_arifle_AK19_GP34_tiger, MODGL556, 100);
ITEM(CUP_arifle_AK19_GP34_winter, MODGL556, 100);
ITEM(CUP_arifle_AK19_GP34_wood, MODGL556, 100);
ITEM(CUP_arifle_AK19_lush, MOD556, 100);
ITEM(CUP_arifle_AK19_snowtiger, MOD556, 100);
ITEM(CUP_arifle_AK19_tan, MOD556, 100);
ITEM(CUP_arifle_AK19_tiger, MOD556, 100);
ITEM(CUP_arifle_AK19_VG_arid, MOD556, 100);
ITEM(CUP_arifle_AK19_VG_bicolor, MOD556, 100);
ITEM(CUP_arifle_AK19_VG_black, MOD556, 100);
ITEM(CUP_arifle_AK19_VG_lush, MOD556, 100);
ITEM(CUP_arifle_AK19_VG_snowtiger, MOD556, 100);
ITEM(CUP_arifle_AK19_VG_tan, MOD556, 100);
ITEM(CUP_arifle_AK19_VG_tiger, MOD556, 100);
ITEM(CUP_arifle_AK19_VG_winter, MOD556, 100);
ITEM(CUP_arifle_AK19_VG_wood, MOD556, 100);
ITEM(CUP_arifle_AK19_winter, MOD556, 100);
ITEM(CUP_arifle_AK19_wood, MOD556, 100);
ITEM(CUP_arifle_AK47, OLD762, 100);
ITEM(CUP_arifle_AK47_Early, OLD762, 100);
ITEM(CUP_arifle_AK47_GL, OLDGL762, 100);
ITEM(CUP_arifle_AK47_GL_Early, OLDGL762, 100);
ITEM(CUP_arifle_AK47_GL_top_rail, OLDGL762, 100);
ITEM(CUP_arifle_AK47_top_rail, OLD762 * RAIL, 100);
ITEM(CUP_arifle_AK74, OLD545, 100);
ITEM(CUP_arifle_AK74_Early, OLD545, 100);
ITEM(CUP_arifle_AK74_GL, OLDGL545, 100);
ITEM(CUP_arifle_AK74_GL_Early, OLDGL545, 100);
ITEM(CUP_arifle_AK74_GL_top_rail, OLDGL545, 100);
ITEM(CUP_arifle_AK74_top_rail, OLD545 * RAIL, 100);
ITEM(CUP_arifle_AK74M, OLD545, 100);
ITEM(CUP_arifle_AK74M_camo, OLD545, 100);
ITEM(CUP_arifle_AK74M_desert, OLD545, 100);
ITEM(CUP_arifle_AK74M_GL, OLDGL545, 100);
ITEM(CUP_arifle_AK74M_GL_camo, OLDGL545, 100);
ITEM(CUP_arifle_AK74M_GL_desert, OLDGL545, 100);
ITEM(CUP_arifle_AK74M_GL_railed, OLDGL545, 100);
ITEM(CUP_arifle_AK74M_GL_railed_camo, OLDGL545, 100);
ITEM(CUP_arifle_AK74M_GL_railed_desert, OLDGL545, 100);
ITEM(CUP_arifle_AK74M_GL_top_rail, OLDGL545, 100);
ITEM(CUP_arifle_AK74M_GL_top_rail_camo, OLDGL545, 100);
ITEM(CUP_arifle_AK74M_GL_top_rail_desert, OLDGL545, 100);
ITEM(CUP_arifle_AK74M_railed, OLD545 * RAIL, 100);
ITEM(CUP_arifle_AK74M_railed_afg, OLD545 * RAIL, 100);
ITEM(CUP_arifle_AK74M_railed_afg_camo, OLD545 * RAIL, 100);
ITEM(CUP_arifle_AK74M_railed_afg_desert, OLD545 * RAIL, 100);
ITEM(CUP_arifle_AK74M_railed_camo, OLD545 * RAIL, 100);
ITEM(CUP_arifle_AK74M_railed_desert, OLD545 * RAIL, 100);
ITEM(CUP_arifle_AK74M_top_rail, OLD545 * RAIL, 100);
ITEM(CUP_arifle_AK74M_top_rail_camo, OLD545 * RAIL, 100);
ITEM(CUP_arifle_AK74M_top_rail_desert, OLD545 * RAIL, 100);
ITEM(CUP_arifle_AKM, OLD762, 100);
ITEM(CUP_arifle_AKM_Early, OLD762, 100);
ITEM(CUP_arifle_AKM_GL, OLDGL762, 100);
ITEM(CUP_arifle_AKM_GL_Early, OLDGL762, 100);
ITEM(CUP_arifle_AKM_GL_top_rail, OLDGL762, 100);
ITEM(CUP_arifle_AKM_top_rail, OLD762 * RAIL, 100);
ITEM(CUP_arifle_AKMN_railed, OLD762 * RAIL, 100);
ITEM(CUP_arifle_AKMN_railed_afg, OLD762 * RAIL, 100);
ITEM(CUP_arifle_AKMN_railed_afg_desert, OLD762 * RAIL, 100);
ITEM(CUP_arifle_AKMN_railed_desert, OLD762 * RAIL, 100);
ITEM(CUP_arifle_AKMS, OLD762, 100);
ITEM(CUP_arifle_AKMS_Early, OLD762, 100);
ITEM(CUP_arifle_AKMS_GL, OLDGL762, 100);
ITEM(CUP_arifle_AKMS_GL_Early, OLDGL762, 100);
ITEM(CUP_arifle_AKMS_GL_top_rail, OLDGL762, 100);
ITEM(CUP_arifle_AKMS_top_rail, OLD762 * RAIL, 100);
ITEM(CUP_arifle_AKS, OLD762, 100);
ITEM(CUP_arifle_AKS74, OLD762, 100);
ITEM(CUP_arifle_AKS74_Early, OLD762, 100);
ITEM(CUP_arifle_AKS74_GL, OLDGL762, 100);
ITEM(CUP_arifle_AKS74_GL_Early, OLDGL762, 100);
ITEM(CUP_arifle_AKS74_GL_top_rail, OLDGL762, 100);
ITEM(CUP_arifle_AKS74_top_rail, OLD762 * RAIL, 100);
ITEM(CUP_arifle_AKS74U, OLD762, 100);
ITEM(CUP_arifle_AKS74U_railed, OLD762 * RAIL, 100);
ITEM(CUP_arifle_AKS74U_top_rail, OLD762 * RAIL, 100);
ITEM(CUP_arifle_AKS_Gold, 9999, 100);
ITEM(CUP_arifle_AKS_top_rail, OLD762 * RAIL, 100);
ITEM(CUP_arifle_AS_VAL, 1200, 100);
ITEM(CUP_arifle_AS_VAL_top_rail, 1200, 100);
ITEM(CUP_arifle_AS_VAL_VFG, 1200, 100);
ITEM(CUP_arifle_AS_VAL_VFG_top_rail, 1200, 100);
ITEM(CUP_arifle_CZ805_A1, MOD556, 100);
ITEM(CUP_arifle_CZ805_A1_blk, MOD556, 100);
ITEM(CUP_arifle_CZ805_A1_coyote, MOD556, 100);
ITEM(CUP_arifle_CZ805_A2, MOD556, 100);
ITEM(CUP_arifle_CZ805_A2_blk, MOD556, 100);
ITEM(CUP_arifle_CZ805_A2_coyote, MOD556, 100);
ITEM(CUP_arifle_CZ805_B, MOD556, 100);
ITEM(CUP_arifle_CZ805_B_GL, MODGL556, 100);
ITEM(CUP_arifle_CZ805_GL, MODGL556, 100);
ITEM(CUP_arifle_CZ805_GL_blk, MODGL556, 100);
ITEM(CUP_arifle_CZ805_GL_coyote, MODGL556, 100);
ITEM(CUP_arifle_DSA_SA58, MOD762, 100);
ITEM(CUP_arifle_DSA_SA58_DMR, MOD762, 100);
ITEM(CUP_arifle_DSA_SA58_OSW, MOD762, 100);
ITEM(CUP_arifle_DSA_SA58_OSW_Desert, MOD762, 100);
ITEM(CUP_arifle_DSA_SA58_OSW_M203, MOD762, 100);
ITEM(CUP_arifle_DSA_SA58_OSW_Sand, MOD762, 100);
ITEM(CUP_arifle_DSA_SA58_OSW_VFG, MOD762, 100);
ITEM(CUP_arifle_DSA_SA58_OSW_VFG_Desert, MOD762, 100);
ITEM(CUP_arifle_DSA_SA58_OSW_VFG_Sand, MOD762, 100);
ITEM(CUP_arifle_DSA_SA58_OSW_VFG_Woodland, MOD762, 100);
ITEM(CUP_arifle_DSA_SA58_OSW_Woodland, MOD762, 100);
ITEM(CUP_arifle_FNFAL, OLD762, 100);
ITEM(CUP_arifle_FNFAL5060, OLD762, 100);
ITEM(CUP_arifle_FNFAL5060_desert, OLD762, 100);
ITEM(CUP_arifle_FNFAL5060_railed, OLD762 * RAIL, 100);
ITEM(CUP_arifle_FNFAL5060_railed_desert, OLD762 * RAIL, 100);
ITEM(CUP_arifle_FNFAL5060_railed_sand, OLD762 * RAIL, 100);
ITEM(CUP_arifle_FNFAL5060_railed_woodland, OLD762 * RAIL, 100);
ITEM(CUP_arifle_FNFAL5060_rhodesian, OLD762, 100);
ITEM(CUP_arifle_FNFAL5060_sand, OLD762, 100);
ITEM(CUP_arifle_FNFAL5060_woodland, OLD762, 100);
ITEM(CUP_arifle_FNFAL5061, OLD762, 100);
ITEM(CUP_arifle_FNFAL5061_railed, OLD762 * RAIL, 100);
ITEM(CUP_arifle_FNFAL5061_rhodesian, OLD762, 100);
ITEM(CUP_arifle_FNFAL5061_wooden, OLD762, 100);
ITEM(CUP_arifle_FNFAL5061_wooden_railed, OLD762 * RAIL, 100);
ITEM(CUP_arifle_FNFAL5062, OLD762, 100);
ITEM(CUP_arifle_FNFAL5062_railed, OLD762 * RAIL, 100);
ITEM(CUP_arifle_FNFAL_desert, OLD762, 100);
ITEM(CUP_arifle_FNFAL_OSW, OLD762, 100);
ITEM(CUP_arifle_FNFAL_OSW_railed, OLD762 * RAIL, 100);
ITEM(CUP_arifle_FNFAL_railed, OLD762 * RAIL, 100);
ITEM(CUP_arifle_FNFAL_railed_desert, OLD762 * RAIL, 100);
ITEM(CUP_arifle_FNFAL_railed_sand, OLD762 * RAIL, 100);
ITEM(CUP_arifle_FNFAL_railed_woodland, OLD762 * RAIL, 100);
ITEM(CUP_arifle_FNFAL_sand, OLD762, 100);
ITEM(CUP_arifle_FNFAL_woodland, OLD762, 100);
ITEM(CUP_arifle_Fort221, MOD545, 100);
ITEM(CUP_arifle_Fort222, MOD545, 100);
ITEM(CUP_arifle_Fort224, MOD545, 100);
ITEM(CUP_arifle_Fort224_Grippod, MOD545, 100);
ITEM(CUP_arifle_G36A, MOD556, 100);
ITEM(CUP_arifle_G36A3, MOD556, 100);
ITEM(CUP_arifle_G36A3_AG36, MODGL556, 100);
ITEM(CUP_arifle_G36A3_AG36_camo, MODGL556, 100);
ITEM(CUP_arifle_G36A3_AG36_hex, MODGL556, 100);
ITEM(CUP_arifle_G36A3_AG36_wdl, MODGL556, 100);
ITEM(CUP_arifle_G36A3_camo, MOD556, 100);
ITEM(CUP_arifle_G36A3_grip, MOD556, 100);
ITEM(CUP_arifle_G36A3_grip_camo, MOD556, 100);
ITEM(CUP_arifle_G36A3_grip_hex, MOD556, 100);
ITEM(CUP_arifle_G36A3_grip_wdl, MOD556, 100);
ITEM(CUP_arifle_G36A3_hex, MOD556, 100);
ITEM(CUP_arifle_G36A3_wdl, MOD556, 100);
ITEM(CUP_arifle_G36A_AG36_RIS, MODGL556, 100);
ITEM(CUP_arifle_G36A_AG36_RIS_camo, MODGL556, 100);
ITEM(CUP_arifle_G36A_AG36_RIS_wdl, MODGL556, 100);
ITEM(CUP_arifle_G36A_camo, MOD556, 100);
ITEM(CUP_arifle_G36A_RIS, MOD556, 100);
ITEM(CUP_arifle_G36A_RIS_camo, MOD556, 100);
ITEM(CUP_arifle_G36A_RIS_wdl, MOD556, 100);
ITEM(CUP_arifle_G36A_wdl, MOD556, 100);
ITEM(CUP_arifle_G36C, MOD556, 100);
ITEM(CUP_arifle_G36C_camo, MOD556, 100);
ITEM(CUP_arifle_G36C_hex, MOD556, 100);
ITEM(CUP_arifle_G36C_VFG, MOD556, 100);
ITEM(CUP_arifle_G36C_VFG_camo, MOD556, 100);
ITEM(CUP_arifle_G36C_VFG_Carry, MOD556, 100);
ITEM(CUP_arifle_G36C_VFG_hex, MOD556, 100);
ITEM(CUP_arifle_G36C_VFG_wdl, MOD556, 100);
ITEM(CUP_arifle_G36C_wdl, MOD556, 100);
ITEM(CUP_arifle_G36CA3, MOD556, 100);
ITEM(CUP_arifle_G36CA3_afg, MOD556, 100);
ITEM(CUP_arifle_G36CA3_afg_camo, MOD556, 100);
ITEM(CUP_arifle_G36CA3_afg_hex, MOD556, 100);
ITEM(CUP_arifle_G36CA3_afg_wdl, MOD556, 100);
ITEM(CUP_arifle_G36CA3_camo, MOD556, 100);
ITEM(CUP_arifle_G36CA3_grip, MOD556, 100);
ITEM(CUP_arifle_G36CA3_grip_camo, MOD556, 100);
ITEM(CUP_arifle_G36CA3_grip_hex, MOD556, 100);
ITEM(CUP_arifle_G36CA3_grip_wdl, MOD556, 100);
ITEM(CUP_arifle_G36CA3_hex, MOD556, 100);
ITEM(CUP_arifle_G36CA3_wdl, MOD556, 100);
ITEM(CUP_arifle_G36E, MOD556, 100);
ITEM(CUP_arifle_G36E_camo, MOD556, 100);
ITEM(CUP_arifle_G36E_wdl, MOD556, 100);
ITEM(CUP_arifle_G36K, MOD556, 100);
ITEM(CUP_arifle_G36K_AG36, MODGL556, 100);
ITEM(CUP_arifle_G36K_AG36_camo, MODGL556, 100);
ITEM(CUP_arifle_G36K_AG36_wdl, MODGL556, 100);
ITEM(CUP_arifle_G36K_camo, MOD556, 100);
ITEM(CUP_arifle_G36K_KSK, MOD556, 100);
ITEM(CUP_arifle_G36K_KSK_AFG, MOD556, 100);
ITEM(CUP_arifle_G36K_KSK_AFG_camo, MOD556, 100);
ITEM(CUP_arifle_G36K_KSK_AFG_hex, MOD556, 100);
ITEM(CUP_arifle_G36K_KSK_camo, MOD556, 100);
ITEM(CUP_arifle_G36K_KSK_des_ZO_las, MOD556, 100);
ITEM(CUP_arifle_G36K_KSK_hex, MOD556, 100);
ITEM(CUP_arifle_G36K_KSK_hex_ZO_las, MOD556, 100);
ITEM(CUP_arifle_G36K_KSK_VFG, MOD556, 100);
ITEM(CUP_arifle_G36K_KSK_VFG_camo, MOD556, 100);
ITEM(CUP_arifle_G36K_KSK_VFG_hex, MOD556, 100);
ITEM(CUP_arifle_G36K_RIS, MOD556, 100);
ITEM(CUP_arifle_G36K_RIS_AG36, MODGL556, 100);
ITEM(CUP_arifle_G36K_RIS_AG36_camo, MODGL556, 100);
ITEM(CUP_arifle_G36K_RIS_AG36_hex, MODGL556, 100);
ITEM(CUP_arifle_G36K_RIS_AG36_wdl, MODGL556, 100);
ITEM(CUP_arifle_G36K_RIS_camo, MOD556, 100);
ITEM(CUP_arifle_G36K_RIS_hex, MOD556, 100);
ITEM(CUP_arifle_G36K_RIS_wdl, MOD556, 100);
ITEM(CUP_arifle_G36K_VFG, MOD556, 100);
ITEM(CUP_arifle_G36K_VFG_camo, MOD556, 100);
ITEM(CUP_arifle_G36K_VFG_wdl, MOD556, 100);
ITEM(CUP_arifle_G36K_wdl, MOD556, 100);
ITEM(CUP_arifle_G36KA3, MOD556, 100);
ITEM(CUP_arifle_G36KA3_afg, MOD556, 100);
ITEM(CUP_arifle_G36KA3_afg_camo, MOD556, 100);
ITEM(CUP_arifle_G36KA3_afg_hex, MOD556, 100);
ITEM(CUP_arifle_G36KA3_afg_wdl, MOD556, 100);
ITEM(CUP_arifle_G36KA3_camo, MOD556, 100);
ITEM(CUP_arifle_G36KA3_grip, MOD556, 100);
ITEM(CUP_arifle_G36KA3_grip_camo, MOD556, 100);
ITEM(CUP_arifle_G36KA3_grip_hex, MOD556, 100);
ITEM(CUP_arifle_G36KA3_grip_wdl, MOD556, 100);
ITEM(CUP_arifle_G36KA3_hex, MOD556, 100);
ITEM(CUP_arifle_G36KA3_wdl, MOD556, 100);
ITEM(CUP_arifle_G3A3_modern_ris, OLD762 * RAIL, 100);
ITEM(CUP_arifle_G3A3_modern_ris_black, OLD762 * RAIL, 100);
ITEM(CUP_arifle_G3A3_ris, OLD762 * RAIL, 100);
ITEM(CUP_arifle_G3A3_ris_black, OLD762 * RAIL, 100);
ITEM(CUP_arifle_G3A3_ris_vfg, OLD762 * RAIL, 100);
ITEM(CUP_arifle_G3A3_ris_vfg_black, OLD762 * RAIL, 100);
ITEM(CUP_arifle_Galil_556_black, OLD556, 100);
ITEM(CUP_arifle_Galil_black, OLD762, 100);
ITEM(CUP_arifle_Galil_SAR_black, OLD556, 100);
ITEM(CUP_arifle_Gewehr1, OLD762, 100);
ITEM(CUP_arifle_Gewehr1_railed, OLD762 * RAIL, 100);
ITEM(CUP_arifle_HK416_AGL_Black, MOD556, 100);
ITEM(CUP_arifle_HK416_AGL_Desert, MOD556, 100);
ITEM(CUP_arifle_HK416_AGL_Wood, MOD556, 100);
ITEM(CUP_arifle_HK416_Black, MOD556, 100);
ITEM(CUP_arifle_HK416_CQB_AG36, MODGL556, 100);
ITEM(CUP_arifle_HK416_CQB_AG36_Desert, MODGL556, 100);
ITEM(CUP_arifle_HK416_CQB_AG36_Wood, MODGL556, 100);
ITEM(CUP_arifle_HK416_CQB_Black, MOD556, 100);
ITEM(CUP_arifle_HK416_CQB_Desert, MOD556, 100);
ITEM(CUP_arifle_HK416_CQB_M203_Black, MODGL556, 100);
ITEM(CUP_arifle_HK416_CQB_M203_Desert, MODGL556, 100);
ITEM(CUP_arifle_HK416_CQB_M203_Wood, MODGL556, 100);
ITEM(CUP_arifle_HK416_CQB_Wood, MOD556, 100);
ITEM(CUP_arifle_HK416_Desert, MOD556, 100);
ITEM(CUP_arifle_HK416_M203_Black, MODGL556, 100);
ITEM(CUP_arifle_HK416_M203_Desert, MODGL556, 100);
ITEM(CUP_arifle_HK416_M203_Wood, MODGL556, 100);
ITEM(CUP_arifle_HK416_Wood, MOD556, 100);
ITEM(CUP_arifle_HK417_12, MOD762, 100);
ITEM(CUP_arifle_HK417_12_AG36, MODGL762, 100);
ITEM(CUP_arifle_HK417_12_AG36_Desert, MODGL762, 100);
ITEM(CUP_arifle_HK417_12_AG36_Wood, MODGL762, 100);
ITEM(CUP_arifle_HK417_12_Desert, MOD762, 100);
ITEM(CUP_arifle_HK417_12_M203, MODGL762, 100);
ITEM(CUP_arifle_HK417_12_M203_Desert, MODGL762, 100);
ITEM(CUP_arifle_HK417_12_M203_Wood, MODGL762, 100);
ITEM(CUP_arifle_HK417_12_Wood, MOD762, 100);
ITEM(CUP_arifle_HK417_20, MOD762, 100);
ITEM(CUP_arifle_HK417_20_Desert, MOD762, 100);
ITEM(CUP_arifle_HK417_20_Wood, MOD762, 100);
ITEM(CUP_arifle_HK_M27, MOD556, 100);
ITEM(CUP_arifle_HK_M27_AG36, MODGL556, 100);
ITEM(CUP_arifle_HK_M27_VFG, MOD556, 100);
ITEM(CUP_arifle_IMI_Romat, OLD762, 100);
ITEM(CUP_arifle_IMI_Romat_railed, OLD762 * RAIL, 100);
ITEM(CUP_arifle_L85A2, MOD556, 100);
ITEM(CUP_arifle_L85A2_G, MOD556, 100);
ITEM(CUP_arifle_L85A2_GL, MODGL556, 100);
ITEM(CUP_arifle_L85A2_NG, MOD556, 100);
ITEM(CUP_arifle_M16A1, OLD556, 100);
ITEM(CUP_arifle_M16A1E1, OLD556, 100);
ITEM(CUP_arifle_M16A1E1GL, OLD556, 100);
ITEM(CUP_arifle_M16A1GL, OLD556, 100);
ITEM(CUP_arifle_M16A1GL_FS, OLD556, 100);
ITEM(CUP_arifle_M16A1GL_USA, OLD556, 100);
ITEM(CUP_arifle_M16A2, OLD556, 100);
ITEM(CUP_arifle_M16A2_GL, OLDGL556, 100);
ITEM(CUP_arifle_M16A4_GL, OLDGL556, 100);
ITEM(CUP_arifle_M16A4_Grip, OLD556 * RAIL, 100);
ITEM(CUP_arifle_M27_ACOG, MOD556, 100);
ITEM(CUP_arifle_m29_caseless_arid, RAIL * MOD65, 100);
ITEM(CUP_arifle_m29_caseless_blk, RAIL * MOD65, 100);
ITEM(CUP_arifle_m29_caseless_ctrg, RAIL * MOD65, 100);
ITEM(CUP_arifle_m29_caseless_hexa, RAIL * MOD65, 100);
ITEM(CUP_arifle_m29_caseless_hexg, RAIL * MOD65, 100);
ITEM(CUP_arifle_m29_caseless_hexu, RAIL * MOD65, 100);
ITEM(CUP_arifle_m29_caseless_lush, RAIL * MOD65, 100);
ITEM(CUP_arifle_m29_caseless_olive, RAIL * MOD65, 100);
ITEM(CUP_arifle_m29_caseless_splinter, RAIL * MOD65, 100);
ITEM(CUP_arifle_m29_caseless_stiger, RAIL * MOD65, 100);
ITEM(CUP_arifle_m29_caseless_tan, RAIL * MOD65, 100);
ITEM(CUP_arifle_m29_caseless_tctrg, RAIL * MOD65, 100);
ITEM(CUP_arifle_m29_caseless_tiger, RAIL * MOD65, 100);
ITEM(CUP_arifle_m29_caseless_uctrg, RAIL * MOD65, 100);
ITEM(CUP_arifle_m29_caseless_winter, RAIL * MOD65, 100);
ITEM(CUP_arifle_m29_caseless_woodland, RAIL * MOD65, 100);
ITEM(CUP_arifle_m29_ke_caseless_arid, MOD65, 100);
ITEM(CUP_arifle_m29_ke_caseless_blk, MOD65, 100);
ITEM(CUP_arifle_m29_ke_caseless_ctrg, MOD65, 100);
ITEM(CUP_arifle_m29_ke_caseless_hexa, MOD65, 100);
ITEM(CUP_arifle_m29_ke_caseless_hexg, MOD65, 100);
ITEM(CUP_arifle_m29_ke_caseless_hexu, MOD65, 100);
ITEM(CUP_arifle_m29_ke_caseless_lush, MOD65, 100);
ITEM(CUP_arifle_m29_ke_caseless_olive, MOD65, 100);
ITEM(CUP_arifle_m29_ke_caseless_splinter, MOD65, 100);
ITEM(CUP_arifle_m29_ke_caseless_stiger, MOD65, 100);
ITEM(CUP_arifle_m29_ke_caseless_tan, MOD65, 100);
ITEM(CUP_arifle_m29_ke_caseless_tctrg, MOD65, 100);
ITEM(CUP_arifle_m29_ke_caseless_tiger, MOD65, 100);
ITEM(CUP_arifle_m29_ke_caseless_uctrg, MOD65, 100);
ITEM(CUP_arifle_m29_ke_caseless_winter, MOD65, 100);
ITEM(CUP_arifle_m29_ke_caseless_woodland, MOD65, 100);
ITEM(CUP_arifle_M4_MOE_BW, OLD556, 100);
ITEM(CUP_arifle_M4A1, OLD556, 100);
ITEM(CUP_arifle_M4A1_Aim, OLD556, 100);
ITEM(CUP_arifle_M4A1_black, OLD556, 100);
ITEM(CUP_arifle_M4A1_BUIS_camo_GL, OLDGL556, 100);
ITEM(CUP_arifle_M4A1_BUIS_desert_GL, OLDGL556, 100);
ITEM(CUP_arifle_M4A1_BUIS_GL, OLDGL556, 100);
ITEM(CUP_arifle_M4A1_camo, OLD556, 100);
ITEM(CUP_arifle_M4A1_camo_Aim, OLD556, 100);
ITEM(CUP_arifle_M4A1_camo_carryhandle, OLD556, 100);
ITEM(CUP_arifle_M4A1_desert, OLD556, 100);
ITEM(CUP_arifle_M4A1_desert_carryhandle, OLD556, 100);
ITEM(CUP_arifle_M4A1_GL_carryhandle, OLDGL556, 100);
ITEM(CUP_arifle_M4A1_GL_carryhandle_camo, OLDGL556, 100);
ITEM(CUP_arifle_M4A1_GL_carryhandle_desert, OLDGL556, 100);
ITEM(CUP_arifle_M4A1_MOE_black, OLD556, 100);
ITEM(CUP_arifle_M4A1_MOE_desert, OLD556, 100);
ITEM(CUP_arifle_M4A1_MOE_short_black, OLD556, 100);
ITEM(CUP_arifle_M4A1_MOE_short_desert, OLD556, 100);
ITEM(CUP_arifle_M4A1_MOE_short_wdl, OLD556, 100);
ITEM(CUP_arifle_M4A1_MOE_short_winter, OLD556, 100);
ITEM(CUP_arifle_M4A1_MOE_wdl, OLD556, 100);
ITEM(CUP_arifle_M4A1_MOE_winter, OLD556, 100);
ITEM(CUP_arifle_M4A1_SOMMOD_black, OLD556, 100);
ITEM(CUP_arifle_M4A1_SOMMOD_ctrg, OLD556, 100);
ITEM(CUP_arifle_M4A1_SOMMOD_ctrgt, OLD556, 100);
ITEM(CUP_arifle_M4A1_SOMMOD_green, OLD556, 100);
ITEM(CUP_arifle_M4A1_SOMMOD_Grip_black, OLD556 * RAIL, 100);
ITEM(CUP_arifle_M4A1_SOMMOD_Grip_ctrg, OLD556 * RAIL, 100);
ITEM(CUP_arifle_M4A1_SOMMOD_Grip_ctrgt, OLD556 * RAIL, 100);
ITEM(CUP_arifle_M4A1_SOMMOD_Grip_green, OLD556 * RAIL, 100);
ITEM(CUP_arifle_M4A1_SOMMOD_Grip_hex, OLD556 * RAIL, 100);
ITEM(CUP_arifle_M4A1_SOMMOD_Grip_snow, OLD556 * RAIL, 100);
ITEM(CUP_arifle_M4A1_SOMMOD_Grip_tan, OLD556 * RAIL, 100);
ITEM(CUP_arifle_M4A1_SOMMOD_hex, OLD556, 100);
ITEM(CUP_arifle_M4A1_SOMMOD_RD_black, OLD556, 100);
ITEM(CUP_arifle_M4A1_SOMMOD_RD_green, OLD556, 100);
ITEM(CUP_arifle_M4A1_SOMMOD_snow, OLD556, 100);
ITEM(CUP_arifle_M4A1_SOMMOD_tan, OLD556, 100);
ITEM(CUP_arifle_M4A1_standard_black, OLD556, 100);
ITEM(CUP_arifle_M4A1_standard_dsrt, OLD556, 100);
ITEM(CUP_arifle_M4A1_standard_short_black, OLD556, 100);
ITEM(CUP_arifle_M4A1_standard_short_dsrt, OLD556, 100);
ITEM(CUP_arifle_M4A1_standard_short_wdl, OLD556, 100);
ITEM(CUP_arifle_M4A1_standard_short_winter, OLD556, 100);
ITEM(CUP_arifle_M4A1_standard_wdl, OLD556, 100);
ITEM(CUP_arifle_M4A1_standard_winter, OLD556, 100);
ITEM(CUP_arifle_M4A3_black, OLD556, 100);
ITEM(CUP_arifle_M4A3_camo, OLD556, 100);
ITEM(CUP_arifle_M4A3_desert, OLD556, 100);

ITEM(CUP_arifle_Mk16_CQC, MOD556, 100);
ITEM(CUP_arifle_Mk16_CQC_AFG, MOD556, 100);
ITEM(CUP_arifle_Mk16_CQC_AFG_black, MOD556, 100);
ITEM(CUP_arifle_Mk16_CQC_AFG_woodland, MOD556, 100);
ITEM(CUP_arifle_Mk16_CQC_black, MOD556, 100);
ITEM(CUP_arifle_Mk16_CQC_EGLM, MODGL556, 100);
ITEM(CUP_arifle_Mk16_CQC_EGLM_black, MODGL556, 100);
ITEM(CUP_arifle_Mk16_CQC_EGLM_woodland, MODGL556, 100);
ITEM(CUP_arifle_Mk16_CQC_FG, MOD556, 100);
ITEM(CUP_arifle_Mk16_CQC_FG_black, MOD556, 100);
ITEM(CUP_arifle_Mk16_CQC_FG_woodland, MOD556, 100);
ITEM(CUP_arifle_Mk16_CQC_SFG, MOD556, 100);
ITEM(CUP_arifle_Mk16_CQC_SFG_black, MOD556, 100);
ITEM(CUP_arifle_Mk16_CQC_SFG_woodland, MOD556, 100);
ITEM(CUP_arifle_Mk16_CQC_woodland, MOD556, 100);
ITEM(CUP_arifle_Mk16_STD, MOD556, 100);
ITEM(CUP_arifle_Mk16_STD_AFG, MOD556, 100);
ITEM(CUP_arifle_Mk16_STD_AFG_black, MOD556, 100);
ITEM(CUP_arifle_Mk16_STD_AFG_woodland, MOD556, 100);
ITEM(CUP_arifle_Mk16_STD_black, MOD556, 100);
ITEM(CUP_arifle_Mk16_STD_EGLM, MODGL556, 100);
ITEM(CUP_arifle_Mk16_STD_EGLM_black, MODGL556, 100);
ITEM(CUP_arifle_Mk16_STD_EGLM_Specter, MODGL556, 100);
ITEM(CUP_arifle_Mk16_STD_EGLM_woodland, MODGL556, 100);
ITEM(CUP_arifle_Mk16_STD_FG, MOD556, 100);
ITEM(CUP_arifle_Mk16_STD_FG_black, MOD556, 100);
ITEM(CUP_arifle_Mk16_STD_FG_woodland, MOD556, 100);
ITEM(CUP_arifle_Mk16_STD_SFG, MOD556, 100);
ITEM(CUP_arifle_Mk16_STD_SFG_black, MOD556, 100);
ITEM(CUP_arifle_Mk16_STD_SFG_woodland, MOD556, 100);
ITEM(CUP_arifle_Mk16_STD_woodland, MOD556, 100);
ITEM(CUP_arifle_Mk16_SV, MOD556, 100);
ITEM(CUP_arifle_Mk16_SV_black, MOD556, 100);
ITEM(CUP_arifle_Mk16_SV_woodland, MOD556, 100);
ITEM(CUP_arifle_Mk17_CQC, MOD762, 100);
ITEM(CUP_arifle_Mk17_CQC_AFG, MOD762, 100);
ITEM(CUP_arifle_Mk17_CQC_AFG_black, MOD762, 100);
ITEM(CUP_arifle_Mk17_CQC_AFG_woodland, MOD762, 100);
ITEM(CUP_arifle_Mk17_CQC_Black, MOD762, 100);
ITEM(CUP_arifle_Mk17_CQC_EGLM, MODGL762, 100);
ITEM(CUP_arifle_Mk17_CQC_EGLM_black, MODGL762, 100);
ITEM(CUP_arifle_Mk17_CQC_EGLM_woodland, MODGL762, 100);
ITEM(CUP_arifle_Mk17_CQC_FG, MOD762, 100);
ITEM(CUP_arifle_Mk17_CQC_FG_black, MOD762, 100);
ITEM(CUP_arifle_Mk17_CQC_FG_woodland, MOD762, 100);
ITEM(CUP_arifle_Mk17_CQC_SFG, MOD762, 100);
ITEM(CUP_arifle_Mk17_CQC_SFG_Aim_mfsup, MOD762, 100);
ITEM(CUP_arifle_Mk17_CQC_SFG_black, MOD762, 100);
ITEM(CUP_arifle_Mk17_CQC_SFG_woodland, MOD762, 100);
ITEM(CUP_arifle_Mk17_CQC_woodland, MOD762, 100);
ITEM(CUP_arifle_Mk17_STD, MOD762, 100);
ITEM(CUP_arifle_Mk17_STD_AFG, MOD762, 100);
ITEM(CUP_arifle_Mk17_STD_AFG_black, MOD762, 100);
ITEM(CUP_arifle_Mk17_STD_AFG_woodland, MOD762, 100);
ITEM(CUP_arifle_Mk17_STD_black, MOD762, 100);
ITEM(CUP_arifle_Mk17_STD_EGLM, MODGL762, 100);
ITEM(CUP_arifle_Mk17_STD_EGLM_black, MODGL762, 100);
ITEM(CUP_arifle_Mk17_STD_EGLM_woodland, MODGL762, 100);
ITEM(CUP_arifle_Mk17_STD_FG, MOD762, 100);
ITEM(CUP_arifle_Mk17_STD_FG_black, MOD762, 100);
ITEM(CUP_arifle_Mk17_STD_FG_woodland, MOD762, 100);
ITEM(CUP_arifle_Mk17_STD_SFG, MOD762, 100);
ITEM(CUP_arifle_Mk17_STD_SFG_black, MOD762, 100);
ITEM(CUP_arifle_Mk17_STD_SFG_woodland, MOD762, 100);
ITEM(CUP_arifle_Mk17_STD_woodland, MOD762, 100);
ITEM(CUP_arifle_mk18_black, MOD556, 100);
ITEM(CUP_arifle_mk18_m203_black, MODGL556, 100);
ITEM(CUP_arifle_Mk20, MOD556, 100);
ITEM(CUP_arifle_Mk20_black, MOD556, 100);
ITEM(CUP_arifle_Mk20_woodland, MOD556, 100);
ITEM(CUP_arifle_OTS14_GROZA, MOD762, 100);
ITEM(CUP_arifle_OTS14_GROZA_762, MOD762, 100);
ITEM(CUP_arifle_OTS14_GROZA_762_GL, MODGL762, 100);
ITEM(CUP_arifle_OTS14_GROZA_762_Grip, MOD762, 100);
ITEM(CUP_arifle_OTS14_GROZA_GL, MODGL762, 100);
ITEM(CUP_arifle_OTS14_GROZA_Grip, MOD762, 100);

ITEM(CUP_arifle_Sa58_Carbine_RIS_AFG, OLD762 * RAIL, 100);
ITEM(CUP_arifle_Sa58_Carbine_RIS_VFG, OLD762 * RAIL, 100);
ITEM(CUP_arifle_Sa58_Carbine_RIS_VFG_desert, OLD762 * RAIL, 100);
ITEM(CUP_arifle_Sa58_Carbine_RIS_VFG_woodland, OLD762 * RAIL, 100);
ITEM(CUP_arifle_Sa58_Klec, OLD762, 100);
ITEM(CUP_arifle_Sa58_Klec_frontris, OLD762 * RAIL, 100);
ITEM(CUP_arifle_Sa58_Klec_rearris, OLD762 * RAIL, 100);
ITEM(CUP_arifle_Sa58_Klec_ris, OLD762 * RAIL, 100);
ITEM(CUP_arifle_Sa58_sporter_compact, OLD762, 100);
ITEM(CUP_arifle_Sa58_sporter_compact_rearris, OLD762 * RAIL, 100);
ITEM(CUP_arifle_Sa58P, OLD762, 100);
ITEM(CUP_arifle_Sa58P_des, OLD762, 100);
ITEM(CUP_arifle_Sa58P_frontris, OLD762 * RAIL, 100);
ITEM(CUP_arifle_Sa58P_frontris_desert, OLD762 * RAIL, 100);
ITEM(CUP_arifle_Sa58P_frontris_woodland, OLD762 * RAIL, 100);
ITEM(CUP_arifle_Sa58P_rearris, OLD762 * RAIL, 100);
ITEM(CUP_arifle_Sa58P_RIS1, OLD762 * RAIL, 100);
ITEM(CUP_arifle_Sa58P_v2, OLD762, 100);
ITEM(CUP_arifle_Sa58P_wood, OLD762, 100);
ITEM(CUP_arifle_Sa58P_woodland, OLD762, 100);
ITEM(CUP_arifle_Sa58Pi, OLD762, 100);
ITEM(CUP_arifle_Sa58RIS1, OLD762 * RAIL, 100);
ITEM(CUP_arifle_Sa58RIS1_des, OLD762 * RAIL, 100);
ITEM(CUP_arifle_Sa58RIS1_woodland, OLD762 * RAIL, 100);
ITEM(CUP_arifle_Sa58RIS2, OLD762 * RAIL, 100);
ITEM(CUP_arifle_Sa58RIS2_camo, OLD762 * RAIL, 100);
ITEM(CUP_arifle_Sa58RIS2_gl, OLDGL762, 100);
ITEM(CUP_arifle_Sa58RIS2_gl_desert, OLDGL762, 100);
ITEM(CUP_arifle_Sa58RIS2_gl_woodland, OLDGL762, 100);
ITEM(CUP_arifle_Sa58RIS2_woodland, OLD762 * RAIL, 100);
ITEM(CUP_arifle_Sa58s, OLD762, 100);
ITEM(CUP_arifle_Sa58s_rearris, OLD762 * RAIL, 100);
ITEM(CUP_arifle_Sa58V, OLD762, 100);
ITEM(CUP_arifle_Sa58V_camo, OLD762, 100);
ITEM(CUP_arifle_Sa58V_frontris, OLD762 * RAIL, 100);
ITEM(CUP_arifle_Sa58V_rearris, OLD762 * RAIL, 100);
ITEM(CUP_arifle_Sa58V_wood, OLD762, 100);
ITEM(CUP_arifle_Sa58V_woodland, OLD762, 100);
ITEM(CUP_arifle_SAIGA_MK03, OLD762, 100);
ITEM(CUP_arifle_SAIGA_MK03_top_rail, OLD762 * RAIL, 100);
ITEM(CUP_arifle_SAIGA_MK03_Wood, OLD762, 100);
ITEM(CUP_arifle_SIAGE_MK03_Wood_top_rail, OLD762 * RAIL, 100);
ITEM(CUP_arifle_SBR_black, MOD556, 100);
ITEM(CUP_arifle_SBR_od, MOD556, 100);

ITEM(CUP_arifle_SR3M_Vikhr, 700, 100);
ITEM(CUP_arifle_SR3M_Vikhr_top_rail, 700, 100);
ITEM(CUP_arifle_SR3M_Vikhr_VFG, 700, 100);
ITEM(CUP_arifle_SR3M_Vikhr_VFG_top_rail, 700, 100);
ITEM(CUP_arifle_Steyr_Stg58, OLD762, 100);
ITEM(CUP_arifle_Steyr_Stg58_railed, OLD762 * RAIL, 100);
ITEM(CUP_arifle_TYPE_56_2, OLD762, 100);
ITEM(CUP_arifle_TYPE_56_2_Early, OLD762, 100);
ITEM(CUP_arifle_TYPE_56_2_top_rail, OLD762 * RAIL, 100);
ITEM(CUP_arifle_X95, MOD556, 100);
ITEM(CUP_arifle_X95_Grippod, MOD556, 100);
ITEM(CUP_arifle_XM16E1, OLD556, 100);
ITEM(CUP_arifle_xm29_arid, RAIL * MOD556, 100);
ITEM(CUP_arifle_xm29_blk, RAIL * MOD556, 100);
ITEM(CUP_arifle_xm29_ctrg, RAIL * MOD556, 100);
ITEM(CUP_arifle_xm29_hexa, RAIL * MOD556, 100);
ITEM(CUP_arifle_xm29_hexg, RAIL * MOD556, 100);
ITEM(CUP_arifle_xm29_hexu, RAIL * MOD556, 100);
ITEM(CUP_arifle_xm29_ke_arid, MOD556, 100);
ITEM(CUP_arifle_xm29_ke_blk, MOD556, 100);
ITEM(CUP_arifle_xm29_ke_ctrg, MOD556, 100);
ITEM(CUP_arifle_xm29_ke_hexa, MOD556, 100);
ITEM(CUP_arifle_xm29_ke_hexg, MOD556, 100);
ITEM(CUP_arifle_xm29_ke_hexu, MOD556, 100);
ITEM(CUP_arifle_xm29_ke_lush, MOD556, 100);
ITEM(CUP_arifle_xm29_ke_olive, MOD556, 100);
ITEM(CUP_arifle_xm29_ke_rail_arid, MOD556, 100);
ITEM(CUP_arifle_xm29_ke_rail_blk, MOD556, 100);
ITEM(CUP_arifle_xm29_ke_rail_ctrg, MOD556, 100);
ITEM(CUP_arifle_xm29_ke_rail_hexa, MOD556, 100);
ITEM(CUP_arifle_xm29_ke_rail_hexg, MOD556, 100);
ITEM(CUP_arifle_xm29_ke_rail_hexu, MOD556, 100);
ITEM(CUP_arifle_xm29_ke_rail_lush, MOD556, 100);
ITEM(CUP_arifle_xm29_ke_rail_olive, MOD556, 100);
ITEM(CUP_arifle_xm29_ke_rail_splinter, MOD556, 100);
ITEM(CUP_arifle_xm29_ke_rail_stiger, MOD556, 100);
ITEM(CUP_arifle_xm29_ke_rail_tan, MOD556, 100);
ITEM(CUP_arifle_xm29_ke_rail_tctrg, MOD556, 100);
ITEM(CUP_arifle_xm29_ke_rail_tiger, MOD556, 100);
ITEM(CUP_arifle_xm29_ke_rail_uctrg, MOD556, 100);
ITEM(CUP_arifle_xm29_ke_rail_winter, MOD556, 100);
ITEM(CUP_arifle_xm29_ke_rail_woodland, MOD556, 100);
ITEM(CUP_arifle_xm29_ke_splinter, MOD556, 100);
ITEM(CUP_arifle_xm29_ke_stiger, MOD556, 100);
ITEM(CUP_arifle_xm29_ke_tan, MOD556, 100);
ITEM(CUP_arifle_xm29_ke_tctrg, MOD556, 100);
ITEM(CUP_arifle_xm29_ke_tiger, MOD556, 100);
ITEM(CUP_arifle_xm29_ke_uctrg, MOD556, 100);
ITEM(CUP_arifle_xm29_ke_winter, MOD556, 100);
ITEM(CUP_arifle_xm29_ke_woodland, MOD556, 100);
ITEM(CUP_arifle_xm29_lush, RAIL * MOD556, 100);
ITEM(CUP_arifle_xm29_olive, RAIL * MOD556, 100);
ITEM(CUP_arifle_xm29_splinter, RAIL * MOD556, 100);
ITEM(CUP_arifle_xm29_stiger, RAIL * MOD556, 100);
ITEM(CUP_arifle_xm29_tan, RAIL * MOD556, 100);
ITEM(CUP_arifle_xm29_tctrg, RAIL * MOD556, 100);
ITEM(CUP_arifle_xm29_tiger, RAIL * MOD556, 100);
ITEM(CUP_arifle_xm29_uctrg, RAIL * MOD556, 100);
ITEM(CUP_arifle_xm29_winter, RAIL * MOD556, 100);
ITEM(CUP_arifle_xm29_woodland, RAIL * MOD556, 100);
ITEM(CUP_arifle_XM8_Carbine, MOD556, 100);
ITEM(CUP_arifle_XM8_Carbine_FG, MOD556, 100);
ITEM(CUP_arifle_XM8_Carbine_FG_Fish, MOD556, 100);
ITEM(CUP_arifle_XM8_Carbine_FG_Green, MOD556, 100);
ITEM(CUP_arifle_XM8_Carbine_FG_OD, MOD556, 100);
ITEM(CUP_arifle_XM8_Carbine_FG_Rail, RAIL * MOD556, 100);
ITEM(CUP_arifle_XM8_Carbine_FG_Rail_Fish, RAIL * MOD556, 100);
ITEM(CUP_arifle_XM8_Carbine_FG_Rail_Green, RAIL * MOD556, 100);
ITEM(CUP_arifle_XM8_Carbine_FG_Rail_OD, RAIL * MOD556, 100);
ITEM(CUP_arifle_XM8_Carbine_FG_Rail_Tan, RAIL * MOD556, 100);
ITEM(CUP_arifle_XM8_Carbine_FG_Tan, MOD556, 100);
ITEM(CUP_arifle_XM8_Carbine_Fish, MOD556, 100);
ITEM(CUP_arifle_XM8_Carbine_GL, MODGL556, 100);
ITEM(CUP_arifle_XM8_Carbine_GL_Green, MODGL556, 100);
ITEM(CUP_arifle_XM8_Carbine_GL_OD, MODGL556, 100);
ITEM(CUP_arifle_XM8_Carbine_GL_Rail, RAIL * MODGL556, 100);
ITEM(CUP_arifle_XM8_Carbine_GL_Rail_Green, RAIL * MODGL556, 100);
ITEM(CUP_arifle_XM8_Carbine_GL_Rail_OD, RAIL * MODGL556, 100);
ITEM(CUP_arifle_XM8_Carbine_GL_Rail_Tan, RAIL * MODGL556, 100);
ITEM(CUP_arifle_XM8_Carbine_GL_Tan, MODGL556, 100);
ITEM(CUP_arifle_XM8_Carbine_Green, MOD556, 100);
ITEM(CUP_arifle_XM8_Carbine_OD, MOD556, 100);
ITEM(CUP_arifle_XM8_Carbine_Rail_Fish, RAIL * MOD556, 100);
ITEM(CUP_arifle_XM8_Carbine_Rail_Green, RAIL * MOD556, 100);
ITEM(CUP_arifle_XM8_Carbine_Rail_OD, RAIL * MOD556, 100);
ITEM(CUP_arifle_XM8_Carbine_Rail_Tan, RAIL * MOD556, 100);
ITEM(CUP_arifle_XM8_Carbine_Tan, MOD556, 100);
ITEM(CUP_arifle_XM8_Railed, RAIL * MOD556, 100);

ITEM(CUP_l85a2, MOD556, 100);
ITEM(CUP_l85a2_ris, MOD556, 100);
ITEM(CUP_l85a2_ris_ng, MOD556, 100);
ITEM(CUP_l85a2_ugl, MOD556, 100);

ITEM(CUP_CZ805_A1_ACR, MOD556, 100);
ITEM(CUP_CZ805_A1_GL_ACR, MODGL556, 100);
ITEM(CUP_CZ805_A2_ACR, MOD556, 100);
ITEM(CUP_CZ805_A2_SD_ACR, MOD556, 100);
ITEM(CUP_CZ805_B_GL_ACR, MODGL556, 100);

ITEM(CUP_CZ_BREN2_556_11, MOD556, 100);
ITEM(CUP_CZ_BREN2_556_11_GL, MODGL556, 100);
ITEM(CUP_CZ_BREN2_556_11_GL_Grn, MODGL556, 100);
ITEM(CUP_CZ_BREN2_556_11_GL_Tan, MODGL556, 100);
ITEM(CUP_CZ_BREN2_556_11_Grn, MOD556, 100);
ITEM(CUP_CZ_BREN2_556_11_Tan, MOD556, 100);
ITEM(CUP_CZ_BREN2_556_14, MOD556, 100);
ITEM(CUP_CZ_BREN2_556_14_GL, MODGL556, 100);
ITEM(CUP_CZ_BREN2_556_14_GL_Grn, MODGL556, 100);
ITEM(CUP_CZ_BREN2_556_14_GL_Tan, MODGL556, 100);
ITEM(CUP_CZ_BREN2_556_14_Grn, MOD556, 100);
ITEM(CUP_CZ_BREN2_556_14_Tan, MOD556, 100);
ITEM(CUP_CZ_BREN2_556_8, MOD556, 100);
ITEM(CUP_CZ_BREN2_556_8_Grn, MOD556, 100);
ITEM(CUP_CZ_BREN2_556_8_Tan, MOD556, 100);
ITEM(CUP_CZ_BREN2_762_14, MOD762, 100);
ITEM(CUP_CZ_BREN2_762_14_GL, MODGL762, 100);
ITEM(CUP_CZ_BREN2_762_14_GL_Grn, MODGL762, 100);
ITEM(CUP_CZ_BREN2_762_14_GL_Tan, MODGL762, 100);
ITEM(CUP_CZ_BREN2_762_14_Grn, MOD762, 100);
ITEM(CUP_CZ_BREN2_762_14_Tan, MOD762, 100);
ITEM(CUP_CZ_BREN2_762_8, MOD762, 100);
ITEM(CUP_CZ_BREN2_762_8_Grn, MOD762, 100);
ITEM(CUP_CZ_BREN2_762_8_Tan, MOD762, 100);

ITEM(CUP_M16A2, OLD556, 100);
ITEM(CUP_M16A2GL, OLD556, 100);
ITEM(CUP_M16A4, OLD556, 100);
ITEM(CUP_m16a4_acg, OLD556, 100);
ITEM(CUP_M16A4_ACG_GL, OLDGL556, 100);
ITEM(CUP_M16A4_GL, OLDGL556, 100);

ITEM(CUP_M4A1, OLD556, 100);
ITEM(CUP_M4A1_Aim, OLD556, 100);
ITEM(CUP_M4A1_Aim_camo, OLD556, 100);
ITEM(CUP_M4A1_AIM_SD_camo, OLD556, 100);
ITEM(CUP_M4A1_camo, OLD556, 100);
ITEM(CUP_M4A1_HWS_GL, OLDGL556, 100);
ITEM(CUP_M4A1_HWS_GL_camo, OLDGL556, 100);
ITEM(CUP_M4A1_HWS_GL_SD_Camo, OLDGL556, 100);
ITEM(CUP_M4A1_RCO_GL, OLDGL556, 100);
ITEM(CUP_M4SPR, OLD556, 100);

ITEM(CUP_m8_carbine, MOD556, 100);
ITEM(CUP_m8_carbine_pmc, MOD556, 100);
ITEM(CUP_m8_carbineGL, MOD556, 100);
ITEM(CUP_m8_compact, MOD556, 100);
ITEM(CUP_m8_compact_pmc, MOD556, 100);


ITEM(CUP_SCAR_H_LNG_Sniper, MOD762, 100);
ITEM(CUP_SCAR_H_LNG_Sniper_SD, MOD762, 100);
ITEM(CUP_SCAR_H_STD_EGLM_Spect, MODGL762, 100);
ITEM(CUP_SCAR_L_CQC, MOD556, 100);
ITEM(CUP_SCAR_L_STD_EGLM_RCO, MODGL556, 100);
ITEM(CUP_SCAR_L_STD_Mk4CQT, MOD556, 100);

ITEM(CUP_Famas_F1, MOD556, 100);
ITEM(CUP_Famas_F1_Arid, MOD556, 100);
ITEM(CUP_Famas_F1_Rail, MOD556, 100);
ITEM(CUP_Famas_F1_Rail_Arid, MOD556, 100);
ITEM(CUP_Famas_F1_Rail_Wood, MOD556, 100);
ITEM(CUP_Famas_F1_Wood, MOD556, 100);
ITEM(CUP_FN_FAL, OLD762, 100);
ITEM(CUP_G36_C_SD_camo, MOD556, 100);
ITEM(CUP_G36_C_SD_eotech, MOD556, 100);
ITEM(CUP_G36a, MOD556, 100);
ITEM(CUP_G36A_camo, MOD556, 100);
ITEM(CUP_G36C, MOD556, 100);
ITEM(CUP_G36C_camo, MOD556, 100);
ITEM(CUP_G36K, MOD556, 100);
ITEM(CUP_G36K_camo, MOD556, 100);



		};

		class magazinesCup 
		{
			displayName = __EVAL(formatText ["%1 %2 %3 %4", localize "STR_A3AU_cup", localize "STR_A3AU_magazines", localize "STR_A3AU_and", localize "STR_A3AU_glGrenades"]);
			picture = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\cargoMag_ca.paa";

			class Laserbatteries {
				price = 200;
				stock = MAGAZINE_STOCK;
			};

			ITEM( CUP_100Rnd_556x45_BetaCMag, 20 + BULPRICE*100, 100);
			ITEM( CUP_100Rnd_556x45_BetaCMag_ar15, 20 + BULPRICE*100, 100);
			ITEM( CUP_100Rnd_556x45_BetaCMag_camo, 20 + BULPRICE*100, 100);
			ITEM( CUP_100Rnd_556x45_BetaCMag_hex, 20 + BULPRICE*100, 100);
			ITEM( CUP_100Rnd_556x45_BetaCMag_wdl, 20 + BULPRICE*100, 100);
			ITEM( CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag, 20 + BULPRICE*100, 100);
			ITEM( CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag_ar15, 20 + BULPRICE*100, 100);
			ITEM( CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag_camo, 20 + BULPRICE*100, 100);
			ITEM( CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag_hex, 20 + BULPRICE*100, 100);
			ITEM( CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag_wdl, 20 + BULPRICE*100, 100);
			ITEM( CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag, 20 + BULPRICE*100, 100);
			ITEM( CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag_ar15, 20 + BULPRICE*100, 100);
			ITEM( CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag_camo, 20 + BULPRICE*100, 100);
			ITEM( CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag_hex, 20 + BULPRICE*100, 100);
			ITEM( CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag_wdl, 20 + BULPRICE*100, 100);
			ITEM( CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag, 20 + BULPRICE*100, 100);
			ITEM( CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag_ar15, 20 + BULPRICE*100, 100);
			ITEM( CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag_camo, 20 + BULPRICE*100, 100);
			ITEM( CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag_hex, 20 + BULPRICE*100, 100);
			ITEM( CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag_wdl, 20 + BULPRICE*100, 100);
			ITEM( CUP_100Rnd_TE4_Green_Tracer_556x45_M249, 20 + BULPRICE*100, 100);
			ITEM( CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M, 20 + BULPRICE*100, 100);
			ITEM( CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M, 20 + BULPRICE*100, 100);
			ITEM( CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M, 20 + BULPRICE*100, 100);
			ITEM( CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M, 20 + BULPRICE*100, 100);
			ITEM( CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M, 20 + BULPRICE*100, 100);
			ITEM( CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M, 20 + BULPRICE*100, 100);
			ITEM( CUP_100Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M, 20 + BULPRICE*100, 100);
			ITEM( CUP_100Rnd_TE4_Red_Tracer_556x45_M249, 20 + BULPRICE*100, 100);
			ITEM( CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249, 20 + BULPRICE*100, 100);
			ITEM( CUP_10Rnd_127x99_M107, 20 + LARGBULPRICE*10, 100);
			ITEM( CUP_10Rnd_50BW_Mag_M4_M, 20 + BULPRICE*10, 100);
			ITEM( CUP_10Rnd_762x39_SaigaMk03_M, 20 + BULPRICE*10, 100);
			ITEM( CUP_10Rnd_762x39_SKS_M, 20 + BULPRICE*10, 100);
			ITEM( CUP_10Rnd_762x51_CZ750, 20 + BULPRICE*10, 100);
			ITEM( CUP_10Rnd_762x51_CZ750_Tracer, 20 + BULPRICE*10, 100);
			ITEM( CUP_10Rnd_762x51_FNFAL_M, 20 + BULPRICE*10, 100);
			ITEM( CUP_10Rnd_762x54_SVD_M, 20 + BULPRICE*10, 100);
			ITEM( CUP_10Rnd_9x19_Compact, 20 + BULPRICE*10, 100);
			ITEM( CUP_10Rnd_9x19_Saiga9, 20 + BULPRICE*10, 100);
			ITEM( CUP_10Rnd_9x39_SP5_VSS_M, 20 + BULPRICE*10, 100);
			ITEM( CUP_10Rnd_B_765x17_Ball_M, 20 + BULPRICE*10, 100);
			ITEM( CUP_10Rnd_TE1_Green_Tracer_762x51_FNFAL_M, 20 + BULPRICE*10, 100);
			ITEM( CUP_10Rnd_TE1_Red_Tracer_762x51_FNFAL_M, 20 + BULPRICE*10, 100);
			ITEM( CUP_10Rnd_TE1_Yellow_Tracer_762x51_FNFAL_M, 20 + BULPRICE*10, 100);
			ITEM( CUP_120Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M, 20 + BULPRICE*120, 100);
			ITEM( CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M, 20 + BULPRICE*120, 100);
			ITEM( CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M, 20 + BULPRICE*120, 100);
			ITEM( CUP_120Rnd_TE4_LRT4_Yellow_Tracer_762x51_Belt_M, 20 + BULPRICE*120, 100);
			ITEM( CUP_12Rnd_45ACP_mk23, 20 + BULPRICE*12, 100);
			ITEM( CUP_12Rnd_9x18_PMM_M, 20 + BULPRICE*12, 100);
			ITEM( CUP_12Rnd_B_Saiga12_Bird_4, 20 + BULPRICE*12, 100);
			ITEM( CUP_12Rnd_B_Saiga12_Buck_0, 20 + BULPRICE*12, 100);
			ITEM( CUP_12Rnd_B_Saiga12_Buck_00, 20 + BULPRICE*12, 100);
			ITEM( CUP_12Rnd_B_Saiga12_Buck_1, 20 + BULPRICE*12, 100);
			ITEM( CUP_12Rnd_B_Saiga12_Buck_2, 20 + BULPRICE*12, 100);
			ITEM( CUP_12Rnd_B_Saiga12_Buck_3, 20 + BULPRICE*12, 100);
			ITEM( CUP_12Rnd_B_Saiga12_Buck_4, 20 + BULPRICE*12, 100);
			ITEM( CUP_12Rnd_B_Saiga12_HE, 20 + GRENPRICE*12, 100);
			ITEM( CUP_12Rnd_B_Saiga12_Slug, 20 + BULPRICE*12, 100);
			ITEM( CUP_13Rnd_9x19_Browning_HP, 20 + BULPRICE*13, 100);
			ITEM( CUP_15Rnd_9x19_M9, 20 + BULPRICE*15, 100);
			ITEM( CUP_15Rnd_Sa58_M, 20 + BULPRICE*15, 100);
			ITEM( CUP_15Rnd_Sa58_M_TracerG, 20 + BULPRICE*15, 100);
			ITEM( CUP_15Rnd_Sa58_M_TracerR, 20 + BULPRICE*15, 100);
			ITEM( CUP_15Rnd_Sa58_M_TracerY, 20 + BULPRICE*15, 100);
			ITEM( CUP_16Rnd_9x19_cz75, 20 + BULPRICE*16, 100);
			ITEM( CUP_17Rnd_9x19_glock17, 20 + BULPRICE*17, 100);
			ITEM( CUP_17Rnd_9x19_M17_Black, 20 + BULPRICE*17, 100);
			ITEM( CUP_17Rnd_9x19_M17_Coyote, 20 + BULPRICE*17, 100);
			ITEM( CUP_17Rnd_9x19_M17_Green, 20 + BULPRICE*17, 100);
			ITEM( CUP_17Rnd_9x19_P30L, 20 + BULPRICE*17, 100);
			ITEM( CUP_18Rnd_9x19_Phantom, 20 + BULPRICE*18, 100);
			ITEM( CUP_1Rnd_12Gauge_HE, 20 + GRENPRICE*1, 100);
			ITEM( CUP_1Rnd_12Gauge_Pellets_No00_Buck, 20 + BULPRICE*1, 100);
			ITEM( CUP_1Rnd_12Gauge_Pellets_No0_Buck, 20 + BULPRICE*1, 100);
			ITEM( CUP_1Rnd_12Gauge_Pellets_No1_Buck, 20 + BULPRICE*1, 100);
			ITEM( CUP_1Rnd_12Gauge_Pellets_No2_Buck, 20 + BULPRICE*1, 100);
			ITEM( CUP_1Rnd_12Gauge_Pellets_No3_Buck, 20 + BULPRICE*1, 100);
			ITEM( CUP_1Rnd_12Gauge_Pellets_No4_Bird, 20 + BULPRICE*1, 100);
			ITEM( CUP_1Rnd_12Gauge_Pellets_No4_Buck, 20 + BULPRICE*1, 100);
			ITEM( CUP_1Rnd_12Gauge_Slug, 20 + BULPRICE*1, 100);
			ITEM( CUP_1Rnd_762x51_CZ584, 20 + BULPRICE*1, 100);
			ITEM( CUP_1Rnd_B_CZ584_74Pellets, 20 + BULPRICE*1, 100);
			ITEM( CUP_1Rnd_B_CZ584_74Slug, 20 + BULPRICE*1, 100);
			ITEM( CUP_1Rnd_HE_GP25_M, 20 + GRENPRICE*1, 100);
			ITEM( CUP_1Rnd_HE_M203, 20 + GRENPRICE*1, 100);
			ITEM( CUP_1Rnd_HEDP_M203, 20 + GRENPRICE*1, 100);
			ITEM( CUP_1Rnd_SMOKE_GP25_M, 20 + GRENPRICE*1, 100);
			ITEM( CUP_1Rnd_Smoke_M203, 20 + GRENPRICE*1, 100);
			ITEM( CUP_1Rnd_SmokeGreen_GP25_M, 20 + GRENPRICE*1, 100);
			ITEM( CUP_1Rnd_SmokeGreen_M203, 20 + GRENPRICE*1, 100);
			ITEM( CUP_1Rnd_SmokeRed_GP25_M, 20 + GRENPRICE*1, 100);
			ITEM( CUP_1Rnd_SmokeRed_M203, 20 + GRENPRICE*1, 100);
			ITEM( CUP_1Rnd_SmokeYellow_GP25_M, 20 + GRENPRICE*1, 100);
			ITEM( CUP_1Rnd_SmokeYellow_M203, 20 + GRENPRICE*1, 100);
			ITEM( CUP_1Rnd_StarCluster_Green_M203, 20 + GRENPRICE*1, 100);
			ITEM( CUP_1Rnd_StarCluster_Red_M203, 20 + GRENPRICE*1, 100);
			ITEM( CUP_1Rnd_StarCluster_White_M203, 20 + GRENPRICE*1, 100);
			ITEM( CUP_1Rnd_StarFlare_Green_M203, 20 + GRENPRICE*1, 100);
			ITEM( CUP_1Rnd_StarFlare_Red_M203, 20 + GRENPRICE*1, 100);
			ITEM( CUP_1Rnd_StarFlare_White_M203, 20 + GRENPRICE*1, 100);
			ITEM( CUP_200Rnd_TE1_LRT4_Red_Tracer_762x51_Belt_M, 20 + BULPRICE*200, 100);
			ITEM( CUP_200Rnd_TE1_Red_Tracer_556x45_M249, 20 + BULPRICE*200, 100);
			ITEM( CUP_200Rnd_TE1_Red_Tracer_556x45_M249_Pouch, 20 + BULPRICE*200, 100);
			ITEM( CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1, 20 + BULPRICE*200, 100);
			ITEM( CUP_200Rnd_TE4_Green_Tracer_556x45_M249, 20 + BULPRICE*200, 100);
			ITEM( CUP_200Rnd_TE4_Green_Tracer_556x45_M249_Pouch, 20 + BULPRICE*200, 100);
			ITEM( CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M, 20 + BULPRICE*200, 100);
			ITEM( CUP_200Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M, 20 + BULPRICE*200, 100);
			ITEM( CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1, 20 + BULPRICE*200, 100);
			ITEM( CUP_200Rnd_TE4_Red_Tracer_556x45_M249, 20 + BULPRICE*200, 100);
			ITEM( CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch, 20 + BULPRICE*200, 100);
			ITEM( CUP_200Rnd_TE4_Yellow_Tracer_556x45_L110A1, 20 + BULPRICE*200, 100);
			ITEM( CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249, 20 + BULPRICE*200, 100);
			ITEM( CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249_Pouch, 20 + BULPRICE*200, 100);
			ITEM( CUP_20Rnd_46x30_MP7, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_545x39_AKSU_M, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_556x45_Stanag, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_556x45_Stanag_Tracer_Green, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_556x45_Stanag_Tracer_Red, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_556x45_Stanag_Tracer_Yellow, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_762x39_AMD63_M, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_762x51_B_M110, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_762x51_B_SCAR, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_762x51_B_SCAR_bkl, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_762x51_B_SCAR_wdl, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_762x51_CZ805B, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_762x51_DMR, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_762x51_FNFAL_Desert_M, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_762x51_FNFAL_M, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_762x51_FNFAL_Woodland_M, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_762x51_G3, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_762x51_HK417, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_762x51_HK417_Camo_Desert, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_762x51_HK417_Camo_Wood, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_762x51_L129_M, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_9x39_SP5_GROZA_M, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_9x39_SP5_VSS_M, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_B_765x17_Ball_M, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_B_AA12_74Slug, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_B_AA12_Bird_4, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_B_AA12_Buck_0, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_B_AA12_Buck_00, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_B_AA12_Buck_1, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_B_AA12_Buck_2, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_B_AA12_Buck_3, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_B_AA12_Buck_4, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_B_AA12_HE, 20 + GRENPRICE*20, 100);
			ITEM( CUP_20Rnd_B_AA12_Pellets, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_B_AA12_Slug, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_B_Saiga12_74Pellets_M, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_B_Saiga12_74Slug_M, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_Sa58_M, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_Sa58_M_TracerG, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_Sa58_M_TracerR, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_Sa58_M_TracerY, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_Subsonic_545x39_AKSU_M, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_Subsonic_762x39_AMD63_M, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_TE1_Green_Tracer_762x51_CZ805B, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_TE1_Green_Tracer_762x51_DMR, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_TE1_Green_Tracer_762x51_FNFAL_Desert_M, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_TE1_Green_Tracer_762x51_FNFAL_M, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_TE1_Green_Tracer_762x51_FNFAL_Woodland_M, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_TE1_Green_Tracer_762x51_G3, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_TE1_Green_Tracer_762x51_HK417, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_TE1_Green_Tracer_762x51_M110, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR_bkl, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR_wdl, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_TE1_Red_Tracer_762x51_CZ805B, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_TE1_Red_Tracer_762x51_DMR, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_TE1_Red_Tracer_762x51_FNFAL_Desert_M, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_TE1_Red_Tracer_762x51_FNFAL_M, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_TE1_Red_Tracer_762x51_FNFAL_Woodland_M, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_TE1_Red_Tracer_762x51_G3, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_TE1_Red_Tracer_762x51_HK417, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_TE1_Red_Tracer_762x51_M110, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR_bkl, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR_wdl, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_TE1_White_Tracer_762x51_CZ805B, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_TE1_White_Tracer_762x51_DMR, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_TE1_White_Tracer_762x51_M110, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_TE1_White_Tracer_762x51_SCAR, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_TE1_White_Tracer_762x51_SCAR_bkl, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_TE1_White_Tracer_762x51_SCAR_wdl, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_TE1_Yellow_Tracer_762x51_CZ805B, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_TE1_Yellow_Tracer_762x51_FNFAL_Desert_M, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_TE1_Yellow_Tracer_762x51_FNFAL_M, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_TE1_Yellow_Tracer_762x51_FNFAL_Woodland_M, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_TE1_Yellow_Tracer_762x51_G3, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_TE1_Yellow_Tracer_762x51_HK417, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR_bkl, 20 + BULPRICE*20, 100);
			ITEM( CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR_wdl, 20 + BULPRICE*20, 100);
			ITEM( CUP_21Rnd_9x19_M17_Black, 20 + BULPRICE*21, 100);
			ITEM( CUP_21Rnd_9x19_M17_Coyote, 20 + BULPRICE*21, 100);
			ITEM( CUP_21Rnd_9x19_M17_Green, 20 + BULPRICE*21, 100);
			ITEM( CUP_25Rnd_556x45_Famas, 20 + BULPRICE*25, 100);
			ITEM( CUP_25Rnd_556x45_Famas_Arid, 20 + BULPRICE*25, 100);
			ITEM( CUP_25Rnd_556x45_Famas_Arid_Tracer_Green, 20 + BULPRICE*25, 100);
			ITEM( CUP_25Rnd_556x45_Famas_Arid_Tracer_Red, 20 + BULPRICE*25, 100);
			ITEM( CUP_25Rnd_556x45_Famas_Arid_Tracer_Yellow, 20 + BULPRICE*25, 100);
			ITEM( CUP_25Rnd_556x45_Famas_Tracer_Green, 20 + BULPRICE*25, 100);
			ITEM( CUP_25Rnd_556x45_Famas_Tracer_Red, 20 + BULPRICE*25, 100);
			ITEM( CUP_25Rnd_556x45_Famas_Tracer_Yellow, 20 + BULPRICE*25, 100);
			ITEM( CUP_25Rnd_556x45_Famas_Wood, 20 + BULPRICE*25, 100);
			ITEM( CUP_25Rnd_556x45_Famas_Wood_Tracer_Green, 20 + BULPRICE*25, 100);
			ITEM( CUP_25Rnd_556x45_Famas_Wood_Tracer_Red, 20 + BULPRICE*25, 100);
			ITEM( CUP_25Rnd_556x45_Famas_Wood_Tracer_Yellow, 20 + BULPRICE*25, 100);
			ITEM( CUP_25Rnd_762x51_Galil_Mag, 20 + BULPRICE*25, 100);
			ITEM( CUP_25Rnd_762x51_Green_Tracers_Galil_Mag, 20 + BULPRICE*25, 100);
			ITEM( CUP_25Rnd_762x51_Red_Tracers_Galil_Mag, 20 + BULPRICE*25, 100);
			ITEM( CUP_2Rnd_12Gauge_HE, 20 + GRENPRICE*2, 100);
			ITEM( CUP_2Rnd_12Gauge_Pellets_No00_Buck, 20 + BULPRICE*2, 100);
			ITEM( CUP_2Rnd_12Gauge_Pellets_No0_Buck, 20 + BULPRICE*2, 100);
			ITEM( CUP_2Rnd_12Gauge_Pellets_No1_Buck, 20 + BULPRICE*2, 100);
			ITEM( CUP_2Rnd_12Gauge_Pellets_No2_Buck, 20 + BULPRICE*2, 100);
			ITEM( CUP_2Rnd_12Gauge_Pellets_No3_Buck, 20 + BULPRICE*2, 100);
			ITEM( CUP_2Rnd_12Gauge_Pellets_No4_Bird, 20 + BULPRICE*2, 100);
			ITEM( CUP_2Rnd_12Gauge_Pellets_No4_Buck, 20 + BULPRICE*2, 100);
			ITEM( CUP_2Rnd_12Gauge_Slug, 20 + BULPRICE*2, 100);
			ITEM( CUP_30Rnd_45ACP_Green_Tracer_M3A1_BLK_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_45ACP_Green_Tracer_M3A1_GRN_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_45ACP_Green_Tracer_M3A1_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_45ACP_Green_Tracer_M3A1_SND_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_45ACP_Green_Tracer_MAC10_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_45ACP_M3A1_BLK_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_45ACP_M3A1_GRN_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_45ACP_M3A1_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_45ACP_M3A1_SND_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_45ACP_MAC10_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_45ACP_Red_Tracer_M3A1_BLK_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_45ACP_Red_Tracer_M3A1_GRN_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_45ACP_Red_Tracer_M3A1_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_45ACP_Red_Tracer_M3A1_SND_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_45ACP_Yellow_Tracer_M3A1_BLK_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_45ACP_Yellow_Tracer_M3A1_GRN_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_45ACP_Yellow_Tracer_M3A1_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_45ACP_Yellow_Tracer_M3A1_SND_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_45ACP_Yellow_Tracer_MAC10_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_545x39_AK12_Green_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_545x39_AK12_Grey_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_545x39_AK12_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_545x39_AK12_Tan_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_545x39_AK74_plum_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_545x39_AK74M_camo_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_545x39_AK74M_desert_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_545x39_AK74M_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_545x39_AK_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_545x39_Fort224_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_AK, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_AK19_Green_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_AK19_Grey_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_AK19_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_AK19_Tan_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_AUG, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_CZ805, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_Emag, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_EMAG_Olive, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_EMAG_Tan, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_Emag_Tracer_Green, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_Emag_Tracer_Red, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_Emag_Tracer_Yellow, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_G36, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_G36_camo, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_G36_hex, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_G36_wdl, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_BLACK, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_BLACK_PULL, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_BLACK_PULL_Tracer_Green, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_BLACK_PULL_Tracer_Red, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_BLACK_PULL_Tracer_Yellow, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_BLACK_RPL, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_BLACK_RPL_Tracer_Green, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_BLACK_RPL_Tracer_Red, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_BLACK_RPL_Tracer_Yellow, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_BLACK_Tracer_Green, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_BLACK_Tracer_Red, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_BLACK_Tracer_Yellow, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_COYOTE, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_COYOTE_PULL, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_COYOTE_PULL_Tracer_Green, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_COYOTE_PULL_Tracer_Red, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_COYOTE_PULL_Tracer_Yellow, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_COYOTE_RPL, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_COYOTE_RPL_Tracer_Green, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_COYOTE_RPL_Tracer_Red, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_COYOTE_RPL_Tracer_Yellow, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_COYOTE_Tracer_Green, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_COYOTE_Tracer_Red, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_COYOTE_Tracer_Yellow, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_OD, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_OD_PULL, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_OD_PULL_Tracer_Green, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_OD_PULL_Tracer_Red, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_OD_PULL_Tracer_Yellow, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_OD_RPL, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_OD_RPL_Tracer_Green, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_OD_RPL_Tracer_Red, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_OD_RPL_Tracer_Yellow, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_OD_Tracer_Green, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_OD_Tracer_Red, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_OD_Tracer_Yellow, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_QP, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_QP_Olive, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_QP_Tan, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_QP_Tracer_Green, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_QP_Tracer_Red, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_PMAG_QP_Tracer_Yellow, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_Stanag, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_Stanag_L85, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_Stanag_L85_Tracer_Green, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_Stanag_L85_Tracer_Red, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_Stanag_L85_Tracer_Yellow, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_Stanag_Mk16, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_Stanag_Mk16_black, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_Stanag_Mk16_black_Tracer_Green, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_Stanag_Mk16_black_Tracer_Red, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_Stanag_Mk16_black_Tracer_Yellow, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_Stanag_Mk16_Tracer_Green, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_Stanag_Mk16_Tracer_Red, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_Stanag_Mk16_Tracer_Yellow, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_Stanag_Mk16_woodland, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_Stanag_Mk16_woodland_Tracer_Green, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_Stanag_Mk16_woodland_Tracer_Red, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_Stanag_Mk16_woodland_Tracer_Yellow, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_Stanag_Tracer_Green, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_Stanag_Tracer_Red, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_Stanag_Tracer_Yellow, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_TE1_Tracer_Green_AK19_Green_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_TE1_Tracer_Green_AK19_Grey_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_TE1_Tracer_Green_AK19_Tan_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_Tracer_Red_AK19_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_X95, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_X95_Tracer_Green, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_X95_Tracer_Red, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_X95_Tracer_Yellow, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_556x45_XM8, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_680x43_Stanag, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_680x43_Stanag_Tracer_Green, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_680x43_Stanag_Tracer_Red, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_680x43_Stanag_Tracer_Yellow, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_762x39_AK103_bakelite_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_762x39_AK15_Desert_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_762x39_AK15_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_762x39_AK15_OD_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_762x39_AK15_Tan_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_762x39_AK47_bakelite_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_762x39_AK47_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_762x39_AK47_TK_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_762x39_AKM_bakelite_desert_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_762x39_CZ807, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_762x51_1_B_SCAR, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_762x51_2_B_SCAR, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_762x51_FNFAL_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_9x19_EVO, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_9x19_MP5, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_9x19_UZI, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_9x19_Vityaz, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_9x19AP_Vityaz, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_9x39_SP5_VIKHR_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_Green_Tracer_9x19_MP5, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_Red_Tracer_9x19_MP5, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_Sa58_desert_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_Sa58_desert_M_TracerG, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_Sa58_desert_M_TracerR, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_Sa58_desert_M_TracerY, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_Sa58_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_Sa58_M_TracerG, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_Sa58_M_TracerR, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_Sa58_M_TracerY, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_Sa58_woodland_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_Sa58_woodland_M_TracerG, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_Sa58_woodland_M_TracerR, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_Sa58_woodland_M_TracerY, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_Subsonic_545x39_AK74_plum_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_Subsonic_545x39_AK74M_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_Subsonic_545x39_AK_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_Subsonic_545x39_Fort224_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_Subsonic_762x39_AK103_bakelite_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_Subsonic_762x39_AK47_bakelite_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_Subsonic_762x39_AK47_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_Subsonic_762x39_AKM_bakelite_desert_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_Subsonic_9x19_MP5, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Green_Tracer_545x39_AK12_Green_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Green_Tracer_545x39_AK12_Grey_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Green_Tracer_545x39_AK12_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Green_Tracer_545x39_AK12_Tan_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Green_Tracer_545x39_AK74_plum_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Green_Tracer_545x39_AK_camo_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Green_Tracer_545x39_AK_desert_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Green_Tracer_545x39_Fort224_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Green_Tracer_556x45_AK, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Green_Tracer_556x45_AUG, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Green_Tracer_556x45_CZ805, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Green_Tracer_556x45_G36, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Green_Tracer_556x45_G36_camo, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Green_Tracer_556x45_G36_hex, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Green_Tracer_556x45_G36_wdl, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Green_Tracer_556x45_XM8, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Green_Tracer_762x39_AK103_bakelite_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Green_Tracer_762x39_AK15_Desert_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Green_Tracer_762x39_AK15_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Green_Tracer_762x39_AK15_OD_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Green_Tracer_762x39_AK15_Tan_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_bakelite_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Green_Tracer_762x39_AKM_bakelite_desert_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Green_Tracer_762x39_CZ807, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Green_Tracer_762x51_1_SCAR, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Green_Tracer_762x51_2_SCAR, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Green_Tracer_762x51_FNFAL_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Red_Tracer_545x39_AK74_plum_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Red_Tracer_545x39_AK74M_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Red_Tracer_545x39_AK_camo_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Red_Tracer_545x39_AK_desert_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Red_Tracer_545x39_Fort224_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Red_Tracer_556x45_AK, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Red_Tracer_556x45_AUG, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Red_Tracer_556x45_CZ805, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Red_Tracer_556x45_G36, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Red_Tracer_556x45_G36_camo, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Red_Tracer_556x45_G36_hex, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Red_Tracer_556x45_G36_wdl, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Red_Tracer_556x45_XM8, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Red_Tracer_762x39_AK103_bakelite_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Red_Tracer_762x39_AK47_bakelite_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Red_Tracer_762x39_AK47_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Red_Tracer_762x39_AKM_bakelite_desert_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Red_Tracer_762x39_CZ807, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Red_Tracer_762x51_1_SCAR, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Red_Tracer_762x51_2_SCAR, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Red_Tracer_762x51_FNFAL_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_White_Tracer_545x39_AK74_plum_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_White_Tracer_545x39_AK74M_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_White_Tracer_545x39_AK_camo_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_White_Tracer_545x39_AK_desert_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_White_Tracer_545x39_AK_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_White_Tracer_545x39_Fort224_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_White_Tracer_762x51_1_SCAR, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_White_Tracer_762x51_2_SCAR, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK74_plum_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK74M_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_camo_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_desert_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Yellow_Tracer_545x39_Fort224_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Yellow_Tracer_556x45_AK, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Yellow_Tracer_556x45_AUG, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Yellow_Tracer_556x45_CZ805, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36_camo, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36_hex, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36_wdl, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Yellow_Tracer_556x45_XM8, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Yellow_Tracer_762x39_AK47_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Yellow_Tracer_762x39_AKM_bakelite_desert_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Yellow_Tracer_762x39_bakelite_AK103_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Yellow_Tracer_762x39_bakelite_AK47_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Yellow_Tracer_762x39_CZ807, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Yellow_Tracer_762x51_1_SCAR, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Yellow_Tracer_762x51_2_SCAR, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_TE1_Yellow_Tracer_762x51_FNFAL_M, 20 + BULPRICE*30, 100);
			ITEM( CUP_30Rnd_Yellow_Tracer_9x19_MP5, 20 + BULPRICE*30, 100);
			ITEM( CUP_32Rnd_9x19_TEC9, 20 + BULPRICE*32, 100);
			ITEM( CUP_32Rnd_9x19_UZI_M, 20 + BULPRICE*32, 100);
			ITEM( CUP_35Rnd_556x45_Galil_Mag, 20 + BULPRICE*35, 100);
			ITEM( CUP_35Rnd_556x45_Green_Tracer_Galil_Mag, 20 + BULPRICE*35, 100);
			ITEM( CUP_35Rnd_556x45_Red_Tracer_Galil_Mag, 20 + BULPRICE*35, 100);
			ITEM( CUP_40Rnd_46x30_MP7, 20 + BULPRICE*40, 100);
			ITEM( CUP_40Rnd_46x30_MP7_Green_Tracer, 20 + BULPRICE*40, 100);
			ITEM( CUP_40Rnd_46x30_MP7_Red_Tracer, 20 + BULPRICE*40, 100);
			ITEM( CUP_40Rnd_46x30_MP7_Yellow_Tracer, 20 + BULPRICE*40, 100);
			ITEM( CUP_40Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M, 20 + BULPRICE*40, 100);
			ITEM( CUP_45Rnd_Sa58_M, 20 + BULPRICE*45, 100);
			ITEM( CUP_45Rnd_Sa58_M_TracerG, 20 + BULPRICE*45, 100);
			ITEM( CUP_45Rnd_Sa58_M_TracerR, 20 + BULPRICE*45, 100);
			ITEM( CUP_45Rnd_Sa58_M_TracerY, 20 + BULPRICE*45, 100);
			ITEM( CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M, 20 + BULPRICE*45, 100);
			ITEM( CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M, 20 + BULPRICE*45, 100);
			ITEM( CUP_50Rnd_556x45_Galil_Mag, 20 + BULPRICE*50, 100);
			ITEM( CUP_50Rnd_556x45_Green_Tracer_Galil_Mag, 20 + BULPRICE*50, 100);
			ITEM( CUP_50Rnd_556x45_Red_Tracer_Galil_Mag, 20 + BULPRICE*50, 100);
			ITEM( CUP_50Rnd_570x28_Green_Tracer_P90_M, 20 + BULPRICE*50, 100);
			ITEM( CUP_50Rnd_570x28_Red_Tracer_P90_M, 20 + BULPRICE*50, 100);
			ITEM( CUP_50Rnd_570x28_Yellow_Tracer_P90_M, 20 + BULPRICE*50, 100);
			ITEM( CUP_50Rnd_762x51_B_SCAR, 20 + BULPRICE*50, 100);
			ITEM( CUP_50Rnd_B_765x17_Ball_M, 20 + BULPRICE*50, 100);
			ITEM( CUP_50Rnd_TE1_Green_Tracer_762x51_SCAR, 20 + BULPRICE*50, 100);
			ITEM( CUP_50Rnd_TE1_Red_Tracer_762x51_SCAR, 20 + BULPRICE*50, 100);
			ITEM( CUP_50Rnd_TE1_White_Tracer_762x51_SCAR, 20 + BULPRICE*50, 100);
			ITEM( CUP_50Rnd_TE1_Yellow_Tracer_762x51_SCAR, 20 + BULPRICE*50, 100);
			ITEM( CUP_50Rnd_UK59_762x54R_Tracer, 20 + BULPRICE*50, 100);
			ITEM( CUP_5Rnd_127x108_KSVK_M, 20 + LARGBULPRICE*5, 100);
			ITEM( CUP_5Rnd_127x99_as50_M, 20 + LARGBULPRICE*5, 100);
			ITEM( CUP_5Rnd_762x51_M24, 20 + BULPRICE*5, 100);
			ITEM( CUP_5Rnd_762x54_Mosin_M, 20 + BULPRICE*5, 100);
			ITEM( CUP_5Rnd_762x67_G22, 20 + BULPRICE*5, 100);
			ITEM( CUP_5Rnd_762x67_M2010_M, 20 + BULPRICE*5, 100);
			ITEM( CUP_5Rnd_B_Saiga12_Bird_4, 20 + BULPRICE*5, 100);
			ITEM( CUP_5Rnd_B_Saiga12_Buck_0, 20 + BULPRICE*5, 100);
			ITEM( CUP_5Rnd_B_Saiga12_Buck_00, 20 + BULPRICE*5, 100);
			ITEM( CUP_5Rnd_B_Saiga12_Buck_1, 20 + BULPRICE*5, 100);
			ITEM( CUP_5Rnd_B_Saiga12_Buck_2, 20 + BULPRICE*5, 100);
			ITEM( CUP_5Rnd_B_Saiga12_Buck_3, 20 + BULPRICE*5, 100);
			ITEM( CUP_5Rnd_B_Saiga12_Buck_4, 20 + BULPRICE*5, 100);
			ITEM( CUP_5Rnd_B_Saiga12_HE, 20 + GRENPRICE*5, 100);
			ITEM( CUP_5Rnd_B_Saiga12_Slug, 20 + BULPRICE*5, 100);
			ITEM( CUP_5Rnd_TE1_Red_Tracer_762x67_M2010_M, 20 + BULPRICE*5, 100);
			ITEM( CUP_60Rnd_545x39_AK74M_M, 20 + BULPRICE*60, 100);
			ITEM( CUP_60Rnd_556x45_SureFire, 20 + BULPRICE*60, 100);
			ITEM( CUP_60Rnd_556x45_SureFire_Tracer_Green, 20 + BULPRICE*60, 100);
			ITEM( CUP_60Rnd_556x45_SureFire_Tracer_Red, 20 + BULPRICE*60, 100);
			ITEM( CUP_60Rnd_556x45_SureFire_Tracer_Yellow, 20 + BULPRICE*60, 100);
			ITEM( CUP_60Rnd_TE1_Green_Tracer_545x39_AK74M_M, 20 + BULPRICE*60, 100);
			ITEM( CUP_60Rnd_TE1_Red_Tracer_545x39_AK74M_M, 20 + BULPRICE*60, 100);
			ITEM( CUP_60Rnd_TE1_White_Tracer_545x39_AK74M_M, 20 + BULPRICE*60, 100);
			ITEM( CUP_60Rnd_TE1_Yellow_Tracer_545x39_AK74M_M, 20 + BULPRICE*60, 100);
			ITEM( CUP_64Rnd_9x19_Bizon_M, 20 + BULPRICE*64, 100);
			ITEM( CUP_64Rnd_Green_Tracer_9x19_Bizon_M, 20 + BULPRICE*64, 100);
			ITEM( CUP_64Rnd_Red_Tracer_9x19_Bizon_M, 20 + BULPRICE*64, 100);
			ITEM( CUP_64Rnd_White_Tracer_9x19_Bizon_M, 20 + BULPRICE*64, 100);
			ITEM( CUP_64Rnd_Yellow_Tracer_9x19_Bizon_M, 20 + BULPRICE*64, 100);
			ITEM( CUP_6Rnd_12Gauge_HE, 20 + GRENPRICE*6, 100);
			ITEM( CUP_6Rnd_12Gauge_Pellets_No00_Buck, 20 + BULPRICE*6, 100);
			ITEM( CUP_6Rnd_12Gauge_Pellets_No0_Buck, 20 + BULPRICE*6, 100);
			ITEM( CUP_6Rnd_12Gauge_Pellets_No1_Buck, 20 + BULPRICE*6, 100);
			ITEM( CUP_6Rnd_12Gauge_Pellets_No2_Buck, 20 + BULPRICE*6, 100);
			ITEM( CUP_6Rnd_12Gauge_Pellets_No3_Buck, 20 + BULPRICE*6, 100);
			ITEM( CUP_6Rnd_12Gauge_Pellets_No4_Bird, 20 + BULPRICE*6, 100);
			ITEM( CUP_6Rnd_12Gauge_Pellets_No4_Buck, 20 + BULPRICE*6, 100);
			ITEM( CUP_6Rnd_12Gauge_Slug, 20 + BULPRICE*6, 100);
			ITEM( CUP_6Rnd_45ACP_M, 20 + BULPRICE*6, 100);
			ITEM( CUP_6Rnd_762x51_R700, 20 + BULPRICE*6, 100);
			ITEM( CUP_6Rnd_B_Beneli_74Pellets, 20 + BULPRICE*6, 100);
			ITEM( CUP_6Rnd_B_Benelli_74Slug, 20 + BULPRICE*6, 100);
			ITEM( CUP_6Rnd_FlareGreen_GP25_M, 20 + GRENPRICE*6, 100);
			ITEM( CUP_6Rnd_FlareGreen_M203, 20 + GRENPRICE*6, 100);
			ITEM( CUP_6Rnd_FlareRed_GP25_M, 20 + GRENPRICE*6, 100);
			ITEM( CUP_6Rnd_FlareRed_M203, 20 + GRENPRICE*6, 100);
			ITEM( CUP_6Rnd_FlareWhite_GP25_M, 20 + GRENPRICE*6, 100);
			ITEM( CUP_6Rnd_FlareWhite_M203, 20 + GRENPRICE*6, 100);
			ITEM( CUP_6Rnd_FlareYellow_GP25_M, 20 + GRENPRICE*6, 100);
			ITEM( CUP_6Rnd_FlareYellow_M203, 20 + GRENPRICE*6, 100);
			ITEM( CUP_6Rnd_HE_GP25_M, 20 + GRENPRICE*6, 100);
			ITEM( CUP_6Rnd_HE_Grenade_M, 20 + GRENPRICE*6, 100);
			ITEM( CUP_6Rnd_HE_M203, 20 + GRENPRICE*6, 100);
			ITEM( CUP_6Rnd_HE_M203_heli, 20 + GRENPRICE*6, 100);
			ITEM( CUP_6Rnd_Smoke_GP25, 20 + GRENPRICE*6, 100);
			ITEM( CUP_6Rnd_Smoke_M203, 20 + GRENPRICE*6, 100);
			ITEM( CUP_6Rnd_SmokeGreen_GP25, 20 + GRENPRICE*6, 100);
			ITEM( CUP_6Rnd_SmokeGreen_M203, 20 + GRENPRICE*6, 100);
			ITEM( CUP_6Rnd_SmokeRed_GP25, 20 + GRENPRICE*6, 100);
			ITEM( CUP_6Rnd_SmokeRed_M203, 20 + GRENPRICE*6, 100);
			ITEM( CUP_6Rnd_SmokeYellow_GP25, 20 + GRENPRICE*6, 100);
			ITEM( CUP_6Rnd_SmokeYellow_M203, 20 + GRENPRICE*6, 100);
			ITEM( CUP_72Rnd_9x19_UZI_M, 20 + BULPRICE*72, 100);
			ITEM( CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M, 20 + BULPRICE*75, 100);
			ITEM( CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M, 20 + BULPRICE*75, 100);
			ITEM( CUP_7Rnd_45ACP_1911, 20 + BULPRICE*7, 100);
			ITEM( CUP_7Rnd_50AE_Deagle, 20 + LARGBULPRICE*7, 100);
			ITEM( CUP_7Rnd_B_CZ584_OFP, 20 + BULPRICE*7, 100);
			ITEM( CUP_8Rnd_12Gauge_HE, 20 + GRENPRICE*8, 100);
			ITEM( CUP_8Rnd_12Gauge_Pellets_No00_Buck, 20 + BULPRICE*8, 100);
			ITEM( CUP_8Rnd_12Gauge_Pellets_No0_Buck, 20 + BULPRICE*8, 100);
			ITEM( CUP_8Rnd_12Gauge_Pellets_No1_Buck, 20 + BULPRICE*8, 100);
			ITEM( CUP_8Rnd_12Gauge_Pellets_No2_Buck, 20 + BULPRICE*8, 100);
			ITEM( CUP_8Rnd_12Gauge_Pellets_No3_Buck, 20 + BULPRICE*8, 100);
			ITEM( CUP_8Rnd_12Gauge_Pellets_No4_Bird, 20 + BULPRICE*8, 100);
			ITEM( CUP_8Rnd_12Gauge_Pellets_No4_Buck, 20 + BULPRICE*8, 100);
			ITEM( CUP_8Rnd_12Gauge_Slug, 20 + BULPRICE*8, 100);
			ITEM( CUP_8Rnd_357SW_M, 20 + BULPRICE*8, 100);
			ITEM( CUP_8Rnd_762x25_TT, 20 + BULPRICE*8, 100);
			ITEM( CUP_8Rnd_9x18_Makarov_M, 20 + BULPRICE*8, 100);
			ITEM( CUP_8Rnd_9x18_MakarovSD_M, 20 + BULPRICE*8, 100);
			ITEM( CUP_8Rnd_B_Beneli_74Pellets, 20 + BULPRICE*8, 100);
			ITEM( CUP_8Rnd_B_Beneli_74Slug, 20 + BULPRICE*8, 100);
			ITEM( CUP_8Rnd_B_Saiga12_74Pellets_M, 20 + BULPRICE*8, 100);
			ITEM( CUP_8Rnd_B_Saiga12_74Slug_M, 20 + BULPRICE*8, 100);

			ITEM(CUP_FlareGreen_265_M, 20 + GRENPRICE, 100);
			ITEM(CUP_FlareGreen_GP25_M, 20 + GRENPRICE, 100);
			ITEM(CUP_FlareGreen_M203, 20 + GRENPRICE, 100);
			ITEM(CUP_FlareRed_265_M, 20 + GRENPRICE, 100);
			ITEM(CUP_FlareRed_GP25_M, 20 + GRENPRICE, 100);
			ITEM(CUP_FlareRed_M203, 20 + GRENPRICE, 100);
			ITEM(CUP_FlareWhite_265_M, 20 + GRENPRICE, 100);
			ITEM(CUP_FlareWhite_GP25_M, 20 + GRENPRICE, 100);
			ITEM(CUP_FlareWhite_M203, 20 + GRENPRICE, 100);
			ITEM(CUP_FlareYellow_265_M, 20 + GRENPRICE, 100);
			ITEM(CUP_FlareYellow_GP25_M, 20 + GRENPRICE, 100);
			ITEM(CUP_FlareYellow_M203, 20 + GRENPRICE, 100);
			ITEM(CUP_HandGrenade_L109A1_HE, 20 + GRENPRICE, 100);
			ITEM(CUP_HandGrenade_L109A2_HE, 20 + GRENPRICE, 100);
			ITEM(CUP_HandGrenade_M67, 20 + GRENPRICE, 100);
			ITEM(CUP_HandGrenade_RGD5, 20 + GRENPRICE, 100);
			ITEM(CUP_HandGrenade_RGO, 20 + GRENPRICE, 100);
			ITEM(CUP_IllumFlareGreen_265_M, 20 + GRENPRICE, 100);
			ITEM(CUP_IllumFlareRed_265_M, 20 + GRENPRICE, 100);
			ITEM(CUP_IllumFlareWhite_265_M, 20 + GRENPRICE, 100);
			ITEM(CUP_IllumFlareYellow_265_M, 20 + GRENPRICE, 100);
			ITEM(CUP_IlumFlareGreen_GP25_M, 20 + GRENPRICE, 100);
			ITEM(CUP_IlumFlareRed_GP25_M, 20 + GRENPRICE, 100);
			ITEM(CUP_IlumFlareWhite_GP25_M, 20 + GRENPRICE, 100);
			ITEM(CUP_StarClusterGreen_265_M, 20 + GRENPRICE, 100);
			ITEM(CUP_StarClusterRed_265_M, 20 + GRENPRICE, 100);
			ITEM(CUP_StarClusterWhite_265_M, 20 + GRENPRICE, 100);
			ITEM(CUP_StarClusterYellow_265_M, 20 + GRENPRICE, 100);
		};

		class underbarrelCup 
		{
			displayName = __EVAL(formatText ["%1 %2", localize "STR_A3AU_cup", localize "STR_A3AU_bipods"]);
			picture = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemBipod_ca.paa";

			ITEM(bipod_02_F_arid, 100, 50);
			ITEM(bipod_03_F_blk, 100, 50);
			ITEM(bipod_02_F_blk, 100, 50);
			ITEM(bipod_01_F_blk, 100, 50);
			ITEM(bipod_02_F_hex, 100, 50);
			ITEM(bipod_01_F_khk, 100, 50);
			ITEM(bipod_02_F_lush, 100, 50);
			ITEM(bipod_01_F_mtp, 100, 50);
			ITEM(bipod_03_F_oli, 100, 50);
			ITEM(bipod_01_F_snd, 100, 50);
			ITEM(bipod_02_F_tan, 100, 50);
			
			ITEM(CUP_bipod_FNFAL, 100, 50);
		};

		class pointersCup 
		{
			displayName = __EVAL(formatText ["%1 %2 %3 %4", localize "STR_A3AU_cup", localize "STR_A3AU_pointers", localize "STR_A3AU_and", localize "STR_A3AU_flashlights"]);
			picture = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemAcc_ca.paa";

			ITEM(acc_flashlight, 75, PN_STOCK);
			ITEM(acc_flashlight_smg_01, 75, PN_STOCK);
			ITEM(acc_pointer_IR, 100, PN_STOCK);
			ITEM(acc_flashlight_pistol, 75, PN_STOCK);

			ITEM(CUP_acc_ANPEQ_15_Black, 100, PN_STOCK);
			ITEM(CUP_acc_ANPEQ_15_OD, 100, PN_STOCK);
			ITEM(CUP_acc_ANPEQ_15_OD_Top, 100, PN_STOCK);
			ITEM(CUP_acc_ANPEQ_15, 100, PN_STOCK);
			ITEM(CUP_acc_ANPEQ_15_Black_Top, 100, PN_STOCK);
			ITEM(CUP_acc_ANPEQ_15_Tan_Top, 100, PN_STOCK);
			ITEM(CUP_acc_ANPEQ_15_Flashlight_Black_L, 150, PN_STOCK);
			ITEM(CUP_acc_ANPEQ_15_Flashlight_OD_L, 150, PN_STOCK);
			ITEM(CUP_acc_ANPEQ_15_Flashlight_Tan_L, 150, PN_STOCK);
			ITEM(CUP_acc_ANPEQ_15_Top_Flashlight_Black_L, 150, PN_STOCK);
			ITEM(CUP_acc_ANPEQ_15_Top_Flashlight_OD_L, 150, PN_STOCK);
			ITEM(CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L, 150, PN_STOCK);

			ITEM(CUP_acc_Flashlight, 50, PN_STOCK);
			ITEM(CUP_acc_Flashlight_desert, 50, PN_STOCK);
			ITEM(CUP_acc_Flashlight_wdl, 50, PN_STOCK);
			
			ITEM(CUP_acc_CZ_M3X, 75, PN_STOCK);
			ITEM(CUP_acc_Glock17_Flashlight, 75, PN_STOCK);
			ITEM(CUP_acc_MLPLS_Laser, 75, PN_STOCK);

			ITEM(CUP_SVD_camo_d, 25, PN_STOCK);
			ITEM(CUP_SVD_camo_g, 25, PN_STOCK);
			ITEM(CUP_SVD_camo_d_half, 15, PN_STOCK);
			ITEM(CUP_SVD_camo_g_half, 15, PN_STOCK);
		};

		class muzzlesCup 
		{
			displayName = __EVAL(formatText ["%1 %2", localize "STR_A3AU_cup", localize "STR_A3AU_muzzles"]);
			picture = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemMuzzle_ca.paa";

			ITEM(muzzle_snds_338_black, 500, MZ_STOCK); //5
			ITEM(muzzle_snds_338_green, 500, MZ_STOCK);
			ITEM(muzzle_snds_338_sand, 500, MZ_STOCK);
			ITEM(muzzle_snds_93mmg, 600, MZ_STOCK); //4
			ITEM(muzzle_snds_93mmg_tan, 600, MZ_STOCK);
			ITEM(muzzle_snds_acp, 150, MZ_STOCK);
			ITEM(muzzle_snds_B, 200, MZ_STOCK);//3
			ITEM(muzzle_snds_B_khk_F, 200, MZ_STOCK);
			ITEM(muzzle_snds_B_snd_F, 200, MZ_STOCK);
			ITEM(muzzle_snds_H, 200, MZ_STOCK);//2
			ITEM(muzzle_snds_H_khk_F, 200, MZ_STOCK);//2
			ITEM(muzzle_snds_H_snd_F, 200, MZ_STOCK);
			ITEM(muzzle_snds_H_MG, 200, MZ_STOCK);
			ITEM(muzzle_snds_H_SW, 200, MZ_STOCK);
			ITEM(muzzle_snds_L, 200, MZ_STOCK);//1
			ITEM(muzzle_snds_M, 200, MZ_STOCK);
			ITEM(muzzle_snds_58_blk_F, 150, MZ_STOCK);//1
			ITEM(muzzle_snds_m_khk_F, 200, MZ_STOCK);
			ITEM(muzzle_snds_m_snd_F, 200, MZ_STOCK);
			ITEM(muzzle_snds_58_wdm_F, 150, MZ_STOCK);//1
			ITEM(muzzle_snds_58_ghex_F, 150, MZ_STOCK);
			ITEM(muzzle_snds_58_hex_F, 150, MZ_STOCK);
			ITEM(muzzle_snds_65_TI_blk_F, 350, MZ_STOCK); //2
			ITEM(muzzle_snds_65_TI_hex_F, 350, MZ_STOCK);
			ITEM(muzzle_snds_65_TI_ghex_F, 350, MZ_STOCK);
			ITEM(muzzle_snds_H_MG_blk_F, 200, MZ_STOCK);
			ITEM(muzzle_snds_H_MG_khk_F, 200, MZ_STOCK);

			ITEM(CUP_muzzle_mfsup_Suppressor_Mac10, 100, MZ_STOCK);
			ITEM(CUP_muzzle_PB6P9, 150, MZ_STOCK);
			ITEM(CUP_muzzle_snds_mk23, 150, MZ_STOCK);

			ITEM(CUP_muzzle_mfsup_Flashhider_545x39_Black, 100, MZ_STOCK);
			ITEM(CUP_muzzle_mfsup_Flashhider_545x39_OD, 100, MZ_STOCK);
			ITEM(CUP_muzzle_mfsup_Flashhider_545x39_Tan, 100, MZ_STOCK);

			ITEM(CUP_muzzle_snds_KZRZP_AK545, 150, MZ_STOCK);
			ITEM(CUP_muzzle_snds_KZRZP_AK545_desert, 150, MZ_STOCK);
			ITEM(CUP_muzzle_snds_KZRZP_AK545_woodland, 150, MZ_STOCK);

			ITEM(CUP_muzzle_PBS4, 150, MZ_STOCK);
			
			ITEM(CUP_muzzle_TGPA, 150, MZ_STOCK);
			ITEM(CUP_muzzle_TGPA_desert, 150, MZ_STOCK);
			ITEM(CUP_muzzle_TGPA_woodland, 150, MZ_STOCK);

			ITEM(CUP_muzzle_snds_68SPC, 300, MZ_STOCK);
			ITEM(CUP_muzzle_snds_groza, 300, MZ_STOCK);

			ITEM(CUP_muzzle_Bizon, 300, MZ_STOCK);
			ITEM(CUP_muzzle_snds_AWM, 400, MZ_STOCK);
			ITEM(CUP_muzzle_mfsup_Suppressor_M107_Black, 760, MZ_STOCK);

			ITEM(CUP_muzzle_snds_KZRZP_SVD, 300, MZ_STOCK);
			ITEM(CUP_muzzle_snds_KZRZP_SVD_desert, 300, MZ_STOCK);
			ITEM(CUP_muzzle_snds_KZRZP_SVD_woodland, 300, MZ_STOCK);

			ITEM(CUP_muzzle_snds_M9, 150, MZ_STOCK);
			ITEM(CUP_muzzle_snds_SR3M, 250, MZ_STOCK);

			ITEM(CUP_muzzle_mfsup_Flashhider_762x39_Black, 300, MZ_STOCK);
			ITEM(CUP_muzzle_mfsup_Flashhider_762x39_OD, 300, MZ_STOCK);
			ITEM(CUP_muzzle_mfsup_Flashhider_762x39_Tan, 300, MZ_STOCK);
			ITEM(CUP_muzzle_snds_SCAR_H, 400, MZ_STOCK);
		};

		class opticsCup 
		{
			displayName = __EVAL(formatText ["%1 %2", localize "STR_A3AU_cup", localize "STR_A3AU_sights"]);
			picture = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemOptic_ca.paa";

			class CUP_optic_artel_m14 {
				price = 300;
				stock = 100;
			};

			class CUP_optic_PEM {
				price = 300;
				stock = 100;
			};

			class CUP_optic_no23mk2 {
				price = 300;
				stock = 100;
			};

			class CUP_optic_GrozaScope {
				price = 300;
				stock = 100;
			};

			class CUP_optic_1p63 {
				price = 100;
				stock = 100;
			};
			class CUP_optic_Kobra {
				price = 100;
				stock = 100;
			};
			class CUP_optic_ekp_8_02 {
				price = 150;
				stock = 100;
			};
			class CUP_optic_NSPU {
				price = 450;
				stock = 100;
			};
			class CUP_optic_PechenegScope {
				price = 350;
				stock = 100;
			};
			class CUP_optic_PSO_1_1 {
				price = 500;
				stock = 100;
			};
			class CUP_optic_PSO_1_1_open {
				price = 500;
				stock = 100;
			};
			class CUP_optic_PSO_1 {
				price = 500;
				stock = 100;
			};
			class CUP_optic_PSO_1_AK {
				price = 500;
				stock = 100;
			};
			class CUP_optic_PSO_1_open {
				price = 500;
				stock = 100;
			};
			class CUP_optic_PSO_1_AK_open {
				price = 500;
				stock = 100;
			};
			class CUP_optic_PSO_3 {
				price = 800;
				stock = 100;
			};
			class CUP_optic_PSO_3_open {
				price = 800;
				stock = 100;
			};
			class CUP_optic_GOSHAWK {
				price = 2250;
				stock = 5;
			};

			class CUP_optic_AC11704_Black {
				price = 250;
				stock = 100;
			};
			class CUP_optic_AC11704_Coyote {
				price = 250;
				stock = 100;
			};
			class CUP_optic_AC11704_Jungle {
				price = 250;
				stock = 100;
			};
			class CUP_optic_AC11704_OD {
				price = 250;
				stock = 100;
			};
			class CUP_optic_AC11704_Tan {
				price = 250;
				stock = 100;
			};


			class CUP_optic_CompM2_low {
				price = 200;
				stock = 100;
			};
			class CUP_optic_CompM2_low_coyote {
				price = 200;
				stock = 100;
			};
			class CUP_optic_CompM2_low_OD {
				price = 200;
				stock = 100;
			};

			class CUP_optic_AIMM_M68_BLK {
				price = 400;
				stock = 100;
			};
			class CUP_optic_AIMM_M68_TAN {
				price = 400;
				stock = 100;
			};
			class CUP_optic_AIMM_M68_OD {
				price = 400;
				stock = 100;
			};

			class CUP_optic_AIMM_COMPM2_BLK {
				price = 400;
				stock = 100;
			};
			class CUP_optic_AIMM_COMPM2_TAN {
				price = 400;
				stock = 100;
			};
			class CUP_optic_AIMM_COMPM2_OD {
				price = 400;
				stock = 100;
			};

			class CUP_optic_CompM2_Black {
				price = 200;
				stock = 100;
			};
			class CUP_optic_CompM2_Coyote {
				price = 200;
				stock = 100;
			};
			class CUP_optic_CompM2_Desert {
				price = 200;
				stock = 100;
			};
			class CUP_optic_CompM2_OD {
				price = 200;
				stock = 100;
			};
			class CUP_optic_CompM2_Woodland2 {
				price = 200;
				stock = 100;
			};
			class CUP_optic_CompM2_Woodland {
				price = 200;
				stock = 100;
			};

			class CUP_optic_SB_11_4x20_PM {
				price = 1000;
				stock = 100;
			};
			class CUP_optic_SB_11_4x20_PM_od {
				price = 1000;
				stock = 100;
			};
			class CUP_optic_SB_11_4x20_PM_tan {
				price = 1000;
				stock = 100;
			};

			class CUP_optic_ACOG2 {
				price = 550;
				stock = 100;
			};


			class CUP_optic_TrijiconRx01_black {
				price = 200;
				stock = 100;
			};
			class CUP_optic_TrijiconRx01_desert {
				price = 200;
				stock = 100;
			};
			class CUP_optic_TrijiconRx01_od {
				price = 200;
				stock = 100;
			};

			class CUP_optic_CompM4 {
				price = 200;
				stock = 100;
			};
			class CUP_optic_AIMM_COMPM4_BLK {
				price = 450;
				stock = 100;
			};
			class CUP_optic_MicroT1 {
				price = 200;
				stock = 100;
			};
			class CUP_optic_MicroT1_coyote {
				price = 200;
				stock = 100;
			};
			class CUP_optic_MicroT1_low {
				price = 200;
				stock = 100;
			};
			class CUP_optic_MicroT1_low_OD {
				price = 200;
				stock = 100;
			};
			class CUP_optic_MicroT1_OD {
				price = 200;
				stock = 100;
			};
			class CUP_optic_AN_PVS_4 {
				price = 600;
				stock = 100;
			};
			class CUP_optic_AN_PVS_4_M14 {
				price = 600;
				stock = 100;
			};
			class CUP_optic_AN_PVS_4_M16 {
				price = 600;
				stock = 100;
			};

			class CUP_optic_Elcan_SpecterDR_black {
				price = 600;
				stock = 100;
			};
			class CUP_optic_Elcan_SpecterDR_coyote {
				price = 600;
				stock = 100;
			};
			class CUP_optic_Elcan_SpecterDR_od {
				price = 600;
				stock = 100;
			};
			class CUP_optic_Elcan_SpecterDR {
				price = 600;
				stock = 100;
			};

			class CUP_optic_Elcan_SpecterDR_KF_black {
				price = 650;
				stock = 100;
			};
			class CUP_optic_Elcan_SpecterDR_KF_coyote {
				price = 650;
				stock = 100;
			};
			class CUP_optic_Elcan_SpecterDR_KF_od {
				price = 650;
				stock = 100;
			};
			class CUP_optic_Elcan_SpecterDR_KF {
				price = 650;
				stock = 100;
			};

			class CUP_optic_Elcan_SpecterDR_RMR_black {
				price = 750;
				stock = 100;
			};
			class CUP_optic_Elcan_SpecterDR_RMR_coyote {
				price = 750;
				stock = 100;
			};
			class CUP_optic_Elcan_SpecterDR_RMR_od {
				price = 750;
				stock = 100;
			};
			class CUP_optic_Elcan_SpecterDR_RMR {
				price = 750;
				stock = 100;
			};

			class CUP_optic_Elcan {
				price = 750;
				stock = 100;
			};
			class CUP_optic_Elcan_Coyote {
				price = 750;
				stock = 100;
			};
			class CUP_optic_Elcan_OD {
				price = 750;
				stock = 100;
			};

			class CUP_optic_Elcan_reflex {
				price = 900;
				stock = 100;
			};
			class CUP_optic_Elcan_reflex_Coyote {
				price = 900;
				stock = 100;
			};
			class CUP_optic_Elcan_reflex_OD {
				price = 900;
				stock = 100;
			};

			class CUP_optic_HensoldtZO {
				price = 500;
				stock = 100;
			};
			class CUP_optic_HensoldtZO_coyote {
				price = 500;
				stock = 100;
			};
			class CUP_optic_HensoldtZO_desert {
				price = 500;
				stock = 100;
			};
			class CUP_optic_HensoldtZO_hex {
				price = 500;
				stock = 100;
			};
			class CUP_optic_HensoldtZO_od {
				price = 500;
				stock = 100;
			};

			class CUP_optic_HensoldtZO_low {
				price = 500;
				stock = 100;
			};
			class CUP_optic_HensoldtZO_low_coyote {
				price = 500;
				stock = 100;
			};
			class CUP_optic_HensoldtZO_low_desert {
				price = 500;
				stock = 100;
			};
			class CUP_optic_HensoldtZO_low_hex {
				price = 500;
				stock = 100;
			};
			class CUP_optic_HensoldtZO_low_od {
				price = 500;
				stock = 100;
			};

			class CUP_optic_HensoldtZO_RDS {
				price = 650;
				stock = 100;
			};
			class CUP_optic_HensoldtZO_RDS_coyote {
				price = 650;
				stock = 100;
			};
			class CUP_optic_HensoldtZO_RDS_desert {
				price = 650;
				stock = 100;
			};
			class CUP_optic_HensoldtZO_RDS_hex {
				price = 650;
				stock = 100;
			};
			class CUP_optic_HensoldtZO_RDS_od {
				price = 650;
				stock = 100;
			};

			class CUP_optic_HensoldtZO_low_RDS {
				price = 650;
				stock = 100;
			};
			class CUP_optic_HensoldtZO_low_RDS_coyote {
				price = 650;
				stock = 100;
			};
			class CUP_optic_HensoldtZO_low_RDS_desert {
				price = 650;
				stock = 100;
			};
			class CUP_optic_HensoldtZO_low_RDS_hex {
				price = 650;
				stock = 100;
			};
			class CUP_optic_HensoldtZO_low_RDS_od {
				price = 650;
				stock = 100;
			};
			
			class CUP_optic_LeupoldMk4 {
				price = 1000;
				stock = 100;
			};
			class CUP_optic_LeupoldMk4_10x40_LRT_Desert {
				price = 650;
				stock = 100;
			};
			class CUP_optic_LeupoldMk4_10x40_LRT_Woodland {
				price = 650;
				stock = 100;
			};
			
			class CUP_optic_LeupoldMk4_25x50_LRT {
				price = 1300;
				stock = 100;
			};
			class CUP_optic_LeupoldMk4_25x50_LRT_DESERT {
				price = 1300;
				stock = 100;
			};
			class CUP_optic_LeupoldMk4_25x50_LRT_SNOW {
				price = 650;
				stock = 100;
			};
			class CUP_optic_LeupoldMk4_25x50_LRT_WOODLAND {
				price = 650;
				stock = 100;
			};

			class CUP_optic_LeupoldMk4_CQ_T {
				price = 400;
				stock = 100;
			};


			class CUP_optic_AN_PAS_13c1 {
				price = 3000;
				stock = 5;
			};			
			class optic_Hamr_khk_F {
				price = 700;
				stock = 100;
			};
			class optic_SOS_khk_F {
				price = 800;
				stock = 100;
			};
			class optic_Arco_ghex_F {
				price = 650;
				stock = 100;
			};
			class optic_Arco_blk_F {
				price = 650;
				stock = 100;
			};
			class optic_Arco_AK_blk_F {
				price = 650;
				stock = 100;
			};
			class optic_Arco_AK_lush_F {
				price = 650;
				stock = 100;
			};
			class optic_Arco_AK_arid_F {
				price = 650;
				stock = 100;
			};
			class optic_Arco_arid_F {
				price = 650;
				stock = 100;
			};
			class optic_Arco_lush_F {
				price = 650;
				stock = 100;
			};
			class optic_DMS_ghex_F {
				price = 900;
				stock = 100;
			};
			class optic_ERCO_blk_F {
				price = 800;
				stock = 100;
			};
			class optic_ERCO_khk_F {
				price = 800;
				stock = 100;
			};
			class optic_ERCO_snd_F {
				price = 800;
				stock = 100;
			};
			class optic_LRPS_ghex_F {
				price = 1000;
				stock = 100;
			};
			class optic_LRPS_tna_F {
				price = 1000;
				stock = 100;
			};
			class optic_Holosight_blk_F {
				price = 250;
				stock = 100;
			};
			class optic_Holosight_lush_F {
				price = 250;
				stock = 100;
			};
			class optic_Holosight_arid_F {
				price = 250;
				stock = 100;
			};
			class optic_Holosight_khk_F {
				price = 250;
				stock = 100;
			};
			class optic_Holosight_smg_blk_F {
				price = 250;
				stock = 100;
			};
			class optic_Holosight_smg_khk_F {
				price = 250;
				stock = 100;
			};
			class optic_DMS_weathered_Kir_F {
				price = 1000;
				stock = 100;
			};
			class optic_Aco {
				price = 200; 
				stock = 100;
			};
			class optic_ACO_grn {
				price = 200; 
				stock = 100;
			};
			class optic_ACO_grn_smg {
				price = 200; 
				stock = 100;
			};
			class optic_Aco_smg {
				price = 200; 
				stock = 100;
			};
			class optic_AMS {
				price = 1200;
				stock = 100;
			};
			class optic_AMS_khk {
				price = 1200;
				stock = 100;
			};
			class optic_AMS_snd {
				price = 1200;
				stock = 100;
			};
			class optic_Arco {
				price = 650;
				stock = 100;
			};
			class optic_DMS {
				price = 1000;
				stock = 100;
			};
			class optic_Hamr {
				price = 700;
				stock = 100;
			};
			class optic_Holosight {
				price = 250;
				stock = 100;
			};
			class optic_Holosight_smg {
				price = 250;
				stock = 100;
			};
			class optic_KHS_blk {
				price = 1100;
				stock = 100;
			};
			class optic_KHS_hex {
				price = 1100;
				stock = 100;
			};
			class optic_KHS_old {
				price = 1100;
				stock = 100;
			};
			class optic_KHS_tan {
				price = 1100;
				stock = 100;
			};
			class optic_LRPS {
				price = 1000;
				stock = 100;
			};
			class optic_MRCO {
				price = 500;
				stock = 100;
			};
			class optic_MRD {
				price = 100;
				stock = 100;
			};
			class optic_MRD_black {
				price = 100;
				stock = 100;
			};
			class optic_NVS {
				price = 1500;
				stock = 100;
			};
			class optic_SOS {
				price = 800;
				stock = 100;
			};
			class optic_Yorris {
				price = 100;
				stock = 100;
			};
		};

		class navigationCup 
		{
			displayName = __EVAL(formatText ["%1 %2, %3 %4 %5", localize "STR_A3AU_cup", localize "STR_A3AU_gps", localize "STR_A3AU_binoculars", localize "STR_A3AU_and", localize "STR_A3AU_nvgs"]);
			picture = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\compass_ca.paa";

			ITEM(ItemGPS, 300, NN_STOCK);
			ITEM(ItemRadio, 75, NN_STOCK);
			ITEM(Rangefinder, 600, NN_STOCK);
			ITEM(CUP_Vector21Nite, 600, NN_STOCK);
			ITEM(Laserdesignator, 1500, NN_STOCK);
			ITEM(Laserdesignator_02, 1500, NN_STOCK);
			ITEM(Laserdesignator_03, 1500, NN_STOCK);
			ITEM(CUP_SOFLAM, 1500, NN_STOCK);
			ITEM(CUP_LRTV, 1500, NN_STOCK);
			ITEM(NVGoggles, 500, NN_STOCK);
			ITEM(CUP_NVG_PVS15_tan, 1000, NN_STOCK);
			ITEM(CUP_NVG_PVS15_green, 1000, NN_STOCK);
			ITEM(CUP_NVG_PVS15_black, 1000, NN_STOCK);
			ITEM(CUP_NVG_PVS15_winter, 1000, NN_STOCK);
			ITEM(CUP_NVG_PVS7, 1000, NN_STOCK);
			ITEM(CUP_NVG_PVS14, 1000, NN_STOCK);
			ITEM(CUP_NVG_GPNVG_black, 1000, NN_STOCK);
			ITEM(CUP_NVG_GPNVG_green, 1000, NN_STOCK);
			ITEM(CUP_NVG_GPNVG_tan, 1000, NN_STOCK);
			ITEM(CUP_NVG_GPNVG_winter, 1000, NN_STOCK);
			ITEM(CUP_NVG_HMNVS, 1000, NN_STOCK);
		};

		class miscCup 
		{
			displayName = __EVAL(formatText ["%1 %2", localize "STR_A3AU_cup", localize "STR_A3AU_misc"]);
			picture = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\backpack_ca.paa";

			ITEM(B_Bergen_dgtl_F, 900, MISC_STOCK);
			ITEM(B_Bergen_hex_F, 900, MISC_STOCK);
			ITEM(B_Bergen_mcamo_F, 900, MISC_STOCK);
			ITEM(B_Bergen_tna_F, 900, MISC_STOCK);
			ITEM(CUP_O_RUS_Patrol_bag_BeigeDigital, 650, MISC_STOCK);
			ITEM(CUP_O_RUS_Patrol_bag_BeigeDigital_Shovel, 650, MISC_STOCK);
			ITEM(CUP_O_RUS_Patrol_bag_Green, 650, MISC_STOCK);
			ITEM(CUP_O_RUS_Patrol_bag_Green_Shovel, 650, MISC_STOCK);
			ITEM(CUP_O_RUS_Patrol_bag_Desert, 650, MISC_STOCK);
			ITEM(CUP_O_RUS_Patrol_bag_Desert_Shovel, 650, MISC_STOCK);
			ITEM(CUP_O_RUS_Patrol_bag_Summer, 650, MISC_STOCK);
			ITEM(CUP_O_RUS_Patrol_bag_Summer_Shovel, 650, MISC_STOCK);
			ITEM(CUP_O_RUS_Patrol_bag_Winter, 650, MISC_STOCK);

			ITEM(U_I_FullGhillie_lsh, 1000, MISC_STOCK);
			ITEM(U_I_FullGhillie_ard, 1000, MISC_STOCK);
			ITEM(U_I_FullGhillie_sard, 1000, MISC_STOCK);

			ITEM(IEDUrbanSmall_Remote_Mag, 500, MISC_STOCK);
			ITEM(IEDLandSmall_Remote_Mag, 500, MISC_STOCK);
			ITEM(IEDLandBig_Remote_Mag, 750, MISC_STOCK);
			ITEM(IEDUrbanBig_Remote_Mag, 750, MISC_STOCK);

			ITEM(APERSMineDispenser_Mag, 400, MISC_STOCK);
			ITEM(ClaymoreDirectionalMine_Remote_Mag, 300, MISC_STOCK);
			ITEM(DemoCharge_Remote_Mag, 250, MISC_STOCK);
			ITEM(SatchelCharge_Remote_Mag, 500, MISC_STOCK);
			ITEM(SLAMDirectionalMine_Wire_Mag, 400, MISC_STOCK);
			ITEM(ATMine_Range_Mag, 200, MISC_STOCK);
			ITEM(APERSMine_Range_Mag, 200, MISC_STOCK);
			ITEM(APERSBoundingMine_Range_Mag, 150, MISC_STOCK);
			ITEM(APERSTripMine_Wire_Mag, 100, MISC_STOCK);

			ITEM(G_RegulatorMask_F, 200, MISC_STOCK);
			ITEM(G_AirPurifyingRespirator_01_F, 200, MISC_STOCK);
			ITEM(G_AirPurifyingRespirator_02_sand_F, 200, MISC_STOCK);
			ITEM(G_AirPurifyingRespirator_02_olive_F, 200, MISC_STOCK);
			ITEM(G_AirPurifyingRespirator_02_black_F, 200, MISC_STOCK);

			ITEM(I_UavTerminal, 800, MISC_STOCK);
			ITEM(O_UavTerminal, 800, MISC_STOCK);
			ITEM(B_UavTerminal, 800, MISC_STOCK);
			
			ITEM(CUP_H_RUS_K6_3_Shield_Down, 5000, MISC_STOCK);
			ITEM(CUP_H_RUS_K6_3_Shield_Down_black, 5000, MISC_STOCK);
			ITEM(CUP_H_RUS_K6_3_Shield_Down_khaki, 5000, MISC_STOCK);
			
			ITEM(CUP_H_RUS_Altyn_Shield_Down, 5000, MISC_STOCK);
			ITEM(CUP_H_RUS_Altyn_Shield_Down_black, 5000, MISC_STOCK);
			ITEM(CUP_H_RUS_Altyn_Shield_Down_khaki, 5000, MISC_STOCK);
			
			ITEM(CUP_V_B_Ciras_Black, 1500, MISC_STOCK);
			ITEM(CUP_V_B_Ciras_Black2, 1500, MISC_STOCK);
			ITEM(CUP_V_B_Ciras_Black3, 1500, MISC_STOCK);
			ITEM(CUP_V_B_Ciras_Black4, 1500, MISC_STOCK);
			ITEM(CUP_V_B_Ciras_Coyote, 1500, MISC_STOCK);
			ITEM(CUP_V_B_Ciras_Coyote2, 1500, MISC_STOCK);
			ITEM(CUP_V_B_Ciras_Coyote3, 1500, MISC_STOCK);
			ITEM(CUP_V_B_Ciras_Coyote4, 1500, MISC_STOCK);
			ITEM(CUP_V_B_Ciras_Coyote_USSF, 1500, MISC_STOCK);
			ITEM(CUP_V_B_Ciras_Khaki, 1500, MISC_STOCK);
			ITEM(CUP_V_B_Ciras_Khaki2, 1500, MISC_STOCK);
			ITEM(CUP_V_B_Ciras_Khaki3, 1500, MISC_STOCK);
			ITEM(CUP_V_B_Ciras_Khaki4, 1500, MISC_STOCK);
			ITEM(CUP_V_B_Ciras_MCam, 1500, MISC_STOCK);
			ITEM(CUP_V_B_Ciras_MCam2, 1500, MISC_STOCK);
			ITEM(CUP_V_B_Ciras_Mcam3, 1500, MISC_STOCK);
			ITEM(CUP_V_B_Ciras_Mcam4, 1500, MISC_STOCK);
			ITEM(CUP_V_B_Ciras_Olive, 1500, MISC_STOCK);
			ITEM(CUP_V_B_Ciras_Olive2, 1500, MISC_STOCK);
			ITEM(CUP_V_B_Ciras_Olive3, 1500, MISC_STOCK);
			ITEM(CUP_V_B_Ciras_Olive4, 1500, MISC_STOCK);
			ITEM(CUP_V_B_Ciras_Olive_USSF, 1500, MISC_STOCK);
			ITEM(CUP_V_CZ_NPP2006_co_black, 1500, MISC_STOCK);
			ITEM(CUP_V_CZ_NPP2006_co_des, 1500, MISC_STOCK);
			ITEM(CUP_V_CZ_NPP2006_co_vz95, 1500, MISC_STOCK);
			ITEM(CUP_V_CZ_NPP2006_des, 1500, MISC_STOCK);
			ITEM(CUP_V_CZ_NPP2006_light_vz95, 1500, MISC_STOCK);
			ITEM(CUP_V_CZ_NPP2006_nk_black, 1500, MISC_STOCK);
			ITEM(CUP_V_CZ_NPP2006_nk_des, 1500, MISC_STOCK);
			ITEM(CUP_V_CZ_NPP2006_nk_vz95, 1500, MISC_STOCK);
			ITEM(CUP_V_CZ_NPP2006_ok_black, 1500, MISC_STOCK);
			ITEM(CUP_V_CZ_NPP2006_ok_des, 1500, MISC_STOCK);
			ITEM(CUP_V_CZ_NPP2006_ok_vz95, 1500, MISC_STOCK);
			ITEM(CUP_V_CZ_NPP2006_vz95, 1500, MISC_STOCK);
			ITEM(CUP_V_CZ_NPP2006_vz95_black, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_AK_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_AK_Med_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_AK_Med_Radio_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_AK_Med_Radio_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_AK_Med_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_AK_Radio_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_AK_Radio_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_AK_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_Light_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_Light_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_PKP_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_PKP_Radio_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_PKP_Radio_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_PKP_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_SPP_AK_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_SPP_AK_Med_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_SPP_AK_Med_Radio_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_SPP_AK_Med_Radio_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_SPP_AK_Med_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_SPP_AK_Radio_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_SPP_AK_Radio_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_SPP_AK_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_SPP_PKP_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_SPP_PKP_Radio_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_SPP_PKP_Radio_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_SPP_PKP_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_SPP_SVD_1_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_SPP_SVD_1_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_SPP_SVD_2_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_SPP_SVD_2_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_SPP_VOG_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_SPP_VOG_Med_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_SPP_VOG_Med_Radio_Light_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_SPP_VOG_Med_Radio_Light_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_SPP_VOG_Med_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_SPP_VOG_Radio_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_SPP_VOG_Radio_Light_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_SPP_VOG_Radio_Light_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_SPP_VOG_Radio_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_SPP_VOG_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_SVD_1_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_SVD_1_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_SVD_2_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_SVD_2_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_VOG_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_VOG_Med_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_VOG_Med_Radio_Light_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_VOG_Med_Radio_Light_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_VOG_Med_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_VOG_Radio_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_VOG_Radio_Light_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_VOG_Radio_Light_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_VOG_Radio_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_6Sh117_VOG_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_AK_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_AK_Light_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_AK_Light_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_AK_Med_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_AK_Med_Light_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_AK_Med_Light_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_AK_Med_Radio_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_AK_Med_Radio_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_AK_Med_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_AK_Radio_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_AK_Radio_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_AK_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_Light_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_Light_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_PKP_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_PKP_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_SPP_AK_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_SPP_AK_Light_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_SPP_AK_Light_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_SPP_AK_Med_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_SPP_AK_Med_Light_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_SPP_AK_Med_Light_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_SPP_AK_Med_Radio_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_SPP_AK_Med_Radio_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_SPP_AK_Med_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_SPP_AK_Radio_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_SPP_AK_Radio_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_SPP_AK_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_SPP_PKP_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_SPP_PKP_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_SPP_SVD_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_SPP_SVD_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_SPP_VOG_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_SPP_VOG_Radio_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_SPP_VOG_Radio_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_SPP_VOG_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_SVD_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_SVD_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_VOG_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_VOG_Radio_Desert, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_VOG_Radio_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_O_RUS_6B45_1_VOG_Summer, 1500, MISC_STOCK);
			ITEM(CUP_V_PlateCarrier2_MM14, 1500, MISC_STOCK);
			ITEM(CUP_V_PlateCarrierIAGL_MM14, 2500, MISC_STOCK);
			ITEM(CUP_V_PlateCarrierSpec_MM14, 5000, MISC_STOCK);
			ITEM(V_PlateCarrier1_blk, 900, MISC_STOCK);
			ITEM(V_PlateCarrier1_rgr, 900, MISC_STOCK);
			ITEM(V_PlateCarrier1_rgr_noflag_F, 900, MISC_STOCK);
			ITEM(V_PlateCarrier1_tna_F, 900, MISC_STOCK);
			ITEM(V_PlateCarrier1_wdl, 900, MISC_STOCK);
			ITEM(V_PlateCarrier2_blk, 1500, MISC_STOCK);
			ITEM(V_PlateCarrier2_rgr, 1500, MISC_STOCK);
			ITEM(V_PlateCarrier2_rgr_noflag_F, 1500, MISC_STOCK);
			ITEM(V_PlateCarrier2_tna_F, 1500, MISC_STOCK);
			ITEM(V_PlateCarrier2_wdl, 1500, MISC_STOCK);
			ITEM(V_PlateCarrier3_rgr, 1500, MISC_STOCK);
			ITEM(V_PlateCarrierGL_blk, 2500, MISC_STOCK);
			ITEM(V_PlateCarrierGL_mtp, 2500, MISC_STOCK);
			ITEM(V_PlateCarrierGL_rgr, 2500, MISC_STOCK);
			ITEM(V_PlateCarrierGL_tna_F, 2500, MISC_STOCK);
			ITEM(V_PlateCarrierGL_wdl, 2500, MISC_STOCK);
			ITEM(V_PlateCarrierSpec_blk, 5000, MISC_STOCK);
			ITEM(V_PlateCarrierSpec_mtp, 5000, MISC_STOCK);
			ITEM(V_PlateCarrierSpec_rgr, 5000, MISC_STOCK);
			ITEM(V_PlateCarrierSpec_tna_F, 5000, MISC_STOCK);
			ITEM(V_PlateCarrierSpec_wdl, 5000, MISC_STOCK);
		};