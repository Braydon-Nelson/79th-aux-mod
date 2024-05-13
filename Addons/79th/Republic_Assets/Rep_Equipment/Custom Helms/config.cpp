class CfgPatches
{
	class 79th_Custom_Helms
	{
		name = "79th Custom Helmets";
		author = "Bravocado & Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] =
			{
				"79_Clone_Helmet_Bravocado",
				"79_Clone_Helmet_Panda",
				"79_Clone_Helmet_Vinokurov",
				"79_Clone_Helmet_Prophet",
				"79_Clone_Helmet_Hesh",
				"79_Clone_Helmet_Horizon",
				"79_Clone_Helmet_Badger",
				"79_Clone_Helmet_Ringer",
				"79_Clone_Helmet_Gypsy",
				"79_Clone_Helmet_Bravocado_ARC"
				//"7Whatever the Name is of the custom",
			};
	};
};

// Helmet Objects//
class CfgEditorSubcategories
{
	class 79th_helmets {
		displayname = "Helmets"};
};

class CfgVehicles
{
	class headgear_base_f;
	class 79th_headgear_base : headgear_base_f
	{
		scope = 0;
		scopecurator = 0;
		scopearsenal = 0;
		displayname = "[79th] Headgear";
		editorcategory = "79th_Rep_Assets";
		editorsubcategory = "79th_helmets";
		vehicleclass = "ItemsHeadgear";
		class transportItems
		{
			class helmet
			{
				name = "";
				count = 1;
			};
		};
	};

	class 79th_headgear_bravocado : 79th_headgear_base
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "[79th] Helmet (Bravocado)";
		class transportItems
		{
			class helmet
			{
				name = "79_Clone_Helmet_Bravocado";
				count = 1;
			};
		};
	};

	class 79th_headgear_panda : 79th_headgear_base
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "[79th] Helmet (Panda)";
		class transportItems
		{
			class helmet
			{
				name = "79_Clone_Helmet_Panda";
				count = 1;
			};
		};
	};
};

class CfgWeapons
{
	class HeadgearItem;

	// ---------------------------------------------------------------------------------
	//                                  Copy / Paste
	// ---------------------------------------------------------------------------------

	/*
	class 79_Clone_Helmet_NAME: 79_Clone_Helmet
	{
		author 	= "";
		dlc		= "79th Aux Mod";
		scope 	= 2;
		scopeCurator = 2;
		displayName = "[79th] Clone Custom Helmet (NAME)";
		hiddenSelectionsTextures[] = {"\79th\Data\Helmets\79thHelmet_NAME.paa"};
	};

	*/

	// ---------------------------------------------------------------------------------
	//                                    Vanguard
	// ---------------------------------------------------------------------------------
	class JLTS_CloneHelmetP2MC;
	class 79_Clone_Helmet_Bravocado : JLTS_CloneHelmetP2MC
	{
		displayName = "[79th] Clone Custom Helmet (Bravocado)";
		scope = 2;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		CBRN_protection = 1;
		weaponPoolAvailable = 1;
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\79th\Data\Helmets\79thHelmet_Bravocado.paa"};
		class ItemInfo : HeadgearItem
		{
			mass = 10;
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneHelmetP2MC.p3d";
			hiddenSelections[] = {"camo1"};
			allowedSlots[] = {801, 901, 701, 605};
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
	class 79_Clone_Helmet;
	class 79_Clone_Helmet_Panda : 79_Clone_Helmet
	{
		author = "Bravocado & Panda";
		dlc = "79th Aux Mod";
		scope = 2;
		scopeCurator = 2;
		displayName = "[79th] Clone Custom Helmet (Panda)";
		hiddenSelectionsTextures[] =
			{
				"\79th\Data\Helmets\79thHelmet_Panda.paa"};
	};
	class 79_Clone_Helmet_Vinokurov : 79_Clone_Helmet
	{
		author = "Bravocado & Panda";
		dlc = "79th Aux Mod";
		scope = 2;
		scopeCurator = 2;
		displayName = "[79th] Clone Custom Helmet (Vinokurov)";
		hiddenSelectionsTextures[] =
			{
				"\79th\Data\Helmets\79thHelmet_Vinokurov.paa"};
	};
	class 79_Clone_Helmet_Hesh : 79_Clone_Helmet
	{
		author = "Bravocado & Panda";
		dlc = "79th Aux Mod";
		scope = 2;
		scopeCurator = 2;
		displayName = "[79th] Clone Custom Helmet (Hesh)";
		hiddenSelectionsTextures[] =
			{
				"\79th\Data\Helmets\79thHelmet_Hesh.paa"};
	};
	class 79_Clone_Helmet_Gypsy : 79_Clone_Helmet
	{
		author = "Bravocado & Panda";
		dlc = "79th Aux Mod";
		scope = 2;
		scopeCurator = 2;
		displayName = "[79th] Clone Custom Helmet (Gypsy)";
		hiddenSelectionsTextures[] =
			{
				"\79th\Data\Helmets\79thHelmet_Gypsy.paa"};
	};
	class 79_Clone_Helmet_Horizon : 79_Clone_Helmet
	{
		author = "Bravocado & Panda";
		dlc = "79th Aux Mod";
		scope = 2;
		scopeCurator = 2;
		displayName = "[79th] Clone Custom Helmet (Horizon)";
		hiddenSelectionsTextures[] =
			{
				"\79th\Data\Helmets\79thHelmet_Horizon.paa"};
	};
	class 79_Clone_Helmet_Prophet : 79_Clone_Helmet
	{
		author = "Bravocado & Panda";
		dlc = "79th Aux Mod";
		scope = 2;
		scopeCurator = 2;
		displayName = "[79th] Clone Custom Helmet (Prophet)";
		hiddenSelectionsTextures[] =
			{
				"\79th\Data\Helmets\79thHelmet_Prophet.paa"};
	};
	class 79_Clone_Helmet_Badger : 79_Clone_Helmet
	{
		author = "Bravocado & Panda";
		dlc = "79th Aux Mod";
		scope = 2;
		scopeCurator = 2;
		displayName = "[79th] Clone Custom Helmet (Badger)";
		hiddenSelectionsTextures[] =
			{
				"\79th\Data\Helmets\79thHelmet_Badger.paa"};
	};
	class 79_Clone_Helmet_Ringer : 79_Clone_Helmet
	{
		author = "Bravocado & Panda";
		dlc = "79th Aux Mod";
		scope = 2;
		scopeCurator = 2;
		displayName = "[79th] Clone Custom Helmet (Ringer)";
		hiddenSelectionsTextures[] =
			{
				"\79th\Data\Helmets\79thHelmet_Ringer.paa"};
	};
	class 79_Clone_Helmet_ARC;
	class 79_Clone_Helmet_Bravocado_ARC : 79_Clone_Helmet_ARC
	{
		author = "Bravocado & Panda";
		dlc = "79th Aux Mod";
		scope = 2;
		scopeCurator = 2;
		displayName = "[79th] Clone Custom Helmet (Bravocado ARC)";
		hiddenSelectionsTextures[] =
			{
				"\79th\Data\Helmets\79thHelmet_BravocadoARC.paa"};
	};
};
