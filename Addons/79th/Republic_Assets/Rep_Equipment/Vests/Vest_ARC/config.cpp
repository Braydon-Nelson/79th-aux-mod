class CfgPatches
{
	class 79th_ARC_Vest
	{
		name="79th ARC Vest";
		author="Panda";
		requiredVersion=0.0099999998;
		requiredAddons[]=
		{
			"JLTS_characters_CloneArmor",
			"JLTS_characters_CloneLegions"
		};
		units[]={};
		weapons[]=
		{
			"Aux79_Clone_Vest_ARC",
			"Aux79_Clone_Vest_ARC_CWO"
		};
	};
};
class CfgWeapons
{
	class VestItem;
	class JLTS_CloneVestARC;
	class Aux79_Clone_Vest_ARC: JLTS_CloneVestARC
	{
		author="PraetorPanda";
		dlc="79th Aux Mod";
		scope=2;
		scopeCurator=2;
		displayname="[79th] ARC Vest";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestARC.p3d";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestARC_ui_ca.paa";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\79th\Data\Vests\arcWO.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestARC.p3d";
			vestType="Rebreather";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1"
			};
			mass=80;
		};
	};
	class Aux79_Clone_Vest_ARC_CWO: Aux79_Clone_Vest_ARC
	{
		displayName="[79th] ARC Vest (Alpha)";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestARCCadet.p3d";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\79th\Data\Vests\arcCWO.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneVestARC.p3d";
			vestType="Rebreather";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1"
			};
			mass=80;
		};
	};
};
