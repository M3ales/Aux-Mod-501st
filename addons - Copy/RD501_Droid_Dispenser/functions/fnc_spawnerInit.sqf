#include "function_macros.hpp"
params ["_target"];
if(!isServer) exitWith { systemChat "Not Server, Exiting PFH"; };
systemChat format["Initialising spawner %1",_target];
_target setVariable [QGVAR(group), createGroup [opfor, true]]; // group that units will be spawned into
_target setVariable [QGVAR(boundUnits), []]; // units currently bound to this unit
_target setVariable [QGVAR(maxUnits),20]; // max units that can be alive at any time from this spawner
_target setVariable [QGVAR(possibleUnits),["RD501_opfor_unit_B2_droid_Standard","RD501_opfor_unit_b1_grenadier","RD501_opfor_unit_B2_droid_Standard","RD501_opfor_unit_B1_AA","RD501_opfor_unit_B1_AT_heavy","RD501_opfor_unit_B1","RD501_opfor_unit_B1_marksman"]];
// Start PFH
systemChat format["Starting PFH on %1",_target];
_params= [_target];
 _handle = [FUNC(spawnDroidPFH), GVAR(spawnTime), _params] call CBA_fnc_addPerFrameHandler;