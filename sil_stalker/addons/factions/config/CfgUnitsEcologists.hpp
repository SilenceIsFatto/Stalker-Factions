	// cfgVehicles

	class SIL_STALKER_Ecologist_Base_F: SIL_STALKER_Base_F
	{
		editorSubcategory = "SIL_STALKER_Subcategory_Ecologists_Men";
		scope = 1;
		side = FACTION_ECOLOGISTS_SIDE; // 0 = OPFOR, 1 = BLUFOR, 2 = IND
		FACTION_ECOLOGISTS;
		backpack = "SE_SEVA_Oxygen_Tank";
		identityTypes[]=
		{
			"Male01ENG",
			"WhiteHead_01",
			"NoGlasses"
		};
	};

	class SIL_STALKER_Ecologist_Scientist_1_F: SIL_STALKER_Ecologist_Base_F
	{
		PREVIEW(SIL_STALKER_Ecologist_Scientist_1_F);
		displayName = "Scientist (Green)";
		uniformClass = "SE_SEVA_Ecologists_Green";
		scope = 2;
		identityTypes[]=
		{
			"Male03ENG",
			"WhiteHead_04",
			"NoGlasses"
		};
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
	class SIL_STALKER_Ecologist_Scientist_2_F: SIL_STALKER_Ecologist_Base_F
	{
		PREVIEW(SIL_STALKER_Ecologist_Scientist_2_F);
		displayName = "Scientist (Orange)";
		uniformClass = "SE_SEVA_Ecologists_Orange";
		scope = 2;
		identityTypes[]=
		{
			"Male03ENG",
			"WhiteHead_04",
			"NoGlasses"
		};
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