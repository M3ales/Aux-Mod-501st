params["_args", "_handle"];
_args params["_player"];
/*
*	_jammers = [
*		[_jammer, _radius, _strength],
*		["bis_o1", 1000, 400]
*	];
*/
if(!alive _player) exitWith { systemChat format["Player dead for %1", _handle] };

_jammers = missionNamespace getVariable ["rd501_jammers",[]];

// Exit if jammer list is empty, remove PFH and rely on someone else calling it via jammer placement
if(count _jammers == 0) exitWith {
	systemChat "Exiting Client PFH";
	[_handle] call CBA_fnc_removePerFrameHandler;
	_player setVariable ["rd501_jammers_pfh", -1];
	_player setVariable ["tf_receivingDistanceMultiplicator", 1];
	//_player setVariable ["tf_transmittingDistanceMultiplicator", 1]; // Unused by TFAR 0.9.7
};

// Aggregate the mean interference (multiple jammers allowed)
private _interference = 1;
{
	_x params["_jammer", "_radius", "_strength"];
	private _distance = _player distance _jammer;
	if (_distance < _radius) then {
		private _d = _distance/_radius;
		private _specificSignal =  1/(1 + ((_d/(1 -_d)) ^ -2.3));
		private _specificInterference = _strength * (1 - _specificSignal);
		if(_interference == 1) then {
			_interference = _specificInterference;
			continue
		};
		_interference = _interference min _specificInterference; // Lowest value
		if(_interference < 1) then {
			_interference = 1; //prevent 0 from being final value
		};
		if(_interference > _strength) then {
			_interference = _strength; // prevent tfar from being exposed to 1.6e^24 when distance is null
		}
	};
} forEach _jammers;

// Set interference locally
_player setVariable ["tf_receivingDistanceMultiplicator", _interference];
// _player setVariable ["tf_transmittingDistanceMultiplicator", _interference]; // Unused by TFAR 0.9.7
systemChat format["Interference: %1", _interference];