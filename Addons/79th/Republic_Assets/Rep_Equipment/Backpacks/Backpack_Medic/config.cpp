class CfgPatches
{
	class 79th_Backpack_Medic
	{
		name = "79th Backpack Medic";
		author = "PraetorPanda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = 
		{
			"79_Clone_Backpack_medic",
			"79_Clone_Radio_medic",
			"Aux79_Backpack_medic_straps",
			"Aux79_Backpack_medic_radio_straps"
		};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class JLTS_Clone_backpack_medic;
	class 79_Clone_Backpack_medic: JLTS_Clone_backpack_medic
	{
		displayName = "[79th] Clone Backpack (Medic)";
		scope = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[]={"\79th\Data\Backpacks\79thBackpackMedic.paa"};
		maximumLoad = 280;
		mass = 50;
		hiddenSelections[] = {"camo1"};
	};
	
	class JLTS_Clone_backpack_RTO;
	class 79_Clone_Radio_medic: JLTS_Clone_backpack_RTO
	{
		displayName = "[79th] Clone Radio Pack (Medic)";
		scope = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[]={"\79th\Data\Backpacks\79thBackpackMedic.paa"};
		tf_isolatedAmount = 0.65;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "JLTS_clone_rto_radio_dialog";
		tf_subtype = "digital_lr";
		tf_range = 30000;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		maximumLoad = 280;
	};
	
	class Aux79_Backpack_medic_straps : 79_Clone_Backpack_medic
	{
		displayName = "[79th] Strapped Backpack (Medic)";
		model="\MRC\JLTS\characters\CloneArmor\CloneBackpackStraps.p3d";
	};
	
	class Aux79_Backpack_medic_radio_straps : 79_Clone_Radio_medic
	{
		displayName = "[79th] Strapped Radio Pack (Medic)";
		model="\MRC\JLTS\characters\CloneArmor\CloneBackpackRTOStraps.p3d";
	};
};