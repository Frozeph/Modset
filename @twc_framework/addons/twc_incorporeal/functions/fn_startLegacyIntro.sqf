params ["_operationName", "_operationEra", "_isNightOp"];

_song = [_operationEra, _isNightOp] call TWC_Incorporeal_fnc_getIntroSong;

if (serverTime < 600) then {
	_index = player createDiarySubject ["loadout", "Loadouts"];
	[player] remoteExecCall ["twc_fnc_briefingLoadout", (group player)];
};

if (!isNil "completedTasks") then {
	{
		[_x select 0, _x select 1, false] call BIS_fnc_taskSetState;
	} forEach completedTasks;
};

if (isMultiplayer) then {
	[] Spawn {
		titleCut ["", "BLACK FADED", 999];

		waitUntil{!(isNil "BIS_fnc_init")};
		[ACE_player, currentWeapon ACE_player, currentMuzzle ACE_player] call ace_safemode_fnc_lockSafety;
		enableRadio false;
		player disableConversation true;

		playMusic _song;

		titleText ["The Wrecking Crew","PLAIN DOWN"]; 
		titleFadeOut 7;
		sleep 5;

		titleText [_operationName, "PLAIN"];
		titleFadeOut 15;
		sleep 15;

		titleText ["To prevent desync, don't move until the go ahead is given.", "PLAIN"];
		titleFadeOut 20;
		sleep 30;

		if (!isNil "ForwardBasePos" && !(player getVariable ["twc_ignoreForwardBase",false])) then {
			player setPos ForwardBasePos;
			["ForwardBasePos"] spawn {twc_fnc_reconnected};
		} else {
			["NormalBase"] spawn {twc_fnc_reconnected};
		};

		sleep 3;
		"dynamicBlur" ppEffectEnable true;
		"dynamicBlur" ppEffectAdjust [6];
		"dynamicBlur" ppEffectCommit 0;
		"dynamicBlur" ppEffectAdjust [0.0];
		"dynamicBlur" ppEffectCommit 5;

		titleCut ["", "BLACK IN", 5];
		
		if !((goggles player) in approvedFacewear) then {
			removeGoggles player;
		};
		
		if !(player getVariable ["twc_keepMap",false]) then {
			player unassignItem "itemMap"; 
			player removeItem "itemMap"; 
		};
		
		1 enableChannel false;
	};
};

if (!(isNil "twc_JIP_CommandMessage")) then {
	{
		player createDiaryRecord ["Diary", ["Radio Message", _x]];
	} forEach twc_JIP_CommandMessage;
};