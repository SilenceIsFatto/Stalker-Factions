#include "script_component.hpp"

#include "config\CfgUnitsArray.hpp"

class CfgPatches 
{
	class ADDON 
	{
		name = COMPONENT_NAME;
		units[] = 
		{	
			FACTION_LONER_UNITS,
			FACTION_WARD_UNITS,
			FACTION_IPSF_UNITS,
			FACTION_MILITARY_UNITS,
			FACTION_MONOLITH_UNITS,
			FACTION_MERC_UNITS,
			FACTION_DUTY_UNITS,
			FACTION_FREEDOM_UNITS,
			FACTION_CLEARSKY_UNITS,
			FACTION_BANDITS_UNITS,
			FACTION_ECOLOGISTS_UNITS
		};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {MOD(core), MOD(equipment)};
		author = AUTHOR;
		url = "";
		VERSION_CONFIG;
	};
};

#include "\z\sil_stalker\addons\common\CommonDefs.hpp" // Replace with proper QPATH macro

class CfgMarkerClasses
{
	class sil_stalker_markers
	{
		displayName = "[STALKER]";
	};
};

class CfgMarkers
{
	#include "CfgMarkers.hpp"
};

class CfgEditorSubcategories
{
	#include "CfgEditorSubcategories.hpp"
};

class CfgFactionClasses
{
	#include "CfgFactionClasses.hpp"
};

class CfgVehicles
{
	#include "CfgUnits.hpp"
};

class CfgGroups
{
	#include "CfgGroups.hpp"
};

class CfgWeapons
{
	#include "CfgWeapons.hpp"
};