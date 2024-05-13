class CfgPatches
{
	class 79th_Sidearm_Holster
	{
		name = "79th Sidearm Holster";
		author = "Bravocado & Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {"79_Clone_Holster"};
	};
};

class CfgWeapons
{
	class VestItem;
	class JLTS_CloneVestHolster;
	class 79_Clone_Holster: JLTS_CloneVestHolster
	{
		displayName = "[79th] Sidearm Holster";
		scope = 2;
		class ItemInfo : VestItem
		{
			uniformmodel = "\MRC\JLTS\characters\CloneArmor2\CloneVestHolster.p3d";
			vestType="Rebreather";
			containerClass = "Supply100";
			mass=80;
		};
	};
};