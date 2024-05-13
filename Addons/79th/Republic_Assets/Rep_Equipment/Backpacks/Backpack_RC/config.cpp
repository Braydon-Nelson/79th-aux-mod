class CfgPatches
{
	class 79th_Backpack_RC
	{
		name = "79th Backpack RC";
		author = "Bravocado & Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"79_Clone_Backpack_RC"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class 3AS_B_Katarn_Backpack;
	class 79_Clone_Backpack_RC: 3AS_B_Katarn_Backpack
	{
		displayName = "[79th] Clone Backpack (RC)";
		scope = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[]={"\79th\Data\Backpacks\79th_commandobackpack.paa"};
		maximumLoad = 475;
		mass = 50;
		hiddenSelections[] = {"Camo"};
	};

};