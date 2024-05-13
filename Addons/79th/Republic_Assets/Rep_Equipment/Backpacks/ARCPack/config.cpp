class CfgPatches
{
	class 79th_ARC_Pack
	{
		name = "79th ARC Pack";
		author = "PraetorPanda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"79_Clone_ARC_Pack"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class JLTS_Clone_ARC_backpack;
	class 79_Clone_ARC_Pack: JLTS_Clone_ARC_backpack
	{
		displayName = "[79th] Clone ARC Pack";
		scope = 2;
		scopeCurator = 2;
		tf_isolatedAmount = 0.65;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "JLTS_clone_rto_radio_dialog";
		tf_subtype = "digital_lr";
		tf_range = 30000;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		maximumLoad = 340;
		mass = 50;
		hiddenSelections[] = {"camo1"};
	};
};