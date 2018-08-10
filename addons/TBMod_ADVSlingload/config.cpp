class CfgPatches
{
    class TBMod_ADVSlingload
    {
        author = "Eric Ruhland";
        authorUrl = "tacticalbacon.de";
        
        weapons[] = {};
        units[] = {};
        ammo[] = {};
        
        requiredVersion = 1.84;
        requiredAddons[] = {"TBMod_main"};
        
        addonRootClass = "TBMod_main";
    };
};

class Extended_PostInit_EventHandlers
{
    class TBMod_ADVSlingload
    {
        clientInit = "call compile preprocessFileLineNumbers '\TBMod_ADVSlingload\XEH_postClientInit.sqf'";
    };
};

#include "CfgFunctions.hpp"