	// cfgVehicles

	class SIL_STALKER_Ward_Base_F: SIL_STALKER_Base_F
	{
		editorSubcategory = "SIL_STALKER_Subcategory_Ward_Men";
		scope = 1;
		side = FACTION_WARD_SIDE; // 0 = OPFOR, 1 = BLUFOR, 2 = IND
		FACTION_WARD;
		identityTypes[]=
		{
			"Male01ENG",
			"WhiteHead_01",
			"NoGlasses"
		};
	};

	class SIL_STALKER_Ward_Rifleman_1_F: SIL_STALKER_Ward_Base_F
	{
		PREVIEW(SIL_STALKER_Ward_Rifleman_1_F);
		displayName = "Rifleman";
		uniformClass = "SIL_STALKER_U_CBRN_Ward";
		scope = 2;
		identityTypes[]=
		{
			"Male03ENG",
			"WhiteHead_04",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"CUP_G_White_Scarf_Shades_GPSCombo",
			"CUP_V_CZ_NPP2006_nk_black",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"CUP_G_White_Scarf_Shades_GPSCombo",
			"CUP_V_CZ_NPP2006_nk_black",
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
	class SIL_STALKER_Ward_Rifleman_2_F: SIL_STALKER_Ward_Base_F
	{
		PREVIEW(SIL_STALKER_Ward_Rifleman_2_F);
		displayName = "Rifleman (Alternate)";
		uniformClass = "SIL_STALKER_U_CBRN_Ward";
		scope = 2;
		identityTypes[]=
		{
			"Male04ENG",
			"WhiteHead_05",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"CUP_RUS_Balaclava_blk",
			"CUP_V_CZ_NPP2006_nk_black",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"CUP_RUS_Balaclava_blk",
			"CUP_V_CZ_NPP2006_nk_black",
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
	class SIL_STALKER_Ward_Rifleman_Light_F: SIL_STALKER_Ward_Base_F
	{
		PREVIEW(SIL_STALKER_Ward_Rifleman_Light_F);
		displayName = "Rifleman (Light)";
		uniformClass = "SIL_STALKER_U_CBRN_Ward";
		scope = 2;
		identityTypes[]=
		{
			"Male03ENG",
			"WhiteHead_04",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"SE_S10",
			"CUP_V_CZ_NPP2006_nk_black",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"SE_S10",
			"CUP_V_CZ_NPP2006_nk_black",
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
	class SIL_STALKER_Ward_Medic_F: SIL_STALKER_Ward_Base_F
	{
		PREVIEW(SIL_STALKER_Ward_Medic_F);
		displayName = "Medic";
		uniformClass = "SIL_STALKER_U_CBRN_Ward";
		scope = 2;
		backpack = "CUP_B_AssaultPack_Black";
		UNIT_ROLE_MEDIC;
		identityTypes[]=
		{
			"Male06ENG",
			"WhiteHead_02",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"SCE_G_CN3P",
			"CUP_V_CZ_NPP2006_nk_black",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"SCE_G_CN3P",
			"CUP_V_CZ_NPP2006_nk_black",
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
	class SIL_STALKER_Ward_Engineer_F: SIL_STALKER_Ward_Base_F
	{
		PREVIEW(SIL_STALKER_Ward_Engineer_F);
		displayName = "Engineer";
		uniformClass = "SIL_STALKER_U_CBRN_Ward";
		scope = 2;
		backpack = "CUP_B_USPack_Black";
		UNIT_ROLE_ENGINEER;
		identityTypes[]=
		{
			"Male01ENG",
			"WhiteHead_07",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"CUP_RUS_Balaclava_blk",
			"CUP_V_CZ_NPP2006_nk_black",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"CUP_RUS_Balaclava_blk",
			"CUP_V_CZ_NPP2006_nk_black",
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