	// cfgVehicles
	class CAU_B_CBRN_F_gray;
	class SIL_STALKER_CBRN_F_Ward: CAU_B_CBRN_F_gray
	{
		scope = 1;
		uniformClass = "SIL_STALKER_U_CBRN_Ward";
		author = AUTHOR;
		hiddenSelectionsTextures[] =
		{
			QPATHTOFOLDER(data\ward\uniform\camo_co.paa)
		};
        hiddenSelectionsMaterials[] =
        {
            QPATHTOFOLDER(data\ward\uniform\camo.rvmat)
        };
	};

	class CUP_U_O_RUS_Soldier_Gorka_Khaki_3;
	class SIL_STALKER_Gorka_Khaki_3_F : CUP_U_O_RUS_Soldier_Gorka_Khaki_3
	{
		scope = 1;
		uniformClass = "SIL_STALKER_U_Gorka_Khaki_3";
		SIDES_ALL;
	};
	
	class CUP_B_USArmy_Soldier_06;
	class SIL_STALKER_USArmy_PilotOverall_F : CUP_B_USArmy_Soldier_06
	{
		scope = 1;
		uniformClass = "SIL_STALKER_U_USArmy_PilotOverall";
		SIDES_ALL;
	};

	class CUP_I_GUE_Soldier_05;
	class SIL_STALKER_IPSF_Ghillie_Top_F : CUP_I_GUE_Soldier_05
	{
		scope = 1;
		uniformClass = "SIL_STALKER_U_IPSF_Ghillie_Top";
		SIDES_ALL;
	};

	// class SIL_STALKER_Base_F;

	// #define UNIFORM_LONER_BASE\
	// 	hiddenSelections[] = {"camo","insignia"};\
	// 	model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";

	// #define UNIFORM_LONER(NUMBER)\
	// 	UNIFORM_LONER_BASE\
	// 	uniformClass = __EVAL("SIL_STALKER_U_CombatUniform_Loner_" + str NUMBER);\
	// 	hiddenSelectionsTextures[] = {__EVAL("SCE_Uniforms\textures\loner_" + str NUMBER + ".paa")}

	// class SIL_STALKER_CombatUniform_F_Loner_1: SIL_STALKER_Base_F
	// {
	// 	UNIFORM_LONER(1);
	// };
	// class SIL_STALKER_CombatUniform_F_Loner_2: SIL_STALKER_Base_F
	// {
	// 	UNIFORM_LONER(2);
	// };
	// class SIL_STALKER_CombatUniform_F_Loner_3: SIL_STALKER_Base_F
	// {
	// 	UNIFORM_LONER(3);
	// };
	// class SIL_STALKER_CombatUniform_F_Loner_4: SIL_STALKER_Base_F
	// {
	// 	UNIFORM_LONER(4);
	// };