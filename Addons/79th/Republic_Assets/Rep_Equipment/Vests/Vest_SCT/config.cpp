class CfgPatches
{
	class 79th_SCT_Vest
	{
		name = "79th SCT Vest";
		author = "Bravocado & Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"79_Clone_Vest_SCT"};
	};
};

class CfgWeapons
{
	class VestItem;
	class JLTS_CloneVestOfficer;
	class 79_Clone_Vest_SCT : JLTS_CloneVestOfficer
	{
		author  = "Bravocado & Panda";
		dlc             = "79th Aux Mod";
		scope   = 2;
		scopeCurator = 2;
		displayname = "[79th] Clone Vest (SCT)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestRecon.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]={"\79th\Data\Vests\79thvest_heavy2_co.paa"};
		class ItemInfo : VestItem
		{
			uniformmodel = "\MRC\JLTS\characters\CloneArmor\CloneVestRecon.p3d";
			vestType="Rebreather";
			containerClass = "Supply100";
			hiddenSelections[] = {"camo2"};
			mass=80;
		};
	};
};