#include "config_macros.hpp"

//stretcher
macro_prep_xeh(stretcher\deploy_stretcher.sqf,deploy_stretcher)
macro_prep_xeh(stretcher\put_stretcher_in_backpack.sqf,put_stretcher_in_backpack)
macro_prep_xeh(stretcher\drop_stretcher.sqf,drop_stretcher)
macro_prep_xeh(stretcher\carry_stretcher.sqf,carry_stretcher)

//Zatamas aircraft turrets
macro_prep_xeh(attach_turrets\apply_turrets.sqf,apply_aircraft_turrets)
macro_prep_xeh(attach_turrets\remove_attached_objects.sqf,remove_attached_objects)

//Zatamas aircraft drones
macro_prep_xeh(attach_drones\apply_drones.sqf,apply_aircraft_drone)

//set mass 
macro_prep_xeh(mass_changer\set_mass.sqf,set_mass)

//droidekka move
macro_prep_xeh(movable_scripts\droideka_driver.sqf,droidekka_move)

//dwarf move
macro_prep_xeh(movable_scripts\dwarf_spider_droid_driver.sqf,dwarf_move)

//add healing option
macro_prep_xeh(add_healing_action.sqf,add_heal_action)

//add dog
macro_prep_xeh(add_doggo.sqf,add_doggo)

//ATTE UAV init
macro_prep_xeh(atte\atte.sqf,atte_uav_init)
macro_prep_xeh(atte\create_itt.sqf,create_itt)
macro_prep_xeh(atte\create_turrets.sqf,create_atte_turrets)

//adds the killed and MPkilled EH to remove attached objects on death.
macro_prep_xeh(remove_attached_on_death\add_remove_attached_EH.sqf,add_remove_attached_EH)
macro_prep_xeh(remove_attached_on_death\remove_attached.sqf,remove_attached)

//warden tow
macro_prep_xeh(init\tow.sqf,warden_tow)

//init
macro_prep_xeh(init\force_b2_walk.sqf,force_b2_walk)
macro_prep_xeh(init\specops.sqf,b1_specop_apply_skill)
macro_prep_xeh(init\b2_armor.sqf,b2_apply_armor)
macro_prep_xeh(init\jam_sandwich.sqf,apply_jammer)
macro_prep_xeh(init\aat.sqf,aatInit)

//nightvision
macro_prep_xeh(nightvision.sqf,nightvision)

//magclamp
macro_prep_xeh(magclamp\magclamp.sqf,magclamp)
macro_prep_xeh(magclamp\fnc_startRefuel.sqf,mc_startRefuel)
macro_prep_xeh(magclamp\fnc_canRefuel.sqf,mc_canRefuel)
macro_prep_xeh(magclamp\fnc_canStopRefuel.sqf,mc_canStopRefuel)

//fortify
macro_prep_xeh(fortify_tool\fortify_tool.sqf,fortify_tool)

//HUD color
macro_prep_xeh(hud_color_change.sqf,change_hud_color)

//showe dmg
macro_prep_xeh(show_damage_report.sqf,add_show_dmg_report)

//Yeet them out
call compile preprocessFileLineNumbers 'macro_mod_script_path\add_radio_freq_shower.sqf';

//Mirrors medical menu thingy
["RD501_MedNotif_Message",
        "EDITBOX",
        [
                "Message",
                "Message to show to other players, keep it clean. %1 is used as a placeholder for your name."
        ],
        "RD501 Medical Notification",
        call {profileNamespace getVariable ["RD501_MedNotif_Message", "%1 is asking that you kindly hold still."]}
 ] call cba_settings_fnc_init;
 diag_log format["RD501_MedNotif[DEBUG]: %1", "Settings Added"];
macro_prep_xeh(medical_notification\add_med_notification.sqf,add_med_notification)

//R-2 Recon Drone
macro_prep_xeh(infantry_uav\fnc_getRefuelMagazine.sqf,getRefuelMagazine)
macro_prep_xeh(infantry_uav\fnc_refuelUAVDrone.sqf,refuelUAVDrone)
macro_prep_xeh(infantry_uav\fnc_canRefuel.sqf,canRefuel)

