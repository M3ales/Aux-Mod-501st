////////////////////////////////////////////////////////////////////
//DeRap: 442_ships\quasar\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Thu Jun 25 16:36:17 2020 : 'file' last modified on Sun Jun 07 11:07:52 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class 442_quasar
	{
		requiredAddons[] = {};
		weapons[] = {};
		units[] = {"442_quasar"};
		author = "kripto202";
	};
};
class Eventhandlers;
class CfgVehicles
{
	class NonStrategic;
	class StaticShip;
	class Ship;
	class Building;
	class House_F;
	class FloatingStructure_F;
	class thingx;
	class LandVehicle;
	class Motorcycle;
	class FlagCarrier;
	class Items_base_F;
	class 442_quasar: House_F
	{
		scope = 2;
		scopecurator = 2;
		author = "kripto202";
		displayName = "Quasar Fire Class Cruiser/Carrier";
		model = "\442_ships\quasar\quasar.p3d";
		editorcategory = "kobra";
		editorsubcategory = "442_ships";
		vehicleClass = "Structures";
		hiddenselections[] = {"body1","body2","engine","guns","interior1","interior2","interior3","interior4","door1","door2","frame"};
		hiddenselectionstextures[] = {"442_ships\quasar\data\body1_co.paa","442_ships\quasar\data\body2_co.paa","442_ships\quasar\data\engine_co.paa","442_ships\quasar\data\guns_co.paa","442_ships\quasar\data\interior1_co.paa","442_ships\quasar\data\interior2_co.paa","442_ships\quasar\data\interior3_co.paa","442_ships\quasar\data\interior4_co.paa","442_structures\hallway\data\doors_co.paa","442_structures\hallway\data\doors_co.paa","442_structures\hallway\data\frame_co.paa"};
	};
};
class cfgMods
{
	author = "kripto202";
	timepacked = "1591528071";
};
