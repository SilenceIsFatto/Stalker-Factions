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

#include "CfgFunctions.hpp"

class Extended_PreInit_EventHandlers
{
    class MOD(settings)
    {
        init = "call SIL_STALKER_fnc_settings";
    };
};