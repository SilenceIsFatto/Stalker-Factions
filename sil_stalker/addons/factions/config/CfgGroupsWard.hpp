		class SIL_STALKER_I_Ward
		{
			name="[STALKER] Ward";
			class Infantry
			{
				name="Infantry";
				class SIL_STALKER_I_Ward_GrpInf_Patrol
				{
					name="Patrol Group";
					icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
					side = FACTION_WARD_SIDE;
					FACTION_WARD;
					rarityGroup=0.5;
					class Unit0
					{
						side = FACTION_WARD_SIDE;
						vehicle="SIL_STALKER_Ward_Rifleman_2_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side = FACTION_WARD_SIDE;
						vehicle="SIL_STALKER_Ward_Rifleman_Light_F";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side = FACTION_WARD_SIDE;
						vehicle="SIL_STALKER_Ward_Medic_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
				};
			};
		};