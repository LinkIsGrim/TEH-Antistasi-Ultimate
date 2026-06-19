/*
    Author:
        MaxxLite / TEH

    Description:
        Adds local civilian dialog actions.

    Params:
        _unit <Default: ObjNull>

    Scope:
        Client

    Environment:
        Unscheduled

    Usage:
        [_unit] call A3A_fnc_dialogCiv;
*/

#include "..\..\script_component.hpp"
FIX_LINE_NUMBERS()

params [["_unit", objNull]];

if (isNull _unit) exitWith {false};

private _sayToCaller = {
    params ["_speaker", "_listener", "_text"];
    [_speaker, _text] remoteExec ["globalChat", _listener];
};

private _getUnitTown = {
    params ["_unit"];

    _unit getVariable ["TEH_Town", ""]
};

private _getTownVar = {
    params ["_town", "_key", "_default"];

    private _townStates = missionNamespace getVariable ["TEH_CivDialogTownStates", createHashMap];
    private _townState = _townStates getOrDefault [_town, createHashMap];
    _townState getOrDefault [_key, _default]
};

private _setTownVar = {
    params ["_town", "_key", "_value"];

    private _townStates = missionNamespace getVariable ["TEH_CivDialogTownStates", createHashMap];
    private _townState = _townStates getOrDefault [_town, createHashMap];

    _townState set [_key, _value];
    _townStates set [_town, _townState];
    missionNamespace setVariable ["TEH_CivDialogTownStates", _townStates, true];
};

private _findTownCivs = {
    params ["_town"];

    allUnits select {
        alive _x
        && {side group _x isEqualTo civilian}
        && {isNull objectParent _x}
        && {(_x getVariable ["TEH_Town", ""]) isEqualTo _town}
    }
};

private _ensureCacheState = {
    params ["_target", "_town", "_getTownVar", "_setTownVar", "_findTownCivs"];

    if (_town isEqualTo "") exitWith {false};
    [_town, "Town", _town] call _setTownVar;

    if ([_town, "CacheCompleted", false] call _getTownVar) exitWith {true};
    if ([_town, "CacheStarted", false] call _getTownVar) exitWith {true};

    private _civs = [_town] call _findTownCivs;
    if ((count _civs) < 2) exitWith {false};

    private _joe = selectRandom _civs;
    private _bob = selectRandom (_civs - [_joe]);

    [_town, "CacheStarted", true] call _setTownVar;
    [_town, "CacheLead", _joe] call _setTownVar;
    [_town, "CacheContact", _bob] call _setTownVar;

    _joe setVariable ["TEH_CacheRole", "Joe", true];
    _bob setVariable ["TEH_CacheRole", "Bob", true];
    _bob setVariable ["TEH_CacheContactUnlocked", false, true];
    _bob setVariable ["TEH_CacheBobFound", false, true];

    true
};

private _describeContact = {
    params ["_unit"];

    private _getItemName = {
        params ["_class", "_fallback"];
        if (_class isEqualTo "") exitWith {_fallback};

        private _name = getText (configFile >> "CfgWeapons" >> _class >> "displayName");
        if (_name isEqualTo "") then {_class} else {_name};
    };

    private _uniformName = [uniform _unit, "ordinary civilian clothes"] call _getItemName;
    private _vestName = [vest _unit, ""] call _getItemName;
    private _headgearName = [headgear _unit, ""] call _getItemName;

    private _parts = [format ["wears %1", _uniformName]];
    if (_vestName isNotEqualTo "") then {_parts pushBack format ["with %1", _vestName]};
    if (_headgearName isNotEqualTo "") then {_parts pushBack format ["and %1 on his head", _headgearName]};

    _parts joinString ", "
};

