params["_unit"];

_unit setVariable ["respawning",false];
[_unit] remoteExecCall ["A3A_fnc_punishment_FF_addEH",_unit,false];
if ((missionNamespace getVariable ["A3A_customReviveEnabled", 1]) isEqualTo 1) then {
	_unit addEventHandler ["HandleDamage", A3A_fnc_handleDamage];
};
