#include "..\..\script_component.hpp"
FIX_LINE_NUMBERS()
params ["_units",["_calledByACE",false]];

private _unit = _units select 0;

if (_unit == Petros) exitWith {[localize "STR_control_unit_hint_header", localize "STR_control_unit_error_petros"] call A3A_fnc_customHint;};
if (captive player) exitWith {[localize "STR_control_unit_hint_header", localize "STR_control_unit_error_undercover"] call A3A_fnc_customHint;};
//if (player != leader group player) exitWith {[localize "STR_control_unit_hint_header", localize "STR_control_unit_error_no_squad_leader"] call A3A_fnc_customHint;};
if (isPlayer _unit) exitWith {[localize "STR_control_unit_hint_header", localize "STR_control_unit_error_no_player"] call A3A_fnc_customHint;};
if (!(alive _unit) or (_unit getVariable ["incapacitated",false]))  exitWith {[localize "STR_control_unit_hint_header", localize "STR_control_unit_error_alive_only"] call A3A_fnc_customHint;};
if (side _unit != teamPlayer) exitWith {[localize "STR_control_unit_hint_header", format [localize "STR_control_unit_error_rebel_only",A3A_faction_reb get "name"]] call A3A_fnc_customHint;};
if (!isNil "A3A_FFPun_Jailed" && {(getPlayerUID player) in A3A_FFPun_Jailed}) exitWith {[localize "STR_control_unit_hint_header", localize "STR_control_unit_error_punish"] call A3A_fnc_customHint;};

private _owner = player getVariable ["owner",player];
if (_owner!=player) exitWith {[localize "STR_control_unit_hint_header", localize "STR_control_unit_error_ai_recursion"] call A3A_fnc_customHint;};

{
	if (_x != vehicle _x) then {
	[_x] orderGetIn true;
	};
} forEach units group player;

private _face = face _unit;
private _speaker = speaker _unit;
private _fname = (name _unit splitString " ") # 0;
private _lname = (name _unit splitString " ") # 1;

_unit setVariable ["owner",player,true];

private _originalBody = player;

//disable further damage and wait until properly landed
player allowDamage false;
if (_calledByACE) then {
	waitUntil {  sleep 1; "ace_medical_engine_uncon" in (animationState player);};
};

//then switch
selectPlayer _unit;


//otherwise unit will lose his identity
[_unit, createHashMapFromArray [["face", _face], ["speaker", _speaker], ["firstName", _fname], ["lastName", _lname]]] call A3A_fnc_setIdentity;

if (fatigueEnabled isEqualTo false) then {
	_unit enableFatigue false;
};

if (staminaEnabled isEqualTo false) then {
	_unit enableStamina false;
};

private _newWeaponSway = swayEnabled / 100;
_unit setCustomAimCoef _newWeaponSway;

private _timeX = aiControlTime;
_unit setVariable ["returnControl",false];
_unit addAction [(localize "STR_antistasi_actions_return_control_to_ai"),{player setVariable["returnControl",true];}];

if (_calledByACE) then {
	["Second chance!", format ["Find and heal %1 before they bleed out!", name _originalBody]] call A3A_fnc_customHint; 
};

waitUntil {
    sleep 1;
    if (!_calledByACE) then {
        [localize "STR_control_unit_hint_header",
         format [localize "STR_control_unit_time_to_return_to_original_body", _timeX]
        ] call A3A_fnc_customHint;
        _timeX = (_timeX - 1) max 0;
    };

	//force return of control if timed out, rescue is a success, rescue has failed (death is imminent), AI is knocked down, or manual action is used
    (_timeX < 1)
    || (_calledByACE && !(_originalBody getVariable ["incapacitated", false]))
    || (_originalBody getVariable ["ace_medical_bloodVolume", 6] < 3.2)
	|| (getOxygenRemaining _originalBody  <= 0.03)
	|| (player getVariable ["incapacitated", false])
	|| (player getVariable ["returnControl", false]);
};

removeAllActions _unit;
selectPlayer (_unit getVariable ["owner",_unit]);
(units group player) joinsilent group player;
group player selectLeader player;
player allowDamage true;
[localize "STR_control_unit_hint_header", localize "STR_control_unit_return_to_original_body"] call A3A_fnc_customHint;
playSound "A3AP_UiSuccess";
