	// cfgVehicles

	class SIL_STALKER_Merc_Base_F: SIL_STALKER_Base_F
	{
		editorSubcategory = "SIL_STALKER_Subcategory_Merc_Men";
		scope = 1;
		side = FACTION_MERC_SIDE; // 0 = OPFOR, 1 = BLUFOR, 2 = IND
		FACTION_MERC;
		identityTypes[]=
		{
			"Male01ENG",
			"WhiteHead_01",
			"NoGlasses"
		};
	};

	class SIL_STALKER_Merc_Rifleman_1_F: SIL_STALKER_Merc_Base_F
	{
		PREVIEW(SIL_STALKER_Merc_Rifleman_1_F);
		displayName = "Rifleman";
		uniformClass = "SCE_Mercenary_3";
		scope = 2;
		identityTypes[]=
		{
			"Male06ENG",
			"WhiteHead_02",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"CUP_H_OpsCore_Black",
			"SE_GP21",
			"CUP_V_PMC_IOTV_Black_Patrol",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"CUP_H_OpsCore_Black",
			"SE_GP21",
			"CUP_V_PMC_IOTV_Black_Patrol",
			LOADOUT_ITEMS_FULL
		};
		weapons[]=
		{
			"SIL_STALKER_arifle_HK416_Black_EOTech_Flashlight",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"SIL_STALKER_arifle_HK416_Black_EOTech_Flashlight",
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
	class SIL_STALKER_Merc_Rifleman_2_F: SIL_STALKER_Merc_Base_F
	{
		PREVIEW(SIL_STALKER_Merc_Rifleman_2_F);
		displayName = "Rifleman (Alternate)";
		uniformClass = "SCE_Mercenary_3";
		scope = 2;
		identityTypes[]=
		{
			"Male08ENG",
			"WhiteHead_03",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"CUP_H_OpsCore_Black",
			"SE_S10",
			"CUP_V_PMC_IOTV_Black_TL",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"CUP_H_OpsCore_Black",
			"SE_S10",
			"CUP_V_PMC_IOTV_Black_TL",
			LOADOUT_ITEMS_FULL
		};
		weapons[]=
		{
			"SIL_STALKER_arifle_G36C_EOTech",
			"CUP_hgun_Colt1911",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"SIL_STALKER_arifle_G36C_EOTech",
			"CUP_hgun_Colt1911",
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
			"CUP_7Rnd_45ACP_1911",
			"CUP_7Rnd_45ACP_1911",
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
			"CUP_7Rnd_45ACP_1911",
			"CUP_7Rnd_45ACP_1911",
			LOADOUT_MAGAZINES_FULL
		};
	};
	class SIL_STALKER_Merc_Rifleman_Light_F: SIL_STALKER_Merc_Base_F
	{
		PREVIEW(SIL_STALKER_Merc_Rifleman_Light_F);
		displayName = "Rifleman (Light)";
		uniformClass = "SCE_Mercenary_3";
		scope = 2;
		identityTypes[]=
		{
			"Male09ENG",
			"WhiteHead_05",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"CUP_H_OpsCore_Black",
			"CUP_G_Scarf_Face_Blk",
			"CUP_V_B_Armatus_BB_Black",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"CUP_H_OpsCore_Black",
			"CUP_G_Scarf_Face_Blk",
			"CUP_V_B_Armatus_BB_Black",
			LOADOUT_ITEMS_FULL
		};
		weapons[]=
		{
			"SIL_STALKER_smg_MP5A5_Rail_VFG_Reflex",
			"CUP_hgun_Colt1911",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"SIL_STALKER_smg_MP5A5_Rail_VFG_Reflex",
			"CUP_hgun_Colt1911",
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
			"CUP_7Rnd_45ACP_1911",
			"CUP_7Rnd_45ACP_1911",
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
			"CUP_7Rnd_45ACP_1911",
			"CUP_7Rnd_45ACP_1911",
			LOADOUT_MAGAZINES_FULL
		};
	};
	class SIL_STALKER_Merc_Medic_F: SIL_STALKER_Merc_Base_F
	{
		PREVIEW(SIL_STALKER_Merc_Medic_F);
		displayName = "Medic";
		uniformClass = "SCE_Mercenary_3";
		scope = 2;
		backpack = "CUP_B_AssaultPack_Black";
		UNIT_ROLE_MEDIC;
		identityTypes[]=
		{
			"Male05ENG",
			"WhiteHead_02",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"CUP_H_OpsCore_Black",
			"CUP_RUS_Balaclava_blk",
			"CUP_V_CZ_NPP2006_nk_black",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"CUP_H_OpsCore_Black",
			"CUP_RUS_Balaclava_blk",
			"CUP_V_CZ_NPP2006_nk_black",
			LOADOUT_ITEMS_FULL
		};
		weapons[]=
		{
			"SIL_STALKER_arifle_L85A2_EOTech",
			"CUP_hgun_Colt1911",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"SIL_STALKER_arifle_L85A2_EOTech",
			"CUP_hgun_Colt1911",
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
			"CUP_7Rnd_45ACP_1911",
			"CUP_7Rnd_45ACP_1911",
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
			"CUP_7Rnd_45ACP_1911",
			"CUP_7Rnd_45ACP_1911",
			LOADOUT_MAGAZINES_FULL
		};
	};
	class SIL_STALKER_Merc_Sharpshooter_F: SIL_STALKER_Merc_Base_F
	{
		PREVIEW(SIL_STALKER_Merc_Sharpshooter_F);
		displayName = "Sharpshooter";
		uniformClass = "SCE_Mercenary_3";
		scope = 2;
		identityTypes[]=
		{
			"Male09ENG",
			"WhiteHead_02",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"CUP_H_OpsCore_Black",
			"CUP_PMC_Facewrap_Skull",
			"SCE_Sunrise_Mercenary",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"CUP_H_OpsCore_Black",
			"CUP_PMC_Facewrap_Skull",
			"SCE_Sunrise_Mercenary",
			LOADOUT_ITEMS_FULL
		};
		weapons[]=
		{
			"SIL_STALKER_arifle_HK417_20_Leupold",
			"CUP_hgun_Colt1911",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"SIL_STALKER_arifle_HK417_20_Leupold",
			"CUP_hgun_Colt1911",
			LOADOUT_WEAPONS_DEFAULT
		};
		magazines[]=
		{
			"CUP_20Rnd_762x51_HK417",
			"CUP_20Rnd_762x51_HK417",
			"CUP_20Rnd_762x51_HK417",
			"CUP_20Rnd_762x51_HK417",
			"CUP_20Rnd_762x51_HK417",
			"CUP_20Rnd_762x51_HK417",
			"CUP_7Rnd_45ACP_1911",
			"CUP_7Rnd_45ACP_1911",
			LOADOUT_MAGAZINES_FULL
		};
		respawnMagazines[]=
		{
			"CUP_20Rnd_762x51_HK417",
			"CUP_20Rnd_762x51_HK417",
			"CUP_20Rnd_762x51_HK417",
			"CUP_20Rnd_762x51_HK417",
			"CUP_20Rnd_762x51_HK417",
			"CUP_20Rnd_762x51_HK417",
			"CUP_7Rnd_45ACP_1911",
			"CUP_7Rnd_45ACP_1911",
			LOADOUT_MAGAZINES_FULL
		};
	};
	class SIL_STALKER_Merc_Autorifleman_F: SIL_STALKER_Merc_Base_F
	{
		PREVIEW(SIL_STALKER_Merc_Autorifleman_F);
		displayName = "Autorifleman";
		uniformClass = "SCE_Mercenary_3";
		scope = 2;
		identityTypes[]=
		{
			"Male04ENG",
			"WhiteHead_08",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"CUP_H_OpsCore_Black",
			"SCE_G_CN3P",
			"CUP_V_PMC_IOTV_Black_AR",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"CUP_H_OpsCore_Black",
			"SCE_G_CN3P",
			"CUP_V_PMC_IOTV_Black_AR",
			LOADOUT_ITEMS_FULL
		};
		weapons[]=
		{
			"CUP_lmg_m249_para",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"CUP_lmg_m249_para",
			LOADOUT_WEAPONS_DEFAULT
		};
		magazines[]=
		{
			"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
			LOADOUT_MAGAZINES_FULL
		};
		respawnMagazines[]=
		{
			"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
			LOADOUT_MAGAZINES_FULL
		};
	};

	class SIL_STALKER_Merc_Night_Rifleman_1_F: SIL_STALKER_Merc_Rifleman_1_F
	{
		PREVIEW(SIL_STALKER_Merc_Night_Rifleman_1_F);
		uniformClass = "SE_Assault_Fatigues_Mercenary";
		editorSubcategory = "SIL_STALKER_Subcategory_Merc_Men_Night";
		linkedItems[]=
		{
			"CUP_NVG_PVS15_black",
			"CUP_H_OpsCore_Black",
			"SE_GP21",
			"CUP_V_PMC_IOTV_Black_Patrol",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"CUP_NVG_PVS15_black",
			"CUP_H_OpsCore_Black",
			"SE_GP21",
			"CUP_V_PMC_IOTV_Black_Patrol",
			LOADOUT_ITEMS_FULL
		};
		weapons[]=
		{
			"SIL_STALKER_arifle_HK416_Black_EOTech_Flashlight_Night",
			"CUP_hgun_Colt1911",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"SIL_STALKER_arifle_HK416_Black_EOTech_Flashlight_Night",
			"CUP_hgun_Colt1911",
			LOADOUT_WEAPONS_DEFAULT
		};
	};
	class SIL_STALKER_Merc_Night_Rifleman_2_F: SIL_STALKER_Merc_Rifleman_2_F
	{
		PREVIEW(SIL_STALKER_Merc_Night_Rifleman_2_F);
		uniformClass = "SE_Assault_Fatigues_Mercenary";
		editorSubcategory = "SIL_STALKER_Subcategory_Merc_Men_Night";
		linkedItems[]=
		{
			"CUP_NVG_PVS15_black",
			"CUP_H_OpsCore_Black",
			"SE_S10",
			"CUP_V_PMC_IOTV_Black_TL",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"CUP_NVG_PVS15_black",
			"CUP_H_OpsCore_Black",
			"SE_S10",
			"CUP_V_PMC_IOTV_Black_TL",
			LOADOUT_ITEMS_FULL
		};
		weapons[]=
		{
			"SIL_STALKER_arifle_G36C_EOTech_Night",
			"CUP_hgun_Colt1911",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"SIL_STALKER_arifle_G36C_EOTech_Night",
			"CUP_hgun_Colt1911",
			LOADOUT_WEAPONS_DEFAULT
		};
	};
	class SIL_STALKER_Merc_Night_Rifleman_Light_F: SIL_STALKER_Merc_Rifleman_Light_F
	{
		PREVIEW(SIL_STALKER_Merc_Night_Rifleman_Light_F);
		uniformClass = "SE_Assault_Fatigues_Mercenary";
		editorSubcategory = "SIL_STALKER_Subcategory_Merc_Men_Night";
		linkedItems[]=
		{
			"CUP_NVG_PVS15_black",
			"CUP_H_OpsCore_Black",
			"CUP_G_Scarf_Face_Blk",
			"CUP_V_B_Armatus_BB_Black",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"CUP_NVG_PVS15_black",
			"CUP_H_OpsCore_Black",
			"CUP_G_Scarf_Face_Blk",
			"CUP_V_B_Armatus_BB_Black",
			LOADOUT_ITEMS_FULL
		};
		weapons[]=
		{
			"CUP_smg_MP5SD6",
			"CUP_hgun_Colt1911",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"CUP_smg_MP5SD6",
			"CUP_hgun_Colt1911",
			LOADOUT_WEAPONS_DEFAULT
		};
	};
	class SIL_STALKER_Merc_Night_Medic_F: SIL_STALKER_Merc_Medic_F
	{
		PREVIEW(SIL_STALKER_Merc_Night_Medic_F);
		uniformClass = "SE_Assault_Fatigues_Mercenary";
		editorSubcategory = "SIL_STALKER_Subcategory_Merc_Men_Night";
		linkedItems[]=
		{
			"CUP_NVG_PVS15_black",
			"CUP_H_OpsCore_Black",
			"CUP_RUS_Balaclava_blk",
			"CUP_V_CZ_NPP2006_nk_black",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"CUP_NVG_PVS15_black",
			"CUP_H_OpsCore_Black",
			"CUP_RUS_Balaclava_blk",
			"CUP_V_CZ_NPP2006_nk_black",
			LOADOUT_ITEMS_FULL
		};
		weapons[]=
		{
			"SIL_STALKER_arifle_L85A2_EOTech_Night",
			"CUP_hgun_Colt1911",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"SIL_STALKER_arifle_L85A2_EOTech_Night",
			"CUP_hgun_Colt1911",
			LOADOUT_WEAPONS_DEFAULT
		};
	};
	class SIL_STALKER_Merc_Night_Sharpshooter_F: SIL_STALKER_Merc_Sharpshooter_F
	{
		PREVIEW(SIL_STALKER_Merc_Night_Sharpshooter_F);
		uniformClass = "SE_Assault_Fatigues_Mercenary";
		editorSubcategory = "SIL_STALKER_Subcategory_Merc_Men_Night";
		linkedItems[]=
		{
			"CUP_NVG_PVS15_black",
			"CUP_H_OpsCore_Black",
			"CUP_PMC_Facewrap_Skull",
			"SCE_Sunrise_Mercenary",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"CUP_NVG_PVS15_black",
			"CUP_H_OpsCore_Black",
			"CUP_PMC_Facewrap_Skull",
			"SCE_Sunrise_Mercenary",
			LOADOUT_ITEMS_FULL
		};
		weapons[]=
		{
			"SIL_STALKER_arifle_HK417_20_Leupold_Night",
			"CUP_hgun_Colt1911",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"SIL_STALKER_arifle_HK417_20_Leupold_Night",
			"CUP_hgun_Colt1911",
			LOADOUT_WEAPONS_DEFAULT
		};
	};

	/* No PPE Units */
	class SIL_STALKER_Merc_NoPPE_Rifleman_1_F: SIL_STALKER_Merc_Rifleman_1_F
	{
		PREVIEW(SIL_STALKER_Merc_NoPPE_Rifleman_1_F);
		editorSubcategory = "SIL_STALKER_Subcategory_Merc_Men_NoPPE";
		scope = 2;
		linkedItems[]=
		{
			"CUP_H_OpsCore_Black",
			"CUP_V_PMC_IOTV_Black_Patrol",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"CUP_H_OpsCore_Black",
			"CUP_V_PMC_IOTV_Black_Patrol",
			LOADOUT_ITEMS_FULL
		};
	};
	class SIL_STALKER_Merc_NoPPE_Rifleman_2_F: SIL_STALKER_Merc_Rifleman_2_F
	{
		PREVIEW(SIL_STALKER_Merc_NoPPE_Rifleman_2_F);
		editorSubcategory = "SIL_STALKER_Subcategory_Merc_Men_NoPPE";
		scope = 2;
		linkedItems[]=
		{
			"CUP_H_OpsCore_Black",
			"CUP_V_PMC_IOTV_Black_TL",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"CUP_H_OpsCore_Black",
			"CUP_V_PMC_IOTV_Black_TL",
			LOADOUT_ITEMS_FULL
		};
	};
	class SIL_STALKER_Merc_NoPPE_Rifleman_Light_F: SIL_STALKER_Merc_Rifleman_Light_F
	{
		PREVIEW(SIL_STALKER_Merc_NoPPE_Rifleman_Light_F);
		editorSubcategory = "SIL_STALKER_Subcategory_Merc_Men_NoPPE";
		scope = 2;
		linkedItems[]=
		{
			"CUP_H_OpsCore_Black",
			"CUP_G_Oakleys_Clr",
			"CUP_V_B_Armatus_BB_Black",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"CUP_H_OpsCore_Black",
			"CUP_G_Oakleys_Clr",
			"CUP_V_B_Armatus_BB_Black",
			LOADOUT_ITEMS_FULL
		};
	};
	class SIL_STALKER_Merc_NoPPE_Medic_F: SIL_STALKER_Merc_Medic_F
	{
		PREVIEW(SIL_STALKER_Merc_NoPPE_Medic_F);
		editorSubcategory = "SIL_STALKER_Subcategory_Merc_Men_NoPPE";
		scope = 2;
		linkedItems[]=
		{
			"CUP_H_OpsCore_Black",
			"CUP_G_ESS_BLK_Dark",
			"CUP_V_CZ_NPP2006_nk_black",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"CUP_H_OpsCore_Black",
			"CUP_G_ESS_BLK_Dark",
			"CUP_V_CZ_NPP2006_nk_black",
			LOADOUT_ITEMS_FULL
		};
	};
	class SIL_STALKER_Merc_NoPPE_Sharpshooter_F: SIL_STALKER_Merc_Sharpshooter_F
	{
		PREVIEW(SIL_STALKER_Merc_NoPPE_Sharpshooter_F);
		editorSubcategory = "SIL_STALKER_Subcategory_Merc_Men_NoPPE";
		scope = 2;
		linkedItems[]=
		{
			"CUP_H_OpsCore_Black",
			"CUP_G_Oakleys_Clr",
			"SCE_Sunrise_Mercenary",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"CUP_H_OpsCore_Black",
			"CUP_G_Oakleys_Clr",
			"SCE_Sunrise_Mercenary",
			LOADOUT_ITEMS_FULL
		};
	};
	class SIL_STALKER_Merc_NoPPE_Autorifleman_F: SIL_STALKER_Merc_Autorifleman_F
	{
		PREVIEW(SIL_STALKER_Merc_NoPPE_Autorifleman_F);
		editorSubcategory = "SIL_STALKER_Subcategory_Merc_Men_NoPPE";
		scope = 2;
		linkedItems[]=
		{
			"CUP_H_OpsCore_Black",
			"CUP_V_PMC_IOTV_Black_AR",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"CUP_H_OpsCore_Black",
			"CUP_V_PMC_IOTV_Black_AR",
			LOADOUT_ITEMS_FULL
		};
	};