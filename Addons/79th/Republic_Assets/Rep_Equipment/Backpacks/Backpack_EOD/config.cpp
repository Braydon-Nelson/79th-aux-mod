class CfgPatches
{
	class 79th_Backpack_EOD
	{
		name = "79th Backpack EOD";
		author = "Bravocado & Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"79_Clone_Backpack_eod","Aux79_Backpack_eod_straps"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class JLTS_Clone_backpack_eod;
	class 79_Clone_Backpack_eod: JLTS_Clone_backpack_eod
	{
		displayName = "[79th] Clone Backpack (EOD)";
		scope = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[]={"\79th\Data\Backpacks\79thBackpackEOD.paa"};
		maximumLoad = 475;
		mass = 50;
		hiddenSelections[] = {"camo1"};
	};
	
	class Aux79_Backpack_eod_straps : 79_Clone_Backpack_eod
	{
		displayName = "[79th] Strapped Backpack (EOD)";
		model="\MRC\JLTS\characters\CloneArmor\CloneBackpackStraps.p3d";
	};
};