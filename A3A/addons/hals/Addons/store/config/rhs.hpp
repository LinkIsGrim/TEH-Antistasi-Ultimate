		///////////////////////////////////////////////////////
		// RHS
		///////////////////////////////////////////////////////
		class handgunsRhs 
		{
			displayName = __EVAL(formatText ["%1 %2", localize "STR_A3AU_rhs", localize "STR_A3AU_handguns"]);
			picture = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\handgun_ca.paa";

			ITEM(rhs_weap_makarov_pm, 75, PISTOL_STOCK);

			ITEM(rhs_weap_6p53, 150, PISTOL_STOCK);
			ITEM(rhs_weap_pya, 200, PISTOL_STOCK);
			ITEM(rhs_weap_pb_6p9, 250, PISTOL_STOCK);

			ITEM(rhsusf_weap_m9, 250, PISTOL_STOCK);
			ITEM(rhsusf_weap_m1911a1, 250, PISTOL_STOCK);

			ITEM(rhs_weap_savz61_folded, 300, PISTOL_STOCK);

			ITEM(rhs_weap_cz99, 350, PISTOL_STOCK);
			ITEM(rhsusf_weap_glock17g4, 300, PISTOL_STOCK);

			ITEM(rhs_weap_M320, 400, PISTOL_STOCK);
		};

		class launchersRhs 
		{
			displayName = __EVAL(formatText ["%1 %2", localize "STR_A3AU_rhs", localize "STR_A3AU_launchers"]);
			picture = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\secondaryWeapon_ca.paa";

			ITEM(rhs_weap_rpg26, DISPOSABLE_AT, 50);
			ITEM(rhs_weap_rshg2, DISPOSABLE_AT, 50);
			ITEM(rhs_weap_rpg75, DISPOSABLE_AT, 50);

			ITEM(rhs_weap_m80, DISPOSABLE_AT, 50);

			ITEM(rhs_weap_m72a7, DISPOSABLE_AT, 50);

			ITEM(rhs_weap_M136, DISPOSABLE_AT, 50);
			ITEM(rhs_weap_M136_hedp, DISPOSABLE_AT, 50);
			ITEM(rhs_weap_M136_hp, DISPOSABLE_AT, 50);

			ITEM(rhs_weap_rpg7, RPG_RELOADABLE, 15);

			ITEM(rhs_weap_maaws, RPG_RELOADABLE, 15);

			ITEM(rhs_weap_igla, DISPOSABLE_AA_SET, 50);
			ITEM(rhs_weap_fim92, DISPOSABLE_AA_SET, 50);

			ITEM(rhs_weap_smaw, RPG_RELOADABLE, 15);
			ITEM(rhs_weap_smaw_green, RPG_RELOADABLE, 15);

			ITEM(rhs_weap_fgm148, FAF_AT_LAUNCHER, 10);
		};

		class launcherMagazinesRhs 
		{
			displayName = __EVAL(formatText ["%1 %2", localize "STR_A3AU_rhs", localize "STR_A3AU_launcherAmmo"]);
			picture = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\cargoMag_ca.paa";
		
			ITEM(rhs_fgm148_magazine_AT,FAF_AT_MISSILE,LAUNCHER_STOCK);
			ITEM(rhs_fgm172a_magazine_AT,FAF_AT_MISSILE,LAUNCHER_STOCK);
			ITEM(rhs_fgm172b_magazine_MPV,FAF_AT_MISSILE,LAUNCHER_STOCK);
			ITEM(rhs_mag_9k32_rocket,AA_MISSILE,LAUNCHER_STOCK);
			ITEM(rhs_mag_9k38_rocket,AA_MISSILE,LAUNCHER_STOCK);
			ITEM(rhs_fim92_mag,AA_MISSILE,LAUNCHER_STOCK);
			ITEM(rhs_mag_maaws_HE,RPG_HE_ROUND,LAUNCHER_STOCK);
			ITEM(rhs_mag_maaws_HEAT,RPG_AT_ROUND,LAUNCHER_STOCK);
			ITEM(rhs_mag_maaws_HEDP,RPG_AT_ROUND,LAUNCHER_STOCK);
			ITEM(rhs_mag_smaw_HEAA,RPG_HE_ROUND,LAUNCHER_STOCK);
			ITEM(rhs_mag_smaw_HEDP,RPG_AT_ROUND,LAUNCHER_STOCK);
			ITEM(rhs_mag_smaw_SR,RPG_HE_ROUND,LAUNCHER_STOCK);
			ITEM(rhs_rpg7_OG7V_mag,RPG_THERM_ROUND,LAUNCHER_STOCK);
			ITEM(rhs_rpg7_PG7VL_mag,RPG_AT_ROUND,LAUNCHER_STOCK);
			ITEM(rhs_rpg7_PG7VM_mag,RPG_AT_ROUND,LAUNCHER_STOCK);
			ITEM(rhs_rpg7_PG7VR_mag,RPG_AT_ROUND,LAUNCHER_STOCK);
			ITEM(rhs_rpg7_PG7VS_mag,RPG_AT_ROUND,LAUNCHER_STOCK);
			ITEM(rhs_rpg7_PG7V_mag,RPG_AT_ROUND,LAUNCHER_STOCK);
			ITEM(rhs_rpg7_TBG7V_mag,RPG_THERM_ROUND,LAUNCHER_STOCK);
			ITEM(rhs_rpg7_type69_airburst_mag,RPG_HE_ROUND,LAUNCHER_STOCK);
		};

		class riflesRhs 
		{
			displayName = __EVAL(formatText ["%1 %2", localize "STR_A3AU_rhs", localize "STR_A3AU_rifles"]);
			picture = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\primaryWeapon_ca.paa";

			ITEM(rhs_weap_MP44,OLD762,RIFLE_STOCK);
			ITEM(rhs_weap_SCARH_CQC,MOD762,RIFLE_STOCK);
			ITEM(rhs_weap_SCARH_CQC_Folded,MOD762,RIFLE_STOCK);
			ITEM(rhs_weap_SCARH_FDE_CQC,MOD762,RIFLE_STOCK);
			ITEM(rhs_weap_SCARH_FDE_CQC_Folded,MOD762,RIFLE_STOCK);
			ITEM(rhs_weap_SCARH_FDE_LB,MOD762,RIFLE_STOCK);
			ITEM(rhs_weap_SCARH_FDE_LB_Folded,MOD762,RIFLE_STOCK);
			ITEM(rhs_weap_SCARH_FDE_STD,MOD762,RIFLE_STOCK);
			ITEM(rhs_weap_SCARH_FDE_STD_Folded,MOD762,RIFLE_STOCK);
			ITEM(rhs_weap_SCARH_LB,MOD762,RIFLE_STOCK);
			ITEM(rhs_weap_SCARH_LB_Folded,MOD762,RIFLE_STOCK);
			ITEM(rhs_weap_SCARH_STD,MOD762,RIFLE_STOCK);
			ITEM(rhs_weap_SCARH_STD_Folded,MOD762,RIFLE_STOCK);
			ITEM(rhs_weap_SCARH_USA_CQC,MOD762,RIFLE_STOCK);
			ITEM(rhs_weap_SCARH_USA_LB,MOD762,RIFLE_STOCK);
			ITEM(rhs_weap_SCARH_USA_STD,MOD762,RIFLE_STOCK);
			ITEM(rhs_weap_ak103,MOD762,RIFLE_STOCK);
			ITEM(rhs_weap_ak103_1,MOD762,RIFLE_STOCK);
			ITEM(rhs_weap_ak103_1_npz,MOD762,RIFLE_STOCK);
			ITEM(rhs_weap_ak103_2,MOD762,RIFLE_STOCK);
			ITEM(rhs_weap_ak103_2_npz,MOD762,RIFLE_STOCK);
			ITEM(rhs_weap_ak103_gp25,MODGL762,RIFLE_STOCK);
			ITEM(rhs_weap_ak103_gp25_npz,MODGL762,RIFLE_STOCK);
			ITEM(rhs_weap_ak103_npz,MOD762,RIFLE_STOCK);
			ITEM(rhs_weap_ak103_zenitco01,MOD762,RIFLE_STOCK);
			ITEM(rhs_weap_ak103_zenitco01_b33,MOD762,RIFLE_STOCK);
			ITEM(rhs_weap_ak103_zenitco01_folded,MOD762,RIFLE_STOCK);
			ITEM(rhs_weap_ak103_zenitco01_npz,MOD762,RIFLE_STOCK);
			ITEM(rhs_weap_ak104,MOD762,RIFLE_STOCK);
			ITEM(rhs_weap_ak104_npz,MOD762,RIFLE_STOCK);
			ITEM(rhs_weap_ak104_zenitco01,MOD762,RIFLE_STOCK);
			ITEM(rhs_weap_ak104_zenitco01_b33,MOD762,RIFLE_STOCK);
			ITEM(rhs_weap_ak104_zenitco01_npz,MOD762,RIFLE_STOCK);
			ITEM(rhs_weap_ak105,MOD545,RIFLE_STOCK);
			ITEM(rhs_weap_ak105_npz,MOD545,RIFLE_STOCK);
			ITEM(rhs_weap_ak105_zenitco01,MOD545,RIFLE_STOCK);
			ITEM(rhs_weap_ak105_zenitco01_b33,MOD545,RIFLE_STOCK);
			ITEM(rhs_weap_ak105_zenitco01_npz,MOD545,RIFLE_STOCK);
			ITEM(rhs_weap_ak74,OLD545,RIFLE_STOCK);
			ITEM(rhs_weap_ak74_2,OLD545,RIFLE_STOCK);
			ITEM(rhs_weap_ak74_3,OLD545,RIFLE_STOCK);
			ITEM(rhs_weap_ak74_gp25,OLDGL545,RIFLE_STOCK);
			ITEM(rhs_weap_ak74m,OLD545,RIFLE_STOCK);
			ITEM(rhs_weap_ak74m_camo,OLD545,RIFLE_STOCK);
			ITEM(rhs_weap_ak74m_desert,OLD545,RIFLE_STOCK);
			ITEM(rhs_weap_ak74m_fullplum,OLD545,RIFLE_STOCK);
			ITEM(rhs_weap_ak74m_fullplum_gp25,OLDGL545,RIFLE_STOCK);
			ITEM(rhs_weap_ak74m_fullplum_gp25_npz,OLDGL545,RIFLE_STOCK);
			ITEM(rhs_weap_ak74m_gp25,OLDGL545,RIFLE_STOCK);
			ITEM(rhs_weap_ak74m_gp25_npz,OLDGL545,RIFLE_STOCK);
			ITEM(rhs_weap_ak74mr_gp25,OLDGL545,RIFLE_STOCK);
			ITEM(rhs_weap_ak74n,OLD545,RIFLE_STOCK);
			ITEM(rhs_weap_ak74n_2,OLD545,RIFLE_STOCK);
			ITEM(rhs_weap_ak74n_2_gp25,OLDGL545,RIFLE_STOCK);
			ITEM(rhs_weap_ak74n_2_gp25_npz,OLDGL545,RIFLE_STOCK);
			ITEM(rhs_weap_ak74n_gp25,OLDGL545,RIFLE_STOCK);
			ITEM(rhs_weap_ak74n_gp25_npz,OLDGL545,RIFLE_STOCK);
			ITEM(rhs_weap_akm,OLD762,RIFLE_STOCK);
			ITEM(rhs_weap_akm_gp25,OLDGL762,RIFLE_STOCK);
			ITEM(rhs_weap_akmn,OLD762,RIFLE_STOCK);
			ITEM(rhs_weap_akmn_gp25,OLDGL762,RIFLE_STOCK);
			ITEM(rhs_weap_akmn_gp25_npz,OLDGL762,RIFLE_STOCK);
			ITEM(rhs_weap_akms,OLD762,RIFLE_STOCK);
			ITEM(rhs_weap_akms_gp25,OLDGL762,RIFLE_STOCK);
			ITEM(rhs_weap_aks74,OLD545,RIFLE_STOCK);
			ITEM(rhs_weap_aks74_2,OLD545,RIFLE_STOCK);
			ITEM(rhs_weap_aks74_gp25,OLDGL545,RIFLE_STOCK);
			ITEM(rhs_weap_aks74n,OLD545,RIFLE_STOCK);
			ITEM(rhs_weap_aks74n_2,OLD545,RIFLE_STOCK);
			ITEM(rhs_weap_aks74n_gp25,OLDGL545,RIFLE_STOCK);
			ITEM(rhs_weap_aks74n_gp25_npz,OLDGL545,RIFLE_STOCK);
			ITEM(rhs_weap_aks74u,OLD545,RIFLE_STOCK);
			ITEM(rhs_weap_aks74un,OLD545,RIFLE_STOCK);
			ITEM(rhs_weap_asval,MOD762,RIFLE_STOCK);
			ITEM(rhs_weap_asval_folded,MOD762,RIFLE_STOCK);
			ITEM(rhs_weap_asval_grip,MOD762,RIFLE_STOCK);
			ITEM(rhs_weap_asval_grip_npz,MOD762,RIFLE_STOCK);
			ITEM(rhs_weap_asval_npz,MOD762,RIFLE_STOCK);
			ITEM(rhs_weap_g36c,MOD556,RIFLE_STOCK);
			ITEM(rhs_weap_g36c_Folded,MOD556,RIFLE_STOCK);
			ITEM(rhs_weap_g36kv,MOD556,RIFLE_STOCK);
			ITEM(rhs_weap_g36kv_ag36,MODGL556,RIFLE_STOCK);
			ITEM(rhs_weap_hk416d10,MOD556,RIFLE_STOCK);
			ITEM(rhs_weap_hk416d10_LMT,MOD556,RIFLE_STOCK);
			ITEM(rhs_weap_hk416d10_LMT_d,MOD556,RIFLE_STOCK);
			ITEM(rhs_weap_hk416d10_LMT_wd,MOD556,RIFLE_STOCK);
			ITEM(rhs_weap_hk416d10_m320,MODGL556,RIFLE_STOCK);
			ITEM(rhs_weap_hk416d145,MOD556,RIFLE_STOCK);
			ITEM(rhs_weap_hk416d145_d,MOD556,RIFLE_STOCK);
			ITEM(rhs_weap_hk416d145_d_2,MOD556,RIFLE_STOCK);
			ITEM(rhs_weap_hk416d145_m320,MODGL556,RIFLE_STOCK);
			ITEM(rhs_weap_hk416d145_wd,MOD556,RIFLE_STOCK);
			ITEM(rhs_weap_hk416d145_wd_2,MOD556,RIFLE_STOCK);
			ITEM(rhs_weap_l1a1,OLD762,RIFLE_STOCK);
			ITEM(rhs_weap_l1a1_wood,OLD762,RIFLE_STOCK);
			ITEM(rhs_weap_m16a4,OLD556,RIFLE_STOCK);
			ITEM(rhs_weap_m16a4_carryhandle,OLD556,RIFLE_STOCK);
			ITEM(rhs_weap_m16a4_carryhandle_M203,OLDGL556,RIFLE_STOCK);
			ITEM(rhs_weap_m16a4_imod,OLD556,RIFLE_STOCK);
			ITEM(rhs_weap_m16a4_imod_M203,OLDGL556,RIFLE_STOCK);
			ITEM(rhs_weap_m1garand_sa43,OLD762,RIFLE_STOCK);
			ITEM(rhs_weap_m21a,MOD556,RIFLE_STOCK);
			ITEM(rhs_weap_m21a_fold,MOD556,RIFLE_STOCK);
			ITEM(rhs_weap_m21a_pbg40,MODGL556,RIFLE_STOCK);
			ITEM(rhs_weap_m21a_pbg40_fold,MODGL556,RIFLE_STOCK);
			ITEM(rhs_weap_m21a_pr,MOD556,RIFLE_STOCK);
			ITEM(rhs_weap_m21a_pr_pbg40,MODGL556,RIFLE_STOCK);
			ITEM(rhs_weap_m21s,MOD556,RIFLE_STOCK);
			ITEM(rhs_weap_m21s_fold,MOD556,RIFLE_STOCK);
			ITEM(rhs_weap_m21s_pr,MOD556,RIFLE_STOCK);
			ITEM(rhs_weap_m27iar,MOD556,RIFLE_STOCK);
			ITEM(rhs_weap_m27iar_grip,MOD556,RIFLE_STOCK);
			ITEM(rhs_weap_m4,OLD556,RIFLE_STOCK);
			ITEM(rhs_weap_m4_carryhandle,OLD556,RIFLE_STOCK);
			ITEM(rhs_weap_m4_carryhandle_m203,OLDGL556,RIFLE_STOCK);
			ITEM(rhs_weap_m4_carryhandle_m203S,OLDGL556,RIFLE_STOCK);
			ITEM(rhs_weap_m4_carryhandle_mstock,OLD556,RIFLE_STOCK);
			ITEM(rhs_weap_m4_m203,OLDGL556,RIFLE_STOCK);
			ITEM(rhs_weap_m4_m203S,OLDGL556,RIFLE_STOCK);
			ITEM(rhs_weap_m4_m320,OLDGL556,RIFLE_STOCK);
			ITEM(rhs_weap_m4_mstock,OLD556,RIFLE_STOCK);
			ITEM(rhs_weap_m4a1,OLD556,RIFLE_STOCK);
			ITEM(rhs_weap_m4a1_blockII_M203,OLDGL556,RIFLE_STOCK);
			ITEM(rhs_weap_m4a1_blockII_M203_bk,OLDGL556,RIFLE_STOCK);
			ITEM(rhs_weap_m4a1_blockII_M203_d,OLDGL556,RIFLE_STOCK);
			ITEM(rhs_weap_m4a1_blockII_M203_wd,OLDGL556,RIFLE_STOCK);
			ITEM(rhs_weap_m4a1_carryhandle,OLD556,RIFLE_STOCK);
			ITEM(rhs_weap_m4a1_carryhandle_m203,OLDGL556,RIFLE_STOCK);
			ITEM(rhs_weap_m4a1_carryhandle_m203S,OLDGL556,RIFLE_STOCK);
			ITEM(rhs_weap_m4a1_carryhandle_mstock,OLD556,RIFLE_STOCK);
			ITEM(rhs_weap_m4a1_d,OLD556,RIFLE_STOCK);
			ITEM(rhs_weap_m4a1_d_mstock,OLD556,RIFLE_STOCK);
			ITEM(rhs_weap_m4a1_m203,OLDGL556,RIFLE_STOCK);
			ITEM(rhs_weap_m4a1_m203s,OLDGL556,RIFLE_STOCK);
			ITEM(rhs_weap_m4a1_m203s_d,OLDGL556,RIFLE_STOCK);
			ITEM(rhs_weap_m4a1_m203s_wd,OLDGL556,RIFLE_STOCK);
			ITEM(rhs_weap_m4a1_m320,OLDGL556,RIFLE_STOCK);
			ITEM(rhs_weap_m4a1_mstock,OLD556,RIFLE_STOCK);
			ITEM(rhs_weap_m4a1_wd,OLD556,RIFLE_STOCK);
			ITEM(rhs_weap_m4a1_wd_mstock,OLD556,RIFLE_STOCK);
			ITEM(rhs_weap_m70ab2,OLD762,RIFLE_STOCK);
			ITEM(rhs_weap_m70b1,OLD762,RIFLE_STOCK);
			ITEM(rhs_weap_m70b1n,OLD762,RIFLE_STOCK);
			ITEM(rhs_weap_m70b3n_pbg40,OLDGL762,RIFLE_STOCK);
			ITEM(rhs_weap_m92,OLD762,RIFLE_STOCK);
			ITEM(rhs_weap_mk17_CQC,MOD762,RIFLE_STOCK);
			ITEM(rhs_weap_mk17_LB,MOD762,RIFLE_STOCK);
			ITEM(rhs_weap_mk17_STD,MOD762,RIFLE_STOCK);
			ITEM(rhs_weap_mk18,MOD556,RIFLE_STOCK);
			ITEM(rhs_weap_mk18_KAC,MOD556,RIFLE_STOCK);
			ITEM(rhs_weap_mk18_KAC_bk,MOD556,RIFLE_STOCK);
			ITEM(rhs_weap_mk18_KAC_d,MOD556,RIFLE_STOCK);
			ITEM(rhs_weap_mk18_KAC_wd,MOD556,RIFLE_STOCK);
			ITEM(rhs_weap_mk18_bk,MOD556,RIFLE_STOCK);
			ITEM(rhs_weap_mk18_d,MOD556,RIFLE_STOCK);
			ITEM(rhs_weap_mk18_m320,MODGL556,RIFLE_STOCK);
			ITEM(rhs_weap_mk18_wd,MOD556,RIFLE_STOCK);
			ITEM(rhs_weap_savz58p,OLD762,RIFLE_STOCK);
			ITEM(rhs_weap_savz58p_black,OLD762,RIFLE_STOCK);
			ITEM(rhs_weap_savz58v,OLD762,RIFLE_STOCK);
			ITEM(rhs_weap_savz58v_black,OLD762,RIFLE_STOCK);
			ITEM(rhs_weap_savz58v_fold,OLD762,RIFLE_STOCK);
			ITEM(rhs_weap_vhsd2,MOD556,RIFLE_STOCK);
			ITEM(rhs_weap_vhsd2_bg,MOD556,RIFLE_STOCK);
			ITEM(rhs_weap_vhsd2_bg_ct15x,MOD556,RIFLE_STOCK);
			ITEM(rhs_weap_vhsd2_ct15x,MOD556,RIFLE_STOCK);
			ITEM(rhs_weap_vhsk2,MOD556,RIFLE_STOCK);
		};

		class sniperRiflesRhs 
		{
			displayName = __EVAL(formatText ["%1 %2", localize "STR_A3AU_rhs", localize "STR_A3AU_sniperRifles"]);
			picture = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\primaryWeapon_ca.paa";

			ITEM(rhs_weap_XM2010,MOD762*2,RIFLE_STOCK);
			ITEM(rhs_weap_XM2010_d,MOD762*2,RIFLE_STOCK);
			ITEM(rhs_weap_XM2010_sa,MOD762*2,RIFLE_STOCK);
			ITEM(rhs_weap_XM2010_wd,MOD762*2,RIFLE_STOCK);
			ITEM(rhs_weap_kar98k,OLD762*2,RIFLE_STOCK);
			ITEM(rhs_weap_m14,OLD762*2,RIFLE_STOCK);
			ITEM(rhs_weap_m14_d,OLD762*2,RIFLE_STOCK);
			ITEM(rhs_weap_m14_fiberglass,OLD762*2,RIFLE_STOCK);
			ITEM(rhs_weap_m14_rail,OLD762*RAIL*2,RIFLE_STOCK);
			ITEM(rhs_weap_m14_rail_d,OLD762*RAIL*2,RIFLE_STOCK);
			ITEM(rhs_weap_m14_rail_fiberglass,OLD762*RAIL*2,RIFLE_STOCK);
			ITEM(rhs_weap_m14_rail_wd,OLD762*RAIL*2,RIFLE_STOCK);
			ITEM(rhs_weap_m14_ris,OLD762*RAIL*2,RIFLE_STOCK);
			ITEM(rhs_weap_m14_ris_d,OLD762*RAIL*2,RIFLE_STOCK);
			ITEM(rhs_weap_m14_ris_fiberglass,OLD762*RAIL*2,RIFLE_STOCK);
			ITEM(rhs_weap_m14_ris_wd,OLD762*RAIL*2,RIFLE_STOCK);
			ITEM(rhs_weap_m14_socom,OLD762*2,RIFLE_STOCK);
			ITEM(rhs_weap_m14_socom_rail,OLD762*RAIL*2,RIFLE_STOCK);
			ITEM(rhs_weap_m14_wd,OLD762*2,RIFLE_STOCK);
			ITEM(rhs_weap_m14ebrri,OLD762*RAIL*2,RIFLE_STOCK);
			ITEM(rhs_weap_m24sws,OLD762*2,RIFLE_STOCK);
			ITEM(rhs_weap_m24sws_d,OLD762*2,RIFLE_STOCK);
			ITEM(rhs_weap_m24sws_wd,OLD762*2,RIFLE_STOCK);
			ITEM(rhs_weap_m38,OLD762*2,RIFLE_STOCK);
			ITEM(rhs_weap_m38_rail,OLD762*RAIL*2,RIFLE_STOCK);
			ITEM(rhs_weap_m40a5,OLD762*2,RIFLE_STOCK);
			ITEM(rhs_weap_m40a5_d,OLD762*2,RIFLE_STOCK);
			ITEM(rhs_weap_m40a5_wd,OLD762*2,RIFLE_STOCK);
			ITEM(rhs_weap_m76,OLD762*2,RIFLE_STOCK);
			ITEM(rhs_weap_mosin_sbr,OLD762*2,RIFLE_STOCK);
			ITEM(rhs_weap_sr25,MOD762*2,RIFLE_STOCK);
			ITEM(rhs_weap_sr25_d,MOD762*2,RIFLE_STOCK);
			ITEM(rhs_weap_sr25_ec,MOD762*2,RIFLE_STOCK);
			ITEM(rhs_weap_sr25_ec_d,MOD762*2,RIFLE_STOCK);
			ITEM(rhs_weap_sr25_ec_wd,MOD762*2,RIFLE_STOCK);
			ITEM(rhs_weap_sr25_wd,MOD762*2,RIFLE_STOCK);
			ITEM(rhs_weap_svdp,OLD762*2,RIFLE_STOCK);
			ITEM(rhs_weap_svdp_npz,OLD762*RAIL*2,RIFLE_STOCK);
			ITEM(rhs_weap_svdp_wd,OLD762*2,RIFLE_STOCK);
			ITEM(rhs_weap_svdp_wd_npz,OLD762*RAIL*2,RIFLE_STOCK);
			ITEM(rhs_weap_svds,OLD762*2,RIFLE_STOCK);
			ITEM(rhs_weap_svds_npz,OLD762*RAIL*2,RIFLE_STOCK);
			ITEM(rhs_weap_t5000,MOD762*2,RIFLE_STOCK);
			ITEM(rhs_weap_vss,MOD762*2,RIFLE_STOCK);
			ITEM(rhs_weap_vss_grip,MOD762*2,RIFLE_STOCK);
			ITEM(rhs_weap_vss_grip_npz,MOD762*2,RIFLE_STOCK);
			ITEM(rhs_weap_vss_npz,MOD762*2,RIFLE_STOCK);
			ITEM(rhs_weap_M107,SNIP127*2,RIFLE_STOCK);
			ITEM(rhs_weap_M107_d,SNIP127*2,RIFLE_STOCK);
			ITEM(rhs_weap_M107_w,SNIP127*2,RIFLE_STOCK);
			ITEM(rhs_weap_m82a1,SNIP127*2,4000,RIFLE_STOCK);
		};

		class mgRhs 
		{
			displayName = __EVAL(formatText ["%1 %2", localize "STR_A3AU_rhs", localize "STR_A3AU_mgs"]);
			picture = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\primaryWeapon_ca.paa";

			ITEM(rhs_weap_fnmag,OLD762*1.5,RIFLE_STOCK);
			ITEM(rhs_weap_m240B,MOD762*1.5,RIFLE_STOCK);
			ITEM(rhs_weap_m240G,MOD762*1.5,RIFLE_STOCK);
			ITEM(rhs_weap_m249,MOD556*1.5,RIFLE_STOCK);
			ITEM(rhs_weap_m249_light_L,MOD556*1.5,RIFLE_STOCK);
			ITEM(rhs_weap_m249_light_S,MOD556*1.5,RIFLE_STOCK);
			ITEM(rhs_weap_m249_pip,MOD556*1.5,RIFLE_STOCK);
			ITEM(rhs_weap_m249_pip_L,MOD556*1.5,RIFLE_STOCK);
			ITEM(rhs_weap_m249_pip_L_para,MOD556*1.5,RIFLE_STOCK);
			ITEM(rhs_weap_m249_pip_S,MOD556*1.5,RIFLE_STOCK);
			ITEM(rhs_weap_m249_pip_S_para,MOD556*1.5,RIFLE_STOCK);
			ITEM(rhs_weap_m249_pip_ris,MOD556*1.5,RIFLE_STOCK);
			ITEM(rhs_weap_m84,OLD762*1.5,RIFLE_STOCK);
			ITEM(rhs_weap_mg42,OLD762*1.5,RIFLE_STOCK);
			ITEM(rhs_weap_minimi_para_railed,MOD556*1.5,RIFLE_STOCK);
			ITEM(rhs_weap_pkm,OLD762*1.5,RIFLE_STOCK);
			ITEM(rhs_weap_pkp,MOD762*1.5,RIFLE_STOCK);
			ITEM(rhs_weap_rpk74m,OLD545*1.5,RIFLE_STOCK);
			ITEM(rhs_weap_rpk74m_npz,OLD545*RAIL*1.5,RIFLE_STOCK);
		};

		class smgRhs 
		{
			displayName = __EVAL(formatText ["%1 %2", localize "STR_A3AU_rhs", localize "STR_A3AU_smgs"]);
			picture = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\primaryWeapon_ca.paa";

			ITEM(rhs_weap_m3a1,MOD556*0.6,RIFLE_STOCK);
			ITEM(rhs_weap_m3a1_specops,MOD556*0.6,RIFLE_STOCK);
			ITEM(rhs_weap_pm63,OLD556*0.6,RIFLE_STOCK);
			ITEM(rhs_weap_pp2000,MOD556*0.6,RIFLE_STOCK);
			ITEM(rhs_weap_pp2000_folded,MOD556*0.6,RIFLE_STOCK);
			ITEM(rhs_weap_savz61,OLD556*0.6,RIFLE_STOCK);
			ITEM(rhs_weap_savz61_folded,OLD556*0.6,RIFLE_STOCK);
			ITEM(rhs_weap_scorpion,OLD556*0.6,RIFLE_STOCK);
			ITEM(rhsusf_weap_MP7A2,MOD556*0.6,RIFLE_STOCK);
			ITEM(rhsusf_weap_MP7A2_aor1,MOD556*0.6,RIFLE_STOCK);
			ITEM(rhsusf_weap_MP7A2_desert,MOD556*0.6,RIFLE_STOCK);
			ITEM(rhsusf_weap_MP7A2_folded,MOD556*0.6,RIFLE_STOCK);
			ITEM(rhsusf_weap_MP7A2_folded_aor1,MOD556*0.6,RIFLE_STOCK);
			ITEM(rhsusf_weap_MP7A2_folded_desert,MOD556*0.6,RIFLE_STOCK);
			ITEM(rhsusf_weap_MP7A2_folded_winter,MOD556*0.6,RIFLE_STOCK);
			ITEM(rhsusf_weap_MP7A2_winter,MOD556*0.6,RIFLE_STOCK);
		};

		class specialWeaponsRhs 
		{
			displayName = __EVAL(formatText ["%1 %2", localize "STR_A3AU_rhs", localize "STR_A3AU_specialWeapons"]);
			picture = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\primaryWeapon_ca.paa";

			ITEM(rhs_weap_m79, 1200, RIFLE_STOCK);

			ITEM(rhs_weap_m32, 1200, RIFLE_STOCK);

			ITEM(rhs_weap_M590_8RD, 200, RIFLE_STOCK);
		};

		class navigationRhs 
		{
			displayName = __EVAL(formatText ["%1 %2, %3 %4 %5", localize "STR_A3AU_rhs", localize "STR_A3AU_gps", localize "STR_A3AU_binoculars", localize "STR_A3AU_and", localize "STR_A3AU_nvgs"]);
			picture = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\compass_ca.paa";

			ITEM(ItemGPS, 200, NN_STOCK);
			ITEM(ItemRadio, 50, NN_STOCK);

			ITEM(rhs_tr8_periscope_pip, 50, NN_STOCK);

			ITEM(rhsusf_bino_lrf_Vector21, 100, NN_STOCK);
			ITEM(rhsusf_bino_leopold_mk4, 100, NN_STOCK);
			ITEM(rhsusf_bino_m24, 100, NN_STOCK);
			ITEM(rhsusf_bino_m24_ARD, 200, NN_STOCK);
			ITEM(rhssaf_zrak_rd7j, 100, NN_STOCK);

			ITEM(rhsusf_bino_lerca_1200_tan, 350, NN_STOCK);
			ITEM(rhsusf_bino_lerca_1200_black, 350, NN_STOCK);

			ITEM(rhs_pdu4, 500, NN_STOCK);

			ITEM(Laserdesignator, 1500, NN_STOCK);
			ITEM(Laserdesignator_02, 1500, NN_STOCK);
			ITEM(Laserdesignator_03, 1500, NN_STOCK);
			ITEM(rhs_1PN138, 500, NN_STOCK);
			ITEM(rhsusf_ANPVS_14, 500, NN_STOCK);
			ITEM(rhsusf_ANPVS_15, 1000, NN_STOCK);
		};

		class underbarrelRhs 
		{
			displayName = __EVAL(formatText ["%1 %2 %3 %4", localize "STR_A3AU_rhs", localize "STR_A3AU_bipods", localize "STR_A3AU_and", localize "STR_A3AU_grips"]);
			picture = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemBipod_ca.paa";

			ITEM(rhs_acc_harris_swivel, 100, 50);
			ITEM(rhsusf_acc_harris_bipod, 100, 50);

			ITEM(rhsusf_acc_saw_bipod, 100, 50);

			ITEM(rhsusf_acc_grip2, 200, 50);
			ITEM(rhsusf_acc_grip2_tan, 200, 50);
			ITEM(rhsusf_acc_grip2_wd, 200, 50);
			ITEM(rhs_acc_grip_ffg2, 200, 50);
			ITEM(rhsusf_acc_grip1, 200, 50);
			ITEM(rhsusf_acc_kac_grip, 200, 50);
			ITEM(rhs_acc_grip_rk2, 200, 50);
			ITEM(rhs_acc_grip_rk6, 200, 50);
			ITEM(rhsusf_acc_rvg_blk, 200, 50);
			ITEM(rhsusf_acc_rvg_de, 200, 50);
			ITEM(rhsusf_acc_tacsac_blk, 200, 50);
			ITEM(rhsusf_acc_tacsac_blue, 200, 50);
			ITEM(rhsusf_acc_tacsac_tan, 200, 50);
			ITEM(rhsusf_acc_tdstubby_blk, 200, 50);
			ITEM(rhsusf_acc_tdstubby_tan, 200, 50);
			ITEM(rhsusf_acc_grip3, 200, 50);
			ITEM(rhsusf_acc_grip3_tan, 200, 50);
			
			ITEM(rhsusf_acc_m14_bipod, 200, 50);
		};

		class pointersRhs 
		{
			displayName = __EVAL(formatText ["%1 %2 %3 %4", localize "STR_A3AU_rhs", localize "STR_A3AU_pointers", localize "STR_A3AU_and", localize "STR_A3AU_flashlights"]);
			picture = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemAcc_ca.paa";

			ITEM(acc_flashlight, 75, PN_STOCK);
			ITEM(acc_flashlight_smg_01, 75, PN_STOCK);
			ITEM(rhsusf_acc_anpeq15A, 100, PN_STOCK);
			ITEM(acc_flashlight_pistol, 75, PN_STOCK);

			ITEM(rhs_acc_2dpZenit, 50, MZ_STOCK);
			ITEM(rhs_acc_perst1ik, 75, MZ_STOCK);

			ITEM(rhs_acc_2dpZenit_ris, 50, MZ_STOCK);
			ITEM(rhs_acc_perst1ik_ris, 75, MZ_STOCK);
			ITEM(rhs_acc_perst3, 100, MZ_STOCK);

			ITEM(rhsusf_acc_anpeq15side, 100, PN_STOCK);
			ITEM(rhsusf_acc_anpeq15_top, 100, PN_STOCK);
			ITEM(rhsusf_acc_anpeq15_wmx, 150, PN_STOCK);
			ITEM(rhsusf_acc_anpeq15_wmx_light, 150, PN_STOCK);
			ITEM(rhsusf_acc_anpeq15side_bk, 100, PN_STOCK);
			ITEM(rhsusf_acc_anpeq15_bk_top, 100, PN_STOCK);
			ITEM(rhsusf_acc_anpeq15, 150, PN_STOCK);
			ITEM(rhsusf_acc_anpeq15_bk, 150, PN_STOCK);
			ITEM(rhsusf_acc_anpeq16a, 100, PN_STOCK);
			ITEM(rhsusf_acc_anpeq16a_top, 100, PN_STOCK);

			ITEM(rhsusf_acc_M952V, 75, PN_STOCK);
			ITEM(rhsusf_acc_wmx, 75, PN_STOCK);
			ITEM(rhsusf_acc_wmx_bk, 75, PN_STOCK);
		};

		class muzzlesRhs 
		{
			displayName = __EVAL(formatText ["%1 %2", localize "STR_A3AU_rhs", localize "STR_A3AU_muzzles"]);
			picture = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemMuzzle_ca.paa";

			ITEM(rhs_acc_6p9_suppressor, 200, MZ_STOCK);

			ITEM(rhsusf_acc_rotex_mp7_aor1, 200, MZ_STOCK);
			ITEM(rhsusf_acc_rotex_mp7, 200, MZ_STOCK);
			ITEM(rhsusf_acc_rotex_mp7_desert, 200, MZ_STOCK);
			ITEM(rhsusf_acc_rotex_mp7_winter, 200, MZ_STOCK);

			ITEM(rhsusf_acc_omega9k, 200, MZ_STOCK);
			ITEM(rhsusf_acc_nt4_black, 200, MZ_STOCK);
			ITEM(rhsusf_acc_nt4_tan, 200, MZ_STOCK);
			ITEM(rhsusf_acc_rotex5_grey, 200, MZ_STOCK);
			ITEM(rhsusf_acc_rotex5_tan, 200, MZ_STOCK);

			ITEM(rhsusf_acc_aac_762sd_silencer, 300, MZ_STOCK);
			ITEM(rhsusf_acc_aac_762sdn6_silencer, 300, MZ_STOCK);
			ITEM(rhsgref_sdn6_suppressor, 300, MZ_STOCK);
			ITEM(rhsusf_acc_aac_scarh_silencer, 300, MZ_STOCK);
			ITEM(rhsusf_acc_aac_m14dcqd_silencer, 300, MZ_STOCK);
			ITEM(rhsusf_acc_aac_m14dcqd_silencer_d, 300, MZ_STOCK);
			ITEM(rhsusf_acc_aac_m14dcqd_silencer_wd, 300, MZ_STOCK);

			ITEM(rhsgref_acc_falMuzzle_l1a1, 150, MZ_STOCK);

			ITEM(rhsusf_acc_m14_flashsuppresor, 200, MZ_STOCK);

			ITEM(rhsusf_acc_SF3P556, 50, MZ_STOCK);
			ITEM(rhsusf_acc_SFMB556, 65, MZ_STOCK);

			ITEM(rhs_acc_tgpv, 200, MZ_STOCK);
			ITEM(rhs_acc_tgpv2, 200, MZ_STOCK);

			ITEM(rhs_acc_dtkakm, 25, MZ_STOCK);
			ITEM(rhs_acc_ak5, 50, MZ_STOCK);
			ITEM(rhs_acc_dtk, 15, MZ_STOCK);
			ITEM(rhs_acc_dtk1, 25, MZ_STOCK);
			ITEM(rhs_acc_dtk2, 35, MZ_STOCK);
			ITEM(rhs_acc_dtk3, 50, MZ_STOCK);
			ITEM(rhs_acc_dtk4long, 200, MZ_STOCK);
			ITEM(rhs_acc_dtk4screws, 200, MZ_STOCK);
			ITEM(rhs_acc_pbs1, 200, MZ_STOCK);

			ITEM(rhsusf_acc_M2010S, 350, MZ_STOCK);
			ITEM(rhsusf_acc_M2010S_d, 350, MZ_STOCK);
			ITEM(rhsusf_acc_M2010S_wd, 350, MZ_STOCK);
			ITEM(rhsusf_acc_M2010S_sa, 350, MZ_STOCK);

			ITEM(rhsusf_acc_m24_silencer_d, 300, MZ_STOCK);
			ITEM(rhsusf_acc_m24_silencer_wd, 300, MZ_STOCK);
			ITEM(rhsusf_acc_m24_silencer_black, 300, MZ_STOCK);

			ITEM(rhsusf_acc_m24_muzzlehider_black, 200, MZ_STOCK);
			ITEM(rhsusf_acc_m24_muzzlehider_d, 200, MZ_STOCK);
			ITEM(rhsusf_acc_m24_muzzlehider_wd, 200, MZ_STOCK);
		};

		class opticsRhs 
		{
			displayName = __EVAL(formatText ["%1 %2", localize "STR_A3AU_rhs", localize "STR_A3AU_sights"]);
			picture = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\ItemOptic_ca.paa";

			class rhsgref_acc_l1a1_l2a2 {
				price = 450;
				stock = 100;
			};

			class rhsgref_acc_l1a1_anpvs2 {
				price = 1100;
				stock = 100;
			};

			class rhs_acc_1pn93_1 {
				price = 1000;
				stock = 100;
			};
			class rhs_acc_1pn93_2 {
				price = 1000;
				stock = 100;
			};
			class rhs_acc_pgo7v {
				price = 500;
				stock = 100;
			};
			class rhs_acc_pgo7v2 {
				price = 525;
				stock = 100;
			};
			class rhs_acc_pgo7v3 {
				price = 550;
				stock = 100;
			};

			class rhs_optic_maaws {
				price = 500;
				stock = 100;
			};

			class rhs_acc_1p29 {
				price = 400;
				stock = 100;
			};
			class rhs_acc_1p63 {
				price = 250;
				stock = 100;
			};
			class rhs_acc_1p78 {
				price = 500;
				stock = 100;
			};
			class rhs_acc_1pn34 {
				price = 850;
				stock = 100;
			};
			class rhs_acc_ekp1 {
				price = 200;
				stock = 100;
			};
			class rhs_acc_ekp8_02 {
				price = 200;
				stock = 100;
			};
			class rhs_acc_nita {
				price = 350;
				stock = 100;
			};
			class rhs_acc_okp7_dovetail {
				price = 250;
				stock = 100;
			};
			class rhs_acc_pkas {
				price = 300;
				stock = 100;
			};
			class rhs_acc_pso1m2 {
				price = 750;
				stock = 100;
			};
			class rhs_acc_pso1m21 {
				price = 750;
				stock = 100;
			};

			class rhs_acc_rakursPM {
				price = 200;
				stock = 100;
			};
			class rhs_acc_1p87 {
				price = 200;
				stock = 100;
			};
			class rhs_acc_ekp8_18 {
				price = 200;
				stock = 100;
			};
			class rhs_acc_okp7_picatinny {
				price = 200;
				stock = 100;
			};
			class rhs_acc_dh520x56 {
				price = 1500;
				stock = 100;
			};

			class rhsusf_acc_EOTECH {
				price = 250;
				stock = 100;
			};
			class rhsusf_acc_eotech_552 {
				price = 250;
				stock = 100;
			};
			class rhsusf_acc_eotech_552_d {
				price = 250;
				stock = 100;
			};
			class rhsusf_acc_eotech_552_wd {
				price = 250;
				stock = 100;
			};
			class rhsusf_acc_compm4 {
				price = 300;
				stock = 100;
			};

			class rhsusf_acc_M8541 {
				price = 1000;
				stock = 100;
			};
			class rhsusf_acc_M8541_low {
				price = 1000;
				stock = 100;
			};
			class rhsusf_acc_M8541_low_d {
				price = 1000;
				stock = 100;
			};
			class rhsusf_acc_M8541_low_wd {
				price = 1000;
				stock = 100;
			};
			class rhsusf_acc_premier_low {
				price = 1000;
				stock = 100;
			};
			class rhsusf_acc_premier_anpvs27 {
				price = 1600;
				stock = 100;
			};
			class rhsusf_acc_premier {
				price = 1000;
				stock = 100;
			};

			class rhsusf_acc_LEUPOLDMK4 {
				price = 900;
				stock = 100;
			};
			class rhsusf_acc_LEUPOLDMK4_2 {
				price = 1250;
				stock = 100;
			};
			class rhsusf_acc_LEUPOLDMK4_d {
				price = 1500;
				stock = 100;
			};
			class rhsusf_acc_LEUPOLDMK4_wd {
				price = 1500;
				stock = 100;
			};
			class rhsusf_acc_LEUPOLDMK4_2_d {
				price = 1500;
				stock = 100;
			};
			class rhsusf_acc_LEUPOLDMK4_2_mrds {
				price = 1750;
				stock = 100;
			};


			class rhsusf_acc_mrds {
				price = 200;
				stock = 100;
			};
			class rhsusf_acc_mrds_fwd {
				price = 200;
				stock = 100;
			};
			class rhsusf_acc_mrds_c {
				price = 200;
				stock = 100;
			};
			class rhsusf_acc_mrds_fwd_c {
				price = 200;
				stock = 100;
			};
			class rhsusf_acc_RM05 {
				price = 200;
				stock = 100;
			};
			class rhsusf_acc_RM05_fwd {
				price = 200;
				stock = 100;
			};


			class rhsusf_acc_RX01_NoFilter {
				price = 250;
				stock = 100;
			};
			class rhsusf_acc_RX01 {
				price = 300;
				stock = 100;
			};
			class rhsusf_acc_RX01_NoFilter_tan {
				price = 250;
				stock = 100;
			};
			class rhsusf_acc_RX01_tan {
				price = 300;
				stock = 100;
			};
			class rhsgref_acc_RX01_NoFilter_camo {
				price = 250;
				stock = 100;
			};
			class rhsgref_acc_RX01_camo {
				price = 300;
				stock = 100;
			};

			class rhsusf_acc_T1_high {
				price = 250;
				stock = 100;
			};
			class rhsusf_acc_T1_low {
				price = 300;
				stock = 100;
			};
			class rhsusf_acc_T1_low_fwd {
				price = 250;
				stock = 100;
			};


			class rhsusf_acc_su230 {
				price = 800;
				stock = 100;
			};
			class rhsusf_acc_su230_c {
				price = 800;
				stock = 100;
			};
			class rhsusf_acc_su230_mrds {
				price = 1050;
				stock = 100;
			};
			class rhsusf_acc_su230_mrds_c {
				price = 1050;
				stock = 100;
			};


			class rhsusf_acc_su230a {
				price = 850;
				stock = 100;
			};
			class rhsusf_acc_su230a_c {
				price = 850;
				stock = 100;
			};
			class rhsusf_acc_su230a_mrds {
				price = 1100;
				stock = 100;
			};
			class rhsusf_acc_su230a_mrds_c {
				price = 1100;
				stock = 100;
			};

			class rhsusf_acc_ACOG_MDO {
				price = 1500;
				stock = 100;
			};


			class rhsusf_acc_premier_mrds {
				price = 1250;
				stock = 100;
			};
			class rhsusf_acc_M8541_mrds {
				price = 1250;
				stock = 100;
			};

			class rhsusf_acc_g33_T1 {
				price = 550;
				stock = 100;
			};
			class rhsusf_acc_g33_xps3 {
				price = 500;
				stock = 100;
			};
			class rhsusf_acc_g33_xps3_tan {
				price = 500;
				stock = 100;
			};

			class rhsusf_acc_anpas13gv1 {
				price = 2500;
				stock = 5;
			};

			class rhsusf_acc_anpvs27 {
				price = 600;
				stock = 100;
			};

			class rhsusf_acc_ACOG {
				price = 850;
				stock = 100;
			};
			class rhsusf_acc_ACOG2_USMC {
				price = 900;
				stock = 100;
			};
			class rhsusf_acc_ACOG3_USMC {
				price = 950;
				stock = 100;
			};
			class rhsusf_acc_ACOG_USMC {
				price = 850;
				stock = 100;
			};

			class rhsusf_acc_ACOG_RMR {
				price = 1100;
				stock = 100;
			};
			class rhsusf_acc_ACOG_d {
				price = 850;
				stock = 100;
			};
			class rhsusf_acc_ACOG_wd {
				price = 850;
				stock = 100;
			};

			class rhsusf_acc_ELCAN {
				price = 700;
				stock = 100;
			};
			class rhsusf_acc_ELCAN_ard {
				price = 750;
				stock = 100;
			};
			
			class rhsusf_acc_ACOG_anpvs27 {
				price = 1450;
				stock = 100;
			};
		};

		class magazinesRhs 
		{
			displayName = __EVAL(formatText ["%1 %2", localize "STR_A3AU_rhs", localize "STR_A3AU_magazines"]);
			picture = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\cargoMag_ca.paa";

			class Laserbatteries {
				price = 200;
				stock = MAGAZINE_STOCK;
			};

			///////////////////////////////////////////////////////
			// Underbarrel
			///////////////////////////////////////////////////////
			ITEM(rhs_GDM40,20 + GRENPRICE,MAGAZINE_STOCK);
			ITEM(rhs_GRD40_Green,20 + GRENPRICE,MAGAZINE_STOCK);
			ITEM(rhs_GRD40_Red,20 + GRENPRICE,MAGAZINE_STOCK);
			ITEM(rhs_GRD40_White,20 + GRENPRICE,MAGAZINE_STOCK);
			ITEM(rhs_VG40MD,20 + GRENPRICE,MAGAZINE_STOCK);
			ITEM(rhs_VG40OP_green,20 + GRENPRICE,MAGAZINE_STOCK);
			ITEM(rhs_VG40OP_red,20 + GRENPRICE,MAGAZINE_STOCK);
			ITEM(rhs_VG40OP_white,20 + GRENPRICE,MAGAZINE_STOCK);
			ITEM(rhs_VG40SZ,20 + GRENPRICE,MAGAZINE_STOCK);
			ITEM(rhs_VG40TB,20 + GRENPRICE,MAGAZINE_STOCK);
			ITEM(rhs_VOG25,20 + GRENPRICE,MAGAZINE_STOCK);
			ITEM(rhs_VOG25P,20 + GRENPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_M397_HET,20 + GRENPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_M433_HEDP,20 + GRENPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_M441_HE,20 + GRENPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_M583A1_white,20 + GRENPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_M585_white_cluster,20 + GRENPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_M663_green_cluster,20 + GRENPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_M664_red_cluster,20 + GRENPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_M781_Practice,20 + GRENPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_m4009,20 + GRENPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_m576,20 + GRENPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_m661_green,20 + GRENPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_m662_red,20 + GRENPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_m713_Red,20 + GRENPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_m714_White,20 + GRENPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_m715_Green,20 + GRENPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_m716_yellow,20 + GRENPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_rsp30_green,20 + GRENPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_rsp30_red,20 + GRENPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_rsp30_white,20 + GRENPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_mag_6Rnd_M397_HET,600,MAGAZINE_STOCK);
			ITEM(rhsusf_mag_6Rnd_M433_HEDP,600,MAGAZINE_STOCK);
			ITEM(rhsusf_mag_6Rnd_M441_HE,600,MAGAZINE_STOCK);
			ITEM(rhsusf_mag_6Rnd_M583A1_white,600,MAGAZINE_STOCK);
			ITEM(rhsusf_mag_6Rnd_M713_red,600,MAGAZINE_STOCK);
			ITEM(rhsusf_mag_6Rnd_M714_white,600,MAGAZINE_STOCK);
			ITEM(rhsusf_mag_6Rnd_M715_green,600,MAGAZINE_STOCK);
			ITEM(rhsusf_mag_6Rnd_M716_yellow,600,MAGAZINE_STOCK);
			ITEM(rhsusf_mag_6Rnd_M781_Practice,600,MAGAZINE_STOCK);
			ITEM(rhsusf_mag_6Rnd_m4009,600,MAGAZINE_STOCK);
			ITEM(rhsusf_mag_6Rnd_m661_green,600,MAGAZINE_STOCK);
			ITEM(rhsusf_mag_6Rnd_m662_red,600,MAGAZINE_STOCK);

			ITEM(rhs_100Rnd_762x54mmR,20 + 100 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_100Rnd_762x54mmR_7BZ3,20 + 100 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_100Rnd_762x54mmR_7N13,20 + 100 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_100Rnd_762x54mmR_7N26,20 + 100 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_100Rnd_762x54mmR_green,20 + 100 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_10Rnd_762x39mm,20 + 10 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_10Rnd_762x39mm_89,20 + 10 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_10Rnd_762x39mm_U,20 + 10 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_10Rnd_762x39mm_tracer,20 + 10 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_10Rnd_762x54mmR_7N1,20 + 10 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_10Rnd_762x54mmR_7N14,20 + 10 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_10rnd_9x39mm_SP5,20 + 10 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_10rnd_9x39mm_SP6,20 + 10 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_18rnd_9x21mm_7BT3,20 + 18 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_18rnd_9x21mm_7N28,20 + 18 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_18rnd_9x21mm_7N29,20 + 18 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_20rnd_9x39mm_SP5,20 + 20 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_20rnd_9x39mm_SP6,20 + 20 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_30Rnd_545x39_7N10_2mag_AK,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_30Rnd_545x39_7N10_2mag_camo_AK,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_30Rnd_545x39_7N10_2mag_desert_AK,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_30Rnd_545x39_7N10_2mag_plum_AK,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_30Rnd_545x39_7N10_AK,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_30Rnd_545x39_7N10_camo_AK,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_30Rnd_545x39_7N10_desert_AK,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_30Rnd_545x39_7N10_plum_AK,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_30Rnd_545x39_7N22_AK,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_30Rnd_545x39_7N22_camo_AK,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_30Rnd_545x39_7N22_desert_AK,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_30Rnd_545x39_7N22_plum_AK,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_30Rnd_545x39_7N6M_AK,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_30Rnd_545x39_7N6M_green_AK,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_30Rnd_545x39_7N6M_plum_AK,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_30Rnd_545x39_7N6_AK,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_30Rnd_545x39_7N6_green_AK,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_30Rnd_545x39_7U1_AK,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_30Rnd_545x39_AK_green,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_30Rnd_545x39_AK_plum_green,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_30Rnd_762x39mm,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_30Rnd_762x39mm_89,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_30Rnd_762x39mm_Savz58,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_30Rnd_762x39mm_Savz58_tracer,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_30Rnd_762x39mm_U,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_30Rnd_762x39mm_bakelite,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_30Rnd_762x39mm_bakelite_89,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_30Rnd_762x39mm_bakelite_U,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_30Rnd_762x39mm_bakelite_tracer,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_30Rnd_762x39mm_polymer,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_30Rnd_762x39mm_polymer_89,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_30Rnd_762x39mm_polymer_U,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_30Rnd_762x39mm_polymer_tracer,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_30Rnd_762x39mm_tracer,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_45Rnd_545X39_7N10_AK,20 + 45 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_45Rnd_545X39_7N22_AK,20 + 45 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_45Rnd_545X39_7N6M_AK,20 + 45 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_45Rnd_545X39_7N6_AK,20 + 45 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_45Rnd_545X39_7U1_AK,20 + 45 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_45Rnd_545X39_AK_Green,20 + 45 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_60Rnd_545X39_7N10_AK,20 + 60 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_60Rnd_545X39_7N22_AK,20 + 60 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_60Rnd_545X39_7U1_AK,20 + 60 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_60Rnd_545X39_AK_Green,20 + 60 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_75Rnd_762x39mm,20 + 75 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_75Rnd_762x39mm_89,20 + 75 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_75Rnd_762x39mm_tracer,20 + 75 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_100Rnd_556x45_M855A1_cmag,20 + 100 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_100Rnd_556x45_M855A1_cmag_mixed,20 + 100 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_100Rnd_556x45_M855_cmag,20 + 100 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_100Rnd_556x45_M855_cmag_mixed,20 + 100 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_100Rnd_556x45_Mk262_cmag,20 + 100 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_100Rnd_556x45_Mk318_cmag,20 + 100 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_20Rnd_556x45_M193_2MAG_Stanag,20 + 20 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_20Rnd_556x45_M193_Stanag,20 + 20 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_20Rnd_556x45_M196_2MAG_Stanag_Tracer_Red,20 + 20 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red,20 + 20 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_20Rnd_556x45_M200_Stanag,20 + 20 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_20Rnd_556x45_M855A1_Stanag,20 + 20 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_20Rnd_556x45_M855_Stanag,20 + 20 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_20Rnd_556x45_Mk262_Stanag,20 + 20 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_20Rnd_762x51_m61_fnfal,20 + 20 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_20Rnd_762x51_m62_fnfal,20 + 20 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_20Rnd_762x51_m80_fnfal,20 + 20 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_20Rnd_762x51_m80a1_fnfal,20 + 20 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_M193_Stanag,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_M200_Stanag,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_M855A1_EPM,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_M855A1_EPM_Pull,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_M855A1_EPM_Pull_Tracer_Red,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger_Tracer_Red,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_M855A1_EPM_Tracer_Red,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_M855A1_PMAG,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_M855A1_Stanag,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_M855_PMAG,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_M855_PMAG_Tan,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_M855_PMAG_Tan_Tracer_Red,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_M855_Stanag,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_M855_Stanag_Pull,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_M855_Stanag_Ranger,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_Mk262_PMAG,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_Mk262_PMAG_Tan,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_Mk262_Stanag,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_Mk318_PMAG,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_Mk318_SCAR,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_Mk318_Stanag,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_Mk318_Stanag_Pull,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsgref_30rnd_556x45_m21,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsgref_30rnd_556x45_m21_t,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsgref_30rnd_556x45_vhs2,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsgref_30rnd_556x45_vhs2_t,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsgref_5Rnd_762x54_m38,20 + 5 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsgref_8Rnd_762x63_M2B_M1rifle,20 + 8 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle,20 + 8 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhssaf_100rnd_556x45_EPR_G36,20 + 100 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhssaf_250Rnd_762x54R,20 + 250 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhssaf_30Rnd_762x39_M82_api,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhssaf_30Rnd_762x39mm_M67,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhssaf_30Rnd_762x39mm_M78_tracer,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhssaf_30rnd_556x45_EPR_G36,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhssaf_30rnd_556x45_MDIM_G36,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhssaf_30rnd_556x45_SOST_G36,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhssaf_30rnd_556x45_SPR_G36,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhssaf_30rnd_556x45_TDIM_G36,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhssaf_30rnd_556x45_Tracers_G36,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhssaf_mag_15Rnd_9x19_FMJ,20 + 15 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhssaf_mag_15Rnd_9x19_JHP,20 + 15 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_100Rnd_556x45_M200_soft_pouch,20 + 100 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_100Rnd_556x45_M200_soft_pouch_coyote,20 + 100 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_100Rnd_556x45_M200_soft_pouch_ucp,20 + 100 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_100Rnd_556x45_M855_mixed_soft_pouch,20 + 100 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_100Rnd_556x45_M855_mixed_soft_pouch_coyote,20 + 100 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_100Rnd_556x45_M855_mixed_soft_pouch_ucp,20 + 100 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_100Rnd_556x45_M855_soft_pouch,20 + 100 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_100Rnd_556x45_M855_soft_pouch_coyote,20 + 100 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_100Rnd_556x45_M855_soft_pouch_ucp,20 + 100 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_100Rnd_556x45_M995_soft_pouch,20 + 100 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_100Rnd_556x45_M995_soft_pouch_coyote,20 + 100 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_100Rnd_556x45_M995_soft_pouch_ucp,20 + 100 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_100Rnd_556x45_mixed_soft_pouch,20 + 100 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_100Rnd_556x45_mixed_soft_pouch_coyote,20 + 100 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_100Rnd_556x45_mixed_soft_pouch_ucp,20 + 100 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_100Rnd_556x45_soft_pouch,20 + 100 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_100Rnd_556x45_soft_pouch_coyote,20 + 100 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_100Rnd_556x45_soft_pouch_ucp,20 + 100 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_100Rnd_762x51,20 + 100 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_100Rnd_762x51_m61_ap,20 + 100 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_100Rnd_762x51_m62_tracer,20 + 100 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_100Rnd_762x51_m80a1epr,20 + 100 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_100Rnd_762x51_m82_blank,20 + 100 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_10Rnd_762x51_m118_special_Mag,20 + 10 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_10Rnd_762x51_m62_Mag,20 + 10 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_10Rnd_762x51_m993_Mag,20 + 10 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_200Rnd_556x45_M855_mixed_soft_pouch,20 + 200 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_coyote,20 + 200 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_ucp,20 + 200 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_200Rnd_556x45_M855_soft_pouch,20 + 200 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_200Rnd_556x45_M855_soft_pouch_coyote,20 + 200 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_200Rnd_556x45_M855_soft_pouch_ucp,20 + 200 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_200Rnd_556x45_box,20 + 200 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_200Rnd_556x45_mixed_soft_pouch,20 + 200 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote,20 + 200 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_200Rnd_556x45_mixed_soft_pouch_ucp,20 + 200 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_200Rnd_556x45_soft_pouch,20 + 200 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_200Rnd_556x45_soft_pouch_coyote,20 + 200 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_200Rnd_556x45_soft_pouch_ucp,20 + 200 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_200rnd_556x45_M855_box,20 + 200 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_200rnd_556x45_M855_mixed_box,20 + 200 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_200rnd_556x45_mixed_box,20 + 200 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_20Rnd_762x51_SR25_m118_special_Mag,20 + 20 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_20Rnd_762x51_SR25_m62_Mag,20 + 20 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_20Rnd_762x51_SR25_m993_Mag,20 + 20 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_20Rnd_762x51_SR25_mk316_special_Mag,20 + 20 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_20Rnd_762x51_m118_special_Mag,20 + 20 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_20Rnd_762x51_m62_Mag,20 + 20 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_20Rnd_762x51_m80_Mag,20 + 20 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_20Rnd_762x51_m993_Mag,20 + 20 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_50Rnd_762x51,20 + 50 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_50Rnd_762x51_m61_ap,20 + 50 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_50Rnd_762x51_m62_tracer,20 + 50 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_50Rnd_762x51_m80a1epr,20 + 50 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_50Rnd_762x51_m82_blank,20 + 50 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_5Rnd_762x51_AICS_m118_special_Mag,20 + 5 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_5Rnd_762x51_AICS_m62_Mag,20 + 5 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_5Rnd_762x51_AICS_m993_Mag,20 + 5 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_5Rnd_762x51_m118_special_Mag,20 + 5 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_5Rnd_762x51_m62_Mag,20 + 5 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_5Rnd_762x51_m993_Mag,20 + 5 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_mag_15Rnd_9x19_FMJ,20 + 15 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_mag_15Rnd_9x19_JHP,20 + 15 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_mag_17Rnd_9x19_FMJ,20 + 17 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_mag_17Rnd_9x19_JHP,20 + 17 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_20Rnd_SCAR_762x51_m118_special,20 + 20 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_20Rnd_SCAR_762x51_m118_special_bk,20 + 20 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_20Rnd_SCAR_762x51_m61_ap,20 + 20 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_20Rnd_SCAR_762x51_m61_ap_bk,20 + 20 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_20Rnd_SCAR_762x51_m62_tracer,20 + 20 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_20Rnd_SCAR_762x51_m62_tracer_bk,20 + 20 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_20Rnd_SCAR_762x51_m80_ball,20 + 20 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk,20 + 20 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_20Rnd_SCAR_762x51_m80a1_epr,20 + 20 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_20Rnd_SCAR_762x51_m80a1_epr_bk,20 + 20 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_20Rnd_SCAR_762x51_mk316_special,20 + 20 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_20Rnd_SCAR_762x51_mk316_special_bk,20 + 20 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_5Rnd_338lapua_t5000,20 + 5 * LARGBULPRICE,MAGAZINE_STOCK);

			ITEM(rhs_mag_6x8mm_mhp,20 + 8 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_762x25_8,20 + 8 * BULPRICE,MAGAZINE_STOCK);

			ITEM(rhs_mag_9x18_12_57N181S,20 + 12 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_9x18_8_57N181S,20 + 8 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_9x19_17,20 + 17 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_9x19_7n31_17,20 + 17 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_9x19mm_7n21_20,20 + 20 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_9x19mm_7n21_44,20 + 44 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_9x19mm_7n31_20,20 + 20 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhs_mag_9x19mm_7n31_44,20 + 44 * BULPRICE,MAGAZINE_STOCK);

			ITEM(rhsgref_10Rnd_792x57_m76,20 + 10 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsgref_10rnd_765x17_vz61,20 + 10 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsgref_1Rnd_00Buck,10,MAGAZINE_STOCK);
			ITEM(rhsgref_1Rnd_Slug,10,MAGAZINE_STOCK);
			ITEM(rhsgref_20rnd_1143x23_M1911B_SMG,20 + 20 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsgref_20rnd_1143x23_M1T_SMG,20 + 20 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsgref_20rnd_765x17_vz61,20 + 20 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsgref_24rnd_75x55_Stgw57,20 + 24 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsgref_25Rnd_792x33_SmE_StG,20 + 25 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsgref_296Rnd_792x57_SmE_belt,20 + 296 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsgref_296Rnd_792x57_SmE_notracers_belt,20 + 296 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsgref_296Rnd_792x57_SmK_alltracers_belt,20 + 296 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsgref_296Rnd_792x57_SmK_belt,20 + 296 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsgref_30Rnd_792x33_SmE_StG,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsgref_30rnd_1143x23_M1911B_2mag_SMG,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsgref_30rnd_1143x23_M1911B_SMG,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsgref_30rnd_1143x23_M1T_2mag_SMG,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsgref_30rnd_1143x23_M1T_SMG,20 + 30 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsgref_50Rnd_792x57_SmE_drum,20 + 50 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsgref_50Rnd_792x57_SmE_notracers_drum,20 + 50 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsgref_50Rnd_792x57_SmK_alltracers_drum,20 + 50 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsgref_50Rnd_792x57_SmK_drum,20 + 50 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsgref_5Rnd_792x57_kar98k,20 + 5 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhssaf_10Rnd_792x57_m76_tracer,20 + 10 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_5Rnd_00Buck,50,MAGAZINE_STOCK);
			ITEM(rhsusf_5Rnd_300winmag_xm2010,20 + 5 * LARGBULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_5Rnd_FRAG,500,MAGAZINE_STOCK);
			ITEM(rhsusf_5Rnd_HE,500,MAGAZINE_STOCK);
			ITEM(rhsusf_5Rnd_Slug,50,MAGAZINE_STOCK);
			ITEM(rhsusf_8Rnd_00Buck,80,MAGAZINE_STOCK);
			ITEM(rhsusf_8Rnd_FRAG,800,MAGAZINE_STOCK);
			ITEM(rhsusf_8Rnd_HE,800,MAGAZINE_STOCK);
			ITEM(rhsusf_8Rnd_Slug,80,MAGAZINE_STOCK);
			ITEM(rhsusf_mag_6Rnd_M576_Buckshot,50,MAGAZINE_STOCK);
			ITEM(rhsusf_mag_10Rnd_STD_50BMG_M33,20 + 10 * LARGBULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_mag_10Rnd_STD_50BMG_mk211,20 + 10 * LARGBULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_mag_40Rnd_46x30_AP,20 + 40 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_mag_40Rnd_46x30_FMJ,20 + 40 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_mag_40Rnd_46x30_JHP,20 + 40 * BULPRICE,MAGAZINE_STOCK);
			ITEM(rhsusf_mag_7x45acp_MHP,20 + 7 * BULPRICE,MAGAZINE_STOCK);
		};

		class miscRhs 
		{
			displayName = __EVAL(formatText ["%1 %2", localize "STR_A3AU_rhs", localize "STR_A3AU_misc"]);
			picture = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\backpack_ca.paa";
			ITEM(B_Bergen_mcamo_F, 900, MISC_STOCK);
			ITEM(B_Bergen_tna_F, 900, MISC_STOCK);
			ITEM(rhsgref_hidf_alicepack, 750, MISC_STOCK);
			ITEM(rhsgref_ttsko_alicepack, 750, MISC_STOCK);
			ITEM(rhsgref_wdl_alicepack, 750, MISC_STOCK);
			ITEM(rhssaf_alice_md2camo, 750, MISC_STOCK);
			ITEM(rhssaf_alice_smb, 750, MISC_STOCK);
			ITEM(U_I_FullGhillie_lsh, 1000, MISC_STOCK);
			ITEM(U_I_FullGhillie_ard, 1000, MISC_STOCK);
			ITEM(U_I_FullGhillie_sard, 1000, MISC_STOCK);
		
			ITEM(IEDUrbanSmall_Remote_Mag, 500, MISC_STOCK);
			ITEM(IEDLandSmall_Remote_Mag, 500, MISC_STOCK);
			ITEM(IEDLandBig_Remote_Mag, 750, MISC_STOCK);
			ITEM(IEDUrbanBig_Remote_Mag, 750, MISC_STOCK);

			ITEM(rhsusf_m112_mag, 350, MISC_STOCK);
			ITEM(rhsusf_m112x4_mag, 1400, MISC_STOCK);
			ITEM(rhsusf_mine_m14_mag, 400, MISC_STOCK);
			ITEM(rhs_mine_M19_mag, 300, MISC_STOCK);
			ITEM(rhs_mine_M7A2_mag, 200, MISC_STOCK);
			ITEM(rhssaf_mine_pma3_mag, 300, MISC_STOCK);
			ITEM(rhs_mag_mine_pfm1, 250, MISC_STOCK);
			ITEM(rhs_mine_tm62m_mag, 350, MISC_STOCK);		

			ITEM(G_RegulatorMask_F, 200, MISC_STOCK);
			ITEM(G_AirPurifyingRespirator_01_F, 200, MISC_STOCK);
			ITEM(G_AirPurifyingRespirator_02_sand_F, 200, MISC_STOCK);
			ITEM(G_AirPurifyingRespirator_02_olive_F, 200, MISC_STOCK);
			ITEM(G_AirPurifyingRespirator_02_black_F, 200, MISC_STOCK);

			ITEM(I_UavTerminal, 800, MISC_STOCK);
			ITEM(O_UavTerminal, 800, MISC_STOCK);
			ITEM(B_UavTerminal, 800, MISC_STOCK);
			
			ITEM(rhs_6b27m,500,MISC_STOCK);
			ITEM(rhs_6b27m_digi,500,MISC_STOCK);
			ITEM(rhs_6b27m_green,500,MISC_STOCK);
			ITEM(rhs_6b27m_ml,500,MISC_STOCK);
			ITEM(rhs_altyn_visordown,5000,MISC_STOCK);
			ITEM(rhsusf_ach_bare,500,MISC_STOCK);
			ITEM(rhsusf_ach_bare_des,500,MISC_STOCK);
			ITEM(rhsusf_ach_bare_semi,500,MISC_STOCK);
			ITEM(rhsusf_ach_bare_tan,500,MISC_STOCK);
			ITEM(rhsusf_ach_bare_wood,500,MISC_STOCK);
			ITEM(rhsusf_ach_helmet_DCU,500,MISC_STOCK);
			ITEM(rhsusf_ach_helmet_ocp,500,MISC_STOCK);
			ITEM(rhsusf_ach_helmet_ucp,500,MISC_STOCK);
			ITEM(rhsusf_mich_bare,500,MISC_STOCK);
			ITEM(rhsusf_mich_bare_tan,500,MISC_STOCK);
			ITEM(rhsusf_mich_helmet_marpatwd,500,MISC_STOCK);
			ITEM(rhsusf_opscore_aor1,500,MISC_STOCK);
			ITEM(rhsusf_opscore_aor2,500,MISC_STOCK);
			ITEM(rhsusf_opscore_bk,500,MISC_STOCK);
			ITEM(rhsusf_opscore_coy_cover,500,MISC_STOCK);
			ITEM(rhsusf_opscore_fg,500,MISC_STOCK);
			ITEM(rhsusf_opscore_mc,500,MISC_STOCK);
			ITEM(rhsusf_opscore_mc_cover,500,MISC_STOCK);
			ITEM(rhsusf_opscore_paint,500,MISC_STOCK);
			ITEM(rhsusf_opscore_rg_cover,500,MISC_STOCK);
			ITEM(rhsusf_opscore_ut,500,MISC_STOCK);
			
			ITEM(rhs_6b13_6sh92,2500,MISC_STOCK);
			ITEM(rhs_6b13_EMR_6sh92,2500,MISC_STOCK);
			ITEM(rhs_6b13_Flora_6sh92,2500,MISC_STOCK);
			ITEM(rhs_6b23_6sh116,2500,MISC_STOCK);
			ITEM(rhs_6b23_6sh116_flora,2500,MISC_STOCK);
			ITEM(rhs_6b23_6sh116_od,2500,MISC_STOCK);
			ITEM(rhs_6b23_ML_6sh92,2500,MISC_STOCK);
			ITEM(rhsusf_iotv_ocp_Rifleman,2500,MISC_STOCK);
			ITEM(rhsusf_iotv_ucp_Rifleman,2500,MISC_STOCK);
			ITEM(rhsusf_mbav_rifleman,2500,MISC_STOCK);
			ITEM(rhsusf_spc_rifleman,2500,MISC_STOCK);
			ITEM(rhsusf_spcs_ocp,2500,MISC_STOCK);
			ITEM(rhsusf_spcs_ucp,2500,MISC_STOCK);
		};
