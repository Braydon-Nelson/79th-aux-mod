class CfgPatches
{
	class 79th_Helmet_RC
	{
		name = "79th Helmet RC";
		author = "Bravocado & Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"79_Clone_Helmet_RC"};
	};
};

class CfgWeapons
{
	class HeadgearItem;
	class 3AS_H_Katarn_Helmet;
	class 79_Clone_Helmet_RC: 3AS_H_Katarn_Helmet
	{
		displayName = "[79th] Clone Trooper Helmet (RC)";
		scope = 2;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		CBRN_protection = 1;
		weaponPoolAvailable = 1;
		hiddenSelectionsTextures[]={"\79th\Data\Helmets\79thHelmet_Commando.paa", "\3AS\3AS_Characters\Commando\data\Katarn_Helmet_Standard_CO.paa"};
		model = "\3AS\3AS_Characters\Commando\3AS_Katarn_Helmet.p3d";
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			hiddenSelections[] = {"Camo", "Camo1"};
			uniformModel = "\3AS\3AS_Characters\Commando\3AS_Katarn_Helmet.p3d";
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