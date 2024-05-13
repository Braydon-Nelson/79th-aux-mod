class CfgPatches
{
	class 79th_CC_Vest
	{
		name = "79th CC Vest";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"79_Clone_Vest_CC"};
	};
};

class CfgWeapons
{
	class VestItem;
	class 79_Clone_Vest_CL;
	class 79_Clone_Vest_CC : 79_Clone_Vest_CL
	{
		author  = "PraetorPanda";
		dlc             = "79th Aux Mod";
		scope   = 2;
		scopeCurator = 2;
		displayname = "[79th] Clone Vest (CC)";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer2.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]={"\79th\Data\Vests\79thOfficer2_vest_co.paa"};
		class ItemInfo : VestItem
		{
			uniformmodel = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer2.p3d";
			vestType="Rebreather";
			containerClass = "Supply100";
			hiddenSelections[] = {"camo1"};
			mass=80;
		};
	};
};