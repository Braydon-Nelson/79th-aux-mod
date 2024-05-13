class CfgPatches
{
	class 79th_Helmet_Pilot
	{
		name = "79th Helmet Pilot";
		author = "PraetorPanda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"79_Pilot_HelmetP2","79th_NVG_Chip"};
	};
};

class CfgWeapons
{
	class HeadgearItem;
	class 3as_P2_Pilot_helmet;
	class 79_Pilot_HelmetP2 : 3as_P2_Pilot_helmet
	{
	   	author  = "PraetorPanda";
	   	dlc     = "79th Aux Mod";
	   	scope   = 2;
	   	scopeCurator = 2;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.40;
		CBRN_protection = 1;
		Headlamps_Preset=Headlamps_Preset_Helmet_Surefire_HL1_Left;
		allowedFacewear[] = {};
		subItems[] = {"79th_NVG_Chip_Pilot"};
	   	displayName = "[79th] Pilot Helmet (P2)";
		hiddenSelectionsTextures[]=
		{
        "79th\Data\Helmets\79thHelmet_Pilot.paa",
        "",
        "3AS\3AS_Characters\Clones\Headgear\Textures\PilotP2\Phase_2_Pilot_Tubes_co.paa",
        "79th\Data\Helmets\79thHelmet_Pilot.paa",
        ""
		};
	   	class ItemInfo : HeadgearItem
	   	{
	   		mass = 30;
	   		uniformModel = "\3AS\3AS_Characters\Clones\Headgear\3AS_Clone_Pilot_P2.p3d";
	   		hiddenSelections[]={"Camo", "Camo2", "Camo3", "Camo4", "Camo5"};
	   		modelSides[] = {3,1};
	   		class HitpointsProtectionInfo
	   		{
	   			class Face
	   			{
	   				armor = 8;
	   				hitpointName = "HitFace";
	   				passThrough = 0.03;
	   			};
	   			class Head
	   			{
	   				armor = 8;
	   				hitPointName = "HitHead";
	   				passThrough = 0.03;
	   			};
	   			class Neck
	   			{
	   				armor = 8;
	   				hitpointName = "HitNeck";
	   				passThrough = 0.03;
	   			};
	   		};
	   	};
	};
};