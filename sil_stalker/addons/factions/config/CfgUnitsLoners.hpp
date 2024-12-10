	// cfgVehicles

	class SIL_STALKER_Loner_Base_F: SIL_STALKER_Base_F
	{
		editorSubcategory = "SIL_STALKER_Subcategory_Loners_Men";
		scope = 1;
		side = FACTION_LONERS_SIDE; // 0 = OPFOR, 1 = BLUFOR, 2 = IND
		FACTION_LONERS;
		identityTypes[]=
		{
			"Male01ENG",
			"WhiteHead_01",
			"NoGlasses"
		};
	};

	class SIL_STALKER_Loner_Rifleman_1_F: SIL_STALKER_Loner_Base_F
	{
		PREVIEW(SIL_STALKER_Loner_Rifleman_1_F);
		displayName = "Rifleman";
		uniformClass = "SCE_Loner_4";
		scope = 2;
		identityTypes[]=
		{
			"Male01ENG",
			"WhiteHead_01",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"armst_Hood_full_loner1",
			"SE_GP5",
			"SCE_Sunrise_Black",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"armst_Hood_full_loner1",
			"SE_GP5",
			"SCE_Sunrise_Black",
			LOADOUT_ITEMS_FULL
		};
		weapons[]=
		{
			"CUP_SKS",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"CUP_SKS",
			LOADOUT_WEAPONS_DEFAULT
		};
		magazines[]=
		{
			"CUP_10Rnd_762x39_SKS_M",
			"CUP_10Rnd_762x39_SKS_M",
			"CUP_10Rnd_762x39_SKS_M",
			"CUP_10Rnd_762x39_SKS_M",
			"CUP_10Rnd_762x39_SKS_M",
			"CUP_10Rnd_762x39_SKS_M",
			LOADOUT_MAGAZINES_FULL
		};
		respawnMagazines[]=
		{
			"CUP_10Rnd_762x39_SKS_M",
			"CUP_10Rnd_762x39_SKS_M",
			"CUP_10Rnd_762x39_SKS_M",
			"CUP_10Rnd_762x39_SKS_M",
			"CUP_10Rnd_762x39_SKS_M",
			"CUP_10Rnd_762x39_SKS_M",
			LOADOUT_MAGAZINES_FULL
		};
	};
	class SIL_STALKER_Loner_Rifleman_2_F: SIL_STALKER_Loner_Base_F
	{
		PREVIEW(SIL_STALKER_Loner_Rifleman_2_F);
		displayName = "Rifleman (Alternate)";
		uniformClass = "SE_Assault_Fatigues_Loner";
		scope = 2;
		backpack = "SE_Hunting_Backpack";
		identityTypes[]=
		{
			"Male02ENG",
			"WhiteHead_11",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"H_Watchcap_cbr",
			"SCE_G_CN3P",
			"SCE_Sunrise_Loner",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"H_Watchcap_cbr",
			"SCE_G_CN3P",
			"SCE_Sunrise_Loner",
			LOADOUT_ITEMS_FULL
		};
		weapons[]=
		{
			"CUP_arifle_AKS74",
			"CUP_hgun_PMM",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AKS74",
			"CUP_hgun_PMM",
			LOADOUT_WEAPONS_DEFAULT
		};
		magazines[]=
		{
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_12Rnd_9x18_PMM_M",
			"CUP_12Rnd_9x18_PMM_M",
			LOADOUT_MAGAZINES_FULL
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_12Rnd_9x18_PMM_M",
			"CUP_12Rnd_9x18_PMM_M",
			LOADOUT_MAGAZINES_FULL
		};
	};
	class SIL_STALKER_Loner_Rifleman_Light_F: SIL_STALKER_Loner_Base_F
	{
		PREVIEW(SIL_STALKER_Loner_Rifleman_Light_F);
		displayName = "Rifleman (Light)";
		uniformClass = "SIL_STALKER_U_Gorka_Khaki_3";
		scope = 2;
		identityTypes[]=
		{
			"Male03ENG",
			"WhiteHead_02",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"SE_GP5",
			"SE_Eastern_Chest_Rig_Brown",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"SE_GP5",
			"SE_Eastern_Chest_Rig_Brown",
			LOADOUT_ITEMS_FULL
		};
		weapons[]=
		{
			"CUP_smg_MP5A5",
			"CUP_hgun_PMM",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"CUP_smg_MP5A5",
			"CUP_hgun_PMM",
			LOADOUT_WEAPONS_DEFAULT
		};
		magazines[]=
		{
			"CUP_30Rnd_9x19_MP5",
			"CUP_30Rnd_9x19_MP5",
			"CUP_30Rnd_9x19_MP5",
			"CUP_30Rnd_9x19_MP5",
			"CUP_30Rnd_9x19_MP5",
			"CUP_30Rnd_9x19_MP5",
			"CUP_12Rnd_9x18_PMM_M",
			"CUP_12Rnd_9x18_PMM_M",
			LOADOUT_MAGAZINES_FULL
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_9x19_MP5",
			"CUP_30Rnd_9x19_MP5",
			"CUP_30Rnd_9x19_MP5",
			"CUP_30Rnd_9x19_MP5",
			"CUP_30Rnd_9x19_MP5",
			"CUP_30Rnd_9x19_MP5",
			"CUP_12Rnd_9x18_PMM_M",
			"CUP_12Rnd_9x18_PMM_M",
			LOADOUT_MAGAZINES_FULL
		};
	};
	class SIL_STALKER_Loner_Medic_F: SIL_STALKER_Loner_Base_F
	{
		PREVIEW(SIL_STALKER_Loner_Medic_F);
		displayName = "Medic";
		uniformClass = "SCE_Loner_2";
		scope = 2;
		backpack = "SE_Hunting_Backpack";
		UNIT_ROLE_MEDIC;
		identityTypes[]=
		{
			"Male05ENG",
			"WhiteHead_09",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"SE_GP7",
			"SCE_Sunrise_Loner",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"SE_GP7",
			"SCE_Sunrise_Loner",
			LOADOUT_ITEMS_FULL
		};
		weapons[]=
		{
			"CUP_arifle_AKS74U",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AKS74U",
			LOADOUT_WEAPONS_DEFAULT
		};
		magazines[]=
		{
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			LOADOUT_MAGAZINES_FULL
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			LOADOUT_MAGAZINES_FULL
		};
	};
	class SIL_STALKER_Loner_Sharpshooter_F: SIL_STALKER_Loner_Base_F
	{
		PREVIEW(SIL_STALKER_Loner_Sharpshooter_F);
		displayName = "Sharpshooter";
		uniformClass = "SCE_Loner_4";
		scope = 2;
		identityTypes[]=
		{
			"Male06ENG",
			"WhiteHead_06",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"armst_Hood_mid_loner8",
			"CUP_FR_NeckScarf2",
			"SCE_Coat_Short_3",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"armst_Hood_mid_loner8",
			"CUP_FR_NeckScarf2",
			"SCE_Coat_Short_3",
			LOADOUT_ITEMS_FULL
		};
		weapons[]=
		{
			"CUP_srifle_CZ550",
			"CUP_hgun_TT",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"CUP_srifle_CZ550",
			"CUP_hgun_TT",
			LOADOUT_WEAPONS_DEFAULT
		};
		magazines[]=
		{
			"CUP_5x_22_LR_17_HMR_M",
			"CUP_5x_22_LR_17_HMR_M",
			"CUP_5x_22_LR_17_HMR_M",
			"CUP_5x_22_LR_17_HMR_M",
			"CUP_5x_22_LR_17_HMR_M",
			"CUP_5x_22_LR_17_HMR_M",
			"CUP_5x_22_LR_17_HMR_M",
			"CUP_5x_22_LR_17_HMR_M",
			"CUP_8Rnd_762x25_TT",
			"CUP_8Rnd_762x25_TT",
			LOADOUT_MAGAZINES_FULL
		};
		respawnMagazines[]=
		{
			"CUP_5x_22_LR_17_HMR_M",
			"CUP_5x_22_LR_17_HMR_M",
			"CUP_5x_22_LR_17_HMR_M",
			"CUP_5x_22_LR_17_HMR_M",
			"CUP_5x_22_LR_17_HMR_M",
			"CUP_5x_22_LR_17_HMR_M",
			"CUP_5x_22_LR_17_HMR_M",
			"CUP_5x_22_LR_17_HMR_M",
			"CUP_8Rnd_762x25_TT",
			"CUP_8Rnd_762x25_TT",
			LOADOUT_MAGAZINES_FULL
		};
	};
	class SIL_STALKER_Loner_Engineer_F: SIL_STALKER_Loner_Base_F
	{
		PREVIEW(SIL_STALKER_Loner_Engineer_F);
		displayName = "Engineer";
		uniformClass = "SIL_STALKER_U_Gorka_Khaki_3";
		scope = 2;
		backpack = "CUP_B_Kombat_Olive";
		UNIT_ROLE_ENGINEER;
		identityTypes[]=
		{
			"Male02ENG",
			"WhiteHead_04",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"SCE_Exo_Helmet_Loner",
			"CAU_G_CBRN_s10_blk",
			"SCE_Exo2G_Loner_1",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"SCE_Exo_Helmet_Loner",
			"CAU_G_CBRN_s10_blk",
			"SCE_Exo2G_Loner_1",
			LOADOUT_ITEMS_FULL
		};
		weapons[]=
		{
			"CUP_arifle_AK74",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AK74",
			LOADOUT_WEAPONS_DEFAULT
		};
		magazines[]=
		{
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			LOADOUT_MAGAZINES_FULL
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			LOADOUT_MAGAZINES_FULL
		};
	};
	class SIL_STALKER_Loner_Autorifleman_F: SIL_STALKER_Loner_Base_F
	{
		PREVIEW(SIL_STALKER_Loner_Autorifleman_F);
		displayName = "Autorifleman";
		uniformClass = "SIL_STALKER_U_Gorka_Khaki_3";
		scope = 2;
		backpack = "CUP_B_Kombat_Olive";
		identityTypes[]=
		{
			"Male08ENG",
			"WhiteHead_03",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"CUP_G_Scarf_Face_Blk",
			"SE_Assault_Vest_Tan",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"CUP_G_Scarf_Face_Blk",
			"SE_Assault_Vest_Tan",
			LOADOUT_ITEMS_FULL
		};
		weapons[]=
		{
			"CUP_arifle_RPK74_45",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"CUP_arifle_RPK74_45",
			LOADOUT_WEAPONS_DEFAULT
		};
		magazines[]=
		{
			"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
			"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
			"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
			"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
			LOADOUT_MAGAZINES_FULL
		};
		respawnMagazines[]=
		{
			"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
			"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
			"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
			"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
			LOADOUT_MAGAZINES_FULL
		};
	};

	/* No PPE Units */
	class SIL_STALKER_Loner_NoPPE_Rifleman_1_F: SIL_STALKER_Loner_Rifleman_1_F
	{
		PREVIEW(SIL_STALKER_Loner_NoPPE_Rifleman_1_F);
		editorSubcategory = "SIL_STALKER_Subcategory_Loners_Men_NoPPE";
		scope = 2;
		linkedItems[]=
		{
			"SE_Ushanka",
			"SCE_Coat_Short_1",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"SE_Ushanka",
			"SCE_Coat_Short_1",
			LOADOUT_ITEMS_FULL
		};
	};
	class SIL_STALKER_Loner_NoPPE_Rifleman_2_F: SIL_STALKER_Loner_Rifleman_2_F
	{
		PREVIEW(SIL_STALKER_Loner_NoPPE_Rifleman_2_F);
		editorSubcategory = "SIL_STALKER_Subcategory_Loners_Men_NoPPE";
		scope = 2;
		linkedItems[]=
		{
			"H_Watchcap_cbr",
			"SCE_Sunrise_Loner",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"H_Watchcap_cbr",
			"SCE_Sunrise_Loner",
			LOADOUT_ITEMS_FULL
		};
	};
	class SIL_STALKER_Loner_NoPPE_Rifleman_Light_F: SIL_STALKER_Loner_Rifleman_Light_F
	{
		PREVIEW(SIL_STALKER_Loner_NoPPE_Rifleman_Light_F);
		editorSubcategory = "SIL_STALKER_Subcategory_Loners_Men_NoPPE";
		scope = 2;
		linkedItems[]=
		{
			"SE_Eastern_Chest_Rig_Brown",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"SE_Eastern_Chest_Rig_Brown",
			LOADOUT_ITEMS_FULL
		};
	};
	class SIL_STALKER_Loner_NoPPE_Medic_F: SIL_STALKER_Loner_Medic_F
	{
		PREVIEW(SIL_STALKER_Loner_NoPPE_Medic_F);
		editorSubcategory = "SIL_STALKER_Subcategory_Loners_Men_NoPPE";
		scope = 2;
		linkedItems[]=
		{
			"SCE_Sunrise_Loner",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"SCE_Sunrise_Loner",
			LOADOUT_ITEMS_FULL
		};
	};
	class SIL_STALKER_Loner_NoPPE_Sharpshooter_F: SIL_STALKER_Loner_Sharpshooter_F
	{
		PREVIEW(SIL_STALKER_Loner_NoPPE_Sharpshooter_F);
		editorSubcategory = "SIL_STALKER_Subcategory_Loners_Men_NoPPE";
		scope = 2;
		linkedItems[]=
		{
			"CUP_FR_NeckScarf2",
			"SCE_Coat_Short_3",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"CUP_FR_NeckScarf2",
			"SCE_Coat_Short_3",
			LOADOUT_ITEMS_FULL
		};
	};
	class SIL_STALKER_Loner_NoPPE_Autorifleman_F: SIL_STALKER_Loner_Autorifleman_F
	{
		PREVIEW(SIL_STALKER_Loner_NoPPE_Autorifleman_F);
		editorSubcategory = "SIL_STALKER_Subcategory_Loners_Men_NoPPE";
		scope = 2;
		linkedItems[]=
		{
			"SE_Assault_Vest_Tan",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"SE_Assault_Vest_Tan",
			LOADOUT_ITEMS_FULL
		};
	};

	/* SEVA Suit Units */
	class SIL_STALKER_Loner_SEVA_Suit_Base_F: SIL_STALKER_Loner_Base_F
	{
		uniformClass = "SE_SEVA_Loner";
		backpack = "SE_SEVA_Oxygen_Tank";
		editorSubcategory = "SIL_STALKER_Subcategory_Loners_Men_SEVA_Suit";
		scope = 1;
		linkedItems[]=
		{
			"SE_SEVA_Visor",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"SE_SEVA_Visor",
			LOADOUT_ITEMS_FULL
		};
	};
	class SIL_STALKER_Loner_SEVA_Suit_Rifleman_1_F: SIL_STALKER_Loner_SEVA_Suit_Base_F
	{
		PREVIEW(SIL_STALKER_Loner_SEVA_Suit_Rifleman_1_F);
		displayName = "Rifleman";
		scope = 2;
		identityTypes[]=
		{
			"Male02ENG",
			"WhiteHead_05",
			"NoGlasses"
		};
		weapons[]=
		{
			"CUP_arifle_HK416_Black",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"CUP_arifle_HK416_Black",
			LOADOUT_WEAPONS_DEFAULT
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_Emag",
			"CUP_30Rnd_556x45_Emag",
			"CUP_30Rnd_556x45_Emag",
			"CUP_30Rnd_556x45_Emag",
			"CUP_30Rnd_556x45_Emag",
			"CUP_30Rnd_556x45_Emag",
			LOADOUT_MAGAZINES_FULL
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_556x45_Emag",
			"CUP_30Rnd_556x45_Emag",
			"CUP_30Rnd_556x45_Emag",
			"CUP_30Rnd_556x45_Emag",
			"CUP_30Rnd_556x45_Emag",
			"CUP_30Rnd_556x45_Emag",
			LOADOUT_MAGAZINES_FULL
		};
	};
	class SIL_STALKER_Loner_SEVA_Suit_Rifleman_2_F: SIL_STALKER_Loner_SEVA_Suit_Base_F
	{
		PREVIEW(SIL_STALKER_Loner_SEVA_Suit_Rifleman_2_F);
		displayName = "Rifleman (Alternate)";
		scope = 2;
		identityTypes[]=
		{
			"Male03ENG",
			"WhiteHead_02",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"SE_SEVA_Visor",
			"CUP_V_RUS_Smersh_New_Buttpack",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"SE_SEVA_Visor",
			"CUP_V_RUS_Smersh_New_Buttpack",
			LOADOUT_ITEMS_FULL
		};
		weapons[]=
		{
			"CUP_arifle_AKS74",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AKS74",
			LOADOUT_WEAPONS_DEFAULT
		};
		magazines[]=
		{
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			LOADOUT_MAGAZINES_FULL
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			LOADOUT_MAGAZINES_FULL
		};
	};
	class SIL_STALKER_Loner_SEVA_Suit_Rifleman_Light_F: SIL_STALKER_Loner_SEVA_Suit_Base_F
	{
		PREVIEW(SIL_STALKER_Loner_SEVA_Suit_Rifleman_Light_F);
		displayName = "Rifleman (Light)";
		scope = 2;
		identityTypes[]=
		{
			"Male06ENG",
			"WhiteHead_04",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"SE_SEVA_Visor",
			"SE_Eastern_Chest_Rig_Brown",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"SE_SEVA_Visor",
			"SE_Eastern_Chest_Rig_Brown",
			LOADOUT_ITEMS_FULL
		};
		weapons[]=
		{
			"CUP_smg_MP5A5",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"CUP_smg_MP5A5",
			LOADOUT_WEAPONS_DEFAULT
		};
		magazines[]=
		{
			"CUP_30Rnd_9x19_MP5",
			"CUP_30Rnd_9x19_MP5",
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
			"CUP_30Rnd_9x19_MP5",
			"CUP_30Rnd_9x19_MP5",
			LOADOUT_MAGAZINES_FULL
		};
	};
	class SIL_STALKER_Loner_SEVA_Suit_Medic_F: SIL_STALKER_Loner_SEVA_Suit_Base_F
	{
		PREVIEW(SIL_STALKER_Loner_SEVA_Suit_Medic_F);
		displayName = "Medic";
		scope = 2;
		UNIT_ROLE_MEDIC;
		identityTypes[]=
		{
			"Male07ENG",
			"WhiteHead_04",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"SE_SEVA_Visor",
			"CUP_V_CZ_NPP2006_nk_des",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"SE_SEVA_Visor",
			"CUP_V_CZ_NPP2006_nk_des",
			LOADOUT_ITEMS_FULL
		};
		weapons[]=
		{
			"CUP_arifle_AKS74U",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AKS74U",
			LOADOUT_WEAPONS_DEFAULT
		};
		magazines[]=
		{
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			LOADOUT_MAGAZINES_FULL
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_545x39_AK_M",
			LOADOUT_MAGAZINES_FULL
		};
	};
	class SIL_STALKER_Loner_SEVA_Suit_Unarmed_F: SIL_STALKER_Loner_SEVA_Suit_Base_F
	{
		PREVIEW(SIL_STALKER_Loner_SEVA_Suit_Unarmed_F);
		displayName = "Unarmed";
		scope = 2;
		identityTypes[]=
		{
			"Male09ENG",
			"WhiteHead_08",
			"NoGlasses"
		};
		weapons[]=
		{
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			LOADOUT_WEAPONS_DEFAULT
		};
		magazines[]={};
		respawnMagazines[]={};
	};