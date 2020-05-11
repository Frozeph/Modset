params ["_vehicle"];

if (hasInterface) exitWith {};
if !(local _vehicle) exitWith {};

// if this unit is the leader, and there's no players in the group...
if (leader _vehicle == _vehicle && ({isPlayer _x} count Units (group _vehicle) == 0)) then {
	// TODO: get debug status (cba setting)
	_debug = false;
	
	_cacheRange = (group _vehicle) getVariable [
		"TWC_Cache_Group_Range",
		(missionNameSpace getVariable ["twc_cachingAiRange", 1500])
	];
	
	[_debug, (group _vehicle), _cacheRange] call TWC_Cache_fnc_vehicleLoop;
};