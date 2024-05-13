class CfgPatches
{
	class 79th_C2L_Vest
	{
		name = "79th C2L Vest";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"79_Clone_Vest_C2L"};
	};
};

class CfgWeapons
{
	class VestItem;
	class JLTS_CloneVestOfficer;
	class 79_Clone_Vest_C2L : JLTS_CloneVestOfficer
	{
		author  = "PraetorPanda";
		dlc             = "79th Aux Mod";
		scope   = 2;
		scopeCurator = 2;
		displayname = "[79th] Clone Vest (C2L)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]={"\79th\Data\Vests\79thOfficer_vest_co.paa"};
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