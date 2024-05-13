class CfgPatches
{
	class 79th_RTT
	{
		name = "79th RTT";
		author = "Bravocado & Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class 3AS_RTT_Wheeled;
	class aux79th_RTT : 3AS_RTT_Wheeled
	{
		faction = "aux79th_79th_Aux_Mod";
		side = 1;
		displayName = "RTT";
		hiddenSelectionsTextures[] = {"3as\3as_rtt\data\rtt\exterior_co.paa"};
		crew = "aux79th_trooper";
		typicalCargo[] = {"aux79th_trooper"};
	};
};