macro_prep_xeh(heavy_weapon\fnc_heavyWeaponHandlePlayerWeaponChanged.sqf,heavyWeaponHandlePlayerWeaponChanged)
macro_prep_xeh(reload_on_select\fnc_reloadWeaponOnFirstSelected.sqf,reloadWeaponOnFirstSelected)
macro_prep_xeh(reload_on_select\fnc_swapToEmptyWeapon.sqf,swapToEmptyWeapon)
macro_prep_xeh(reload_on_select\fnc_onWeaponFiredSwapToEmpty.sqf,onWeaponFiredSwapToEmpty)

// Flip backpack
macro_prep_xeh(flip_vehicle\fnc_flipVehicle.sqf,flipVehicle)
macro_prep_xeh(flip_vehicle\fnc_canFlipVehicle.sqf,canFlipVehicle)

// Reload Externally
macro_prep_xeh(external_reload\fnc_canReloadExternal.sqf,canReloadExternal)
macro_prep_xeh(external_reload\fnc_reloadExternal.sqf,reloadExternal)
macro_prep_xeh(external_reload\fnc_onReloadExternalHandler.sqf,onReloadExternalHandler)

// Heal Nearby
macro_prep_xeh(heal_nearby\fnc_healAllNearby.sqf,healAllNearby)

// stun
macro_prep_xeh(stun\stun.sqf,stun)

// Medical CCP
macro_prep_xeh(medical_ccp\fnc_stitchAllWounds.sqf,stitchAllWounds)
macro_prep_xeh(medical_ccp\fnc_bandageAllWounds.sqf,bandageAllWounds)
macro_prep_xeh(medical_ccp\fnc_checkInsideCCP.sqf,checkInsideCCP)
macro_prep_xeh(medical_ccp\fnc_stitchAllWoundsNearbyCCP.sqf,stitchAllWoundsNearbyCCP)
macro_prep_xeh(medical_ccp\fnc_bandageAllNearbyCCP.sqf,bandageAllNearbyCCP)
macro_prep_xeh(medical_ccp\fnc_valueProgressBar.sqf,valueProgressBar)
macro_prep_xeh(medical_ccp\fnc_incrementBandageProgress.sqf,incrementBandageProgress)
macro_prep_xeh(medical_ccp\fnc_incrementStitchProgress.sqf,incrementStitchProgress)
macro_prep_xeh(medical_ccp\fnc_deployCCP.sqf,deployCCP)
macro_prep_xeh(medical_ccp\fnc_deployCCPLocal.sqf,deployCCPLocal)
macro_prep_xeh(medical_ccp\fnc_deployCCPServer.sqf,deployCCPServer)
macro_prep_xeh(medical_ccp\fnc_packupCCP.sqf,packupCCP)
macro_prep_xeh(medical_ccp\fnc_packupCCPServer.sqf,packupCCPServer)
macro_prep_xeh(medical_ccp\fnc_isDoctor.sqf,isDoctor)
macro_prep_xeh(medical_ccp\fnc_canBandageNearbyCCP.sqf,canBandageNearbyCCP)
macro_prep_xeh(medical_ccp\fnc_canStitchNearbyCCP.sqf,canStitchNearbyCCP)

// Jammer
macro_prep_xeh(jammer\fnc_jammerControlActions.sqf,jammerControlActions)
macro_prep_xeh(jammer\fnc_jammersAdd.sqf,jammersAdd)
macro_prep_xeh(jammer\fnc_jammersAddServer.sqf,jammersAddServer)
macro_prep_xeh(jammer\fnc_jammersClear.sqf,jammersClear)
macro_prep_xeh(jammer\fnc_jammersClientPFH.sqf,jammersClientPFH)
macro_prep_xeh(jammer\fnc_jammersGetLocal.sqf,jammersGetLocal)
macro_prep_xeh(jammer\fnc_jammersRemove.sqf,jammersRemove)
macro_prep_xeh(jammer\fnc_jammersRemoveServer.sqf,jammersRemoveServer)
macro_prep_xeh(jammer\fnc_jammersServerPFH.sqf,jammersServerPFH)
macro_prep_xeh(jammer\fnc_jammersUpdateLocal.sqf,jammersUpdateLocal)
macro_prep_xeh(jammer\fnc_jammersUpdateServer.sqf,jammersUpdateServer)