private _unlockRandomWeapon = {
    params ["_speaker", "_listener", "_sayToCaller"];

    private _allWeapons = missionNamespace getVariable ["allWeapons", []];
    private _unlockedWeapons = missionNamespace getVariable ["unlockedWeapons", []];
    private _notYetUnlocked = _allWeapons - _unlockedWeapons;

    if (_notYetUnlocked isEqualTo []) exitWith {
        [_speaker, _listener, "The cache was real, but it only confirmed weapons we already know how to source."] call _sayToCaller;
        false
    };

    private _newWeapon = selectRandom _notYetUnlocked;
    private _magazines = compatibleMagazines _newWeapon;
    private _guestLimit = missionNamespace getVariable ["A3A_guestItemLimit", 100];
    private _minWeaps = missionNamespace getVariable ["minWeaps", 25];
    private _quantityBounds = if (_minWeaps > 0) then {
        [_minWeaps / 10, _minWeaps / 4, _minWeaps]
    } else {
        [_guestLimit / 10, _guestLimit / 4, 50]
    };
    private _quantity = (ceil (random _quantityBounds)) max 1;

    private _crateType = "Box_NATO_Wps_F";
    private _cratePos = (getPosATL _speaker) findEmptyPosition [1, 12, _crateType];
    if (_cratePos isEqualTo []) then {
        _cratePos = _speaker modelToWorld [0, 2, 0];
        _cratePos set [2, 0];
    };

    private _crate = createVehicle [_crateType, _cratePos, [], 0, "NONE"];
    _crate setDir (random 360);
    clearWeaponCargoGlobal _crate;
    clearMagazineCargoGlobal _crate;
    clearItemCargoGlobal _crate;
    clearBackpackCargoGlobal _crate;

    _crate addWeaponCargoGlobal [_newWeapon, _quantity];

    if (_magazines isNotEqualTo []) then {
        private _magazine = selectRandom _magazines;
        private _magazineCount = _quantity * 6;
        _crate addMagazineCargoGlobal [_magazine, _magazineCount];
    };

    private _weaponName = getText (configFile >> "CfgWeapons" >> _newWeapon >> "displayName");
    if (_weaponName isEqualTo "") then {_weaponName = _newWeapon};

    private _text = format ["Bob's cache lead was solid. The rebels recovered %1 x %2 and compatible ammunition.", _quantity, _weaponName];
    [_text, true] remoteExec ["A3A_fnc_showIntel", [civilian, teamPlayer]];

    true
};

private _actionArgs = [_sayToCaller, _getUnitTown, _getTownVar, _setTownVar, _findTownCivs, _ensureCacheState, _describeContact, _unlockRandomWeapon];
private _commonCondition = "alive _target && {alive _this} && {isNull objectParent _this} && {_target getVariable ['TEH_DialogStarted', false]}";

_unit addAction [
    "Hello",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];
        _arguments params ["_sayToCaller"];

        private _question = selectRandom [
            "Hello.",
            "Hey.",
            "Can we talk?",
            "Got a minute?"
        ];

        [_caller, _caller, _question] call _sayToCaller;

        _target disableAI "PATH";
        _target lookAt _caller;
        _target playActionNow (selectRandom ["GestureHi","GestureHiB","GestureHiC"]);
        sleep 1;

        [_target, _caller, selectRandom [
            "Make it quick.",
            "All right, what do you want?",
            "Careful. People listen around here."
        ]] call _sayToCaller;

        _target setVariable ["TEH_DialogStarted", true, true];

        _target spawn {
            params ["_target"];
            sleep 60;
            if (alive _target) then {
                _target enableAI "PATH";
                _target doWatch objNull;
            };
        };
    },
    _actionArgs,
    1.5,
    true,
    true,
    "",
    "alive _target && {alive _this} && {isNull objectParent _this} && {!(_target getVariable ['TEH_DialogStarted', false])}",
    10,
    false,
    "",
    ""
];

_unit addAction [
    "Ask about city",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];
        _arguments params ["_sayToCaller"];

        [_caller, _caller, selectRandom [
            "How are people holding up here?"
        ]] call _sayToCaller;
        _target lookAt _caller;

        sleep 1;

        if (_target getVariable ["TEH_RebelLoyalty", false]) then {
            _target playActionNow "gestureNod";
            [_target, _caller, selectRandom [
                "People get by. Quietly. That is how you survive around here.",
                "Most keep their heads down, but they are not blind.",
                "There are more friends here than the patrols think.",
                "Folks remember who helped when things got ugly.",
                "Nobody says much in the street, but doors open for the right people.",
                "The town bends when it has to. It has not broken yet.",
                "People are tired of uniforms deciding what counts as peace.",
                "Some smiles here are real. Some are for whoever is watching.",
                "You will find help here if you ask like a neighbor, not a commander.",
                "The mood is better than it looks. That is all I should say."
            ]] call _sayToCaller;
        } else {
            //_target playActionNow "gesturePoint";
            [_target, _caller, selectRandom [
                "People are alive. These days, that is already something.",
                "The soldiers keep order. Most people just want quiet.",
                "Nobody here needs more trouble walking through town.",
                "People talk less now. That is usually healthier.",
                "If you came looking for complaints, try somewhere braver.",
                "The town manages. It always manages.",
                "Everyone has work, worries, and no appetite for politics.",
                "Things are tense, but tense is better than burning.",
                "Most people know better than to pick sides in public.",
                "Ask too much and people will remember your face."
            ]] call _sayToCaller;
        };
    },
    _actionArgs,
    1.5,
    true,
    true,
    "",
    _commonCondition,
    3,
    false,
    "",
    ""
];

