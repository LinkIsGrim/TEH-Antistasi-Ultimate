#include "dialogUtils.sqf"
params ["_bob"];

_bob addAction [
    "Uhm.. Vive la résistance?",
    {
        params ["_target", "_caller", "_actionId", "_arguments"];
        _arguments params ["_sayToCaller", "_getUnitTown", "_getTownVar", "_setTownVar", "_findTownCivs", "_describeContact", "_unlockRandomWeapon"];

        [_caller, _caller, selectRandom [
            "Joe sent me."
        ]] call _sayToCaller;

        _target lookAt _caller;
        sleep 1;
        
        private _town = [_target] call _getUnitTown;

        [_target, _caller, "Pronunciation flaws but close enough. If Joe thinks you're good I can share this with you."] call _sayToCaller;
        
        _target playAction "PutDown";
        private _success = [_target, _caller, _sayToCaller] call _unlockRandomWeapon;

        [_town, "CacheCompleted", true] call _setTownVar;
        [_town, "CacheBobFound", true] call _setTownVar;
        _target setVariable ["TEH_CacheContactUnlocked", false, true];

        _success
    },
    _actionArgs,
    2,
    true,
    true,
    "",
    format [
        "%1 && {_target getVariable ['TEH_CacheContactUnlocked', false]}",
        _commonCondition
    ],
    3,
    false,
    "",
    ""
];