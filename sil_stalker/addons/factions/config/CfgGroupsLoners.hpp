		class SIL_STALKER_I_Loners
		{
			name="[STALKER] Loners";
			class Infantry
			{
				name="Infantry";
				class SIL_STALKER_I_Loners_GrpInf_Wanderers
				{
					name="Wanderer Group";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					side = FACTION_LONERS_SIDE;
					FACTION_LONERS;
					rarityGroup=0.5;
					class Unit0
					{
						side = FACTION_LONERS_SIDE;
						vehicle="SIL_STALKER_Loner_Rifleman_1_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side = FACTION_LONERS_SIDE;
						vehicle="SIL_STALKER_Loner_Rifleman_2_F";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side = FACTION_LONERS_SIDE;
						vehicle="SIL_STALKER_Loner_Rifleman_Light_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side = FACTION_LONERS_SIDE;
						vehicle="SIL_STALKER_Loner_Medic_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4
					{
						side = FACTION_LONERS_SIDE;
						vehicle="SIL_STALKER_Loner_Sharpshooter_F";
						rank="PRIVATE";
						position[]={-10,-10,0};
					};
				};
				class SIL_STALKER_I_Loners_GrpInf_Merchant
				{
					name="Merchant Group";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					side = FACTION_LONERS_SIDE;
					FACTION_LONERS;
					rarityGroup=0.5;
					class Unit0
					{
						side = FACTION_LONERS_SIDE;
						vehicle="SIL_STALKER_Loner_Rifleman_1_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side = FACTION_LONERS_SIDE;
						vehicle="SIL_STALKER_Loner_Rifleman_2_F";
						rank="PRIVATE";
						position[]={2,-2,0};
					};
				};
				class SIL_STALKER_I_Loners_GrpInf_Guide
				{
					name="Guide Group";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					side = FACTION_LONERS_SIDE;
					FACTION_LONERS;
					rarityGroup=0.5;
					class Unit0
					{
						side = FACTION_LONERS_SIDE;
						vehicle="SIL_STALKER_Loner_Sharpshooter_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side = FACTION_LONERS_SIDE;
						vehicle="SIL_STALKER_Loner_SEVA_Suit_Unarmed_F";
						rank="PRIVATE";
						position[]={2,-2,0};
					};
					class Unit2
					{
						side = FACTION_LONERS_SIDE;
						vehicle="SIL_STALKER_Loner_SEVA_Suit_Unarmed_F";
						rank="PRIVATE";
						position[]={4,-4,0};
					};
				};
			};
		};