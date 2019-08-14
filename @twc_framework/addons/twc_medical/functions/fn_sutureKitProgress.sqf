params ["_args", "_elapsedTime", "_totalTime"];
_args params ["_caller", "_target", "_selectionName", "_className", "_items", "_usersOfItems"];

// check if the treater has at least one suture thread (just in case some one takes it from him during suturing)
if (({_x isKindOf ["TWC_Item_Medical_SutureKit_1", configFile >> "CfgWeapons"]} count (items _caller)) < 1) exitWith { false };

_returnData = [_target, _selectionName] call twc_medical_fnc_selectSutureWound;
if ((count (_returnData select 1)) < 1) exitWith { false; }; // either invalid wound, or none at all (could be healed at same time)

_hasPlayedSound = _caller getVariable ["TWC_Played_Suture", false];

//Has enough time elapsed that we can play the sound ?
if (((_totalTime - _elapsedTime) <= (_totalTime / 2)) && !_hasPlayedSound) then {
	_caller setVariable ["TWC_Played_Suture", true, true];

	if !(isNull objectParent _caller) then {
		playSound3D ["twc_medical\sounds\suturing.ogg", _caller, false, getPosASL _caller, 5, 1, 30];
	} else {
		playSound3D ["twc_medical\sounds\suturing.ogg", vehicle _caller, true, getPosASL (vehicle _caller), 5, 1, 25];
	};
};

true