#include "script_component.hpp"

class CfgPatches 
{
	class ADDON 
	{
		name = COMPONENT_NAME;
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {MOD(core)};
		author = AUTHOR;
		url = "";
		VERSION_CONFIG;
	};
};

#include "CommonDefs.hpp"

class CfgVehicles
{
	#include "CfgUnits.hpp"
};