_unit addAction [
    "Ask about soldiers",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];
        _arguments params ["_sayToCaller"];

        [_caller, _caller, selectRandom [
            "What do you know about the soldiers nearby?",
            "Seen any patrols acting strange?",
            "Where do the troops usually move through?"
        ]] call _sayToCaller;
        _target lookAt _caller;
        sleep 1;

        if (_target getVariable ["TEH_CivSoldierIntelDone", false]) exitWith {
            [_target, _caller, "Already done. I told you everything I know."] call _sayToCaller;
            false
        };

        if !(_target getVariable ["TEH_RebelLoyalty", false]) exitWith {
            _target playActionNow "gesturePoint";
            _target setVariable ["TEH_CivSoldierIntelDone", true, true];
            _target setVariable ["TEH_CivSoldierIntelSucceeded", false, true];
            if (random 100 > 25) then {
                [_target, _caller, selectRandom [
                    "The soldiers protect us from people asking questions like that.",
                    "No. I am not getting dragged into rebel business.",
                    "Talk to the checkpoint if you care so much."
                ]] call _sayToCaller;
            } else {
                [_target, _caller, selectRandom [
                    "Guards! Guards!",
                    "Malden Police, arrest this man!",
                    "Stop right there criminal scum!"
                ]] call _sayToCaller;
                _caller setCaptive false;
            };

            false
        };

        _target playActionNow "GesturePutDown";
        sleep 1;

        private _revealedZone = false;
        if ((missionNamespace getVariable ["hideEnemyMarkers", false]) && {!(isNil "A3U_fnc_revealRandomZones")} && {random 100 < 35}) then {
            [1, "A civilian has revealed a zone"] call A3U_fnc_revealRandomZones;
            _revealedZone = true;
        };

        if (_revealedZone) then {
            [_target, _caller, selectRandom [
                "There is a place they guard too carefully. I marked what I know.",
                "They keep sending trucks to one place. You should look there.",
                "I saw a patrol route that does not match their usual lies. Take a look."
            ]] call _sayToCaller;
        } else {
            private _intel = ["Civilian", Occupants] call A3A_fnc_selectIntel;
            private _intelMessage = switch (_intel) do {
                case 502: {selectRandom ["STR_antistasi_actions_talk_with_civ_success_dealer1", "STR_antistasi_actions_talk_with_civ_success_dealer2"]};
                case 301: {selectRandom ["STR_antistasi_actions_talk_with_civ_success_traitor1", "STR_antistasi_actions_talk_with_civ_success_traitor2"]};
                case 302: {selectRandom ["STR_antistasi_actions_talk_with_civ_success_money1", "STR_antistasi_actions_talk_with_civ_success_money2"]};
                case 102: {selectRandom ["STR_antistasi_actions_talk_with_civ_success_decryption1", "STR_antistasi_actions_talk_with_civ_success_decryption2"]};
                default {"STR_antistasi_actions_talk_with_civ_fail1"};
            };

            [_target, _caller, localize _intelMessage] call _sayToCaller;
        };

        _target setVariable ["TEH_CivSoldierIntelDone", true, true];
        _target setVariable ["TEH_CivSoldierIntelSucceeded", true, true];

        true
    },
    _actionArgs,
    1.5,
    true,
    true,
    "",
    _commonCondition,
    3,
    false,
    "",
    ""
];

