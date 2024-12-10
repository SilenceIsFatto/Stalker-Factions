	// cfgWeapons
	class CAU_U_CBRN_gray;
	class SIL_STALKER_U_CBRN_Ward : CAU_U_CBRN_gray
	{
		scope = 2;
		author = AUTHOR;
		displayName = "CBRN Suit (Ward)";
		
		class ItemInfo : UniformItem
		{
			uniformClass = "SIL_STALKER_CBRN_F_Ward";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 80;
			type = 801;
			Armor = 20;
		};
	};

	class CUP_U_O_RUS_Soldier_Gorka_Khaki_3;
	class SIL_STALKER_U_Gorka_Khaki_3 : CUP_U_O_RUS_Soldier_Gorka_Khaki_3
	{
		scope = 1;
		class ItemInfo : UniformItem
		{
			uniformClass = "SIL_STALKER_Gorka_Khaki_3_F";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 20;
			type = 801;
		};
	};

	class CUP_U_B_USArmy_PilotOverall;
	class SIL_STALKER_U_USArmy_PilotOverall : CUP_U_B_USArmy_PilotOverall
	{
		scope = 1;
		class ItemInfo : UniformItem
		{
			uniformClass = "SIL_STALKER_USArmy_PilotOverall_F";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 20;
			type = 801;
		};
	};

	class CUP_U_I_Ghillie_Top;
	class SIL_STALKER_U_IPSF_Ghillie_Top : CUP_U_I_Ghillie_Top
	{
		scope = 1;
		class ItemInfo : UniformItem
		{
			uniformClass = "SIL_STALKER_IPSF_Ghillie_Top_F";
			uniformModel = "-";
			containerClass = "Supply40";
			mass = 20;
			type = 801;
		};		
	};

	// #define UNIFORM_LONER_ITEMINFO(NUMBER)\
	// 		uniformClass = __EVAL("SIL_STALKER_CombatUniform_F_Loner_" + str NUMBER);\
	// 		uniformModel = "-";\
	// 		containerClass = "Supply40";\
	// 		mass = 80;\
	// 		type = 801;\
	// 		Armor = 0

	// class SCE_Loner_4;
	// class SIL_STALKER_U_CombatUniform_Loner_1 : SCE_Loner_4
	// {
	// 	scope = 2;
	// 	author = AUTHOR;
	// 	displayName = "Zone Fatigues (Loner 1)";
		
	// 	class ItemInfo : UniformItem
	// 	{
	// 		UNIFORM_LONER_ITEMINFO(1);
	// 	};
	// };
	// class SIL_STALKER_U_CombatUniform_Loner_2 : SIL_STALKER_U_CombatUniform_Loner_1
	// {
	// 	displayName = "Zone Fatigues (Loner 2)";
		
	// 	class ItemInfo : UniformItem
	// 	{
	// 		UNIFORM_LONER_ITEMINFO(2);
	// 	};
	// };
	// class SIL_STALKER_U_CombatUniform_Loner_3 : SIL_STALKER_U_CombatUniform_Loner_1
	// {
	// 	displayName = "Zone Fatigues (Loner 3)";
		
	// 	class ItemInfo : UniformItem
	// 	{
	// 		UNIFORM_LONER_ITEMINFO(3);
	// 	};
	// };
	// class SIL_STALKER_U_CombatUniform_Loner_4 : SIL_STALKER_U_CombatUniform_Loner_1
	// {
	// 	displayName = "Zone Fatigues (Loner 4)";
		
	// 	class ItemInfo : UniformItem
	// 	{
	// 		UNIFORM_LONER_ITEMINFO(4);
	// 	};
	// };