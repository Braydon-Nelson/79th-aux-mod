class CfgPatches
{
	class 79th_Mini_Radio_Pack
	{
		name = "79th Mini Radio Pack";
		author = "PraetorPanda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"79_MiniRadio_Pack"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class JLTS_Clone_RTO_pack;
	class 79_MiniRadio_Pack: JLTS_Clone_RTO_pack
	{
		displayName = "[79th] Clone Radio Pack (Mini)";
		scope = 2;
		scopeCurator = 2;
		tf_isolatedAmount = 0.65;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "JLTS_clone_rto_radio_dialog";
		tf_subtype = "digital_lr";
		tf_range = 30000;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		maximumLoad = 180;
	};
};