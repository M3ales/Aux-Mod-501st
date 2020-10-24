//Get this addons macro

//get the macro for the air subaddon

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon vulture
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define macro_new_vulture_class(name) vehicle_classname##_##name


class CfgPatches
{
	class macro_patch_name(vulture)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(vulture,MKII)
		};
		weapons[]=
		{
			
		};
	};
};


#include "../../common/sensor_templates.hpp"

class CfgVehicles
{
	class Plane_Base_F;
	class swop_vulture;

	class macro_new_vehicle(vulture,MKII) : swop_vulture
	{
		scope = 2;
		scopeCurator=2;
		displayName="Vulture Droid Mk.II";
	    altFullForce = 6000;
	    altNoForce = 9000;
		armor = 500;
		forceInGarage=1;

		crew=macro_new_unit_class(opfor,B1_pilot)
		
		airBrakeFrictionCoef = 80.4;
		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat_air(CIS)
		vehicleClass = macro_editor_vehicle_type_air(CIS)

		class EventHandlers{};

		class UserActions
		{
			class AfterburnerOn
			{
				displayName = "<t color='#4C9900'>[Afterburner On]</t>";
				shortcut = "";
				condition = "speed this >50 and (!(this getVariable 'AfterBurnervulture'))";
				statement = "this setVariable ['AfterBurnervulture',true];this spawn nes4day_afterburnervulture";
				priority = 1e+011;
				displayNameDefault = "";
				position = "pilotview";
				radius = 10;
				onlyforplayer = 1;
			};
			class AfterburnerOff
			{
				displayName = "<t color='#FF9933'>[Afterburner Off]</t>";
				shortcut = "";
				condition = "(this getVariable 'AfterBurnervulture')";
				statement = "this setVariable ['AfterBurnervulture',false]";
				priority = 1e+011;
				displayNameDefault = "";
				position = "pilotview";
				radius = 10;
				onlyforplayer = 1;
			};
		};
		
		weapons[] = {
			macro_basic_air_weapons,
			macro_new_weapon(generic,cis_aircraft_cannon)
		};
		magazines[] = {
			macro_basic_air_mags,
			macro_new_mag(generic_aircraft_cannon_red,1000),
			macro_new_mag(generic_aircraft_cannon_red,1000),
		};
		
	};
};