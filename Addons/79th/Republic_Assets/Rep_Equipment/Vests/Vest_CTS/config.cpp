class CfgPatches
{
	class 79th_CTS_Vest
	{
		name = "79th CTS Vest";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = 
		{
			"79_Clone_Vest_CTS",
		};
	};
};

class CfgWeapons
{
	class VestItem;
	class JLTS_CloneVestReconNCO;
	class 79_Clone_Vest_CTS : JLTS_CloneVestReconNCO
	{
		author  = "PraetorPanda";
		dlc             = "79th Aux Mod";
		scope   = 2;
		scopeCurator = 2;
		displayname = "[79th] Clone Vest (CTS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestSuspender_ui_ca.paa";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestSuspender.p3d";
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\CloneArmor\data\Clone_vest_suspender_co.paa"};
		class ItemInfo : VestItem
		{
			uniformmodel = "\MRC\JLTS\characters\CloneArmor\CloneVestSuspender.p3d";
			vestType="Rebreather";
			containerClass = "Supply100";
			hiddenSelections[] = {"camo2"};
			mass = 80;
		};
	};
	
};