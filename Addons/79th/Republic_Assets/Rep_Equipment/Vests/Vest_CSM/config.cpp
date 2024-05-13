class CfgPatches
{
	class 79th_CSM_Vest
	{
		name = "79th CSM Vest";
		author = "Bravocado & Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"79_Clone_Vest_CSM"};
	};
};

class CfgWeapons
{
	class VestItem;
	class JLTS_CloneVestReconOfficer;
	class 79_Clone_Vest_CSM : JLTS_CloneVestReconOfficer
	{
		author  = "PraetorPanda";
		dlc             = "79th Aux Mod";
		scope   = 2;
		scopeCurator = 2;
		displayname = "[79th] Clone Vest (CSM)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestKama_ui_ca.paa";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestReconOfficer.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"79th\Data\Vests\snthOfficer_vest_co.paa",
			"79th\Data\Vests\snthvest_heavy_co.paa",
		};
		class ItemInfo : VestItem
		{
			uniformmodel = "\MRC\JLTS\characters\CloneArmor\CloneVestReconOfficer.p3d";
			vestType="Rebreather";
			containerClass = "Supply100";
			hiddenSelections[] = {"camo1","camo2"};
			mass=80;
		};
	};
};