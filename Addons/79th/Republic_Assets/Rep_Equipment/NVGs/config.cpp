class CfgPatches
{
	class 79th_NVGs
	{
		name = "79th NVGs";
		author = "RevanHilts";
		requiredVersion = 0.01;
		requiredAddons[] = 
		{
			"A3_Weapons_F",
			"JLTS_core"
		};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = 
		{
			"Aux79_NVG_Chip",
			"Aux79_NVG_Chip_AB",
			"Aux79_NVG_Chip_Pilot",
			"79th_NVG_Chip_Snow"
		};
	};
};

class CfgWeapons
{
	class JLTS_NVG_droid_chip_1;
	class NVGoggles;
	
	class Aux79_NVG_Chip: NVGoggles
    {
        author="Bravocado & Panda";
        displayName="[79th] NVGs (P2)";
        modelOptics="\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";
        model="\79th\Data\NVGs\79th_NVG_Visor.p3d";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_interior_ui_ca.paa";
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\79th\Data\NVGs\NVG_Visor_co.paa"
        };
        visionMode[]=
        {
            "Normal",
            "NVG"
        };
        thermalMode[]={0,1};
        class ItemInfo
        {
            type=616;
            uniformModel="\79th\Data\NVGs\79th_NVG_Visor.p3d";
            modelOff="";
            mass=20;
            hiddenSelections[]=
            {
                "camo"
            };
        };
    };
	
	class Aux79_NVG_Chip_Pilot: NVGoggles
    {
        author="RevanHilts";
        displayName="[79th] NVGs (Aviation)";
        modelOptics="\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";
        model="\79th\Data\NVGs\Pilot_NVG_01.p3d";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_interior_ui_ca.paa";
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\79th\Data\NVGs\Pilot_NVG_co.paa"
        };
        visionMode[]=
        {
            "Normal",
			"NVG",
			"TI"
        };
        thermalMode[]={0,1};
        class ItemInfo
        {
            type=616;
            uniformModel="\79th\Data\NVGs\Pilot_NVG_01.p3d";
            modelOff="";
            mass=20;
            hiddenSelections[]=
            {
                "camo"
            };
        };
    };
	
    class Aux79_NVG_Chip_AB: NVGoggles
    {
        author="RevanHilts";
        displayName="[79th] NVGs (Airborne)";
        modelOptics="\MRC\JLTS\Core_mod\nvg_optic_dummy.p3d";
        model="\79th\Data\NVGs\Airbourne_NVG_01.p3d";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_interior_ui_ca.paa";
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\79th\Data\NVGs\Airbourne_NVG_co.paa"
        };
        visionMode[]=
        {
            "Normal",
			"NVG",
			"TI"
        };
        thermalMode[]={0,1};
        class ItemInfo
        {
            type=616;
            uniformModel="\79th\Data\NVGs\Airbourne_NVG_01.p3d";
            modelOff="";
            mass=20;
            hiddenSelections[]=
            {
                "camo"
            };
        };
    };

	class 79th_NVG_Chip_Snow: JLTS_NVG_droid_chip_1
	{
		scope = 1;
		displayName="Snow helm nvg";
		visionMode[] = {"Normal","NVG"};
		thermalMode[] = {0,1};
		ace_nightvision_border = "";
	};
	class 79th_NVG_Chip_Snow2: JLTS_NVG_droid_chip_1
	{
		scope = 1;
		displayName="Snow2 helm nvg";
		visionMode[] = {"Normal","NVG","TI"};
		thermalMode[] = {0,1};
		ace_nightvision_border = "";
	};
};