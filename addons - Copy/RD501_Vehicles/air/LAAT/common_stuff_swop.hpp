class EventHandlers : DefaultEventhandlers 
{
	fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
	init = "[_this select 0] execVM 'RD501_Main\functions\autocrate\autocrate.sqf';";
};

RD501_magclamp_small_forbidden=1;
RD501_magclamp_large_offset[]={0.0,0.0,-3.0};

	faction = macro_republic_faction
	editorSubcategory = macro_editor_cat_air(Republic_heli)
	vehicleClass = macro_editor_vehicle_type_air(Republic)

	maximumLoad = 5000000000;
	slingLoadMaxCargoMass = 5000000000;

	//dmg properties
		armor=500;
		crewCrashProtection=0;
		epeImpulseDamageCoef=0;

	//dust effects
		dustEffect = "";//helidust
		waterEffect = "";//HeliWater

	//Targeting stuff
		ballisticsComputer = 1+8;
		//show all crosshairs
		showCrewAim = 4;
		showAllTargets = 2;
		radarType = 12;
		weaponLockSystem = 31;//"1+2+4+8+16"
		//!!!!!
		incomingMissileDetectionSystem = 30;//16

	//Weapons
		weapons[] = {
			macro_new_weapon(generic,blue_dual_aircraft_laser),
			macro_new_weapon(wynd,lgm),
			macro_new_weapon(wynd,a2a),
			macro_new_weapon(wynd,agm),
			macro_basic_air_weapons,
			"SmokeLauncher"
			//macro_new_weapon(cannon,laat)
		};
		magazines[] = {
			macro_basic_air_mags,
			// macro_new_mag(laat_cannon,100),
			// macro_new_mag(laat_cannon,100),
			// macro_new_mag(laat_cannon,100),
			// macro_new_mag(laat_cannon,100),
			// macro_new_mag(laat_cannon,100),
			macro_new_mag(generic_aircraft_gun_dual_blue,1000),
			macro_new_mag(a2a,4),
			macro_new_mag(agm,6),
			macro_new_mag(agm,6),
			macro_new_mag(lgm,4),
			"SmokeLauncherMag",
			"SmokeLauncherMag",
			"SmokeLauncherMag",
			"SmokeLauncherMag",
		};
		smokeLauncherGrenadeCount = 48;
		smokeLauncherAngle = 360;

	//The sun
	class Reflectors
	{
		class Right
		{
			color[] = {700, 750, 1000};
			ambient[] = {7000, 7500, 10000};
			intensity = 100;//50
			size = 1;//1
			innerAngle = 0;//15
			outerAngle = 90;//65
			coneFadeCoef = 0;//10
			position = "Light_R_pos";
			direction = "Light_R_dir";
			hitpoint = "Light_R_hitpoint";
			selection = "Light_R";
			useFlare = 1;
			flareSize = 1;//10
			flareMaxDistance = 2000;//250
			dayLight = 0;
			brightness =200; //100;
			class Attenuation
			{
				start = 0;
				constant = 0;//0
				linear = 1;
				quadratic = 1;
				hardLimitStart = 200;//100
				hardLimitEnd = 400;//200
			};
		};
		class Left: Right
		{
			position = "Light_L_pos";
			direction = "Light_L_dir";
			hitpoint = "Light_L_hitpoint";
			selection = "Light_L";
		};
		class Center: Right
		{
			position = "Light_C_pos";
			direction = "Light_C_dir";
			hitpoint = "Light_C_hitpoint";
			selection = "Light_C";
		};
	};

	//Got peek
	class pilotCamera
	{
		class OpticsIn
		{
			class Wide
			{
				opticsDisplayName="WFOV";
				initAngleX=0;
				minAngleX=-10;
				maxAngleX=90;
				initAngleY=0;
				minAngleY=-90;
				maxAngleY=90;
				initFov=0.425;//"(30 / 120)";
				minFov=0.425;//"(30 / 120)";
				maxFov=0.425;//"(30 / 120)";
				directionStabilized=1;
				thermalMode[] = {0,1,2,3,4,5};
				visionMode[]=
				{
					"Normal",
					"NVG",
					"Ti"
				};
				gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				opticsPPEffects[]=
				{
					"OpticsCHAbera2",
					"OpticsBlur2"
				};
			};

			class zoomx4: Wide
			{
				opticsDisplayName="NFOV";
				initFov="(0.425/4)";//"(3.75 / 120)";
				minFov="(0.425/4)";//"(3.75 / 120)";
				maxFov="(0.425/4)";//"(3.75 / 120)";

			
				gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
			};

			class zoomX8: Wide
			{
				opticsDisplayName="NFOV";
				

				initFov="(0.42/8)";//"(.375 / 120)";
				minFov="(0.42/8)";//"(.375 / 120)";
				maxFov="(0.42/8)";//"(.375 / 120)";
				gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
			};
			class zoomX20: Wide
			{
				opticsDisplayName="NFOV";
				initFov="(0.42/20)";//"(.375 / 120)";
				minFov="(0.42/20)";//"(.375 / 120)";
				maxFov="(0.42/20)";//"(.375 / 120)";
				gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
			};
			class zoomX50: Wide
			{
				opticsDisplayName="NFOV";
				

				initFov="(0.42/50)";//"(.375 / 120)";
				minFov="(0.42/50)";//"(.375 / 120)";
				maxFov="(0.42/50)";//"(.375 / 120)";
				gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
			};

			class zoomX70: Wide
			{
				opticsDisplayName="NFOV";

				initFov="(0.42/70)";//"(.375 / 120)";
				minFov="(0.42/70)";//"(.375 / 120)";
				maxFov="(0.42/70)";//"(.375 / 120)";
				gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
			};

			showMiniMapInOptics=1;
			showUAVViewInOptics=0;
			showSlingLoadManagerInOptics=1;
		};
		minTurn=-180;
		maxTurn=180;

		initTurn=0;
		minElev=-10;
		maxElev=90;
		initElev=-10;
		maxXRotSpeed=0.30000001;
		maxYRotSpeed=0.30000001;
		pilotOpticsShowCursor=1;
		controllable=1;
	};

	#include "sounds.hpp"

	//for texture reskins
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
	//transport
		class TransportWeapons
		{
			class _transport_dc15a
{
    weapon = macro_new_weapon(DC,15a)
    count = 5;
};
class _transport_dc15s
{
    weapon = macro_new_weapon(DC,r15s)
    count = 5;
};
class _transport_dc15c
{
    weapon = macro_new_weapon(DC,15c)
    count = 5;
};
class _transport_dc15l
{
    weapon = macro_new_weapon(DC,15l)
    count = 2;
};
class _transport_z6
{
    weapon = macro_new_weapon_nofam(rz6)
    count = 2;
};
class _transport_dc15gl
{
    weapon = macro_new_weapon(DC,15gl)
    count = 2;
};
class _transport_valken38x
{
    weapon = macro_new_weapon_nofam(valken38x)
    count = 2;
};
class _transport_rps6
{
    weapon = macro_new_weapon(launcher,rps6)
    count = 2;
};
class _transport_rps1
{
    weapon = macro_new_weapon(launcher,rps1)
    count = 2;
};
class _transport_plx
{
    weapon = macro_new_weapon(Launcher,PLX1)
    count = 1;
};
class _transport_z1000
{
    weapon = macro_new_weapon_nofam(z1000)
    count = 1;
};
class _transport_dc15x
{
    weapon = macro_new_weapon(DC,r15x)
    count = 1;
};
class _transport_rgl6
{
    weapon = macro_new_weapon_nofam(rgl6)
    count = 1;
};
		};
		class TransportMagazines
		{
			class transport_2mw30
{
	magazine = macro_new_mag(2mw,30);
	count = 15;
};
class transport_5mw15
{
	magazine = macro_new_mag(5mw,10);
	count = 15;
};
class transport_5mw60
{
	magazine = 	macro_new_mag(5mw,60)
	count = 60;
};
class transport_10mw30
{
	magazine = macro_new_mag(10mw,30);
	count = 60;
};
class transport_10mw400
{
	magazine = macro_new_mag(10mw,400);
	count = 15;
};
class _transport_20mw20
{
	magazine = macro_new_mag(20mw,20);
	count = 20;
};
class _transport_20mwup20
{
	magazine =  macro_new_mag(20mwup,20);
	count = 40;
};		
class _transport_20mwdp20
{
	magazine = macro_new_mag(20mwdp,20);
	count = 40;
};		
class _transport_20mw240
{
	magazine = macro_new_mag(20mw,240);
	count = 20;
};									
class _transport_30mw10
{
	magazine = macro_new_mag(30mw,10);
	count = 15;
}
class _transport_30mw7
{
	magazine = macro_new_mag(30mw,7)
	count = 15;
};
class _transport_40mw5
{
	magazine = macro_new_mag(40mw,5)
	count = 10;
};
class _transport_stun5
{
	magazine =  macro_new_mag(stun,5)
	count = 20;
};
class _transport_launcher_AT_mags
{
	magazine =  macro_new_mag(RPS_AT,1)
	count = 20;
};
class _transport_launcher_AA_mags
{
	magazine =  macro_new_mag(RPS_AA,1)
	count = 20;
};
class _transport_he3
{
	magazine = macro_new_mag(UGL_HE,3);
	count = 15;
};
class _transport_ap2
{
	magazine = macro_new_mag(UGL_AP,2);
	count = 15;
};		
class _transport_emp1
{
	magazine = macro_new_mag(UGL_EMP,1);
	count = 3;
};			
class _transport_HuntIR_M203
{
	magazine = "ACE_HuntIR_M203";
	count = 15;
};
class _transport_C12_Remote_Mag
{
	magazine = "C12_Remote_Mag";
	count = 2;
};
		};
		class TransportItems
		{
			class _xx_SW_SquadShield_Mag
			{
				name = "SW_SquadShield_Mag";
				count = 2;
			};
			class _xx_ACE_HuntIR_monitor
			{
				name = "ACE_HuntIR_monitor";
				count = 1;
			};
		};