class CfgPatches
{
	class 79th_RX_200
	{
		name = "79th RX-200";
		author = "Bravocado & Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class 3AS_RX200_Base;
	class aux79th_RX_200 : 3AS_RX200_Base
	{
		faction = "aux79th_79th_Aux_Mod";
		side = 1;
		displayName = "RX 200";
		hiddenSelectionsTextures[] = {"3as\3as_rx200\data\defaultmaterial_co.paa"};
		crew = "aux79th_trooper";
		typicalCargo[] = {"aux79th_trooper"};
	};
};