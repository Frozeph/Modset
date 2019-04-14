if (!(hasInterface) || isDedicated) exitWith {};

TWC_Suppress_CC = ppEffectCreate ["colorCorrections", 1501];
TWC_Suppress_CC ppEffectAdjust [1, 1, 0, [0, 0, 0, 0], [1, 1, 1, 1], [1, 1, 1, 0]];
TWC_Suppress_CC ppEffectCommit 0;
TWC_Suppress_CC ppEffectEnable true;

TWC_Suppress_blur = ppEffectCreate ["DynamicBlur", 800];
TWC_Suppress_blur ppEffectAdjust [0];
TWC_Suppress_blur ppEffectCommit 0;
TWC_Suppress_blur ppEffectEnable true;

TWC_Suppress_radialBlur = ppEffectCreate ["RadialBlur", 1003];
TWC_Suppress_radialBlur ppEffectAdjust [0, 0, 0, 0];
TWC_Suppress_radialBlur ppEffectCommit 0;
TWC_Suppress_radialBlur  ppEffectEnable true;

TWC_Suppress_impactBlur = ppEffectCreate ["RadialBlur", 1002];
TWC_Suppress_impactBlur ppEffectAdjust [0, 0, 0, 0];
TWC_Suppress_impactBlur ppEffectCommit 0;
TWC_Suppress_impactBlur ppEffectEnable true;

TWC_Suppress_impactCC = ppEffectCreate ["colorCorrections", 1499];
TWC_Suppress_impactCC ppEffectAdjust [1, 1, 0, [0,0,0,0], [1,1,1,1],[1,1,1,0]];
TWC_Suppress_impactCC ppEffectCommit 0;
TWC_Suppress_impactCC ppEffectEnable true;

_isPublic = missionNameSpace getVariable ["TWC_enablePussySuppress", false];
if (_isPublic) then { TWC_Suppress_modifier = 1.25; };

TWC_Suppress_mainHandlerID = [{[] call twc_suppress_fnc_mainHandler}] call CBA_fnc_addPerFrameHandler;
TWC_Suppress_pinnedHandlerID = [{[] call twc_suppress_fnc_pinnedHandler}, 0.5] call CBA_fnc_addPerFrameHandler;
TWC_Suppress_thresholdHandlerID = [{[] call twc_suppress_fnc_thresholdHandler}, 1] call CBA_fnc_addPerFrameHandler;

// Disable on spectator.
player addEventHandler ["Killed", {
	//params ["_unit", "_killer", "_instigator", "_useEffects"];
	TWC_Suppress_isSuppressed = false;
	TWC_Suppress_lastShotTime = 0;
	TWC_Suppress_threshold = 0;
	TWC_Suppress_inExposedVehicle = false;
	
	[] call TWC_Suppress_fnc_clearImpactEffect;
	[] call TWC_Suppress_fnc_clearPinnedEffect;
	
	resetCamShake;

	[TWC_Suppress_mainHandlerID] call CBA_fnc_removePerFrameHandler;
	[TWC_Suppress_pinnedHandlerID] call CBA_fnc_removePerFrameHandler;
	[TWC_Suppress_thresholdHandlerID] call CBA_fnc_removePerFrameHandler;
}];

["unit", {
	TWC_Suppress_isSuppressed = false;
	TWC_Suppress_lastShotTime = 0;
	TWC_Suppress_threshold = 0;
	TWC_Suppress_inExposedVehicle = false;
	
	[] call TWC_Suppress_fnc_clearImpactEffect;
	[] call TWC_Suppress_fnc_clearPinnedEffect;
	
	resetCamShake;
	
	[TWC_Suppress_mainHandlerID] call CBA_fnc_removePerFrameHandler;
	[TWC_Suppress_pinnedHandlerID] call CBA_fnc_removePerFrameHandler;
	[TWC_Suppress_thresholdHandlerID] call CBA_fnc_removePerFrameHandler;

	TWC_Suppress_mainHandlerID = [{[] call twc_suppress_fnc_mainHandler}] call CBA_fnc_addPerFrameHandler;
	TWC_Suppress_pinnedHandlerID = [{[] call twc_suppress_fnc_pinnedHandler}, 0.5] call CBA_fnc_addPerFrameHandler;
	TWC_Suppress_thresholdHandlerID = [{[] call twc_suppress_fnc_thresholdHandler}, 1] call CBA_fnc_addPerFrameHandler;
}] call CBA_fnc_addPlayerEventHandler;

player addEventHandler ["GetInMan", {
	params ["_unit", "", "_vehicle", "_turret"];
	
	_returnNum = [(configFile >> "CfgVehicles" >> (typeOf _vehicle)), "TWC_isExposedVehicle", 0] call BIS_fnc_returnConfigEntry;
	TWC_Suppress_inExposedVehicle = if (_returnNum > 0) then { true; } else { false; };
	
}];

player addEventHandler ["GetOutMan", {
	params ["_unit", "", "_vehicle", "_turret"];
	
	TWC_Suppress_inExposedVehicle = false;
}];