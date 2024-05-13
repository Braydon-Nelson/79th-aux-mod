class CfgPatches
{
	class 79th_Backpack
	{
		name = "79th Backpack";
		author = "PraetorPanda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"79_Clone_Backpack","Aux79_Backpack_straps"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class JLTS_Clone_backpack;
	class 79_Clone_Backpack: JLTS_Clone_backpack
	{
		displayName = "[79th] Clone Backpack";
		scope = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[]={"\79th\Data\Backpacks\79thBackpack.paa"};
		maximumLoad = 280;
		mass = 50;
		hiddenSelections[] = {"camo1"};
	};
	class 79_Clone_Backpack_MBC: 79_Clone_Backpack
	{
		displayName = "[79th] Clone Backpack (MBC)";
		scope = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[]={"\79th\Data\Backpacks\79thBackpackmbc.paa"};
		maximumLoad = 280;
		mass = 50;
		hiddenSelections[] = {"camo1"};
	};
	class Aux79_Backpack_straps : 79_Clone_Backpack
	{
		displayName = "[79th] Strapped Backpack";
		model="\MRC\JLTS\characters\CloneArmor\CloneBackpackStraps.p3d";
	};
};