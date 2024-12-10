		class SIL_STALKER_B_ClearSky
		{
			name="[STALKER] Clear Sky";
			class Infantry
			{
				name="Infantry";
				class SIL_STALKER_B_ClearSky_GrpInf_AssaultTeam
				{
					name="Assault Squad";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					side = FACTION_CLEARSKY_SIDE;
					FACTION_CLEARSKY;
					rarityGroup=0.5;
					class Unit0
					{
						side = FACTION_CLEARSKY_SIDE;
						vehicle="SIL_STALKER_ClearSky_Rifleman_2_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side = FACTION_CLEARSKY_SIDE;
						vehicle="SIL_STALKER_ClearSky_Rifleman_1_F";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side = FACTION_CLEARSKY_SIDE;
						vehicle="SIL_STALKER_ClearSky_Rifleman_Light_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side = FACTION_CLEARSKY_SIDE;
						vehicle="SIL_STALKER_ClearSky_Medic_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4
					{
						side = FACTION_CLEARSKY_SIDE;
						vehicle="SIL_STALKER_ClearSky_Sharpshooter_F";
						rank="PRIVATE";
						position[]={-10,-10,0};
					};
				};
				class SIL_STALKER_B_ClearSky_GrpInf_SEVATeam
				{
					name="SEVA Expeditionary Group";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					side = FACTION_CLEARSKY_SIDE;
					FACTION_CLEARSKY;
					rarityGroup=0.5;
					class Unit0
					{
						side = FACTION_CLEARSKY_SIDE;
						vehicle="SIL_STALKER_ClearSky_SEVA_Rifleman_1_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side = FACTION_CLEARSKY_SIDE;
						vehicle="SIL_STALKER_ClearSky_SEVA_Rifleman_Light_F";
						rank="PRIVATE";
						position[]={2,-2,0};
					};
					class Unit2
					{
						side = FACTION_CLEARSKY_SIDE;
						vehicle="SIL_STALKER_ClearSky_SEVA_Medic_F";
						rank="PRIVATE";
						position[]={4,-4,0};
					};
				};
				class SIL_STALKER_B_ClearSky_GrpInf_Patrol
				{
					name="Patrol Group";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					side = FACTION_CLEARSKY_SIDE;
					FACTION_CLEARSKY;
					rarityGroup=0.5;
					class Unit0
					{
						side = FACTION_CLEARSKY_SIDE;
						vehicle="SIL_STALKER_ClearSky_Rifleman_1_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side = FACTION_CLEARSKY_SIDE;
						vehicle="SIL_STALKER_ClearSky_Sharpshooter_F";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side = FACTION_CLEARSKY_SIDE;
						vehicle="SIL_STALKER_ClearSky_Medic_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
				};
			};
		};