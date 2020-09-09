#include "../../../RD501_main/config_macros.hpp"

class CfgPatches
{
	class macro_patch_name(droideka)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			// REMOVE FROM HERE
			macro_new_vehicle(droideka,base_depr),
			macro_new_vehicle(droideka,normal_depr),
			macro_new_vehicle(droideka,camo_depr),
			macro_new_vehicle(droideka,support_depr),
			// REMOVE TO HERE
			macro_new_vehicle(droideka,base),
			macro_new_vehicle(droideka,normal),
			macro_new_vehicle(droideka,camo),
			macro_new_vehicle(droideka,support),
		};
		weapons[]=
		{
			
		};
	};
};

#include "../../common/sensor_templates.hpp"
class DefaultEventhandlers;
class CfgVehicles
{
	class SWOP_Droideka;

	// REMOVE FROM HERE
	class macro_new_vehicle(droideka,base_depr) :SWOP_Droideka
	{
		scope=2;
		armor = 275;
		displayName = "Static Droideka";
		class EventHandlers: DefaultEventhandlers {};

		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(heavy_armored_infantry)
		vehicleClass = macro_editor_vehicle_type(heavy_armored_infantry)

		class HitPoints
		{
			class HitGun
			{
				armor = 0.9;
				material = -1;
				name = "gun";
				visual = "autonomous_unhide";
				passThrough = 0;
				radius = 0.2;
			};
			class HitTurret: HitGun
			{
				armor = 0.3;
			};
		};

	};
	class macro_new_vehicle(droideka,camo_depr) : macro_new_vehicle(droideka,base_depr)
	{
		scope=2;
		displayName = "Moveable Droideka (Camo)";
		hiddenSelectionsTextures[] = {"SW_CloneWarsWeapons\Droideka\DroidikacamoOK_co.paa"};

	};

	class macro_new_vehicle(droideka,support_depr) : macro_new_vehicle(droideka,camo_depr)
	{
		scope=2;
		hiddenSelectionsTextures[] = {"SW_CloneWarsWeapons\Droideka\DroidikasupportOK_co.paa"};
		displayName = "Moveable Droideka (Support)";

	};


	class macro_new_vehicle(droideka,normal_depr) : macro_new_vehicle(droideka,camo_depr)
	{
		scope=2;
		displayName = "Moveable Droideka";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"SW_CloneWarsWeapons\Droideka\DroidikaOK_co.paa"};

	};
	// REMOVE TO HERE




	class macro_new_vehicle(droideka,base): SWOP_Droideka
	{
		scope=2;
		displayName = "Static Droideka (new)";
		class EventHandlers: DefaultEventhandlers {}; 

		faction = macro_cis_faction;
		editorSubcategory = macro_editor_cat(heavy_armored_infantry);
		vehicleClass = macro_editor_vehicle_type(heavy_armored_infantry);

		armor = 225;
		armorStructural = 1.0;
		explosionShielding	= 0.1;
		minTotalDamageThreshold	= 0.01;
		impactDamageMultiplier = 0.1;
		class HitPoints
		{
			class HitGun
			{
				armor = 0.9;
				material = -1;
				name = "gun";
				visual = "autonomous_unhide";
				passThrough = 0;
				radius = 0.2;
			};
			class HitTurret: HitGun
			{
				armor = 0.3;
			};
		};
	};

	class macro_new_vehicle(droideka,normal): macro_new_vehicle(droideka,base)
	{
		displayName = "Moveable Droideka (new)";
		hiddenSelectionsTextures[] = {"SW_CloneWarsWeapons\Droideka\DroidikaOK_co.paa"};
	};
	class macro_new_vehicle(droideka,camo): macro_new_vehicle(droideka,normal)
	{
		displayName = "Moveable Droideka  (new)(Camo)";
		hiddenSelectionsTextures[] = {"SW_CloneWarsWeapons\Droideka\DroidikacamoOK_co.paa"};
	};
	class macro_new_vehicle(droideka,support): macro_new_vehicle(droideka,normal)
	{
		displayName = "Moveable Droideka  (new)(Support)";
		hiddenSelectionsTextures[] = {"SW_CloneWarsWeapons\Droideka\DroidikasupportOK_co.paa"};
	};

};
