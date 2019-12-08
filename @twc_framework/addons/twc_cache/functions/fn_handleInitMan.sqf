params ["_man"];

if (hasInterface) exitWith {};
if !(local _man) exitWith {};
if !(alive _man) exitWith {};
if (isPlayer _man) exitWith {};

_isDisabled = missionNameSpace getVariable ["TWC_Caching_Enabled", false];
if (_isDisabled) exitWith {};

_infantryCacheRange = (missionNameSpace getVariable ["TWC_Cache_Infantry_Range", 1500]);

if (_infantryCacheRange <= 0) exitWith {
	["Exiting infantry cache loops, range set to 0 or less", "Cache"] call TWC_Debug_fnc_logGlobal;
};

// if this unit is the leader, and there's no players in the group...
// only one recursive loop per section / when all dead within, loop cancels out
if (leader _man == _man && {isPlayer _x} count Units (group _man) == 0) then {
	_cacheRange = (group _man) getVariable ["TWC_Cache_Group_Range", _infantryCacheRange];
	[(group _man), false, _cacheRange] call TWC_Cache_fnc_infantryLoop;
};