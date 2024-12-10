		class SIL_STALKER_I_Merc
		{
			name="[STALKER] Mercenaries";
			class Infantry
			{
				name="Infantry";
				class SIL_STALKER_I_Merc_GrpInf_Infil
				{
					name="Infiltration Group";
					icon="\A3\ui_f\data\map\markers\nato\B_inf.paa";
					side = FACTION_MERC_SIDE;
					FACTION_MERC;
					rarityGroup=0.5;
					class Unit0
					{
						side = FACTION_MERC_SIDE;
						vehicle="SIL_STALKER_Merc_Rifleman_2_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side = FACTION_MERC_SIDE;
						vehicle="SIL_STALKER_Merc_Sharpshooter_F";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side = FACTION_MERC_SIDE;
						vehicle="SIL_STALKER_Merc_Medic_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
				};
				class SIL_STALKER_I_Merc_GrpInf_InfilNight
				{
					name="Infiltration Group (Night)";
					icon="\A3\ui_f\data\map\markers\nato\B_inf.paa";
					side = FACTION_MERC_SIDE;
					FACTION_MERC;
					rarityGroup=0.5;
					class Unit0
					{
						side = FACTION_MERC_SIDE;
						vehicle="SIL_STALKER_Merc_Night_Rifleman_2_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side = FACTION_MERC_SIDE;
						vehicle="SIL_STALKER_Merc_Night_Sharpshooter_F";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side = FACTION_MERC_SIDE;
						vehicle="SIL_STALKER_Merc_Night_Medic_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
				};
			};
		};