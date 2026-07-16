/*
    Author: [Håkon]
    Description:
        Broadcast source availability in garage to all clients

    Arguments:
    0. <Index> Source type to check and broadcast

    Return Value:
    <nil>

    Scope: Server
    Environment: Any
    Public: No
    Dependencies: HR_GRG_Sources

    Example: [0] call HR_GRG_fnc_declairSources;

    License: APL-ND
*/
#include "defines.inc"
FIX_LINE_NUMBERS()
params ["_source"];
if (!isServer) exitWith {};

#define AmmoSource 0
#define FuelSource 1
#define RepairSource 2

//this only mitigates an error during the gamestart when this function is called before parameters are initialized
//otherwise (or if fixed), call [!((HR_GRG_Sources#0) isEqualTo []),false] select TEH_VehicleAmmo
private _ammo = !((HR_GRG_Sources#0) isEqualTo []);
if (isNil "TEH_VehicleAmmo") then {
    _ammo = false;
} else {
    _ammo = [_ammo,false] select TEH_VehicleAmmo;
};

switch _source do {
    case AmmoSource: { HR_GRG_hasAmmoSource = _ammo; publicVariable "HR_GRG_hasAmmoSource" };
    case FuelSource: { HR_GRG_hasFuelSource = !((HR_GRG_Sources#1) isEqualTo []); publicVariable "HR_GRG_hasFuelSource" };
    case RepairSource: { HR_GRG_hasRepairSource = !((HR_GRG_Sources#2) isEqualTo []); publicVariable "HR_GRG_hasRepairSource" };
default { Info_1("Invalid source type: %1", _source) };
};
