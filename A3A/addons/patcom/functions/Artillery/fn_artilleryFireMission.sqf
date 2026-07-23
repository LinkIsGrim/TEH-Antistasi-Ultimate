/*
    Author: [Hazey]
    Modified: TEH
    Description:
        Evaluates a reported target, selects an available battery and calls an artillery fire mission.

    Arguments:
        <Object> Target object observed by the group requesting support.
        <Number> Area in which the artillery strike should land.
        <String> Type of round: "HE", "Flare", "Smoke".
        <Number> Number of rounds to fire.
        <Group> Group requesting artillery support.

    Return Value:
        N/A

    Scope: Any
    Environment: Any
    Public: No

    Example:
        [_instigator, random 150, "HE", 6, _group] call A3A_fnc_artilleryFireMission;

    License: MIT License
*/

#include "..\..\script_component.hpp"
FIX_LINE_NUMBERS()
params ["_target", "_area", "_roundType", "_rounds", "_callerGroup"];

if (A3U_disablePATCOMMortars) exitWith {
    Debug("Exiting PATCOM artilleryFireMission; Param was set to disabled.");
};

if (isNull _target || {isNull _callerGroup}) exitWith {
    Debug("Exiting PATCOM artilleryFireMission; Invalid target or caller group.");
};

private _side = side _callerGroup;
private _enemies = [Invaders, Occupants] select (_side == Occupants);
private _observer = objNull;
private _observerKnowledge = -1;
private _observerLastSeen = -1;
private _targetPos = [];

/////// FIND THE BEST OBSERVER AND USE THEIR REPORTED TARGET POSITION \\\
{
    if (!alive _x || _x getVariable ["TEH_ArtilleryDisabled",false]) then { continue; };

    private _knowledge = _x knowsAbout _target;
    private _knowledgeData = _x targetKnowledge _target;
    _knowledgeData params [
        "_knownByGroup",
        "_knownByUnit",
        "_lastSeen",
        "_lastThreat",
        "_knownSide",
        "_errorMargin",
        "_knownPosition"
    ];

    if (
        (_knowledge > _observerKnowledge) ||
        {(_knowledge isEqualTo _observerKnowledge) && {_lastSeen > _observerLastSeen}}
    ) then {
        _observer = _x;
        _observerKnowledge = _knowledge;
        _observerLastSeen = _lastSeen;
        _targetPos = _knownPosition;
    };
} forEach units _side; 

if (isNull _observer || {_observerKnowledge < TEH_patcomKnowledge} || {_targetPos isEqualTo []}) exitWith {
    diag_log "Artillery Mission unknown target";
};

/////// CHECK COLLATERAL DANGER AND TARGET VALUE \\\
private _weightRadius = 300;
private _dangerRadius = 50;
private _threatWeight = 0;
private _dangerWeight = 0;
private _nearUnits = (_targetPos nearObjects ["CAManBase", _weightRadius]) + (getPosATL (leader _callerGroup) nearObjects ["CAManBase", _weightRadius]);
{
    private _unitSide = _x getVariable ["originalSide", side _x];
    private _isAlive = alive _x;

    if (
        _isAlive &&
        {_x distance2D _targetPos <= _dangerRadius} &&
        {_unitSide isEqualTo _side || {_unitSide isEqualTo civilian}}
    ) then {
        _dangerWeight = _dangerWeight + 20;
    };

    private _threatMan = switch (_unitSide) do {
        case Civilian:  {[0, -10] select _isAlive}; //civs -10 penalty to threat
        case _side:     {[10, -3] select _isAlive}; //own side dead increase threat, alive decrease
        default         {[-5, 10] select _isAlive}; //dead enemies decrease threat, alive increase
    };

    _threatWeight = _threatWeight + _threatMan;
} forEach _nearUnits;

// Vehicles are classified by ownerSide so empty vehicles are still considered.
private _nearVehicles = _targetPos nearObjects ["AllVehicles", _weightRadius];

{
    if (_x isKindOf "CAManBase" || {!alive _x}) then { continue; };

    private _ownerSide = _x getVariable ["ownerSide", sideUnknown];

    if (
        (_x distance2D _targetPos <= _dangerRadius) &&
        {_ownerSide isEqualTo _side || {_ownerSide isEqualTo civilian && (alive driver _x)}}
    ) then {
        _dangerWeight = _dangerWeight + 20;
    };

    if (_ownerSide isEqualTo teamPlayer || _ownerSide isEqualTo _enemies) then {
        if (_x isKindOf "StaticWeapon") then {
            _threatWeight = _threatWeight + 30;
        } else {
            _threatWeight = _threatWeight + 50;
        };
    };
} forEach _nearVehicles;

