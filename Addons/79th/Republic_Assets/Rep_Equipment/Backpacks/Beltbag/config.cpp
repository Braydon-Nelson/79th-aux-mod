class CfgPatches
{
	class 79th_Beltbag
	{
		name = "79th Beltbag";
		author = "PraetorPanda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"79_Clone_Beltbag"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class JLTS_Clone_belt_bag;
	class 79_Clone_Beltbag: JLTS_Clone_belt_bag
	{
		displayName = "[79th] Clone Trooper Belt Bag";
		scope = 2;
		scopeCurator = 2;
		maximumLoad = 180;
		mass = 50;
		hiddenSelections[] = {"camo1"};
	};
};