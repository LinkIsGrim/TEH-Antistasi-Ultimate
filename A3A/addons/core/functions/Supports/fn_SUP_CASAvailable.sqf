/*  Get CAS support selection weight against target

Arguments:
    <OBJECT> Target object
    <SIDE> Side to send support from
    <SCALAR> Max resource spend (not currently used)
    <ARRAY> Array of strings of available types for this faction

Return value:
    <SCALAR> Weight value, 0 for unavailable or useless
*/

#include "..\..\script_component.hpp"
FIX_LINE_NUMBERS()

params ["_target", "_side", "_maxSpend", "_availTypes"];

if (_target isKindOf "Wheeled_APC_F" || _target isKindOf "Tank" || _target isKindOf "CUP_Ural_BaseTurret") then {     // Don't spawn to attack meatsacks, but re-use active supports
	// Against vehicles and statics, use more frequently against more dangerous stuff
	private _threat = A3A_groundVehicleThreat getOrDefault [typeOf _target, 0];
	0.001 + _threat / 80;
} else {
	0;
};