// Impulse
macro_prep_xeh(impulse\fnc_impulseApply.sqf,impulseApply)
macro_prep_xeh(impulse\fnc_impulseIncrease.sqf,impulseIncrease)
macro_prep_xeh(impulse\fnc_impulseDecrease.sqf,impulseDecrease)
macro_prep_xeh(impulse\fnc_impulseApply_LE.sqf,impulseApplyLE)
macro_prep_xeh(impulse\fnc_impulseIncrease_LE.sqf,impulseIncreaseLE)
macro_prep_xeh(impulse\fnc_impulseDecrease_LE.sqf,impulseDecreaseLE)

// Fired Deployables
macro_prep_xeh(fired_deployable\fnc_fired_deployable_firedHandler.sqf,fired_deployable_firedHandler)
macro_prep_xeh(fired_deployable\fnc_fired_deployable_deployServer.sqf,fired_deployable_deployServer)
macro_prep_xeh(fired_deployable\fnc_fired_deployable_loopSoundLocal.sqf,fired_deployable_loopSoundLocal)
macro_prep_xeh(fired_deployable\fnc_fired_deployable_endSoundLocal.sqf,fired_deployable_endSoundLocal)
macro_prep_xeh(fired_deployable\fnc_fired_deployable_personalShieldDeployServer.sqf,fired_deployable_personalShieldDeployServer)

// Droideka Shield
macro_prep_xeh(init\deka_shield_init.sqf,deka_shield_init)

// JLTS Shield
macro_prep_xeh(jlts_shield\fnc_jlts_shield_aiToggle.sqf,jlts_shield_aiToggle)

// Volatile
macro_prep_xeh(volatile\fnc_volatile_create.sqf,volatile_create)
macro_prep_xeh(volatile\fnc_volatile_destroy.sqf,volatile_destroy)
macro_prep_xeh(volatile\fnc_volatile_handleDamage.sqf,volatile_handleDamage)

// Map Markers
macro_prep_xeh(map_markers\fnc_placeDotMarkerAtSelf.sqf,placeDotMarkerAtSelf)

// Shield
macro_prep_xeh(shield\fnc_shield_checkState.sqf,shield_checkState)
macro_prep_xeh(shield\fnc_shield_getTextureSet.sqf,shield_getTextureSet)
macro_prep_xeh(shield\fnc_shield_init.sqf,shield_init)
macro_prep_xeh(shield\fnc_shield_onDestroy.sqf,shield_onDestroy)
macro_prep_xeh(shield\fnc_shield_onHit.sqf,shield_onHit)
macro_prep_xeh(shield\fnc_shield_onLowHealth.sqf,shield_onLowHealth)
macro_prep_xeh(shield\fnc_shield_onNormalHealth.sqf,shield_onNormalHealth)
macro_prep_xeh(shield\fnc_shield_regenPerFrameHandler.sqf,shield_regenPerFrameHandler)

// Vehicle EMP
macro_prep_xeh(emp_vehicle\fnc_emp_hitVehicle.sqf,emp_hitVehicle)
macro_prep_xeh(emp_vehicle\fnc_emp_hitHandler.sqf,emp_hitHandler)
macro_prep_xeh(emp_vehicle\fnc_emp_enableVehicle.sqf,emp_enableVehicle)
macro_prep_xeh(emp_vehicle\fnc_emp_disableVehicle.sqf,emp_disableVehicle)

diag_log "RD501 PREP Complete";