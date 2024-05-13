class CfgPatches
{
    class 79th_Factions
    {
        name = "79th Factions";
        author = "Bravocado & Panda";
        requiredVersion = 0.1;
        // When any of the addons is missing, pop-up warning will appear when launching the game.
        requiredAddons[] = {};
        // List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
        units[] = {};
        // List of weapons (CfgWeapons classes) contained in the addon.
        weapons[] = {};
    };
};

class CfgFactionClasses
{
	class 79th_Republic
    {
        displayName="79th Republic";
        priority=1;
        side = 1;
        icon = "";
    };
    class 79th_CIS
    {
        displayName="79th CIS";
        priority=1;
        side = 0;
        icon = "";
    };
};