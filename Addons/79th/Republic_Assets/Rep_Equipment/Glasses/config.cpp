class CfgPatches
{
	class 79th_Glasses
	{
		name = "79th Glasses";
		author = "Bravocado & Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = 
		{
			"79th_Beltpouch",
			"79th_Medpouch",
			"79th_NCOAntenna",
			"79th_NCOVisor",
			"79th_ClearView",
			"79th_Rangefinder",
			"79th_OfficerRangefinder",
			"79th_CommanderVisor",
			"79th_MCCommanderVisor",
			"79th_RTO_Antenna",
		};
	};
};

class CfgGlasses
{
	class 79th_Beltpouch
	{
		displayName="[79th] Belt Pouch";
		mode=4;
		identityTypes[]={};
		model="\MRC\JLTS\characters\CloneArmor\clonebeltbag.p3d";
		Scope=2;
		ScopeCurator=2;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\characters\CloneArmor\data\Clone_belt_bag_co.paa"
		};
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\clone_belt_bag_ui_ca";
	};
	class 79th_Medpouch
	{
		displayName="[79th] Medical Pouch";
		mode=4;
		identityTypes[]={};
		model="\MRC\JLTS\characters\CloneArmor\clonebeltbag.p3d";
		Scope=2;
		ScopeCurator=2;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\79th\Data\Glasses\Medic_Pouch\med_pouch.paa"
		};
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\clone_belt_bag_ui_ca";
	};
	class 79th_NCOVisor
	{
		displayName="[79th] NCO Visor";
		mode=4;
		identityTypes[]={};
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_ui_ca.paa";
		model = "\MRC\JLTS\characters\CloneArmor\CloneNVG_off.p3d";
		hiddenSelections[]={"camo1"};
		hiddenSelectionsTextures[]={"\MRC\JLTS\characters\CloneArmor\data\Clone_nvg_co.paa"};
		Scope=2;
		ScopeCurator=2;
	};
	class 79th_ClearView
	{
		displayName="[79th] Underwater Visor Overlay";
		mode=4;
		identityTypes[]={};
		picture="\SWLB_equipment\facewears\data\ui\icon_SWLB_clone_P2_HUD_ca.paa";
		model = "";
		Scope=2;
		ScopeCurator=2;
	};
	class 79th_Rangefinder
	{
		displayName="[79th] Rangefinder";
		mode=4;
		identityTypes[]={};
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_range_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneNVGRange_off.p3d";
		Scope=2;
		ScopeCurator=2;
	};
	class 79th_OfficerRangefinder
	{
		displayName="[79th] Officer Rangefinder";
		mode=4;
		identityTypes[]={};
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_range_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneNVGRange_off.p3d";
		hiddenselections[]={"camo1"};
		hiddenSelectionsTextures[]={"\79th\Data\Glasses\79th_rangefinder_1.paa"};
		Scope=2;
		ScopeCurator=2;
	};
	class 79th_CommanderVisor
	{
		displayName="[79th] Commander Visor";
		mode=4;
		identityTypes[]={};
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_cc_visor_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneNVGCC.p3d";
		hiddenselections[]={"camo1"};
		hiddenSelectionsTextures[]={"\MRC\JLTS\characters\CloneArmor\data\Clone_nvg_visor_co.paa"};
		Scope=2;
		ScopeCurator=2;
	};
	class 79th_MCCommanderVisor
	{
		displayName="[79th] MC Commander Visor";
		mode=4;
		identityTypes[]={};
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_mc_visor_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneNVGMC.p3d";
		hiddenselections[]={"camo1"};
		hiddenSelectionsTextures[]={"\79th\data\Glasses\79th_nvg_visor_co.paa"};
		Scope=2;
		ScopeCurator=2;
	};
		class 79th_RTO_Antenna //aux212_helmet_antenna
	{
		displayName="[79th] RTO Antenna";
		mode=4;
		identityTypes[]={};
		picture="\212th\Armor\212th_Armor\212th_Backpacks\Aux212_Helmet_Antenna\Data\UI\Helmet_Antenna_UI_ca";
		model="\212th\Armor\212th_Armor\212th_Backpacks\Aux212_Helmet_Antenna\Helmet_Antenna.p3d";
		hiddenselections[]={"camo1"};
		hiddenSelectionsTextures[]={"\212th\Armor\212th_Armor\212th_Backpacks\Aux212_Helmet_Antenna\Data\Textures\Helmet_Antenna_CO.paa"};
		Scope=2;
		ScopeCurator=2;
	};
};