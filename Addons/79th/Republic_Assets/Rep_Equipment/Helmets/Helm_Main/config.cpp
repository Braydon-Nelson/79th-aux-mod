class CfgPatches
{
	class 79th_Helmet
	{
		name = "79th Helmet";
		author = "Bravocado & Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"79_Clone_Helmet"};
	};
};

class CfgWeapons
{
	class HeadgearItem;
	class JLTS_CloneHelmetP2;
	class 79_Clone_Helmet: JLTS_CloneHelmetP2
	{
		displayName = "[79th] Clone Trooper Helmet (P2)";
		hiddenSelectionsTextures[]={"\79th\Data\Helmets\Clone_helmet_79th_co.paa"};
		scope = 2;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		CBRN_protection = 1;
		weaponPoolAvailable = 1;
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
			hiddenSelections[] = {"camo1"};
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
};