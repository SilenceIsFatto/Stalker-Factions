		class SIL_STALKER_O_IPSF
		{
			name="[STALKER] IPSF";
			class Infantry
			{
				name="Infantry";
				class SIL_STALKER_O_IPSF_GrpInf_Patrol
				{
					name="Patrol Group";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side = FACTION_IPSF_SIDE;
					FACTION_IPSF;
					rarityGroup=0.5;
					class Unit0
					{
						side = FACTION_IPSF_SIDE;
						vehicle="SIL_STALKER_IPSF_Rifleman_1_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side = FACTION_IPSF_SIDE;
						vehicle="SIL_STALKER_IPSF_Sharpshooter_F";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side = FACTION_IPSF_SIDE;
						vehicle="SIL_STALKER_IPSF_Medic_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
				};
				class SIL_STALKER_O_IPSF_GrpInf_PilotEscort
				{
					name="Pilot Escort Group";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side = FACTION_IPSF_SIDE;
					FACTION_IPSF;
					rarityGroup=0.5;
					class Unit0
					{
						side = FACTION_IPSF_SIDE;
						vehicle="SIL_STALKER_IPSF_Rifleman_2_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side = FACTION_IPSF_SIDE;
						vehicle="SIL_STALKER_IPSF_Rifleman_1_F";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side = FACTION_IPSF_SIDE;
						vehicle="SIL_STALKER_IPSF_Medic_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side = FACTION_IPSF_SIDE;
						vehicle="SIL_STALKER_IPSF_Pilot_F";
						rank="PRIVATE";
						position[]={0,-2,0};
					};
				};
			};
		};