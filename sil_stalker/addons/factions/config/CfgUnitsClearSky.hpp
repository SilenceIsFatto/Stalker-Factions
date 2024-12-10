	// cfgVehicles

	class SIL_STALKER_ClearSky_Base_F: SIL_STALKER_Base_F
	{
		editorSubcategory = "SIL_STALKER_Subcategory_ClearSky_Men";
		scope = 1;
		side = FACTION_CLEARSKY_SIDE; // 0 = OPFOR, 1 = BLUFOR, 2 = IND
		FACTION_CLEARSKY;
		identityTypes[]=
		{
			"Male01ENG",
			"WhiteHead_01",
			"NoGlasses"
		};
	};

	class SIL_STALKER_ClearSky_Rifleman_1_F: SIL_STALKER_ClearSky_Base_F
	{
		PREVIEW(SIL_STALKER_ClearSky_Rifleman_1_F);
		displayName = "Rifleman";
		uniformClass = "SCE_ClearSky_2";
		scope = 2;
		backpack = "CUP_B_AssaultPack_Black";
		identityTypes[]=
		{
			"Male08ENG",
			"WhiteHead_02",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"CUP_H_PMC_Beanie_Black",
			"SCE_G_CN3P",
			"CUP_V_B_Interceptor_Rifleman_Grey",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"CUP_H_PMC_Beanie_Black",
			"SCE_G_CN3P",
			"CUP_V_B_Interceptor_Rifleman_Grey",
			LOADOUT_ITEMS_FULL
		};
		weapons[]=
		{
			"SIL_STALKER_arifle_L85A2_EOTech",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"SIL_STALKER_arifle_L85A2_EOTech",
			LOADOUT_WEAPONS_DEFAULT
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag_L85",
			"CUP_30Rnd_556x45_Stanag_L85",
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
			"CUP_30Rnd_556x45_Stanag_L85",
			"CUP_30Rnd_556x45_Stanag_L85",
			LOADOUT_MAGAZINES_FULL
		};
	};
	class SIL_STALKER_ClearSky_Rifleman_2_F: SIL_STALKER_ClearSky_Base_F
	{
		PREVIEW(SIL_STALKER_ClearSky_Rifleman_2_F);
		displayName = "Rifleman (Alternate)";
		uniformClass = "SCE_ClearSky_CBRN";
		scope = 2;
		backpack = "CUP_B_AssaultPack_Black";
		identityTypes[]=
		{
			"Male04ENG",
			"WhiteHead_03",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"armst_Hood_full_clearsky",
			"SE_GP21",
			"SCE_V_SEVA_ClearSky",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"armst_Hood_full_clearsky",
			"SE_GP21",
			"SCE_V_SEVA_ClearSky",
			LOADOUT_ITEMS_FULL
		};
		weapons[]=
		{
			"SIL_STALKER_arifle_L85A2_SUSAT",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"SIL_STALKER_arifle_L85A2_SUSAT",
			LOADOUT_WEAPONS_DEFAULT
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag_L85",
			"CUP_30Rnd_556x45_Stanag_L85",
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
			"CUP_30Rnd_556x45_Stanag_L85",
			"CUP_30Rnd_556x45_Stanag_L85",
			LOADOUT_MAGAZINES_FULL
		};
	};
	class SIL_STALKER_ClearSky_Rifleman_Light_F: SIL_STALKER_ClearSky_Base_F
	{
		PREVIEW(SIL_STALKER_ClearSky_Rifleman_Light_F);
		displayName = "Rifleman (Light)";
		uniformClass = "SCE_ClearSky_2";
		scope = 2;
		identityTypes[]=
		{
			"Male05ENG",
			"WhiteHead_01",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"CUP_H_PMC_Cap_Back_PRR_Grey",
			"SE_GP21",
			"SCE_Sunrise_Black",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"CUP_H_PMC_Cap_Back_PRR_Grey",
			"SE_GP21",
			"SCE_Sunrise_Black",
			LOADOUT_ITEMS_FULL
		};
		weapons[]=
		{
			"CUP_smg_MP5SD6",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"CUP_smg_MP5SD6",
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
	class SIL_STALKER_ClearSky_Medic_F: SIL_STALKER_ClearSky_Base_F
	{
		PREVIEW(SIL_STALKER_ClearSky_Medic_F);
		displayName = "Medic";
		uniformClass = "SCE_ClearSky_1";
		scope = 2;
		UNIT_ROLE_MEDIC;
		identityTypes[]=
		{
			"Male08ENG",
			"WhiteHead_05",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"CUP_H_SLA_BeretRed",
			"CUP_G_Scarf_Face_Blk",
			"CUP_V_CZ_NPP2006_nk_black",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"CUP_H_SLA_BeretRed",
			"CUP_G_Scarf_Face_Blk",
			"CUP_V_CZ_NPP2006_nk_black",
			LOADOUT_ITEMS_FULL
		};
		weapons[]=
		{
			"SIL_STALKER_smg_MP5A5_Rail_Reflex",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"SIL_STALKER_smg_MP5A5_Rail_Reflex",
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
	class SIL_STALKER_ClearSky_Sharpshooter_F: SIL_STALKER_ClearSky_Base_F
	{
		PREVIEW(SIL_STALKER_ClearSky_Sharpshooter_F);
		displayName = "Sharpshooter";
		uniformClass = "SCE_ClearSky_1";
		scope = 2;
		identityTypes[]=
		{
			"Male05ENG",
			"WhiteHead_07",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"armst_Hood_mid_clearsky",
			"CUP_FR_NeckScarf4",
			"CUP_V_B_Interceptor_Base_Grey",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"armst_Hood_mid_clearsky",
			"CUP_FR_NeckScarf4",
			"CUP_V_B_Interceptor_Base_Grey",
			LOADOUT_ITEMS_FULL
		};
		weapons[]=
		{
			"SIL_STALKER_arifle_AK74M_PSO",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"SIL_STALKER_arifle_AK74M_PSO",
			LOADOUT_WEAPONS_DEFAULT
		};
		magazines[]=
		{
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			LOADOUT_MAGAZINES_FULL
		};
		respawnMagazines[]=
		{
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			LOADOUT_MAGAZINES_FULL
		};
	};

	/* SEVA Units */
	class SIL_STALKER_ClearSky_SEVA_Base_F: SIL_STALKER_ClearSky_Base_F
	{
		uniformClass = "SCE_ClearSky_CBRN";
		backpack = "SCE_B_SEVA_ClearSky";
		editorSubcategory = "SIL_STALKER_Subcategory_ClearSky_Men_SEVA";
		scope = 1;
		linkedItems[]=
		{
			"SCE_H_SEVA_ClearSky",
			"SCE_G_SEVA_HELMET_VISOR",
			"SCE_V_SEVA_ClearSky",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"SCE_H_SEVA_ClearSky",
			"SCE_G_SEVA_HELMET_VISOR",
			"SCE_V_SEVA_ClearSky",
			LOADOUT_ITEMS_FULL
		};
	};
	class SIL_STALKER_ClearSky_SEVA_Rifleman_1_F: SIL_STALKER_ClearSky_SEVA_Base_F
	{
		PREVIEW(SIL_STALKER_ClearSky_SEVA_Rifleman_1_F);
		displayName = "Rifleman";
		scope = 2;
		identityTypes[]=
		{
			"Male02ENG",
			"WhiteHead_04",
			"NoGlasses"
		};
		weapons[]=
		{
			"SIL_STALKER_arifle_L85A2_EOTech",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"SIL_STALKER_arifle_L85A2_EOTech",
			LOADOUT_WEAPONS_DEFAULT
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag_L85",
			"CUP_30Rnd_556x45_Stanag_L85",
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
			"CUP_30Rnd_556x45_Stanag_L85",
			"CUP_30Rnd_556x45_Stanag_L85",
			LOADOUT_MAGAZINES_FULL
		};
	};
	class SIL_STALKER_ClearSky_SEVA_Rifleman_2_F: SIL_STALKER_ClearSky_SEVA_Base_F
	{
		PREVIEW(SIL_STALKER_ClearSky_SEVA_Rifleman_2_F);
		displayName = "Rifleman (Alternate)";
		scope = 2;
		identityTypes[]=
		{
			"Male02ENG",
			"WhiteHead_04",
			"NoGlasses"
		};
		weapons[]=
		{
			"SIL_STALKER_arifle_L85A2_SUSAT",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"SIL_STALKER_arifle_L85A2_SUSAT",
			LOADOUT_WEAPONS_DEFAULT
		};
		magazines[]=
		{
			"CUP_30Rnd_556x45_Stanag_L85",
			"CUP_30Rnd_556x45_Stanag_L85",
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
			"CUP_30Rnd_556x45_Stanag_L85",
			"CUP_30Rnd_556x45_Stanag_L85",
			LOADOUT_MAGAZINES_FULL
		};
	};
	class SIL_STALKER_ClearSky_SEVA_Rifleman_Light_F: SIL_STALKER_ClearSky_SEVA_Base_F
	{
		PREVIEW(SIL_STALKER_ClearSky_SEVA_Rifleman_Light_F);
		displayName = "Rifleman (Light)";
		scope = 2;
		identityTypes[]=
		{
			"Male02ENG",
			"WhiteHead_04",
			"NoGlasses"
		};
		weapons[]=
		{
			"CUP_smg_MP5SD6",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"CUP_smg_MP5SD6",
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
	class SIL_STALKER_ClearSky_SEVA_Medic_F: SIL_STALKER_ClearSky_SEVA_Base_F
	{
		PREVIEW(SIL_STALKER_ClearSky_SEVA_Medic_F);
		displayName = "Medic";
		scope = 2;
		UNIT_ROLE_MEDIC;
		identityTypes[]=
		{
			"Male02ENG",
			"WhiteHead_04",
			"NoGlasses"
		};
		weapons[]=
		{
			"SIL_STALKER_smg_MP5A5_Rail_Reflex",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"SIL_STALKER_smg_MP5A5_Rail_Reflex",
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
	class SIL_STALKER_ClearSky_SEVA_Sharpshooter_F: SIL_STALKER_ClearSky_SEVA_Base_F
	{
		PREVIEW(SIL_STALKER_ClearSky_SEVA_Sharpshooter_F);
		displayName = "Sharpshooter";
		scope = 2;
		identityTypes[]=
		{
			"Male02ENG",
			"WhiteHead_04",
			"NoGlasses"
		};
		weapons[]=
		{
			"CUP_arifle_AK74M",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AK74M",
			LOADOUT_WEAPONS_DEFAULT
		};
		magazines[]=
		{
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			LOADOUT_MAGAZINES_FULL
		};
		respawnMagazines[]=
		{
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_545x39_AKSU_M",
			LOADOUT_MAGAZINES_FULL
		};
	};

	/* No PPE Units */
	class SIL_STALKER_ClearSky_NoPPE_Rifleman_1_F: SIL_STALKER_ClearSky_Rifleman_1_F
	{
		PREVIEW(SIL_STALKER_ClearSky_NoPPE_Rifleman_1_F);
		editorSubcategory = "SIL_STALKER_Subcategory_ClearSky_Men_NoPPE";
		scope = 2;
		linkedItems[]=
		{
			"armst_Hood_closed_clearsky",
			"CUP_V_B_Interceptor_Rifleman_Grey",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"armst_Hood_closed_clearsky",
			"CUP_V_B_Interceptor_Rifleman_Grey",
			LOADOUT_ITEMS_FULL
		};
	};
	class SIL_STALKER_ClearSky_NoPPE_Rifleman_2_F: SIL_STALKER_ClearSky_Rifleman_2_F
	{
		PREVIEW(SIL_STALKER_ClearSky_NoPPE_Rifleman_2_F);
		editorSubcategory = "SIL_STALKER_Subcategory_ClearSky_Men_NoPPE";
		scope = 2;
		linkedItems[]=
		{
			"armst_Hood_full_clearsky",
			"SCE_V_SEVA_ClearSky",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"armst_Hood_full_clearsky",
			"SCE_V_SEVA_ClearSky",
			LOADOUT_ITEMS_FULL
		};
	};
	class SIL_STALKER_ClearSky_NoPPE_Rifleman_Light_F: SIL_STALKER_ClearSky_Rifleman_Light_F
	{
		PREVIEW(SIL_STALKER_ClearSky_NoPPE_Rifleman_Light_F);
		editorSubcategory = "SIL_STALKER_Subcategory_ClearSky_Men_NoPPE";
		scope = 2;
		linkedItems[]=
		{
			"armst_Hood_mid_clearsky",
			"SCE_Sunrise_Black",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"armst_Hood_mid_clearsky",
			"SCE_Sunrise_Black",
			LOADOUT_ITEMS_FULL
		};
	};
	class SIL_STALKER_ClearSky_NoPPE_Medic_F: SIL_STALKER_ClearSky_Medic_F
	{
		PREVIEW(SIL_STALKER_ClearSky_NoPPE_Medic_F);
		editorSubcategory = "SIL_STALKER_Subcategory_ClearSky_Men_NoPPE";
		scope = 2;
		linkedItems[]=
		{
			"CUP_H_SLA_BeretRed",
			"CUP_FR_NeckScarf4",
			"CUP_V_CZ_NPP2006_nk_black",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"CUP_H_SLA_BeretRed",
			"CUP_FR_NeckScarf4",
			"CUP_V_CZ_NPP2006_nk_black",
			LOADOUT_ITEMS_FULL
		};
	};
	class SIL_STALKER_ClearSky_NoPPE_Sharpshooter_F: SIL_STALKER_ClearSky_Sharpshooter_F
	{
		PREVIEW(SIL_STALKER_ClearSky_NoPPE_Sharpshooter_F);
		editorSubcategory = "SIL_STALKER_Subcategory_ClearSky_Men_NoPPE";
		scope = 2;
		linkedItems[]=
		{
			"armst_Hood_mid_clearsky",
			"CUP_V_PMC_IOTV_Black_Empty",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"armst_Hood_mid_clearsky",
			"CUP_V_PMC_IOTV_Black_Empty",
			LOADOUT_ITEMS_FULL
		};
	};