#include "..\..\script_component.hpp"
FIX_LINE_NUMBERS()

params ["_target", "_groupConfig"];

// Settings
private _spawnDistance = 400 + random 200; // 400 to 600 meters
private _teamSize = 4; // Adjust as needed
private _side = Occupants; // OPFOR
private _groupType = "O_Soldier_F"; // Basic OPFOR rifleman, can customize

// Direction and position
private _dirToPlayer = getDir _target;
private _spawnDir = _dirToPlayer + 180 + (random 60 - 30); // +/- 30° cone behind
private _spawnPos = _target getPos [ _spawnDistance, _spawnDir ];

// Ensure position is safe
_spawnPos = [_spawnPos, 0, 50, 5, 0, 20, 0] call BIS_fnc_findSafePos;

// Create group
private _grp = createGroup _side;
private _units = [];

// Spawn units
for "_i" from 1 to _teamSize do {
    private _unit = _grp createUnit [_groupType, _spawnPos, [], 5, "NONE"];
    _units pushBack _unit;
    _unit setUnitPos "MIDDLE"; // crouched
    _unit setBehaviour "STEALTH";
    _unit setSpeedMode "LIMITED"; // walk
    _unit enableAI "PATH";
};

// Set group behavior
_grp setCombatMode "GREEN";     // Only fire if fired upon
_grp setBehaviour "STEALTH";    // Careful, avoid detection
_grp setSpeedMode "LIMITED";    // Walk
_grp setFormation "STAG COLUMN";

// Make them move to player
_grp move (getPos _target);
