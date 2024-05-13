class CfgPatches
{
	class 79th_Zeus_Radio_Pack
	{
		name = "79th Zeus Radio Pack";
		author = "PraetorPanda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"79_Zeus_LR"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class 3AS_B_ColdAssault_Backpack;
	class 79_Zeus_LR: 3AS_B_ColdAssault_Backpack
	{
		displayName = "[79th] Clone Zeus LR";
		scope = 2;
		scopeCurator = 2;
		//hiddenSelectionsTextures[]={"\79th\Data\Backpacks\NONE YET"};
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "JLTS_clone_rto_radio_dialog";
		tf_subtype = "digital_lr";
		tf_range = 100000;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		maximumLoad = 500;
	};
	
};