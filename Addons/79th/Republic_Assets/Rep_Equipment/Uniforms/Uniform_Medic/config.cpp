class CfgPatches
{
	class 79th_Medic_Uniform
	{
		name = "79th Medic Uniform";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"79th_CloneArmor_Medic"};
		weapons[] = {"79th_Clone_Medic"};
	};
};

class CfgVehicles
{
	class 79_Base_Uniform;
	class 79th_CloneArmor_Medic: 79_Base_Uniform
    {
        author = "PraetorPanda";
        dlc = "79th Aux Mod";
        scope = 1;
        scopeCurator = 0;
        uniformClass = "79th_Clone_Medic";
        model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
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
            "camo1",
            "camo2"
        };
        hiddenSelectionsTextures[] = {
            "\79th\Data\Uniforms\snth_medic_armor_1_co.paa",
            "\79th\Data\Uniforms\snth_armor_2_co.paa"
        };
        class Wounds {
            tex[] = {};
            mat[] = {
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor1.rvmat",
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat",
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat",
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor2.rvmat",
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat",
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat",
                "A3\Characters_F\Common\Data\basicbody.rvmat",
                "A3\Characters_F\Common\Data\basicbody_injury.rvmat",
                "A3\Characters_F\Common\Data\basicbody_injury.rvmat",
                "a3\characters_f\heads\data\hl_white.rvmat",
                "a3\characters_f\heads\data\hl_white_injury.rvmat",
                "a3\characters_f\heads\data\hl_white_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
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
                "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"
            };
        };
        editorSubcategory = "79_clones_white";
    };
};

class CfgWeapons
{
	class UniformItem;
	class JLTS_CloneArmor;
	class 79th_Clone_Medic : JLTS_CloneArmor
   {
   	author  = "PraetorPanda";
   	dlc             = "79th Aux Mod";
   	scope   = 2;
   	scopeCurator = 2;
   	displayName = "[79th] Clone Armor (Medic)";
   	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
   	class ItemInfo : UniformItem
   	{
   		uniformModel = "-";
		uniformType = "Neopren";
   		uniformClass = "79th_CloneArmor_Medic";
   		containerClass  = "Supply150";
   		mass = 40;
   	};
   };
};