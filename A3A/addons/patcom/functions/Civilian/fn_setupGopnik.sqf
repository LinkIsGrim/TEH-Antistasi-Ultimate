params ["_unit"];

private _uniforms = [
    "U_C_E_LooterJacket_01_F",
    "U_I_L_Uniform_01_tshirt_black_F",
    "U_I_L_Uniform_01_tshirt_skull_F",
    "U_I_L_Uniform_01_tshirt_sport_F",
    "U_I_C_Soldier_Bandit_2_F",
    "U_I_C_Soldier_Bandit_3_F"
] select { isClass (configFile >> "CfgWeapons" >> _x) };

if (_uniforms isEqualTo []) then {
    _uniforms = ["U_C_Poloshirt_blue"];
};

private _headgear = [
    "H_Cap_blk",
    "H_Cap_grn",
    "H_Bandanna_camo",
    "H_Bandanna_gry",
    "H_Hat_grey"
] select { isClass (configFile >> "CfgWeapons" >> _x) };

private _weaponPresets = [
    // weapon, magazine, magazine count
    ["hgun_Pistol_01_F", "10Rnd_9x21_Mag", 4],
    ["hgun_P07_F", "16Rnd_9x21_Mag", 3],
    ["sgun_HunterShotgun_01_sawedoff_F", "2Rnd_12Gauge_Pellets", 5],
    ["sgun_HunterShotgun_01_F", "2Rnd_12Gauge_Pellets", 5]
] select {
    isClass (configFile >> "CfgWeapons" >> (_x # 0))
    && {isClass (configFile >> "CfgMagazines" >> (_x # 1))}
};

if (_weaponPresets isEqualTo []) then {
    _weaponPresets = [["hgun_P07_F", "16Rnd_9x21_Mag", 3]];
};

_unit setVariable ["TEH_IsGopnik", true, true];
_unit setVariable ["spawner", false, true];
_unit setVariable ["TEH_GopnikActivated", false, true];
_unit setVariable ["TEH_GopnikWeaponPreset", selectRandom _weaponPresets, true];

removeAllWeapons _unit;
removeAllItems _unit;
removeAllAssignedItems _unit;
removeUniform _unit;
removeVest _unit;
removeBackpack _unit;
removeHeadgear _unit;
removeGoggles _unit;

_unit forceAddUniform (selectRandom _uniforms);

if !(_headgear isEqualTo []) then {
    _unit addHeadgear (selectRandom _headgear);
};

[_unit,selectRandom ["RussianHead_1","RussianHead_2","RussianHead_3","RussianHead_4","RussianHead_5"],selectRandom ["male01rus","male02rus","male03rus"]] call BIS_fnc_setIdentity;

_unit linkItem "ItemWatch";

_unit setCaptive true;
_unit setBehaviour "SAFE";
_unit setCombatMode "GREEN";
_unit allowFleeing 0.4;

_unit addAction [
    "Hello",
    {
        params ["_target", "_caller"];

        private _captiveLines = [
            "(Angry Russian) Иди отсюда, пока по шее не получил.",
            "(Angry Russian) Слышь, гражданский, проходи мимо.",
            "(Angry Russian) Чё смотришь? Дорогу забыл?",
            "(Angry Russian) Вали по-тихому, пока настроение нормальное.",
            "(Angry Russian) Не стой рядом. У нас тут культурный отдых.",
            "(Angry Russian) Тебе тут не рады, понял?",
            "(Angry Russian) Давай ногами работай, пока целый.",
            "(Angry Russian) Проходи, мужик. Просто проходи.",
            "(Angry Russian) Не отсвечивай, и всё будет ровно.",
            "(Angry Russian) Ты нас не видел, мы тебя не трогали."
        ];

        private _armedLines = [
            "(Cautious Russian) Слышь, давай без беспредела.",
            "(Cautious Russian) Спокойно, командир. Мы тут просто стоим.",
            "(Cautious Russian) Без резких движений, понял?",
            "(Cautious Russian) Давай разойдёмся красиво.",
            "(Cautious Russian) Тихо-тихо, Рэмбо местный.",
            "(Cautious Russian) Не начинай, и мы не начнём.",
            "(Cautious Russian) Держи дистанцию, военный.",
            "(Cautious Russian) У нас тут свои дела, у тебя свои."
        ];

        private _lines = if (captive _caller) then {
            _captiveLines
        } else {
            _armedLines
        };

        [_target, selectRandom _lines] remoteExec ["globalChat", _caller];
        systemChat "These wolves are none too friendly.";

        true
    },
    nil,
    1.5,
    true,
    true,
    "",
    "alive _target && alive _this && {_this distance _target < 3} && {!(_target getVariable ['TEH_GopnikActivated', false])}",
    3,
    false,
    "",
    ""
];

_unit addEventHandler ["FiredNear", {
    params ["_unit", "_firer", "_distance"];

    if (!local _unit) exitWith {};
    if (!alive _unit) exitWith {};
    if (_unit getVariable ["TEH_GopnikActivated", false]) exitWith {};
    if (_distance > 100) exitWith {};

    _unit setVariable ["TEH_GopnikActivated", true, true];
    _unit removeEventHandler [_thisEvent, _thisEventHandler];

    [_unit, _firer] spawn {
        params ["_unit", "_firer"];

        sleep (0.5 + random 2.5);

        if (!alive _unit) exitWith {};

        private _preset = _unit getVariable ["TEH_GopnikWeaponPreset", []];
        if (_preset isEqualTo []) exitWith {};

        _preset params ["_weapon", "_mag", "_magCount"];

        _unit setCaptive false;

        for "_j" from 1 to _magCount do {
            _unit addMagazine _mag;
        };

        _unit addWeapon _weapon;
        _unit selectWeapon _weapon;
        _unit allowFleeing 0.1;

        if (!isNull _firer && {alive _firer} && (leader (group _unit) == _unit)) then {
            private _group = group _unit;
            private _searchPos = getPosATL _firer;

            _unit reveal [_firer, 2.5];
            _unit doTarget _firer;
            _unit doMove _searchPos;

            private _wp = _group addWaypoint [_searchPos, 30];
            _wp setWaypointType "SAD";
            _wp setWaypointBehaviour "COMBAT";
            _wp setWaypointCombatMode "RED";
            _wp setWaypointSpeed "FULL";
            _wp setWaypointCompletionRadius 3;

            _group setCurrentWaypoint _wp;
        };
    };
}];