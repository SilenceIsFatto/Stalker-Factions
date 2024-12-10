		class SIL_STALKER_I_Bandits
		{
			name="[STALKER] Bandits";
			class Infantry
			{
				name="Infantry";
				class SIL_STALKER_I_Bandits_GrpInf_Wanderers
				{
					name="Wanderer Group";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					side = FACTION_BANDITS_SIDE;
					FACTION_BANDITS;
					rarityGroup=0.5;
					class Unit0
					{
						side = FACTION_BANDITS_SIDE;
						vehicle="SIL_STALKER_Bandit_Rifleman_1_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side = FACTION_BANDITS_SIDE;
						vehicle="SIL_STALKER_Bandit_Rifleman_2_F";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side = FACTION_BANDITS_SIDE;
						vehicle="SIL_STALKER_Bandit_Rifleman_Light_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side = FACTION_BANDITS_SIDE;
						vehicle="SIL_STALKER_Bandit_Rifleman_2_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4
					{
						side = FACTION_BANDITS_SIDE;
						vehicle="SIL_STALKER_Bandit_Sharpshooter_F";
						rank="PRIVATE";
						position[]={-10,-10,0};
					};
				};
				class SIL_STALKER_I_Bandits_GrpInf_Merchant
				{
					name="Merchant Group";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					side = FACTION_BANDITS_SIDE;
					FACTION_BANDITS;
					rarityGroup=0.5;
					class Unit0
					{
						side = FACTION_BANDITS_SIDE;
						vehicle="SIL_STALKER_Bandit_Rifleman_1_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side = FACTION_BANDITS_SIDE;
						vehicle="SIL_STALKER_Bandit_Rifleman_2_F";
						rank="PRIVATE";
						position[]={2,-2,0};
					};
				};
			};
		};