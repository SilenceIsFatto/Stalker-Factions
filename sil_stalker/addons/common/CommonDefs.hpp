#define LOADOUT_ITEMS_DEFAULT "ItemMap","ItemCompass","ItemWatch","ItemRadio"
#define LOADOUT_ITEMS_FAK "FirstAidKit","FirstAidKit","FirstAidKit"
#define LOADOUT_ITEMS_ENGINEER "ToolKit"
#define LOADOUT_ITEMS_FULL LOADOUT_ITEMS_DEFAULT

#define LOADOUT_MAGAZINES_GRENADE "HandGrenade","HandGrenade"
#define LOADOUT_MAGAZINES_SMOKE "SmokeShellGreen","SmokeShellGreen"
#define LOADOUT_MAGAZINES_FULL LOADOUT_MAGAZINES_GRENADE, LOADOUT_MAGAZINES_SMOKE

#define LOADOUT_WEAPONS_DEFAULT "Throw","Put","Binocular"

#define UNIT_ROLE_MEDIC\
		picture="pictureHeal";\
		icon="iconManMedic";\
		role="CombatLifeSaver";\
		items[]=\
		{\
			LOADOUT_ITEMS_FAK,\
			LOADOUT_ITEMS_FAK,\
			LOADOUT_ITEMS_FAK\
		};\
		respawnItems[]=\
		{\
			LOADOUT_ITEMS_FAK,\
			LOADOUT_ITEMS_FAK,\
			LOADOUT_ITEMS_FAK\
		}

#define UNIT_ROLE_ENGINEER\
		picture="pictureRepair";\
		icon="iconManEngineer";\
		role="Sapper";\
		items[]=\
		{\
			LOADOUT_ITEMS_FAK,\
			LOADOUT_ITEMS_ENGINEER\
		};\
		respawnItems[]=\
		{\
			LOADOUT_ITEMS_FAK,\
			LOADOUT_ITEMS_ENGINEER\
		}

#define FACTION_LONERS faction = "SIL_STALKER_Faction_Loners"
#define FACTION_WARD faction = "SIL_STALKER_Faction_Ward"
#define FACTION_IPSF faction = "SIL_STALKER_Faction_IPSF"
#define FACTION_MONOLITH faction = "SIL_STALKER_Faction_Monolith"
#define FACTION_MILITARY faction = "SIL_STALKER_Faction_Military"
#define FACTION_MERC faction = "SIL_STALKER_Faction_Merc"
#define FACTION_DUTY faction = "SIL_STALKER_Faction_Duty"
#define FACTION_FREEDOM faction = "SIL_STALKER_Faction_Freedom"
#define FACTION_CLEARSKY faction = "SIL_STALKER_Faction_ClearSky"
#define FACTION_BANDITS faction = "SIL_STALKER_Faction_Bandits"
#define FACTION_ECOLOGISTS faction = "SIL_STALKER_Faction_Ecologists"
#define FACTION_RENEGADES faction = "SIL_STALKER_Faction_Renegades"

#define SIDE_OPF 0
#define SIDE_BLU 1
#define SIDE_IND 2

#define FACTION_LONERS_SIDE SIDE_IND
#define FACTION_MERC_SIDE SIDE_IND
#define FACTION_ECOLOGISTS_SIDE SIDE_IND
#define FACTION_BANDITS_SIDE SIDE_IND

#define FACTION_IPSF_SIDE SIDE_OPF
#define FACTION_MONOLITH_SIDE SIDE_OPF
#define FACTION_FREEDOM_SIDE SIDE_OPF
#define FACTION_RENEGADES_SIDE SIDE_OPF

#define FACTION_WARD_SIDE SIDE_BLU
#define FACTION_MILITARY_SIDE SIDE_BLU
#define FACTION_DUTY_SIDE SIDE_BLU
#define FACTION_CLEARSKY_SIDE SIDE_BLU

#define SIDES_ALL modelSides[] = { 0, 1, 2, 3 }

#define PREVIEW(CLASSNAME) editorPreview = QPATHTOFOLDER(data\previews\units\CLASSNAME.jpg)