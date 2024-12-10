	// cfgVehicles

	class SIL_STALKER_Monolith_Base_F: SIL_STALKER_Base_F
	{
		editorSubcategory = "SIL_STALKER_Subcategory_Monolith_Men";
		scope = 1;
		side = FACTION_MONOLITH_SIDE; // 0 = OPFOR, 1 = BLUFOR, 2 = IND
		FACTION_MONOLITH;
		backpack = "CUP_B_AssaultPack_Black";
		identityTypes[]=
		{
			"Male01ENG",
			"WhiteHead_01",
			"NoGlasses"
		};
	};

	class SIL_STALKER_Monolith_Rifleman_1_F: SIL_STALKER_Monolith_Base_F
	{
		PREVIEW(SIL_STALKER_Monolith_Rifleman_1_F);
		displayName = "Rifleman";
		uniformClass = "SE_Assault_Fatigues_Monolith";
		scope = 2;
		identityTypes[]=
		{
			"Male03ENG",
			"WhiteHead_04",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"armst_Hood_mid_mono",
			"G_Balaclava_blk",
			"CUP_V_B_LBT_LBV_Black",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"armst_Hood_mid_mono",
			"G_Balaclava_blk",
			"CUP_V_B_LBT_LBV_Black",
			LOADOUT_ITEMS_FULL
		};
		weapons[]=
		{
			"CUP_arifle_G36A",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"CUP_arifle_G36A",
			LOADOUT_WEAPONS_DEFAULT
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			LOADOUT_MAGAZINES_FULL
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			LOADOUT_MAGAZINES_FULL
		};
	};
	class SIL_STALKER_Monolith_Rifleman_2_F: SIL_STALKER_Monolith_Base_F
	{
		PREVIEW(SIL_STALKER_Monolith_Rifleman_2_F);
		displayName = "Rifleman (Alternate)";
		uniformClass = "SE_Assault_Fatigues_Monolith";
		scope = 2;
		identityTypes[]=
		{
			"Male06ENG",
			"WhiteHead_08",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"armst_Hood_full_mono",
			"CAU_G_CBRN_s10_gray",
			"SCE_V_SEVA_Monolith",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"armst_Hood_full_mono",
			"CAU_G_CBRN_s10_gray",
			"SCE_V_SEVA_Monolith",
			LOADOUT_ITEMS_FULL
		};
		weapons[]=
		{
			"CUP_arifle_AS_VAL_VFG_top_rail",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AS_VAL_VFG_top_rail",
			LOADOUT_WEAPONS_DEFAULT
		};
		magazines[]=
		{
			"CUP_30Rnd_9x39_SP5_VIKHR_M",
			"CUP_30Rnd_9x39_SP5_VIKHR_M",
			"CUP_30Rnd_9x39_SP5_VIKHR_M",
			"CUP_30Rnd_9x39_SP5_VIKHR_M",
			LOADOUT_MAGAZINES_FULL
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_9x39_SP5_VIKHR_M",
			"CUP_30Rnd_9x39_SP5_VIKHR_M",
			"CUP_30Rnd_9x39_SP5_VIKHR_M",
			"CUP_30Rnd_9x39_SP5_VIKHR_M",
			LOADOUT_MAGAZINES_FULL
		};
	};
	class SIL_STALKER_Monolith_Rifleman_Light_F: SIL_STALKER_Monolith_Base_F
	{
		PREVIEW(SIL_STALKER_Monolith_Rifleman_Light_F);
		displayName = "Rifleman (Light)";
		uniformClass = "SCE_Monolith_1";
		scope = 2;
		identityTypes[]=
		{
			"Male07ENG",
			"WhiteHead_02",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"armst_Hood_closed_mono",
			"G_Balaclava_blk",
			"CUP_V_CZ_NPP2006_nk_black",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"armst_Hood_closed_mono",
			"G_Balaclava_blk",
			"CUP_V_CZ_NPP2006_nk_black",
			LOADOUT_ITEMS_FULL
		};
		weapons[]=
		{
			"CUP_arifle_L85A2",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"CUP_arifle_L85A2",
			LOADOUT_WEAPONS_DEFAULT
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag_L85",
			"CUP_30Rnd_556x45_Stanag_L85",
			"CUP_30Rnd_556x45_Stanag_L85",
			"CUP_30Rnd_556x45_Stanag_L85",
			LOADOUT_MAGAZINES_FULL
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_556x45_Stanag_L85",
			"CUP_30Rnd_556x45_Stanag_L85",
			"CUP_30Rnd_556x45_Stanag_L85",
			"CUP_30Rnd_556x45_Stanag_L85",
			LOADOUT_MAGAZINES_FULL
		};
	};
	class SIL_STALKER_Monolith_Medic_F: SIL_STALKER_Monolith_Base_F
	{
		PREVIEW(SIL_STALKER_Monolith_Medic_F);
		displayName = "Medic";
		uniformClass = "SE_Assault_Fatigues_Monolith";
		scope = 2;
		backpack = "SCE_B_SEVA_Monolith";
		UNIT_ROLE_MEDIC;
		identityTypes[]=
		{
			"Male09ENG",
			"WhiteHead_03",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"SCE_H_SEVA_Monolith",
			"SCE_G_SEVA_HELMET_VISOR",
			"SCE_V_SEVA_Monolith",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"SCE_H_SEVA_Monolith",
			"SCE_G_SEVA_HELMET_VISOR",
			"SCE_V_SEVA_Monolith",
			LOADOUT_ITEMS_FULL
		};
		weapons[]=
		{
			"CUP_smg_MP5A5_Rail_VFG",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"CUP_smg_MP5A5_Rail_VFG",
			LOADOUT_WEAPONS_DEFAULT
		};
		magazines[]=
		{
			"CUP_30Rnd_9x19_MP5",
			"CUP_30Rnd_9x19_MP5",
			"CUP_30Rnd_9x19_MP5",
			"CUP_30Rnd_9x19_MP5",
			LOADOUT_MAGAZINES_FULL
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_9x19_MP5",
			"CUP_30Rnd_9x19_MP5",
			"CUP_30Rnd_9x19_MP5",
			"CUP_30Rnd_9x19_MP5",
			LOADOUT_MAGAZINES_FULL
		};
	};
	class SIL_STALKER_Monolith_Sharpshooter_F: SIL_STALKER_Monolith_Base_F
	{
		PREVIEW(SIL_STALKER_Monolith_Sharpshooter_F);
		displayName = "Sharpshooter";
		uniformClass = "SE_Assault_Fatigues_Monolith";
		scope = 2;
		backpack = "";
		identityTypes[]=
		{
			"Male02ENG",
			"WhiteHead_05",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"armst_Hood_mid_mono",
			"G_Balaclava_blk",
			"SCE_V_SEVA_Monolith",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"armst_Hood_mid_mono",
			"G_Balaclava_blk",
			"SCE_V_SEVA_Monolith",
			LOADOUT_ITEMS_FULL
		};
		weapons[]=
		{
			"CUP_srifle_M24_blk_LeupoldMk4LRT",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"CUP_srifle_M24_blk_LeupoldMk4LRT",
			LOADOUT_WEAPONS_DEFAULT
		};
		magazines[]=
		{
			"CUP_5Rnd_762x51_M24",
			"CUP_5Rnd_762x51_M24",
			"CUP_5Rnd_762x51_M24",
			"CUP_5Rnd_762x51_M24",
			"CUP_5Rnd_762x51_M24",
			"CUP_5Rnd_762x51_M24",
			"CUP_5Rnd_762x51_M24",
			"CUP_5Rnd_762x51_M24",
			"CUP_5Rnd_762x51_M24",
			"CUP_5Rnd_762x51_M24",
			"CUP_5Rnd_762x51_M24",
			"CUP_5Rnd_762x51_M24",
			LOADOUT_MAGAZINES_FULL
		};
		respawnMagazines[]=
		{
			"CUP_5Rnd_762x51_M24",
			"CUP_5Rnd_762x51_M24",
			"CUP_5Rnd_762x51_M24",
			"CUP_5Rnd_762x51_M24",
			"CUP_5Rnd_762x51_M24",
			"CUP_5Rnd_762x51_M24",
			"CUP_5Rnd_762x51_M24",
			"CUP_5Rnd_762x51_M24",
			"CUP_5Rnd_762x51_M24",
			"CUP_5Rnd_762x51_M24",
			"CUP_5Rnd_762x51_M24",
			"CUP_5Rnd_762x51_M24",
			LOADOUT_MAGAZINES_FULL
		};
	};
	class SIL_STALKER_Monolith_Engineer_F: SIL_STALKER_Monolith_Base_F
	{
		PREVIEW(SIL_STALKER_Monolith_Engineer_F);
		displayName = "Engineer";
		uniformClass = "SE_Assault_Fatigues_Monolith";
		scope = 2;
		backpack = "SCE_B_SEVA_Monolith";
		UNIT_ROLE_ENGINEER;
		identityTypes[]=
		{
			"Male05ENG",
			"WhiteHead_02",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"SCE_H_SEVA_Monolith",
			"SCE_G_SEVA_HELMET_VISOR",
			"SCE_V_SEVA_Monolith",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"SCE_H_SEVA_Monolith",
			"SCE_G_SEVA_HELMET_VISOR",
			"SCE_V_SEVA_Monolith",
			LOADOUT_ITEMS_FULL
		};
		weapons[]=
		{
			"CUP_arifle_OTS14_GROZA_Grip",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"CUP_arifle_OTS14_GROZA_Grip",
			LOADOUT_WEAPONS_DEFAULT
		};
		magazines[]=
		{
			"CUP_20Rnd_9x39_SP5_GROZA_M",
			"CUP_20Rnd_9x39_SP5_GROZA_M",
			"CUP_20Rnd_9x39_SP5_GROZA_M",
			"CUP_20Rnd_9x39_SP5_GROZA_M",
			"CUP_20Rnd_9x39_SP5_GROZA_M",
			"CUP_20Rnd_9x39_SP5_GROZA_M",
			LOADOUT_MAGAZINES_FULL
		};
		respawnMagazines[]=
		{
			"CUP_20Rnd_9x39_SP5_GROZA_M",
			"CUP_20Rnd_9x39_SP5_GROZA_M",
			"CUP_20Rnd_9x39_SP5_GROZA_M",
			"CUP_20Rnd_9x39_SP5_GROZA_M",
			"CUP_20Rnd_9x39_SP5_GROZA_M",
			"CUP_20Rnd_9x39_SP5_GROZA_M",
			LOADOUT_MAGAZINES_FULL
		};
	};
	class SIL_STALKER_Monolith_Autorifleman_F: SIL_STALKER_Monolith_Base_F
	{
		PREVIEW(SIL_STALKER_Monolith_Autorifleman_F);
		displayName = "Autorifleman";
		uniformClass = "SE_Assault_Fatigues_Monolith";
		scope = 2;
		backpack = "SE_Scavenger_Backpack";
		identityTypes[]=
		{
			"Male07ENG",
			"WhiteHead_07",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"SCE_Exo_Helmet_Monolith",
			"SE_S10",
			"SCE_Exo2G_Monolith",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"SCE_Exo_Helmet_Monolith",
			"SE_S10",
			"SCE_Exo2G_Monolith",
			LOADOUT_ITEMS_FULL
		};
		weapons[]=
		{
			"CUP_arifle_RPK74M_railed",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"CUP_arifle_RPK74M_railed",
			LOADOUT_WEAPONS_DEFAULT
		};
		magazines[]=
		{
			"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M",
			"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M",
			"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M",
			"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M",
			"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M",
			"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M",
			LOADOUT_MAGAZINES_FULL
		};
		respawnMagazines[]=
		{
			"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M",
			"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M",
			"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M",
			"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M",
			"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M",
			"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M",
			LOADOUT_MAGAZINES_FULL
		};
	};

	/* SEVA Units */
	class SIL_STALKER_Monolith_SEVA_Base_F: SIL_STALKER_Monolith_Base_F
	{
		uniformClass = "SE_Assault_Fatigues_Monolith";
		backpack = "SCE_B_SEVA_Monolith";
		editorSubcategory = "SIL_STALKER_Subcategory_Monolith_Men_SEVA";
		scope = 1;
		linkedItems[]=
		{
			"SCE_H_SEVA_Monolith",
			"SCE_G_SEVA_HELMET_VISOR",
			"SCE_V_SEVA_Monolith",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"SCE_H_SEVA_Monolith",
			"SCE_G_SEVA_HELMET_VISOR",
			"SCE_V_SEVA_Monolith",
			LOADOUT_ITEMS_FULL
		};
	};
	class SIL_STALKER_Monolith_SEVA_Rifleman_1_F: SIL_STALKER_Monolith_SEVA_Base_F
	{
		PREVIEW(SIL_STALKER_Monolith_SEVA_Rifleman_1_F);
		displayName = "Rifleman";
		scope = 2;
		weapons[]=
		{
			"CUP_arifle_G36A",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"CUP_arifle_G36A",
			LOADOUT_WEAPONS_DEFAULT
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			LOADOUT_MAGAZINES_FULL
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			LOADOUT_MAGAZINES_FULL
		};
	};
	class SIL_STALKER_Monolith_SEVA_Rifleman_2_F: SIL_STALKER_Monolith_SEVA_Base_F
	{
		PREVIEW(SIL_STALKER_Monolith_SEVA_Rifleman_2_F);
		displayName = "Rifleman (Alternate)";
		scope = 2;
		weapons[]=
		{
			"CUP_arifle_AS_VAL_VFG_top_rail",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AS_VAL_VFG_top_rail",
			LOADOUT_WEAPONS_DEFAULT
		};
		magazines[]=
		{
			"CUP_30Rnd_9x39_SP5_VIKHR_M",
			"CUP_30Rnd_9x39_SP5_VIKHR_M",
			"CUP_30Rnd_9x39_SP5_VIKHR_M",
			"CUP_30Rnd_9x39_SP5_VIKHR_M",
			LOADOUT_MAGAZINES_FULL
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_9x39_SP5_VIKHR_M",
			"CUP_30Rnd_9x39_SP5_VIKHR_M",
			"CUP_30Rnd_9x39_SP5_VIKHR_M",
			"CUP_30Rnd_9x39_SP5_VIKHR_M",
			LOADOUT_MAGAZINES_FULL
		};
	};
	class SIL_STALKER_Monolith_SEVA_Rifleman_Light_F: SIL_STALKER_Monolith_SEVA_Base_F
	{
		PREVIEW(SIL_STALKER_Monolith_SEVA_Rifleman_Light_F);
		displayName = "Rifleman (Light)";
		scope = 2;
		weapons[]=
		{
			"CUP_arifle_L85A2",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"CUP_arifle_L85A2",
			LOADOUT_WEAPONS_DEFAULT
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag_L85",
			"CUP_30Rnd_556x45_Stanag_L85",
			"CUP_30Rnd_556x45_Stanag_L85",
			"CUP_30Rnd_556x45_Stanag_L85",
			LOADOUT_MAGAZINES_FULL
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_556x45_Stanag_L85",
			"CUP_30Rnd_556x45_Stanag_L85",
			"CUP_30Rnd_556x45_Stanag_L85",
			"CUP_30Rnd_556x45_Stanag_L85",
			LOADOUT_MAGAZINES_FULL
		};
	};
	class SIL_STALKER_Monolith_SEVA_Medic_F: SIL_STALKER_Monolith_SEVA_Base_F
	{
		PREVIEW(SIL_STALKER_Monolith_SEVA_Medic_F);
		displayName = "Medic";
		scope = 2;
		UNIT_ROLE_MEDIC;
		weapons[]=
		{
			"CUP_smg_MP5A5_Rail_VFG",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"CUP_smg_MP5A5_Rail_VFG",
			LOADOUT_WEAPONS_DEFAULT
		};
		magazines[]=
		{
			"CUP_30Rnd_9x19_MP5",
			"CUP_30Rnd_9x19_MP5",
			"CUP_30Rnd_9x19_MP5",
			"CUP_30Rnd_9x19_MP5",
			LOADOUT_MAGAZINES_FULL
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_9x19_MP5",
			"CUP_30Rnd_9x19_MP5",
			"CUP_30Rnd_9x19_MP5",
			"CUP_30Rnd_9x19_MP5",
			LOADOUT_MAGAZINES_FULL
		};
	};
	class SIL_STALKER_Monolith_SEVA_Engineer_F: SIL_STALKER_Monolith_SEVA_Base_F
	{
		PREVIEW(SIL_STALKER_Monolith_SEVA_Engineer_F);
		displayName = "Engineer";
		scope = 2;
		UNIT_ROLE_ENGINEER;
		weapons[]=
		{
			"CUP_arifle_OTS14_GROZA_Grip",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"CUP_arifle_OTS14_GROZA_Grip",
			LOADOUT_WEAPONS_DEFAULT
		};
		magazines[]=
		{
			"CUP_20Rnd_9x39_SP5_GROZA_M",
			"CUP_20Rnd_9x39_SP5_GROZA_M",
			"CUP_20Rnd_9x39_SP5_GROZA_M",
			"CUP_20Rnd_9x39_SP5_GROZA_M",
			LOADOUT_MAGAZINES_FULL
		};
		respawnMagazines[]=
		{
			"CUP_20Rnd_9x39_SP5_GROZA_M",
			"CUP_20Rnd_9x39_SP5_GROZA_M",
			"CUP_20Rnd_9x39_SP5_GROZA_M",
			"CUP_20Rnd_9x39_SP5_GROZA_M",
			LOADOUT_MAGAZINES_FULL
		};
	};

	/* Exo Units */
	class SIL_STALKER_Monolith_Exo_Base_F: SIL_STALKER_Monolith_Base_F
	{
		uniformClass = "SE_Assault_Fatigues_Monolith";
		editorSubcategory = "SIL_STALKER_Subcategory_Monolith_Men_Exo";
		scope = 1;
		linkedItems[]=
		{
			"SCE_Exo_Helmet_Monolith",
			"SE_S10",
			"SCE_Exo2G_Monolith",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"SCE_Exo_Helmet_Monolith",
			"SE_S10",
			"SCE_Exo2G_Monolith",
			LOADOUT_ITEMS_FULL
		};
	};
	class SIL_STALKER_Monolith_Exo_Rifleman_1_F: SIL_STALKER_Monolith_Exo_Base_F
	{
		PREVIEW(SIL_STALKER_Monolith_Exo_Rifleman_1_F);
		displayName = "Rifleman";
		scope = 2;
		weapons[]=
		{
			"CUP_arifle_G36A",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"CUP_arifle_G36A",
			LOADOUT_WEAPONS_DEFAULT
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			LOADOUT_MAGAZINES_FULL
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			"CUP_30Rnd_556x45_G36",
			LOADOUT_MAGAZINES_FULL
		};
	};
	class SIL_STALKER_Monolith_Exo_Rifleman_2_F: SIL_STALKER_Monolith_Exo_Base_F
	{
		PREVIEW(SIL_STALKER_Monolith_Exo_Rifleman_2_F);
		displayName = "Rifleman";
		scope = 2;
		weapons[]=
		{
			"CUP_arifle_AS_VAL_VFG_top_rail",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AS_VAL_VFG_top_rail",
			LOADOUT_WEAPONS_DEFAULT
		};
		magazines[]=
		{
			"CUP_30Rnd_9x39_SP5_VIKHR_M",
			"CUP_30Rnd_9x39_SP5_VIKHR_M",
			"CUP_30Rnd_9x39_SP5_VIKHR_M",
			"CUP_30Rnd_9x39_SP5_VIKHR_M",
			LOADOUT_MAGAZINES_FULL
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_9x39_SP5_VIKHR_M",
			"CUP_30Rnd_9x39_SP5_VIKHR_M",
			"CUP_30Rnd_9x39_SP5_VIKHR_M",
			"CUP_30Rnd_9x39_SP5_VIKHR_M",
			LOADOUT_MAGAZINES_FULL
		};
	};