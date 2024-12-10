		class SIL_STALKER_O_Monolith
		{
			name="[STALKER] Monolith";
			class Infantry
			{
				name="Infantry";
				class SIL_STALKER_O_Monolith_GrpInf_AssaultTeam
				{
					name="Assault Squad";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side = FACTION_MONOLITH_SIDE;
					FACTION_MONOLITH;
					rarityGroup=0.5;
					class Unit0
					{
						side = FACTION_MONOLITH_SIDE;
						vehicle="SIL_STALKER_Monolith_Autorifleman_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side = FACTION_MONOLITH_SIDE;
						vehicle="SIL_STALKER_Monolith_Rifleman_1_F";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side = FACTION_MONOLITH_SIDE;
						vehicle="SIL_STALKER_Monolith_Rifleman_2_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side = FACTION_MONOLITH_SIDE;
						vehicle="SIL_STALKER_Monolith_Medic_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4
					{
						side = FACTION_MONOLITH_SIDE;
						vehicle="SIL_STALKER_Monolith_Sharpshooter_F";
						rank="PRIVATE";
						position[]={-10,-10,0};
					};
				};
				class SIL_STALKER_O_Monolith_GrpInf_SEVATeam
				{
					name="SEVA Pilgrimage Group";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side = FACTION_MONOLITH_SIDE;
					FACTION_MONOLITH;
					rarityGroup=0.5;
					class Unit0
					{
						side = FACTION_MONOLITH_SIDE;
						vehicle="SIL_STALKER_Monolith_SEVA_Rifleman_1_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side = FACTION_MONOLITH_SIDE;
						vehicle="SIL_STALKER_Monolith_SEVA_Rifleman_Light_F";
						rank="PRIVATE";
						position[]={2,-2,0};
					};
					class Unit2
					{
						side = FACTION_MONOLITH_SIDE;
						vehicle="SIL_STALKER_Monolith_SEVA_Medic_F";
						rank="PRIVATE";
						position[]={4,-4,0};
					};
				};
				class SIL_STALKER_O_Monolith_GrpInf_Patrol
				{
					name="Patrol Group";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side = FACTION_MONOLITH_SIDE;
					FACTION_MONOLITH;
					rarityGroup=0.5;
					class Unit0
					{
						side = FACTION_MONOLITH_SIDE;
						vehicle="SIL_STALKER_Monolith_Rifleman_1_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side = FACTION_MONOLITH_SIDE;
						vehicle="SIL_STALKER_Monolith_Sharpshooter_F";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side = FACTION_MONOLITH_SIDE;
						vehicle="SIL_STALKER_Monolith_Medic_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
				};
			};
		};