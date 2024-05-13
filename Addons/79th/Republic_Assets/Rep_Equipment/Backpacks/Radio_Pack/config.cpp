class CfgPatches
{
	class 79th_Radio_Pack
	{
		name = "79th Radio Pack";
		author = "PraetorPanda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"79_Radio_Pack", "79_Radio_Pack_MBC","Aux79_Radio_Pack_straps"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class JLTS_Clone_backpack_RTO;
	class 79_Radio_Pack: JLTS_Clone_backpack_RTO
	{
		displayName = "[79th] Clone Radio Pack";
		scope = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[]={"\79th\Data\Backpacks\79thBackpack.paa"};
		tf_isolatedAmount = 0.65;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "JLTS_clone_rto_radio_dialog";
		tf_subtype = "digital_lr";
		tf_range = 30000;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		maximumLoad = 280;
	};
	class 79_Radio_Pack_MBC: 79_Radio_Pack
	{
		displayName = "[79th] Clone Radio Pack (MBC)";
		scope = 2;
		scopeCurator = 2;
		hiddenSelectionsTextures[]={"\79th\Data\Backpacks\79thBackpackmbc.paa"};
		tf_isolatedAmount = 0.65;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "JLTS_clone_rto_radio_dialog";
		tf_subtype = "digital_lr";
		tf_range = 30000;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		maximumLoad = 280;
	};
	
	class Aux79_Radio_Pack_straps : 79_Radio_Pack
	{
		displayName = "[79th] Strapped Radio Pack";
		model="\MRC\JLTS\characters\CloneArmor\CloneBackpackRTOStraps.p3d";
	};
};