_threatWeightCap = (((_threatWeight min 90) - _dangerWeight) max 2);

if !(random 100 < _threatWeightCap) exitWith {
    diag_log format["Artillery Mission with threat %1 (%2 capped with %3 danger) wasn't authorized.",_threatWeight,_threatWeightCap,_dangerWeight];
};

diag_log format["Artillery Mission with threat %1 (%2 capped with %3 danger) is going forward.",_threatWeight,_threatWeightCap,_dangerWeight];

private _batteryArray = [];

/////// GET ACTIVE BATTERY ARRAY FOR CALLER'S SIDE \\\
{
    if !(_x getVariable ["PATCOM_ArtilleryBusy", false]) then {
        {
            private _veh = vehicle _x;
            private _class = typeOf _veh;
            if ((_class == "") || {gunner _veh != _x}) then { continue; };

            private _artyChk = getNumber (configFile / "CfgVehicles" / _class / "artilleryScanner");
            if (_artyChk isEqualTo 1 && {!(_veh in _batteryArray)}) then {
                _batteryArray pushBack _veh;
            };
        } forEach units _x;
    };
} forEach ((groups _side) select {_x getVariable ["PATCOM_ArtilleryBattery", false]});

if (_batteryArray isEqualTo []) exitWith {
    if (PATCOM_DEBUG) then {
        [leader _callerGroup, "NO SUPPORT AVAILABLE", 5, "Red"] call A3A_fnc_debugText3D;
    };
};

private _selectedBattery = selectRandom _batteryArray;
private _group = group gunner _selectedBattery;
private _batteryClass = typeOf _selectedBattery;
private _reloadTime = [_selectedBattery] call A3A_fnc_getReloadTime;
private _shellType = "";

// Set artillery to busy.
_group setVariable ["PATCOM_ArtilleryBusy", true, true];

/////// GET ARTILLERY ROUND TYPE FROM TEMPLATES \\\
private _faction = Faction(_side);
if (_batteryClass in (_faction get "vehiclesArtillery")) then {
    private _shellArray = _faction get "magazines" get _batteryClass;
    _shellType = _shellArray # 0;
};

if (_batteryClass in (_faction get "staticMortars")) then {
    switch (_roundType) do {
        case "HE": {
            _shellType = _faction get "mortarMagazineHE";
        };

        case "SMOKE": {
            _shellType = _faction get "mortarMagazineSmoke";
        };

        case "FLARE": {
            _shellType = _faction get "mortarMagazineFlare";
        };

        default {
            _shellType = _faction get "mortarMagazineHE";
        };
    };
};

if (_shellType == "") exitWith {
    ServerDebug_1("Unable to find ammoType for Classname - %1", _batteryClass);
    _group setVariable ["PATCOM_ArtilleryBusy", false, true];
};

/////// FINAL ARTILLERY RANGE CHECK \\\
if !(_targetPos inRangeOfArtillery [[_selectedBattery], _shellType]) exitWith {
    if (PATCOM_DEBUG) then {
        [leader _group, "OUT OF RANGE", 5, "Red"] call A3A_fnc_debugText3D;
    };
    _group setVariable ["PATCOM_ArtilleryBusy", false, true];
};

/////// DO ARTILLERY FIRE \\\
[_group, _targetPos, _area, _selectedBattery, _shellType, _rounds, _reloadTime] spawn {
    params ["_group", "_targetPos", "_area", "_selectedBattery", "_shellType", "_rounds", "_reloadTime"];

    for "_i" from 1 to _rounds do {
        private _finalTargetPos = [_targetPos, random 50, _area, 0, 1, -1, 0] call A3A_fnc_getSafePos;
        _selectedBattery doArtilleryFire [_finalTargetPos, _shellType, 1];

        if (PATCOM_DEBUG) then {
            [leader _group, "ROUND AWAY", 1, "Green"] call A3A_fnc_debugText3D;
        };

        sleep (_reloadTime + 2 + random 4);
    };

    sleep PATCOM_ARTILLERY_DELAY;
    _group setVariable ["PATCOM_ArtilleryBusy", false, true];
};