_unit addAction [
    "Ask about supplies",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];
        _arguments params ["_sayToCaller", "_getUnitTown", "_getTownVar", "_setTownVar", "_findTownCivs", "_ensureCacheState", "_describeContact"];

        [_caller, _caller, selectRandom [
            "Anyone around here know where supplies go missing?",
            "People say every town has a man who knows where things are buried.",
            "If someone had spare rifles, who would know?"
        ]] call _sayToCaller;

        _target lookAt _caller;
        sleep 1;

        private _town = [_target] call _getUnitTown;
        if !([_target, _town, _getTownVar, _setTownVar, _findTownCivs] call _ensureCacheState) exitWith {
            [_target, _caller, "Maybe there is someone, but not enough people are around to ask. Try when the streets are busier."] call _sayToCaller;
            false
        };

        if !(_target getVariable ["TEH_RebelLoyalty", false]) exitWith {
            [_target, _caller, "All our supply are belong to us."] call _sayToCaller;
            false
        };

        if ([_town, "CacheCompleted", false] call _getTownVar) exitWith {
            [_target, _caller, selectRandom [
                "Supplies come and go. Today, mostly go.",
                "Everyone hides what little they have.",
                "If there was something useful, someone already moved it."
            ]] call _sayToCaller;
            false
        };

        private _joe = [_town, "CacheLead", objNull] call _getTownVar;
        private _bob = [_town, "CacheContact", objNull] call _getTownVar;

        if (_target isEqualTo _joe && {alive _bob}) exitWith {
            private _description = [_bob] call _describeContact;
            _bob setVariable ["TEH_CacheContactUnlocked", true, true];

            [_target, _caller, format [
                "I do not touch caches, but Bob knows where the useful things sleep. He usually %1.",
                _description
            ]] call _sayToCaller;

            true
        };

        [_target, _caller, selectRandom [
            "Supplies? Everyone asks. Nobody answers.",
            "I heard crates moved through town, but I do not know who handled them.",
            "There are people who know. I am not one of them."
        ]] call _sayToCaller;

        false
    },
    _actionArgs,
    1.5,
    true,
    true,
    "",
    _commonCondition,
    3,
    false,
    "",
    ""
];

_unit addAction [
    "Ask about cache",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];
        _arguments params ["_sayToCaller", "_getUnitTown", "_getTownVar", "_setTownVar", "_findTownCivs", "_ensureCacheState", "_describeContact", "_unlockRandomWeapon"];

        [_caller, _caller, selectRandom [
            "I heard you know where the cache is.",
            "I am here about the buried goods."
        ]] call _sayToCaller;

        _target lookAt _caller;
        sleep 1;

        private _town = [_target] call _getUnitTown;
        if !([_target, _town, _getTownVar, _setTownVar, _findTownCivs] call _ensureCacheState) exitWith {
            [_target, _caller, "I do not know what you are talking about."] call _sayToCaller;
            false
        };

        if ([_town, "CacheCompleted", false] call _getTownVar) exitWith {
            [_target, _caller, "Already done. That cache is no longer my problem."] call _sayToCaller;
            false
        };

        private _bob = [_town, "CacheContact", objNull] call _getTownVar;
        private _unlocked = _target getVariable ["TEH_CacheContactUnlocked", false];

        if (!(_target isEqualTo _bob) || {!_unlocked}) exitWith {
            [_target, _caller, selectRandom [
                "Wrong person, wrong question.",
                "Names first. Then maybe caches.",
                "I do not know you, and I do not know any cache."
            ]] call _sayToCaller;
            false
        };

        [_target, _caller, "Fine. Bob kept his end. I will mark what can still be recovered."] call _sayToCaller;

        private _success = [_target, _caller, _sayToCaller] call _unlockRandomWeapon;

        [_town, "CacheCompleted", true] call _setTownVar;
        [_town, "CacheBobFound", true] call _setTownVar;
        _target setVariable ["TEH_CacheBobFound", true, true];
        _target setVariable ["TEH_CacheContactUnlocked", false, true];

        _success
    },
    _actionArgs,
    1.5,
    true,
    true,
    "",
    _commonCondition,
    3,
    false,
    "",
    ""
];

_unit addAction [
    "Bribe",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];
        _arguments params ["_sayToCaller"];

        private _price = missionNamespace getVariable ["TEH_CivBribePrice", 250];

        private _money = _caller getVariable ["moneyX", 0];
        if (_money < _price) exitWith {
            [_target, _caller, format ["Come back with %1 and we can pretend this talk never happened.", _price]] call _sayToCaller;
            false
        };

        _caller setVariable ["moneyX", _money - _price, true];
        _target setVariable ["TEH_RebelLoyalty", true, true];

        [_caller, _caller, format ["Here. %1. We understand each other?", _price]] call _sayToCaller;
        _target lookAt _caller;
        sleep 1;
        [_target, _caller, "For that? Sure. I always liked the rebels. Very quietly."] call _sayToCaller;

        true
    },
    _actionArgs,
    1.5,
    true,
    true,
    "",
    _commonCondition,
    3,
    false,
    "",
    ""
];

true
