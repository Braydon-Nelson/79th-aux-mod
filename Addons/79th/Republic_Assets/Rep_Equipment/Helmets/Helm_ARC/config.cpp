class CfgPatches
{
	class 79th_Helmet_ARC
	{
		name = "79th Helmet ARC";
		author = "Bravocado & Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"79_Clone_Helmet_ARC"};
	};
};

class CfgWeapons
{
	class HeadgearItem;
	class JLTS_CloneHelmetARC;
	class 79_Clone_Helmet_ARC: JLTS_CloneHelmetARC
	{
		displayName = "[79th] Clone Trooper Helmet (ARC)";
		scope = 2;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		CBRN_protection = 1;
		weaponPoolAvailable = 1;
		hiddenSelectionsTextures[]={"\79th\Data\Helmets\79thHelmet_ARC.paa"};
		model = "\MRC\JLTS\characters\CloneArmor2\CloneHelmetARC.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			hiddenSelections[] = {"camo1"};
			uniformModel = "\MRC\JLTS\characters\CloneArmor2\CloneHelmetARC.p3d";
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