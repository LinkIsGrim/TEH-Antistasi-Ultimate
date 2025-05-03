#include "script_component.hpp"

class CfgPatches
{
    class loot_vehicle
    {
        name = "Loot Vehicle";
        author = "[1Tac] Bear, dawidseksi, atomsky";
        authorUrl = "http://www.teamonetactical.com/";
        requiredVersion = 1.0;
        requiredAddons[] = { "ace_interact_menu" };
        units[] = {};
        weapons[] = {};
    };
};

class CfgFunctions
{
    class loot_vehicle
    {
        class Core
        {
            file = QPATHTOFOLDER(functions);
            class transferToVehicle {};
        };
    };
};

class Extended_PostInit_EventHandlers
{
    class loot_vehicle
    {
        init = "call compile preprocessFileLineNumbers '\x\A3A\addons\loot_vehicle\XEH_postInit.sqf'";
    };
};