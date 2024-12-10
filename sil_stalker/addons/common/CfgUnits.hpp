	// cfgVehicles
	class B_Survivor_F;

	class SIL_STALKER_Base_F: B_Survivor_F
	{
		uniformClass="";
		editorSubcategory="";
		scope = 1;
		genericNames = "CzechMen";
		class EventHandlers
		{
			init = "[_this#0] call SIL_STALKER_fnc_setRandomIdentity";
		};
		identityTypes[]=
		{
			"LanguageENGVR_F",
			"WhiteHead_01",
			"NoGlasses"
		};
		items[]=
		{
			LOADOUT_ITEMS_FAK
		};
		respawnItems[]=
		{
			LOADOUT_ITEMS_FAK
		};
		linkedItems[]=
		{
			LOADOUT_ITEMS_FULL
		};
		respawnLinkedItems[]=
		{
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
		magazines[]=
		{
			LOADOUT_MAGAZINES_FULL
		};
		respawnMagazines[]=
		{
			LOADOUT_MAGAZINES_FULL
		};
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] =
		{
			""
		};
        hiddenSelectionsMaterials[] =
        {
            ""
        };
	};