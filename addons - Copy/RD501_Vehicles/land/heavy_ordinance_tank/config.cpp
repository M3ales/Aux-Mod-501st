//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon heavy_ordinance_tank
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define new_hot_class(name) vehicle_classname##_##name

class CfgPatches
{
	class macro_patch_name(heavy_ordinance_tank)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(heavy_ordinance_tank,Mynock),
			macro_new_vehicle(heavy_ordinance_tank,republic),
			macro_new_vehicle(heavy_ordinance_tank,CIS)
		};
		weapons[]=
		{
			
		};
	};
};


#include "../../common/sensor_templates.hpp"
class DefaultEventhandlers ;

class CfgVehicles
{

	#include "inheritance.hpp"
	class macro_new_vehicle(heavy_ordinance_tank,Mynock) : B_MBT_01_arty_F
	{
		displayName = "Republic Trebuchet (Mynock)";
		crew = "SWOP_Clonetrooper_P1";
		author="RD501"
		scope = 2;
		side=1;
		scopeCurator=2;

		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(arty)
		vehicleClass = macro_editor_vehicle_type(arty)

		smokeLauncherGrenadeCount = 12;
		smokeLauncherAngle = 90;

		forceInGarage=1;
		author = "RD501";
		class TransportItems
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons 
		{
		};

		#include "../Mynock/common_stuff_mynock.hpp"
		class EventHandlers: DefaultEventhandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), '', [], false] call bis_fnc_initVehicle;};";
		};
		
		class turrets : turrets
		{
			class MainTurret : Mainturret
			{
				class Turrets : Turrets
				{
					class CommanderOptics : CommanderOptics
					{
						weapons[] = {
					
							macro_basic_air_weapons,
							"SmokeLauncher",
						
							macro_new_weapon(generic,plasma_aircraft_cannon)
						};
						magazines[] = {
						
							macro_basic_air_mags,
							"SmokeLauncherMag",

							macro_new_mag(generic_aircraft_cannon_plasma_red,1000),
							macro_new_mag(generic_aircraft_cannon_plasma_red,1000)
						};
					};

					

				};
		
				weapons[] = {
					"mortar_155mm_AMOS",
					"Cannon_ARCback",
					"cannon_125mm"
				};
				magazines[] = {
					"32Rnd_155mm_Mo_shells", "4Rnd_155mm_Mo_guided", "6Rnd_155mm_Mo_mine", "2Rnd_155mm_Mo_Cluster", "6Rnd_155mm_Mo_smoke", "2Rnd_155mm_Mo_LG", "6Rnd_155mm_Mo_AT_mine",
					"500Rnd_Cannon_ARCback",
					"24Rnd_125mm_APFSDS_T_Red"
				};
			};
		};

		textureList[] = {};
		hiddenSelectionsTextures[] = 
		{
			"RD501_Vehicles\textures\mbt01\mbt01_ext1_mynock_co.paa",
			"RD501_Vehicles\textures\mbt01\trebuchet\trebuchet_ext2_mynock_co.paa",
			"RD501_Vehicles\textures\mbt01\trebuchet\trebuchet_turret_mynock_co.paa",
			"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
		};


	};
	class macro_new_vehicle(heavy_ordinance_tank,Republic) : macro_new_vehicle(heavy_ordinance_tank,Mynock)
	{
		displayName = "Republic Trebuchet";

		hiddenSelectionsTextures[] =
		{
			"RD501_Vehicles\textures\mbt01\mbt01_ext1_republic_co.paa",
			"RD501_Vehicles\textures\mbt01\trebuchet\trebuchet_ext2_republic_co.paa",
			"RD501_Vehicles\textures\mbt01\trebuchet\trebuchet_turret_republic_co.paa",
			"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
		};
	}
	class macro_new_vehicle(heavy_ordinance_tank,CIS) : macro_new_vehicle(heavy_ordinance_tank,Mynock)
	{
		displayName = "CIS Trebuchet";
		crew = "SWOP_CIS_droid_crew";
		scope = 2;
		side=0;
		scopeCurator=2;

		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(arty)
		vehicleClass = macro_editor_vehicle_type(arty)

		author = "RD501";
		forceInGarage=1;
	
		class turrets : turrets
		{
			class MainTurret : Mainturret
			{
				class Turrets : Turrets
				{
					class CommanderOptics : CommanderOptics
					{
						weapons[] = {
					
							macro_basic_air_weapons,
							"SmokeLauncher",
							macro_new_weapon(generic,plasma_aircraft_cannon)
						};
						magazines[] = {
						
							macro_basic_air_mags,
							"SmokeLauncherMag",
							macro_new_mag(generic_aircraft_cannon_plasma_red,1000),
							macro_new_mag(generic_aircraft_cannon_plasma_red,1000)
						};
					};
				};
			};
		};
		textureList[] = {};
		hiddenSelectionsTextures[] = 
		{
			"RD501_Vehicles\textures\mbt01\mbt01_ext1_cis_co.paa",
			"RD501_Vehicles\textures\mbt01\trebuchet\trebuchet_ext2_cis_co.paa",
			"RD501_Vehicles\textures\mbt01\trebuchet\trebuchet_turret_cis_co.paa",
			"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
		};

	};

	
};
