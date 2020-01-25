
#include "../../../RD501_main/config_macros.hpp"
#include "../../_common/common.hpp"


class CfgPatches
{
	class macro_patch_name(ball_turret)
	{
		author=DANKAUTHORS;
		addonRootClass= macro_patch_name(vehicle_weapons)
		requiredAddons[]=
		{
			macro_patch_name(vehicle_weapons)
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={
			//macro_new_weapon(cannon,laat)
			
		};
	};
};

class CfgWeapons
{
	class LMG_RCWS;
	class Cannon_Portableun:LMG_RCWS
	{
		class manual;
	};

	class macro_new_weapon(turret,laat_ball_turret):Cannon_Portableun
	{
		displayName = 'Ball Turret "BeamRider Mk-III"';
		magazines[] = {macro_new_mag(laat_ball_turret,200)};

		stabilizedInAxes = 3;
		ballisticsComputer = 1;
		canLock = 2;
		magazineReloadTime=10; 

		dlc = "RD501";
		author= "RD501";

			modes[] = {"manual", "close"};
		class manual: manual
		{
			
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {};
				soundClosure[] = {};
			};
			displayName = "Laat Ball Turret";
			reloadTime = 0.09;
			//sounds[] = {"StandardSound"};
			class StandardSound
			{
				
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"Uwing\uwingcannon.ogg", 0.8, 0.5, 2000};
				soundBegin[] = {"begin1", 1};
			};
			autoFire = 1;
			recoil = "Empty";
			dispersion = 0.0013;
			showToPlayer = 1;
			burst = 1;
			ballisticscomputer = 1;
			minRange = 1;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 1200;
			maxRangeProbab = 0.04;
			aiDispersionCoefY = 7;
			aiDispersionCoefX = 7;
			aiRateOfFire = 0.3;
			aiRateOfFireDistance = 1500;
			maxLeadSpeed = 600;
		};
		class close: manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 12;
			aiRateOfFire = 0.05;
			aiRateOfFireDistance = 2000;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 1000;
			midRangeProbab = 0.58;
			maxRange = 8000;
			maxRangeProbab = 0.04;
		};
		
	};
	

}; 

