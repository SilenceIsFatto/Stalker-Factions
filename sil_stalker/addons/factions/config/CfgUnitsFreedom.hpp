	// cfgVehicles

	class SIL_STALKER_Freedom_Base_F: SIL_STALKER_Base_F
	{
		editorSubcategory = "SIL_STALKER_Subcategory_Freedom_Men";
		scope = 1;
		side = FACTION_FREEDOM_SIDE; // 0 = OPFOR, 1 = BLUFOR, 2 = IND
		FACTION_FREEDOM;
		identityTypes[]=
		{
			"Male01ENG",
			"WhiteHead_01",
			"NoGlasses"
		};
	};

	class SIL_STALKER_Freedom_Rifleman_1_F: SIL_STALKER_Freedom_Base_F
	{
		PREVIEW(SIL_STALKER_Freedom_Rifleman_1_F);
		displayName = "Rifleman";
		uniformClass = "SCE_Freedom_4";
		scope = 2;
		backpack = "CUP_B_GER_Medic_Flecktarn";
		identityTypes[]=
		{
			"Male09ENG",
			"WhiteHead_02",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"CUP_H_Ger_Boonie2_Flecktarn",
			"SCE_G_CN3P",
			"CUP_V_B_GER_Carrier_Rig",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"CUP_H_Ger_Boonie2_Flecktarn",
			"SCE_G_CN3P",
			"CUP_V_B_GER_Carrier_Rig",
			LOADOUT_ITEMS_FULL
		};
		weapons[]=
		{
			"CUP_arifle_L85A2_Elcan_Laser",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"CUP_arifle_L85A2_Elcan_Laser",
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
	class SIL_STALKER_Freedom_Rifleman_2_F: SIL_STALKER_Freedom_Base_F
	{
		PREVIEW(SIL_STALKER_Freedom_Rifleman_2_F);
		displayName = "Rifleman (Alternate)";
		uniformClass = "SCE_Freedom_3";
		scope = 2;
		backpack = "CUP_B_Bergen_BAF";
		identityTypes[]=
		{
			"Male04ENG",
			"WhiteHead_06",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"CUP_H_Ger_M92_Cover",
			"SE_GP21",
			"CUP_V_B_GER_Carrier_Vest_3",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"CUP_H_Ger_M92_Cover",
			"SE_GP21",
			"CUP_V_B_GER_Carrier_Vest_3",
			LOADOUT_ITEMS_FULL
		};
		weapons[]=
		{
			"CUP_arifle_OTS14_GROZA_762_Grip",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"CUP_arifle_OTS14_GROZA_762_Grip",
			LOADOUT_WEAPONS_DEFAULT
		};
		magazines[]=
		{
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			LOADOUT_MAGAZINES_FULL
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			LOADOUT_MAGAZINES_FULL
		};
	};
	class SIL_STALKER_Freedom_Rifleman_Light_F: SIL_STALKER_Freedom_Base_F
	{
		PREVIEW(SIL_STALKER_Freedom_Rifleman_Light_F);
		displayName = "Rifleman (Light)";
		uniformClass = "SCE_Freedom_CBRN";
		scope = 2;
		identityTypes[]=
		{
			"Male02ENG",
			"WhiteHead_03",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"armst_Hood_mid_freedom1",
			"G_Bandanna_blk",
			"CUP_V_B_GER_Vest_2",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"armst_Hood_mid_freedom1",
			"G_Bandanna_blk",
			"CUP_V_B_GER_Vest_2",
			LOADOUT_ITEMS_FULL
		};
		weapons[]=
		{
			"CUP_arifle_AS_VAL_VFG",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AS_VAL_VFG",
			LOADOUT_WEAPONS_DEFAULT
		};
		magazines[]=
		{
			"CUP_20Rnd_9x39_SP5_VSS_M",
			"CUP_20Rnd_9x39_SP5_VSS_M",
			"CUP_20Rnd_9x39_SP5_VSS_M",
			"CUP_20Rnd_9x39_SP5_VSS_M",
			"CUP_20Rnd_9x39_SP5_VSS_M",
			"CUP_20Rnd_9x39_SP5_VSS_M",
			LOADOUT_MAGAZINES_FULL
		};
		respawnMagazines[]=
		{
			"CUP_20Rnd_9x39_SP5_VSS_M",
			"CUP_20Rnd_9x39_SP5_VSS_M",
			"CUP_20Rnd_9x39_SP5_VSS_M",
			"CUP_20Rnd_9x39_SP5_VSS_M",
			"CUP_20Rnd_9x39_SP5_VSS_M",
			"CUP_20Rnd_9x39_SP5_VSS_M",
			LOADOUT_MAGAZINES_FULL
		};
	};
	class SIL_STALKER_Freedom_Medic_F: SIL_STALKER_Freedom_Base_F
	{
		PREVIEW(SIL_STALKER_Freedom_Medic_F);
		displayName = "Medic";
		uniformClass = "SCE_Freedom_CBRN";
		scope = 2;
		backpack = "SCE_B_SEVA_Freedom_1";
		UNIT_ROLE_MEDIC;
		identityTypes[]=
		{
			"Male02ENG",
			"WhiteHead_03",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"SCE_H_SEVA_Freedom_1",
			"SCE_G_SEVA_HELMET_VISOR",
			"SCE_V_SEVA_Freedom_2",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"SCE_H_SEVA_Freedom_1",
			"SCE_G_SEVA_HELMET_VISOR",
			"SCE_V_SEVA_Freedom_2",
			LOADOUT_ITEMS_FULL
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
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M",
			LOADOUT_MAGAZINES_FULL
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M",
			LOADOUT_MAGAZINES_FULL
		};
	};
	class SIL_STALKER_Freedom_Sharpshooter_F: SIL_STALKER_Freedom_Base_F
	{
		PREVIEW(SIL_STALKER_Freedom_Sharpshooter_F);
		displayName = "Sharpshooter";
		uniformClass = "SCE_Freedom_3";
		scope = 2;
		backpack = "CUP_B_GER_Medic_Flecktarn";
		identityTypes[]=
		{
			"Male06ENG",
			"WhiteHead_02",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"armst_Hood_full_freedom1",
			"G_Bandanna_blk",
			"CUP_V_B_GER_Carrier_Vest_3",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"armst_Hood_full_freedom1",
			"G_Bandanna_blk",
			"CUP_V_B_GER_Carrier_Vest_3",
			LOADOUT_ITEMS_FULL
		};
		weapons[]=
		{
			"CUP_srifle_SVD_wdl_ghillie",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"CUP_srifle_SVD_wdl_ghillie",
			LOADOUT_WEAPONS_DEFAULT
		};
		magazines[]=
		{
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			LOADOUT_MAGAZINES_FULL
		};
		respawnMagazines[]=
		{
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			"CUP_10Rnd_762x54_SVD_M",
			LOADOUT_MAGAZINES_FULL
		};
	};
	class SIL_STALKER_Freedom_Engineer_F: SIL_STALKER_Freedom_Base_F
	{
		PREVIEW(SIL_STALKER_Freedom_Engineer_F);
		displayName = "Engineer";
		uniformClass = "SCE_Freedom_3";
		scope = 2;
		backpack = "CUP_B_Bergen_BAF";
		UNIT_ROLE_ENGINEER;
		identityTypes[]=
		{
			"Male06ENG",
			"WhiteHead_02",
			"NoGlasses"
		};
		linkedItems[]=
		{
			"CUP_H_Ger_M92_Cover",
			"SE_GP21",
			"CUP_V_B_GER_PVest_Fleck_Gren",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"CUP_H_Ger_M92_Cover",
			"SE_GP21",
			"CUP_V_B_GER_PVest_Fleck_Gren",
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

	/* SEVA Units */
	class SIL_STALKER_Freedom_SEVA_Base_F: SIL_STALKER_Freedom_Base_F
	{
		uniformClass = "SCE_Freedom_CBRN";
		backpack = "SCE_B_SEVA_Freedom_1";
		editorSubcategory = "SIL_STALKER_Subcategory_Freedom_Men_SEVA";
		scope = 1;
		linkedItems[]=
		{
			"SCE_H_SEVA_Freedom_1",
			"SCE_G_SEVA_HELMET_VISOR",
			"SCE_V_SEVA_Freedom_1",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"SCE_H_SEVA_Freedom_1",
			"SCE_G_SEVA_HELMET_VISOR",
			"SCE_V_SEVA_Freedom_1",
			LOADOUT_ITEMS_FULL
		};
	};
	class SIL_STALKER_Freedom_SEVA_Rifleman_1_F: SIL_STALKER_Freedom_SEVA_Base_F
	{
		PREVIEW(SIL_STALKER_Freedom_SEVA_Rifleman_1_F);
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
			"CUP_arifle_L85A2_Elcan_Laser",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"CUP_arifle_L85A2_Elcan_Laser",
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
	class SIL_STALKER_Freedom_SEVA_Rifleman_2_F: SIL_STALKER_Freedom_SEVA_Base_F
	{
		PREVIEW(SIL_STALKER_Freedom_SEVA_Rifleman_2_F);
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
			"CUP_arifle_OTS14_GROZA_762_Grip",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"CUP_arifle_OTS14_GROZA_762_Grip",
			LOADOUT_WEAPONS_DEFAULT
		};
		magazines[]=
		{
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			LOADOUT_MAGAZINES_FULL
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			"CUP_30Rnd_762x39_AK47_M",
			LOADOUT_MAGAZINES_FULL
		};
	};
	class SIL_STALKER_Freedom_SEVA_Rifleman_Light_F: SIL_STALKER_Freedom_SEVA_Base_F
	{
		PREVIEW(SIL_STALKER_Freedom_SEVA_Rifleman_Light_F);
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
			"CUP_arifle_AS_VAL_VFG",
			LOADOUT_WEAPONS_DEFAULT
		};
		respawnWeapons[]=
		{
			"CUP_arifle_AS_VAL_VFG",
			LOADOUT_WEAPONS_DEFAULT
		};
		magazines[]=
		{
			"CUP_20Rnd_9x39_SP5_VSS_M",
			"CUP_20Rnd_9x39_SP5_VSS_M",
			"CUP_20Rnd_9x39_SP5_VSS_M",
			"CUP_20Rnd_9x39_SP5_VSS_M",
			"CUP_20Rnd_9x39_SP5_VSS_M",
			"CUP_20Rnd_9x39_SP5_VSS_M",
			LOADOUT_MAGAZINES_FULL
		};
		respawnMagazines[]=
		{
			"CUP_20Rnd_9x39_SP5_VSS_M",
			"CUP_20Rnd_9x39_SP5_VSS_M",
			"CUP_20Rnd_9x39_SP5_VSS_M",
			"CUP_20Rnd_9x39_SP5_VSS_M",
			"CUP_20Rnd_9x39_SP5_VSS_M",
			"CUP_20Rnd_9x39_SP5_VSS_M",
			LOADOUT_MAGAZINES_FULL
		};
	};
	class SIL_STALKER_Freedom_SEVA_Medic_F: SIL_STALKER_Freedom_SEVA_Base_F
	{
		PREVIEW(SIL_STALKER_Freedom_SEVA_Medic_F);
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
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M",
			LOADOUT_MAGAZINES_FULL
		};
		respawnMagazines[]=
		{
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK74M_M",
			LOADOUT_MAGAZINES_FULL
		};
	};

	/* Exo Units */
	class SIL_STALKER_Freedom_Exo_Base_F: SIL_STALKER_Freedom_Base_F
	{
		uniformClass = "SE_Assault_Fatigues_Freedom";
		editorSubcategory = "SIL_STALKER_Subcategory_Freedom_Men_Exo";
		scope = 1;
		linkedItems[]=
		{
			"SCE_Exo_Helmet_Freedom",
			"SE_GP7",
			"SCE_Exo2G_Freedom_1",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"SCE_Exo_Helmet_Freedom",
			"SE_GP7",
			"SCE_Exo2G_Freedom_1",
			LOADOUT_ITEMS_FULL
		};
	};
	class SIL_STALKER_Freedom_Exo_Rifleman_1_F: SIL_STALKER_Freedom_Exo_Base_F
	{
		PREVIEW(SIL_STALKER_Freedom_Exo_Rifleman_1_F);
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
	class SIL_STALKER_Freedom_Exo_Rifleman_2_F: SIL_STALKER_Freedom_Exo_Base_F
	{
		PREVIEW(SIL_STALKER_Freedom_Exo_Rifleman_2_F);
		displayName = "Rifleman (Alternate)";
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

	/* No PPE Units */
	class SIL_STALKER_Freedom_NoPPE_Rifleman_1_F: SIL_STALKER_Freedom_Rifleman_1_F
	{
		PREVIEW(SIL_STALKER_Freedom_NoPPE_Rifleman_1_F);
		editorSubcategory = "SIL_STALKER_Subcategory_Freedom_Men_NoPPE";
		scope = 2;
		linkedItems[]=
		{
			"CUP_H_Ger_Boonie2_Flecktarn",
			"CUP_V_B_GER_Carrier_Rig",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"CUP_H_Ger_Boonie2_Flecktarn",
			"CUP_V_B_GER_Carrier_Rig",
			LOADOUT_ITEMS_FULL
		};
	};
	class SIL_STALKER_Freedom_NoPPE_Rifleman_2_F: SIL_STALKER_Freedom_Rifleman_2_F
	{
		PREVIEW(SIL_STALKER_Freedom_NoPPE_Rifleman_2_F);
		editorSubcategory = "SIL_STALKER_Subcategory_Freedom_Men_NoPPE";
		scope = 2;
		linkedItems[]=
		{
			"armst_Hood_full_freedom1",
			"CUP_V_B_GER_Carrier_Vest_3",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"armst_Hood_full_freedom1",
			"CUP_V_B_GER_Carrier_Vest_3",
			LOADOUT_ITEMS_FULL
		};
	};
	class SIL_STALKER_Freedom_NoPPE_Rifleman_Light_F: SIL_STALKER_Freedom_Rifleman_Light_F
	{
		PREVIEW(SIL_STALKER_Freedom_NoPPE_Rifleman_Light_F);
		editorSubcategory = "SIL_STALKER_Subcategory_Freedom_Men_NoPPE";
		scope = 2;
		linkedItems[]=
		{
			"armst_Hood_mid_freedom1",
			"CUP_V_B_GER_Vest_2",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"armst_Hood_mid_freedom1",
			"CUP_V_B_GER_Vest_2",
			LOADOUT_ITEMS_FULL
		};
	};
	class SIL_STALKER_Freedom_NoPPE_Medic_F: SIL_STALKER_Freedom_Medic_F
	{
		PREVIEW(SIL_STALKER_Freedom_NoPPE_Medic_F);
		editorSubcategory = "SIL_STALKER_Subcategory_Freedom_Men_NoPPE";
		scope = 2;
		backpack = "CUP_B_GER_Pack_Flecktarn";
		linkedItems[]=
		{
			"armst_Hood_closed_freedom1",
			"CUP_V_B_JPC_Fleck_Light",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"armst_Hood_closed_freedom1",
			"CUP_V_B_JPC_Fleck_Light",
			LOADOUT_ITEMS_FULL
		};
	};
	class SIL_STALKER_Freedom_NoPPE_Sharpshooter_F: SIL_STALKER_Freedom_Sharpshooter_F
	{
		PREVIEW(SIL_STALKER_Freedom_NoPPE_Sharpshooter_F);
		editorSubcategory = "SIL_STALKER_Subcategory_Freedom_Men_NoPPE";
		scope = 2;
		linkedItems[]=
		{
			"armst_Hood_full_freedom1",
			"CUP_V_B_GER_Carrier_Vest_3",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"armst_Hood_full_freedom1",
			"CUP_V_B_GER_Carrier_Vest_3",
			LOADOUT_ITEMS_FULL
		};
	};
	class SIL_STALKER_Freedom_NoPPE_Engineer_F: SIL_STALKER_Freedom_Engineer_F
	{
		PREVIEW(SIL_STALKER_Freedom_NoPPE_Engineer_F);
		editorSubcategory = "SIL_STALKER_Subcategory_Freedom_Men_NoPPE";
		scope = 2;
		linkedItems[]=
		{
			"CUP_H_Ger_M92_Cover",
			"CUP_V_B_GER_PVest_Fleck_Gren",
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
			"CUP_H_Ger_M92_Cover",
			"CUP_V_B_GER_PVest_Fleck_Gren",
			LOADOUT_ITEMS_FULL
		};
	};