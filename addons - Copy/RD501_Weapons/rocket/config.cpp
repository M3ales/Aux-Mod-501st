#define COMPONENT rocket
#include "../../RD501_main/config_macros.hpp"
#include "../_common/common.hpp"


class CfgPatches
{
	class macro_patch_name(rocket)
	{
		author=DANKAUTHORS;
		addonRootClass= macro_patch_name(weapons)
		requiredAddons[]=
		{
			macro_patch_name(weapons)
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={
			macro_new_weapon(hh,15),
			macro_new_weapon(rps,6),
			macro_new_weapon(Launcher,PLX1),
		};
	};
};

class cfgWeapons 
{	
	class launch_RPG32_F;
	class RocketHH15Clone;
	class RocketRPS6_F;
	class JLTS_PLX1_AT;

	/*class macro_new_weapon(hh,15):RocketHH15Clone
	{
		author= "RD501";
		_generalMacro = macro_new_weapon(hh,15)
		scope = 2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName = "Republic HH-15 Rocket Launcher.";

		#include "rocket_scope_fix.hpp"

		magazineWell[] += {macro_new_magwell(rocket_RPS)};
	};

	class macro_new_weapon(rps,6):RocketRPS6_F
	{
		author= "RD501";
		_generalMacro = macro_new_weapon(rps,6)
		scope = 2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName = "Republic RPS 6 Rocket Launcher.";

		recoil = "recoil_single_law";
		
		#include "rocket_scope_fix.hpp"

		magazineWell[] += {macro_new_magwell(rocket_RPS)};
	};*/

    class macro_new_weapon(Launcher,PLX1): JLTS_PLX1_AT
    {
		author= "RD501";
		_generalMacro = macro_new_weapon(Launcher,PLX1)
		scope = 2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName = "Republic PLX1s";
		ace_javelin_enabled = 1;  // Enable Javelin-style locking (0-disabled, 1-enabled)
        weaponInfoType = "ACE_RscOptics_javelin";  // Inteface
        modelOptics = "\z\ace\addons\javelin\data\reticle_titan.p3d";  // Optics model
        canLock = 0;  // Disable vanilla locking (0-disabled, 1-enabled)
        lockingTargetSound[] = {"", 0, 1};  // Locking sound
        lockedTargetSound[] = {"", 0, 1};  // Target acquired sound
    };

};