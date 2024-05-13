class CfgPatches
{
	class 79th_Helmet_ARF
	{
		name = "79th Helmet ARF";
		author = "Bravocado & Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"79_Clone_Helmet_ARF";"79_Clone_Helmet_ARF_MBC";};
	};
};

class CfgWeapons
{
	class HeadgearItem;
	class 3AS_ARF_Helmet;
	class 79_Clone_Helmet_ARF: 3AS_ARF_Helmet
	{
		displayName = "[79th] Clone Trooper Helmet (ARF)";
		scope = 2;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		CBRN_protection = 1;
		weaponPoolAvailable = 1;
		hiddenSelectionsTextures[]={"\79th\Data\Helmets\79thHelmet_ARF.paa"};
		Model = "3AS\3AS_Characters\Clones\Headgear\3AS_Clone_ARF.p3d";
		picture = "3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			hiddenSelections[] = {"camo"};
			uniformModel = "3AS\3AS_Characters\Clones\Headgear\3AS_Clone_ARF.p3d";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.05;
				};
			};
		};
	};
	class 79_Clone_Helmet_ARF_MBC: 79_Clone_Helmet_ARF
	{
		displayName = "[79th] Clone Trooper Helmet (ARF MBC)";
		scope = 2;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		CBRN_protection = 1;
		weaponPoolAvailable = 1;
		hiddenSelectionsTextures[]={"\79th\Data\Helmets\79thHelmet_ARFmbc.paa"};
		Model = "3AS\3AS_Characters\Clones\Headgear\3AS_Clone_ARF.p3d";
		picture = "3AS\3AS_Characters\Clones\Headgear\ui\ARF_UI_CA.paa";
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			hiddenSelections[] = {"camo"};
			uniformModel = "3AS\3AS_Characters\Clones\Headgear\3AS_Clone_ARF.p3d";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
		};
	};
};