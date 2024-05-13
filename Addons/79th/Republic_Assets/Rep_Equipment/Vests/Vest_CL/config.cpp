class CfgPatches
{
	class 79th_CL_Vest
	{
		name = "79th CL Vest";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"79_Clone_Vest_CL"};
	};
};

class CfgWeapons
{
	class VestItem;
	class JLTS_CloneVestOfficer;
	class 79_Clone_Vest_CL : JLTS_CloneVestOfficer
	{
		author  = "PraetorPanda";
		dlc             = "79th Aux Mod";
		scope   = 2;
		scopeCurator = 2;
		displayname = "[79th] Clone Vest (CL)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]={"\79th\Data\Vests\79thOfficer2_vest_co.paa"};
		class ItemInfo : VestItem
		{
			uniformmodel = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
			vestType="Rebreather";
			containerClass = "Supply100";
			hiddenSelections[] = {"camo1"};
			mass=80;
		};
	};
};