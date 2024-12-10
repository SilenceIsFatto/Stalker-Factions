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

#include "\z\sil_stalker\addons\common\CommonDefs.hpp" // Replace with proper QPATH macro

class CfgVehicles
{
	#include "CfgUnits.hpp"
};

class CfgWeapons
{
    class InventoryItem_Base_F;
	class ItemCore;
	class UniformItem: InventoryItem_Base_F
	{
		type=801;
	};
	class Uniform_Base: ItemCore
	{
		scope=0;
		allowedSlots[]={901};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_Soldier_F";
			containerClass="Supply0";
			mass=0;
		};
	};

	#include "CfgUniforms.hpp"
};