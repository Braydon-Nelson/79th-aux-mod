class CfgPatches
{
	class 79th_AV_7
	{
		name = "79th AV-7";
		author = "Bravocado & Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class 3AS_AV7;
	class aux79th_AV_7 : 3AS_AV7
	{
		faction = "aux79th_79th_Aux_Mod";
		side = 1;
		displayName = "AV 7";
		hiddenSelectionsTextures[] = {"3as\3as_av7\data\av7_co.paa"};
		crew = "aux79th_trooper";
		typicalCargo[] = {"aux79th_trooper"};
	};
};