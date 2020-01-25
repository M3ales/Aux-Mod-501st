//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon Praetorian_Variant
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define macro_new_prea_class(name) vehicle_classname##_##name


class CfgPatches
{
	class macro_patch_name(Praetorian_Variants)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(Praetorian_Variant,normal),
			macro_new_vehicle(Praetorian_Variant,blufor),
			macro_new_vehicle(Praetorian_Variant,opfor),
			macro_new_vehicle(Praetorian_Variant,rebel),
			macro_new_vehicle(Praetorian_Variant,republic),
			macro_new_vehicle(Praetorian_Variant,imperial),
			macro_new_vehicle(Praetorian_Variant,Ion),
			macro_new_vehicle(Praetorian_Variant,Purple)
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
	class StaticMGWeapon;
	class AAA_System_01_base_F:StaticMGWeapon
	{
		class Turrets;
	};
	class B_AAA_System_01_F:AAA_System_01_base_F
	{
		class Components;
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class macro_new_vehicle(Praetorian_Variant,normal): B_AAA_System_01_F
	{
		scope = 2;
		forceInGarage=1;
		allowTabLock = 1;
		canUseScanner = 1;
		driverCanSee = 31;
		gunnerCanSee = 31;
		commanderCanSee = 31; 
		canLock = 2; 
		cmImmunity = 1; 
		lockAcquire = 0; 
		weaponLockDelay = 0;
		radarType = 2; 
		irScanToEyeFactor = 1;
		irScanRangeMin = 0;
		irScanRangeMax = 100000;
		irScanGround = 1; 
		laserScanner = 1;
		weaponLockSystem = "0"; 
		nvScanner = 1;
		radarTarget = 0;
		receiveRemoteTargets = true;
		reportRemoteTargets = true;
		reportOwnPosition = true;
		scopecurator = 2;
		displayName = "CIS B.E.A.R.D AA";
		side = 0;
		editorPreview = "";
		author = "RD501";

		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(AA)
		vehicleClass = macro_editor_vehicle_type(AA)
		//faction = "RD501FactionOpfor";
		hiddenSelectionsTextures[] = 
		{
			"awing\t_awing_03_cw.paa",
			"awing\t_awing_03_cw.paa"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				canUseScanner = 1; 
				weapons[] = {
					macro_new_weapon(generic,preatorian_gun_opfor)
				};
				magazines[] = {
					macro_new_mag(generic_aircraft_gun_preatorian,1000),
					macro_new_mag(generic_aircraft_gun_preatorian,1000)
				};
			};
		};
		class components: Components
		{
			class SensorsManagerComponent
			{
				class components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal 	= 360;
						angleRangeVertical 		= 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance 	= 1600;
						minSpeedThreshold 		= 0;
						maxSpeedThreshold 		= 2000;
						maxFogSeeThrough= -1; 
						nightRangeCoef = 1; 
						class AirTarget
						{
							minRange = 0; 
							maxRange = 16000;                                              
							objectDistanceLimitCoef = -1; 
							viewDistanceLimitCoef = -1; 
							maxFogSeeThrough= -1; 
							nightRangeCoef = 1; 				
						};
						class GroundTarget
						{
							minRange = 0; 
							maxRange = 16000;                                              
							objectDistanceLimitCoef = -1; 
							viewDistanceLimitCoef = -1;   
							maxFogSeeThrough= -1; 
							nightRangeCoef = 1; 	
						};
					};
					class NVSensorComponent: SensorTemplateNV
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal 	= 360;
						angleRangeVertical 		= 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance 	= 1600;
						minSpeedThreshold 		= 0;
						maxSpeedThreshold 		= 2000;
						class AirTarget
						{
							minRange = 0; 
							maxRange = 16000;                                              
							objectDistanceLimitCoef = -1; 
							viewDistanceLimitCoef = -1;             						
						};
						class GroundTarget
						{
							minRange = 0; 
							maxRange = 16000;                                              
							objectDistanceLimitCoef = -1; 
							viewDistanceLimitCoef = -1;             
						};					
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal 	= 360;
						angleRangeVertical 		= 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance 	= 1600;
						minSpeedThreshold 		= 0;
						maxSpeedThreshold 		= 2000;
						class AirTarget
						{
							minRange = 0; 
							maxRange = 16000;                                              
							objectDistanceLimitCoef = -1; 
							viewDistanceLimitCoef = -1;             						
						};
						class GroundTarget
						{
							minRange = 0; 
							maxRange = 16000;                                              
							objectDistanceLimitCoef = -1; 
							viewDistanceLimitCoef = -1;             
						};					
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal 	= 360;
						angleRangeVertical 		= 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance 	= 1600;
						minSpeedThreshold 		= 0;
						maxSpeedThreshold 		= 2000;
						class AirTarget
						{
							minRange = 0; 
							maxRange = 16000;                                              
							objectDistanceLimitCoef = -1; 
							viewDistanceLimitCoef = -1;             						
						};
						class GroundTarget
						{
							minRange = 0; 
							maxRange = 16000;                                              
							objectDistanceLimitCoef = -1; 
							viewDistanceLimitCoef = -1;             
						};					
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal 	= 360;
						angleRangeVertical 		= 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance 	= 1600;
						minSpeedThreshold 		= 0;
						maxSpeedThreshold 		= 2000;
						class AirTarget
						{
							minRange = 0; 
							maxRange = 16000;                                              
							objectDistanceLimitCoef = -1; 
							viewDistanceLimitCoef = -1;             						
						};
						class GroundTarget
						{
							minRange = 0; 
							maxRange = 16000;                                              
							objectDistanceLimitCoef = -1; 
							viewDistanceLimitCoef = -1;             
						};					
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal 	= 360;
						angleRangeVertical 		= 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance 	= 1600;
						minSpeedThreshold 		= 0;
						maxSpeedThreshold 		= 2000;
						class AirTarget
						{
							minRange = 0; 
							maxRange = 16000;                                              
							objectDistanceLimitCoef = -1; 
							viewDistanceLimitCoef = -1;             						
						};
						class GroundTarget
						{
							minRange = 0; 
							maxRange = 16000;                                              
							objectDistanceLimitCoef = -1; 
							viewDistanceLimitCoef = -1;             
						};					
					};
					class ManSensorComponent: SensorTemplateMan
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal 	= 360;
						angleRangeVertical 		= 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance 	= 1600;
						minSpeedThreshold 		= 0;
						maxSpeedThreshold 		= 2000;
						class AirTarget
						{
							minRange = 0; 
							maxRange = 16000;                                              
							objectDistanceLimitCoef = -1; 
							viewDistanceLimitCoef = -1;             						
						};
						class GroundTarget
						{
							minRange = 0; 
							maxRange = 16000;                                              
							objectDistanceLimitCoef = -1; 
							viewDistanceLimitCoef = -1;             
						};					
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
						typeRecognitionDistance = 16000;
						angleRangeHorizontal 	= 360;
						angleRangeVertical 		= 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance 	= 1600;
						minSpeedThreshold 		= 0;
						maxSpeedThreshold 		= 2000;
						class AirTarget
						{
							minRange = 0; 
							maxRange = 16000;                                              
							objectDistanceLimitCoef = -1; 
							viewDistanceLimitCoef = -1;             						
						};
						class GroundTarget
						{
							minRange = 0; 
							maxRange = 16000;                                              
							objectDistanceLimitCoef = -1; 
							viewDistanceLimitCoef = -1;             
						};					
					};
				};
			};
		};	

		class EventHandlers :DefaultEventhandlers{};
	};

	class  macro_new_vehicle(Praetorian_Variant,blufor) :  macro_new_vehicle(Praetorian_Variant,normal)
	{
		side = 1;
		displayName = "Laser Cannons (Blufor)";
		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(AA)
		vehicleClass = macro_editor_vehicle_type(AA)
		//faction = "RD501Faction";
		hiddenSelectionsTextures[] = 
		{
			macro_vehicle_textures\Fast_Infantry_Transport\FAT.paa,
			macro_vehicle_textures\Fast_Infantry_Transport\FAT.paa
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {
					macro_new_weapon(generic,preatorian_gun_opfor)
				};
				magazines[] = {
					macro_new_mag(generic_aircraft_gun_preatorian,1000),
					macro_new_mag(generic_aircraft_gun_preatorian,1000)
				};
			};
		};
	};
	class macro_new_vehicle(Praetorian_Variant,opfor): macro_new_vehicle(Praetorian_Variant,normal)
	{
		displayName = "Laser Cannons (opfor)";
		faction = "";
		scope = 1;//?
		scopecurator = 1;
		weaponLockSystem = "2+4+8";
		 
		hiddenSelectionsTextures[] = 
		{
			"awing\t_awing_03_cw.paa",
			"awing\t_awing_03_cw.paa"
		};
		
		
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {
					macro_new_weapon(generic,aircraft_laser)
				};
				magazines[] = {
					macro_new_mag(generic_aircraft_gun,1000),
					macro_new_mag(generic_aircraft_gun,1000)
				};
				minTurn=-45;
				maxTurn=45;
				minElev = -45;
				maxElev = +45;
				aiRateOfFire = 0.0001;
				maxHorizontalRotSpeed = 3000;
				maxVerticalRotSpeed = 3000;
				stabilizedInAxes = 4;
			};
		};
	};	
	class macro_new_vehicle(Praetorian_Variant,rebel): macro_new_vehicle(Praetorian_Variant,normal)//
	{
		side = 1;
		displayName = "Laser Cannons (rebel)";

		faction = macro_rebel_faction
		editorSubcategory = macro_editor_cat(AA)
		vehicleClass = macro_editor_vehicle_type(AA)
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {
					macro_new_weapon(generic,rebel_aircraft_laser)
				};
				magazines[] = {
					macro_new_mag(generic_aircraft_gun,1000),
					macro_new_mag(generic_aircraft_gun,1000)
				};
			};
		};
	};
	class macro_new_vehicle(Praetorian_Variant,republic): macro_new_vehicle(Praetorian_Variant,normal)//
	{
		displayName = "Laser Cannons (republic)";
		side = 1;

		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(AA)
		vehicleClass = macro_editor_vehicle_type(AA)
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {
					macro_new_weapon(generic,tie_aircraft_laser)
				};
				magazines[] = {
					macro_new_mag(generic_aircraft_gun_green,1000),
					macro_new_mag(generic_aircraft_gun_green,1000)
				};
			};
		};
	};
	class macro_new_vehicle(Praetorian_Variant,imperial): macro_new_vehicle(Praetorian_Variant,normal)//
	{
		displayName = "Laser Cannons (Imperial)";

		faction = macro_empire_faction
		editorSubcategory = macro_editor_cat(AA)
		vehicleClass = macro_editor_vehicle_type(AA)
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {
					macro_new_weapon(generic,tie_aircraft_laser)
				};
				magazines[] = {
					macro_new_mag(generic_aircraft_gun_green,1000),
					macro_new_mag(generic_aircraft_gun_green,1000)
				};
			};
		};
	};
	class macro_new_vehicle(Praetorian_Variant,Ion): macro_new_vehicle(Praetorian_Variant,normal)//
	{
		side = 1;

		faction = macro_resistance_faction
		editorSubcategory = macro_editor_cat(AA)
		vehicleClass = macro_editor_vehicle_type(AA)
		displayName = "Laser Cannons (I.O.N)";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {
					macro_new_weapon(generic,ion_aircraft_laser)
				};
				magazines[] = {
					macro_new_mag(generic_aircraft_gun_blue,1000),
					macro_new_mag(generic_aircraft_gun_blue,1000)
				};
			};
		};
	};
	class macro_new_vehicle(Praetorian_Variant,Purple): macro_new_vehicle(Praetorian_Variant,normal)//
	{
		displayName = "Laser Cannons (PURPLEE)";

		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(AA)
		vehicleClass = macro_editor_vehicle_type(AA)

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {
					macro_new_weapon(generic,purple_aircraft_laser)
					};
				magazines[] = {
					macro_new_mag(generic_aircraft_gun_purple,1000),
					macro_new_mag(generic_aircraft_gun_purple,1000)
				};
			};
		};
	};
	


};