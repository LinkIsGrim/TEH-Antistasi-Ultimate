/*  Handles the despawn and cleanup of dead units
*   Params:
*       _victim : OBJECT : The dead unit
*
*   Returns:
*       Nothing
*/

params ["_victim"];
#include "..\..\script_component.hpp"
FIX_LINE_NUMBERS()
private _group = group _victim;

Debug("PostMortem Called");
if (isnull _victim)exitwith{Error("Function failed called with null param.")};

if (isNull _group) then
{
    Debug_1("Group for victim :: %1, no group found! Removing from Statics list.",_victim);

	if (_victim in staticsToSave) then
    {
        staticsToSave = staticsToSave - [_victim];
        publicVariable "staticsToSave";
    };
};

private _veh = vehicle _victim;
if (_veh isKindOf "StaticWeapon") then {
	moveOut _victim;
};