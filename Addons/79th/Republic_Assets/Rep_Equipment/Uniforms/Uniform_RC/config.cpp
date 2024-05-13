class CfgPatches
{
	class 79th_RC_Uniform
	{
		name = "79th RC Uniform";
		author = "Bravocado & Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {"Aux79_Uniform_RC"};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {"79th_Clone_RC"};
	};
};

class CfgVehicles
{
	class 3AS_Rep_Commando_base_F;
	class Aux79_Uniform_RC: 3AS_Rep_Commando_base_F
	{
	    author = "Bravocado & Panda";
	    dlc = "79th Aux Mod";
	    scope = 1;
	    scopeCurator = 0;
	    uniformClass = "79th_Clone_Trooper";
	    model = "\3AS\3AS_Characters\Commando\3AS_Katarn_Armor.p3d";
	    weapons[] = {
	        "Throw",
	        "Put"
	    };
	    respawnWeapons[] = {
	        "Throw",
	        "Put"
	    };
	    Items[] = {};
	    RespawnItems[] = {};
	    magazines[] = {};
	    respawnMagazines[] = {};
	    hiddenSelections[] = {
	        "Camo", "Camo1",
	    };
	    hiddenSelectionsTextures[] = {
	        "\79th\Data\Uniforms\snth_commandoarmor.paa",
			"\3AS\3AS_Characters\Commando\data\Katarn_Undersuit_CO.paa",
	    };
	    class Wounds {
	        tex[] = {};
	        mat[] = {
	            "A3\Characters_F\BLUFOR\Data\clothing1.rvmat",
				"A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat",
				"A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\characters_f\common\data\coveralls.rvmat",
				"A3\Characters_F\Common\Data\coveralls_injury.rvmat",
				"A3\Characters_F\Common\Data\coveralls_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
	        };
	    };
	    editorSubcategory = "79_clones_white";
	};
};

class CfgWeapons
{
	class UniformItem;
	class 3AS_Rep_Commando_base_F;
	class 79th_Clone_RC : 3AS_Rep_Commando_base_F
	{
		author  = "PraetorPanda";
		dlc             = "79th Aux Mod";
		scope   = 2;
		scopeCurator = 2;
		displayName = "[79th] Clone RC Armor";
		picture = "\3AS\3AS_Characters\Commando\data\UI\Katarn_Uniform_Unmarked_UI_ca.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformType = "Neopren";
			uniformClass = "Aux79_Uniform_RC";
			containerClass  = "Supply150";
			mass = 40;
		};
	};
};