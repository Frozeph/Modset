params ["_caller", "_target"];

_unCon = _target getVariable ["ace_medical_inReviveState", false];

if (_unCon) then {
	_maxTime = missionNamespace getVariable ["ace_medical_maxReviveTime", 180];
	_reviveStartTime = _target getVariable ["ace_medical_reviveStartTime", 0];
	_bloodVolume = [_caller, _target] call twc_medical_fnc_getBloodVolume;
	_timeToAdd = _reviveStartTime;

	if (_reviveStartTime > 0) then {
		_timeToAdd = (_reviveStartTime + 15) + (20 * _bloodVolume);

		if ((CBA_missionTime -_timeToAdd - _maxTime) <= 0) then {
			_timeToAdd = (_reviveStartTime + 20); // severly reduce effectiveness when stacked over max cap of life
		};

		_target setVariable ["ace_medical_reviveStartTime", _timeToAdd min CBA_missionTime, true];
	};
};

_target getVariable "ace_medical_reviveStartTime";