params ["_unit"];

// Select first wound and bandage it
_openWounds = _unit getVariable ["ace_medical_openWounds", []];

{
	_x params ["", "", "_index", "_amount", "_percentage"];

	if (_amount * _percentage > 0) then {
		_selection = ["head","body","hand_l","hand_r","leg_l","leg_r"] select _index;
		[_unit, _unit, _selection, "ElasticBandage", "ElasticBandage", -1] call ace_medical_fnc_treatmentAdvanced_bandage;
	};
} forEach _openWounds;