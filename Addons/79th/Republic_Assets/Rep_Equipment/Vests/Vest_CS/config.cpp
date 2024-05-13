class CfgPatches
{
	class 79th_CS_Vest
	{
		name="79th CS Vest";
		author="Bravocado & Panda";
		requiredVersion=0.0099999998;
		requiredAddons[]={"JLTS_characters_CloneArmor","JLTS_characters_CloneLegions"};
		units[]={};
		weapons[] = {"79_Clone_Vest_CS"};
	};
};
class CfgWeapons
{
	class VestItem;
	class JLTS_CloneVestReconNCO;
	class 79_Clone_Vest_CS: JLTS_CloneVestReconNCO
	{
		author="Bravocado & Panda";
		dlc="79th Aux Mod";
		scope=2;
		scopeCurator=2;
		displayname="[79th] Clone Vest (CS)";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneVestReconNCO.p3d";
		hiddenSelections[]=
		{
			"camo2",
		};
		hiddenSelectionsTextures[]={"79th\Data\Vests\79thvest_heavy_co.paa"};
		class ItemInfo: VestItem
		{
			uniformmodel="\MRC\JLTS\characters\CloneArmor\CloneVestReconNCO.p3d";
			vestType="Rebreather";
			containerClass="Supply100";
			hiddenSelections[]=
			{"camo2",};
			mass=80;
		};
	};
};
