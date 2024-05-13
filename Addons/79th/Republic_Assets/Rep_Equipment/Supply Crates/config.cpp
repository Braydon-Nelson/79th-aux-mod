class CfgPatches
{
	class 187th_Supply_Crates
	{
		name = "187th Supply Crates";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = 
		{
			"supplies_Grenades_Test",
			"187th_Crate_Base",
			"Small_187th_Grenades",
			"Small_187th_Rockets",
			"Small_187th_Medical",
			"Small_187th_Special_Ammo",
			"Small_187th_Basic_Ammo",
			"Small_187th_Explosives",
			"Small_187th_Repair_Box",
			"Small_187th_Rearm_Box",
			"Small_187th_Refuel_Box",
			"Large_187th_Ammo",
			"Large_187th_Medical",
			"Large_187th_Engineer",
			"Medical_187th_Gonk"
		};
		weapons[] = {};
	};
};

class DefaultEventhandlers;
class CfgVehicles
{
	class JLTS_Ammobox_grenades_GAR;
	class JLTS_Ammobox_launchers_GAR;
	class JLTS_Ammobox_explosives_GAR;
	class JLTS_Ammobox_support_GAR;
	class JLTS_Ammobox_ammo_GAR;
	class 3as_GNK;
	class Land_Pod_Heli_Transport_04_covered_black_F;
	class Land_Pod_Heli_Transport_04_medevac_black_F;
	
	class Box_NATO_Ammo_F;
	class 187th_Crate_Base: Box_NATO_Ammo_F
	{
		class UserActions;
		scope = 1;
		scopecurator = 1;
		author = "Panda";
		displayname = "[187th] Resupply Box (Base)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\Crates\data\crate_1_GAR_co.paa","\MRC\JLTS\weapons\Crates\data\screen_1_GAR_weapons1_co.paa"};
		model = "\MRC\JLTS\weapons\Crates\crate_1.p3d";
		editorPreview = "\MRC\JLTS\weapons\Crates\data\ui\editorPreviews\JLTS_Ammobox_weapons_GAR.jpg";
		icon = "iconCrateWpns";
		ace_dragging_canDrag = 1;
		ace_dragging_canCarry = 1;
		ace_dragging_dragPosition[] = {0,1.2,0};
		ace_dragging_dragDirection = 0;
		ace_dragging_carryDirection = 0;
		maximumLoad = 2000;
		explosionEffect = "BasicAmmoExplosion";
		editorCategory = "187th_Rep_Assets";
		editorSubcategory = "187th_Crates";
		class SimpleObject
		{
			eden = 1;
			animate[] = {{"ammo_hide",1},{"ammoord_hide",0},{"grenades_hide",1},{"support_hide",1}};
			hide[] = {};
			verticalOffset = 0.284;
			verticalOffsetWorld = 0;
			init = "''";
		};
		class DestructionEffects
		{
			class Smoke2
			{
				simulation = "particles";
				type = "AmmoSmokeParticles2";
				position = "";
				intensity = 0.25;
				interval = 5;
				lifeTime = 2;
			};
			class Bullets
			{
				simulation = "particles";
				type = "AmmoBulletCore";
				position = "";
				intensity = 3;
				interval = 3;
				lifeTime = 1.2;
			};
		};
	};


// Ammo Boxes //

	class Small_187th_Grenades: JLTS_Ammobox_ammo_GAR
	{
		faction = "187th_Republic"; //187th_Republic, 187th_CIS
		editorCategory = "187th_Rep_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Crates"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		displayName = "[187th] Grenades";
		editorPreview = "\MRC\JLTS\weapons\Crates\data\ui\editorPreviews\JLTS_Ammobox_grenades_GAR.jpg";
		hiddenSelectionsTextures[]={"\mrc\jlts\weapons\crates\data\crate_3_gar_co.paa","\187th-aux\Data\Crates\screen_grenade.paa"};
		icon = "iconCrateGrenades";
		model = "\MRC\JLTS\weapons\Crates\crate_3.p3d";
		class TransportItems
		{
			class xx_Luma_Green
			{
				name = "Luma_Green";
				count = 10;
			};
			class xx_Luma_Red
			{
				name = "Luma_Red";
				count = 10;
			};
			class xx_3AS_ThermalDetonator
			{
				name = "3AS_ThermalDetonator";
				count = 10;
			};
			class xx_3AS_SonicDet
			{
				name = "3AS_SonicDet";
				count = 10;
			};
			class xx_3AS_SmokeWhite
			{
				name = "3AS_SmokeWhite";
				count = 10;
			};
			class xx_3AS_SmokeGreen
			{
				name = "3AS_SmokeGreen";
				count = 5;
			};
			class xx_3AS_SmokeRed
			{
				name = "3AS_SmokeRed";
				count = 5;
			};
			class xx_3AS_SmokeOrange
			{
				name = "3AS_SmokeOrange";
				count = 5;
			};
			class xx_3AS_SmokePurple
			{
				name = "3AS_SmokePurple";
				count = 5;
			};
			class xx_3AS_SmokeYellow
			{
				name = "3AS_SmokeYellow";
				count = 5;
			};
			class xx_3AS_SmokeBlue
			{
				name = "3AS_SmokeBlue";
				count = 5;
			};
			class xx_ACE_HandFlare_White
			{
				name = "ACE_HandFlare_White";
				count = 10;
			};
			class xx_ACE_HandFlare_Green
			{
				name = "ACE_HandFlare_Green";
				count = 5;
			};
			class xx_ACE_HandFlare_Red
			{
				name = "ACE_HandFlare_Red";
				count = 5;
			};
			class xx_ACE_HandFlare_Yellow
			{
				name = "ACE_HandFlare_Yellow";
				count = 5;
			};
		};
		class TransportMagazines
		{
			class xx_187th_HE_Grenade_Shell
			{
				magazine = "187th_HE_Grenade_Shell";
				count = 15;
			};
			class xx_187th_AP_Grenade_Shell
			{
				magazine = "187th_AP_Grenade_Shell";
				count = 10;
			};
			class xx_OPTRE_3Rnd_Smoke_Grenade_shell
			{
				magazine = "OPTRE_3Rnd_Smoke_Grenade_shell";
				count = 10;
			};
			class xx_OPTRE_3Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "OPTRE_3Rnd_SmokeGreen_Grenade_shell";
				count = 5;
			};
			class xx_OPTRE_3Rnd_SmokeRed_Grenade_shell
			{
				magazine = "OPTRE_3Rnd_SmokeRed_Grenade_shell";
				count = 5;
			};
			class xx_UGL_FlareRed_F
			{
				magazine = "UGL_FlareRed_F";
				count = 5;
			};
			class xx_UGL_FlareGreen_F
			{
				magazine = "UGL_FlareGreen_F";
				count = 5;
			};
			class xx_ACE_40mm_Flare_white
			{
				magazine = "ACE_40mm_Flare_white";
				count = 15;
			};
			class xx_ACE_HuntIR_M203
			{
				magazine = "ACE_HuntIR_M203";
				count = 5;
			};
		};
		class TransportWeapons{};
		class TransportBackpacks{};
		class AnimationSources
		{
			class ammo_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class grenades_source: ammo_source
			{
				initPhase = 0;
			};
		};
	};

	class Small_187th_Rockets: JLTS_Ammobox_launchers_GAR
	{
		faction = "187th_Republic"; //187th_Republic, 187th_CIS
		editorCategory = "187th_Rep_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Crates"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		scope = 2;
		scopecurator = 2;
		displayName="[187th] Rockets";
		editorPreview = "\MRC\JLTS\weapons\Crates\data\ui\editorPreviews\JLTS_Ammobox_launchers_GAR.jpg";
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\Crates\data\crate_1_GAR_co.paa","\187th-aux\Data\Crates\screen_at.paa"};
		icon = "iconCrateLong";
		model = "\MRC\JLTS\weapons\Crates\crate_1.p3d";
		class TransportWeapons{};
		class TransportMagazines
		{
			class xx_JLTS_RPS6_HE_mag
			{
				magazine = "JLTS_RPS6_HE_mag";
				count = 2;
			};
			class xx_JLTS_RPS6_mag
			{
				magazine = "JLTS_RPS6_mag";
				count = 6;
			};
			class xx_JLTS_PLX1_AT_mag
			{
				magazine = "JLTS_PLX1_AT_mag";
				count = 2;
			};
			class xx_JLTS_PLX1_AP_mag
			{
				magazine = "JLTS_PLX1_AP_mag";
				count = 2;
			};
			class xx_Aux187_Titan_AA_2Rnd_mag
			{
				magazine = "Aux187_Titan_AA_2Rnd_mag";
				count = 3;
			};
		};
		class TransportItems{};
		class TransportBackpacks{};
		class AnimationSources
		{
			class weapons_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class launchers_source: weapons_source
			{
				initPhase = 0;
			};
			class explosives_source: weapons_source
			{
				initPhase = 1;
			};
		};
	};

	class Small_187th_Medical: JLTS_Ammobox_ammo_GAR
	{
		faction = "187th_Republic"; //187th_Republic, 187th_CIS
		editorCategory = "187th_Rep_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Crates"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		scope = 2;
		scopecurator = 2;
		displayName="[187th] Medical";
		editorPreview = "\MRC\JLTS\weapons\Crates\data\ui\editorPreviews\JLTS_Ammobox_support_GAR.jpg";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\Crates\data\crate_3_GAR_co.paa","\187th-aux\Data\Crates\screen_medical.paa"};
		icon = "iconCrateSupp";
		model = "\MRC\JLTS\weapons\Crates\crate_3.p3d";
		class TransportItems
		{
			class xx_442_BasicBandage
			{
				name = "442_BasicBandage";
				count = 80;
			};
			class xx_442_BactaBandage
			{
				name = "442_BactaBandage";
				count = 20;
			};
			class xx_442_MyoplexarilStim
			{
				name = "442_MyoplexarilStim";
				count = 25;
			};
			class xx_442_PerigenStim
			{
				name = "442_PerigenStim";
				count = 25;
			};
			class xx_442_PolybioticsStim
			{
				name = "442_PolybioticsStim";
				count = 25;
			};
			class xx_ACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 10;
			};
			class xx_ACE_splint
			{
				name = "ACE_splint";
				count = 10;
			};
			class xx_442_Vasko1000
			{
				name = "442_Vasko1000";
				count = 10;
			};
			class xx_442_Vasko500
			{
				name = "442_Vasko500";
				count = 15;
			};
			class xx_442_Vasko250
			{
				name = "442_Vasko250";
				count = 15;
			};
			class xx_442_Cauterizer
			{
				name = "442_Cauterizer";
				count = 2;
			};
			class xx_ACE_bodyBag
			{
				name = "ACE_bodyBag";
				count = 3;
			};
			class xx_3AS_SmokePurple
			{
				name = "3AS_SmokePurple";
				count = 5;
			};
		};
		class TransportMagazines{};
		class TransportWeapons{};
		class AnimationSources{};
		class TransportBackpacks{};
	};
	
	class Small_187th_Special_Ammo: JLTS_Ammobox_ammo_GAR
	{
		faction = "187th_Republic"; //187th_Republic, 187th_CIS
		editorCategory = "187th_Rep_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Crates"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		scope = 2;
		scopecurator = 2;
		mass = 10;
		displayName="[187th] Special Ammo";
		editorPreview = "\MRC\JLTS\weapons\Crates\data\ui\editorPreviews\JLTS_Ammobox_ammo_GAR.jpg";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\Crates\data\crate_1_GAR_co.paa","\187th-aux\Data\Crates\screen_ammo"};
		icon = "iconCrateAmmo";
		model = "\MRC\JLTS\weapons\Crates\crate_1.p3d";
		class TransportMagazines
		{
			class xx_Aux187_DW32S_mag
			{
				magazine = "Aux187_DW32S_mag";
				count = 10;
			};
			class xx_Aux187_DC15X_mag
			{
				magazine = "Aux187_DC15X_mag";
				count = 10;
			};
			class xx_Aux187_DC15X_charge_mag
			{
				magazine = "Aux187_DC15X_charge_mag";
				count = 5;
			};
			class xx_Aux187_DP23_mag
			{
				magazine = "Aux187_DP23_mag";
				count = 10;
			};
			class xx_Aux187_DP23_wide_mag
			{
				magazine = "Aux187_DP23_wide_mag";
				count = 5;
			};
			class xx_Aux187_Z6_mag
			{
				magazine = "Aux187_Z6_mag";
				count = 10;
			};
			class xx_Aux187_Z6_charged_mag
			{
				magazine = "Aux187_Z6_charged_mag";
				count = 5;
			};
			class xx_Aux187_Valken_mag
			{
				magazine = "Aux187_Valken_mag";
				count = 10;
			};
			class xx_Aux187_T21_mag
			{
				magazine = "Aux187_T21_mag";
				count = 10;
			};
			class xx_Aux187_DC15L_mag
			{
				magazine = "Aux187_DC15L_mag";
				count = 10;
			};
		};
		class TransportItems{};
		class TransportWeapons{};
		class TransportBackpacks{};
		class AnimationSources
		{
			class ammo_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class grenades_source: ammo_source
			{
				initPhase = 1;
			};
		};
	};
	
	class Small_187th_Basic_Ammo: JLTS_Ammobox_ammo_GAR
	{
		faction = "187th_Republic"; //187th_Republic, 187th_CIS
		editorCategory = "187th_Rep_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Crates"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		scope = 2;
		scopecurator = 2;
		mass = 10;
		displayName="[187th] Basic Ammo";
		editorPreview = "\MRC\JLTS\weapons\Crates\data\ui\editorPreviews\JLTS_Ammobox_ammo_GAR.jpg";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\Crates\data\crate_3_GAR_co.paa","\187th-aux\Data\Crates\screen_ammo"};
		icon = "iconCrateAmmo";
		model = "\MRC\JLTS\weapons\Crates\crate_3.p3d";
		class TransportMagazines
		{
			class xx_Aux187_DC15A_mag
			{
				magazine = "Aux187_DC15A_mag";
				count = 30;
			};
			class xx_Aux187_DC15S_mag
			{
				magazine = "Aux187_DC15S_mag";
				count = 30;
			};
			class xx_Aux187_DC17SA_mag
			{
				magazine = "Aux187_DC17SA_mag";
				count = 10;
			};
			class xx_JLTS_stun_mag_long
			{
				magazine = "JLTS_stun_mag_long";
				count = 20;
			};
			class xx_Aux187_Westar_mag
			{
				magazine = "Aux187_Westar_mag";
				count = 20;
			};
		};
		class TransportItems{};
		class TransportWeapons{};
		class TransportBackpacks{};
		class AnimationSources
		{
			class ammo_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class grenades_source: ammo_source
			{
				initPhase = 1;
			};
		};
	};
	
	class Small_187th_Explosives: JLTS_Ammobox_launchers_GAR
	{
		faction = "187th_Republic"; //187th_Republic, 187th_CIS
		editorCategory = "187th_Rep_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Crates"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		scope = 2;
		scopecurator = 2;
		displayName="[187th] Explosives";
		editorPreview = "\MRC\JLTS\weapons\Crates\data\ui\editorPreviews\JLTS_Ammobox_explosives_GAR.jpg";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\Crates\data\crate_1_GAR_co.paa","\187th-aux\Data\Crates\screen_eod.paa"};
		icon = "iconCrateAmmo";
		model = "\MRC\JLTS\weapons\Crates\crate_1.p3d";
		class TransportWeapons{};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines
		{
			class xx_APERSMineDispenser_Mag
			{
				magazine = "APERSMineDispenser_Mag";
				count = 4;
			};
			class xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 13;
			};
			class xx_3AS_ThrowableCharge
			{
				magazine = "3AS_ThrowableCharge";
				count = 3;
			};
			class xx_C12_Remote_Mag
			{
				magazine = "C12_Remote_Mag";
				count = 1;
			};
			class xx_ATMine_Range_Mag
			{
				magazine = "ATMine_Range_Mag";
				count = 2;
			};
		};
	};
	
	class Small_187th_Repair_Box: JLTS_Ammobox_explosives_GAR
	{
		faction = "187th_Republic"; //187th_Republic, 187th_CIS
		editorCategory = "187th_Rep_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Crates"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		scope = 2;
		scopecurator = 2;
		displayName="[187th] Vehicle Repair";
		editorPreview = "\MRC\JLTS\weapons\Crates\data\ui\editorPreviews\JLTS_Ammobox_explosives_GAR.jpg";
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\Crates\data\crate_1_GAR_co.paa","\187th-aux\Data\Crates\screen_repair.paa"};
		icon = "iconCrateOrd";
		model = "\MRC\JLTS\weapons\Crates\crate_1.p3d";
		ace_repair_canRepair = 1;
		class TransportItems
		{
			class xx_JLTS_repairkit_weapon_mini
			{
				name = "JLTS_repairkit_weapon_mini";
				count = 5;
			};
		};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks{};
		class AnimationSources
		{
			class weapons_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class launchers_source: weapons_source
			{
				initPhase = 1;
			};
			class explosives_source: weapons_source
			{
				initPhase = 0;
			};
		};
	};
	
	class Small_187th_Rearm_Box: JLTS_Ammobox_explosives_GAR
	{
		faction = "187th_Republic"; //187th_Republic, 187th_CIS
		editorCategory = "187th_Rep_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Crates"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		scope = 2;
		scopecurator = 2;
		displayName="[187th] Vehicle Rearm";
		editorPreview = "\MRC\JLTS\weapons\Crates\data\ui\editorPreviews\JLTS_Ammobox_explosives_GAR.jpg";
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\Crates\data\crate_1_GAR_co.paa","\187th-aux\Data\Crates\screen_rearm.paa"};
		icon = "iconCrateOrd";
		model = "\MRC\JLTS\weapons\Crates\crate_1.p3d";
		ace_rearm_defaultSupply = 1000;
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks{};
		class AnimationSources
		{
			class weapons_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class launchers_source: weapons_source
			{
				initPhase = 1;
			};
			class explosives_source: weapons_source
			{
				initPhase = 0;
			};
		};
	};
	
	class Small_187th_Refuel_Box: JLTS_Ammobox_explosives_GAR
	{
		faction = "187th_Republic"; //187th_Republic, 187th_CIS
		editorCategory = "187th_Rep_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Crates"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		scope = 2;
		scopecurator = 2;
		displayName="[187th] Vehicle Refuel";
		editorPreview = "\MRC\JLTS\weapons\Crates\data\ui\editorPreviews\JLTS_Ammobox_explosives_GAR.jpg";
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\Crates\data\crate_1_GAR_co.paa","\187th-aux\Data\Crates\screen_refuel.paa"};
		icon = "iconCrateOrd";
		model = "\MRC\JLTS\weapons\Crates\crate_1.p3d";
		ace_refuel_fuelCargo = 5000;
		ace_refuel_hooks[] = {{0.38,-3.17,-0.7},{-0.41,-3.17,-0.7}};
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks{};
		class AnimationSources
		{
			class weapons_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class launchers_source: weapons_source
			{
				initPhase = 1;
			};
			class explosives_source: weapons_source
			{
				initPhase = 0;
			};
		};
	};
	
	class Medical_187th_Gonk: 3as_GNK
	{
		faction = "187th_Republic"; //187th_Republic, 187th_CIS
		editorCategory = "187th_Rep_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Crates"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		scope = 2;
		scopecurator = 2;
		displayName="[187th] Medical Gonk";
		class EventHandlers: DefaultEventhandlers
		{
			init="[_this select 0] execVM '\187th-aux\Functions\medical\medical.sqf';";
		};
	};
	
	/*class Aux187th_Gonk_Arsenal: 3as_GNK
	{
		faction = "187th_Republic"; //187th_Republic, 187th_CIS
		editorCategory = "187th_Rep_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Crates"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		scope = 2;
		scopecurator = 2;
		displayName="[187th] Arsenal Gonk";
		class EventHandlers: DefaultEventhandlers
		{
			init = "[this, true] call ace_arsenal_fnc_initBox;";
		};
	};*/
	
//Large Crates//

	class Large_187th_Ammo: Land_Pod_Heli_Transport_04_medevac_black_F
	{
		faction = "187th_Republic"; //187th_Republic, 187th_CIS
		editorCategory = "187th_Rep_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Crates"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		scope = 2;
		scopecurator = 2;
		ace_medical_isMedicalFacility = 0;
		tas_canBlift=2;
		tas_liftVars="[[[[0,-3.7,-5]],[[-1.6,-3.7,-3.8],[1.6,-3.7,-3.8]]], [0.4,-0.06], [0,0.5]]";
		displayName="[187th] Large Ammo Crate";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Pod_Heli_Transport_04_ammo_F.jpg";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_Black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_Black_CO.paa"};
		icon = "iconCrateOrd";
		model = "\A3\Air_F_Heli\Heli_Transport_04\Pod_Heli_Transport_04_ammo_F.p3d";
		ace_rearm_defaultSupply = 0;
		class TransportItems
		{
			class xx_Luma_Green
			{
				name = "Luma_Green";
				count = 10;
			};
			class xx_Luma_Red
			{
				name = "Luma_Red";
				count = 10;
			};
			class xx_3AS_ThermalDetonator
			{
				name = "3AS_ThermalDetonator";
				count = 20;
			};
			class xx_3AS_SonicDet
			{
				name = "3AS_SonicDet";
				count = 10;
			};
			class xx_3AS_SmokeWhite
			{
				name = "3AS_SmokeWhite";
				count = 20;
			};
			class xx_3AS_SmokeGreen
			{
				name = "3AS_SmokeGreen";
				count = 10;
			};
			class xx_3AS_SmokeRed
			{
				name = "3AS_SmokeRed";
				count = 10;
			};
			class xx_3AS_SmokePurple
			{
				name = "3AS_SmokePurple";
				count = 10;
			};
			class xx_3AS_SmokeBlue
			{
				name = "3AS_SmokeBlue";
				count = 10;
			};
			class xx_ACE_HandFlare_White
			{
				name = "ACE_HandFlare_White";
				count = 20;
			};
			class xx_ACE_HandFlare_Green
			{
				name = "ACE_HandFlare_Green";
				count = 10;
			};
			class xx_ACE_HandFlare_Red
			{
				name = "ACE_HandFlare_Red";
				count = 10;
			};
			class xx_ACE_HandFlare_Yellow
			{
				name = "ACE_HandFlare_Yellow";
				count = 10;
			};
		};
		class TransportWeapons{};
		class TransportMagazines
		{
			class xx_187th_HE_Grenade_Shell
			{
				magazine = "187th_HE_Grenade_Shell";
				count = 30;
			};
			class xx_187th_AP_Grenade_Shell
			{
				magazine = "187th_AP_Grenade_Shell";
				count = 20;
			};
			class xx_OPTRE_3Rnd_Smoke_Grenade_shell
			{
				magazine = "OPTRE_3Rnd_Smoke_Grenade_shell";
				count = 20;
			};
			class xx_OPTRE_3Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "OPTRE_3Rnd_SmokeGreen_Grenade_shell";
				count = 10;
			};
			class xx_OPTRE_3Rnd_SmokeRed_Grenade_shell
			{
				magazine = "OPTRE_3Rnd_SmokeRed_Grenade_shell";
				count = 10;
			};
			class xx_UGL_FlareRed_F
			{
				magazine = "UGL_FlareRed_F";
				count = 10;
			};
			class xx_UGL_FlareGreen_F
			{
				magazine = "UGL_FlareGreen_F";
				count = 10;
			};
			class xx_ACE_40mm_Flare_white
			{
				magazine = "ACE_40mm_Flare_white";
				count = 30;
			};
			class xx_ACE_HuntIR_M203
			{
				magazine = "ACE_HuntIR_M203";
				count = 10;
			};
			class xx_JLTS_RPS6_HE_mag
			{
				magazine = "JLTS_RPS6_HE_mag";
				count = 10;
			};
			class xx_JLTS_RPS6_mag
			{
				magazine = "JLTS_RPS6_mag";
				count = 15;
			};
			class xx_JLTS_PLX1_AT_mag
			{
				magazine = "JLTS_PLX1_AT_mag";
				count = 5;
			};
			class xx_JLTS_PLX1_AP_mag
			{
				magazine = "JLTS_PLX1_AP_mag";
				count = 5;
			};
			class xx_Aux187_Titan_AA_2Rnd_mag
			{
				magazine = "Aux187_Titan_AA_2Rnd_mag";
				count = 5;
			};
			class xx_Aux187_DC15A_mag
			{
				magazine = "Aux187_DC15A_mag";
				count = 150;
			};
			class xx_Aux187_DC15S_mag
			{
				magazine = "Aux187_DC15S_mag";
				count = 50;
			};
			class xx_Aux187_DW32S_mag
			{
				magazine = "Aux187_DW32S_mag";
				count = 40;
			};
			class xx_Aux187_DC15X_mag
			{
				magazine = "Aux187_DC15X_mag";
				count = 40;
			};
			class xx_Aux187_DC15X_charge_mag
			{
				magazine = "Aux187_DC15X_charge_mag";
				count = 15;
			};
			class xx_Aux187_DC17SA_mag
			{
				magazine = "Aux187_DC17SA_mag";
				count = 50;
			};
			class xx_Aux187_DP23_mag
			{
				magazine = "Aux187_DP23_mag";
				count = 40;
			};
			class xx_Aux187_DP23_wide_mag
			{
				magazine = "Aux187_DP23_wide_mag";
				count = 30;
			};
			class xx_JLTS_stun_mag_long
			{
				magazine = "JLTS_stun_mag_long";
				count = 40;
			};
			class xx_Aux187_Z6_mag
			{
				magazine = "Aux187_Z6_mag";
				count = 40;
			};
			class Aux187_Z6_charged_mag
			{
				magazine = "Aux187_Z6_charged_mag";
				count = 15;
			};
			class xx_Aux187_Valken_mag
			{
				magazine = "Aux187_Valken_mag";
				count = 40;
			};
			class xx_Aux187_T21_mag
			{
				magazine = "Aux187_T21_mag";
				count = 40;
			};
			class xx_Aux187_DC15L_mag
			{
				magazine = "Aux187_DC15L_mag";
				count = 40;
			};
			class xx_Aux187_Westar_mag
			{
				magazine = "Aux187_Westar_mag";
				count = 45;
			};
		};
		class AnimationSources
		{
			class weapons_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class launchers_source: weapons_source
			{
				initPhase = 1;
			};
			class explosives_source: weapons_source
			{
				initPhase = 0;
			};
		};
	};
	
	class Large_187th_Medical: Land_Pod_Heli_Transport_04_medevac_black_F
	{
		faction = "187th_Republic"; //187th_Republic, 187th_CIS
		editorCategory = "187th_Rep_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Crates"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		scope = 2;
		scopecurator = 2;
		tas_canBlift=2;
		tas_liftVars="[[[[0,-3.7,-5]],[[-1.6,-3.7,-3.8],[1.6,-3.7,-3.8]]], [0.4,-0.06], [0,0.5]]";
		displayName="[187th] Large Medical Crate";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Pod_Heli_Transport_04_medevac_F.jpg";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_Black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_Black_CO.paa"};
		icon = "iconCrateOrd";
		model = "\A3\Air_F_Heli\Heli_Transport_04\Pod_Heli_Transport_04_medevac_F.p3d";
		ace_medical_isMedicalFacility = 1;
		class TransportItems
		{
			class xx_442_BasicBandage
			{
				name = "442_BasicBandage";
				count = 200;
			};
			class xx_442_BactaBandage
			{
				name = "442_BactaBandage";
				count = 50;
			};
			class xx_442_MyoplexarilStim
			{
				name = "442_MyoplexarilStim";
				count = 50;
			};
			class xx_442_PerigenStim
			{
				name = "442_PerigenStim";
				count = 50;
			};
			class xx_442_PolybioticsStim
			{
				name = "442_PolybioticsStim";
				count = 50;
			};
			class xx_ACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 20;
			};
			class xx_ACE_splint
			{
				name = "ACE_splint";
				count = 20;
			};
			class xx_442_Vasko1000
			{
				name = "442_Vasko1000";
				count = 20;
			};
			class xx_442_Vasko500
			{
				name = "442_Vasko500";
				count = 25;
			};
			class xx_442_Vasko250
			{
				name = "442_Vasko250";
				count = 25;
			};
			class xx_442_Cauterizer
			{
				name = "442_Cauterizer";
				count = 5;
			};
			class xx_ACE_bodyBag
			{
				name = "ACE_bodyBag";
				count = 10;
			};
			class xx_3AS_SmokePurple
			{
				name = "3AS_SmokePurple";
				count = 10;
			};
		};
		class TransportWeapons{};
		class TransportMagazines{};
		class AnimationSources
		{
			class weapons_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class launchers_source: weapons_source
			{
				initPhase = 1;
			};
			class explosives_source: weapons_source
			{
				initPhase = 0;
			};
		};
	};
	
	class Large_187th_Engineer: Land_Pod_Heli_Transport_04_medevac_black_F
	{
		faction = "187th_Republic"; //187th_Republic, 187th_CIS
		editorCategory = "187th_Rep_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Crates"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		scope = 2;
		scopecurator = 2;
		tas_canBlift=2;
		tas_liftVars="[[[[0,-3.7,-5]],[[-1.6,-3.7,-3.8],[1.6,-3.7,-3.8]]], [0.4,-0.06], [0,0.5]]";
		displayName="[187th] Large Engineer Crate";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Pod_Heli_Transport_04_repair_F.jpg";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_Black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_Black_CO.paa"};
		icon = "iconCrateOrd";
		model = "\A3\Air_F_Heli\Heli_Transport_04\Pod_Heli_Transport_04_repair_F.p3d";
		ace_refuel_fuelCargo = 10000;
		ace_rearm_defaultSupply = 10000;
		ace_repair_canRepair = 1;
		ace_medical_isMedicalFacility = 0;
		class TransportItems
		{
			class xx_JLTS_repairkit_weapon
			{
				name = "JLTS_repairkit_weapon";
				count = 1;
			};
			class xx_JLTS_repairkit_weapon_mini
			{
				name = "JLTS_repairkit_weapon_mini";
				count = 10;
			};
		};
		class TransportWeapons{};
		class TransportMagazines{};
		class AnimationSources
		{
			class weapons_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class launchers_source: weapons_source
			{
				initPhase = 1;
			};
			class explosives_source: weapons_source
			{
				initPhase = 0;
			};
		};
	};
	

	//------------------------------------------------------

	/*class supplies_Grenades_Test: 187th_Crate_Base
	{
		displayName = "Grenades [GAR]";
		editorPreview = "\MRC\JLTS\weapons\Crates\data\ui\editorPreviews\JLTS_Ammobox_grenades_GAR.jpg";
		hiddenSelectionsTextures[]={"mrc\jlts\weapons\crates\data\crate_3_gar_co.paa","mrc\jlts\weapons\crates\data\screen_1_gar_grenades_co.paa"};
		icon = "iconCrateGrenades";
		model = "\MRC\JLTS\weapons\Crates\crate_3.p3d";

		class TransportItems
		{
			class xx_Luma_Green
			{
				name = "Luma_Green";
				count = 10;
			};
			class xx_Luma_Red
			{
				name = "Luma_Red";
				count = 10;
			};
			class xx_ACE_HandFlare_White
			{
				name = "ACE_HandFlare_White";
				count = 15;
			};
			class xx_3AS_SmokeWhite
			{
				name = "3AS_SmokeWhite";
				count = 15;
			};
			class xx_3AS_SmokeRed
			{
				name = "3AS_SmokeRed";
				count = 10;
			};
			class xx_3AS_SmokeGreen
			{
				name = "3AS_SmokeGreen";
				count = 10;
			};
			class xx_3AS_ThermalDetonator
			{
				name = "3AS_ThermalDetonator";
				count = 10;
			};
			class xx_ACE_HandFlare_Yellow
			{
				name = "ACE_HandFlare_Yellow";
				count = 5;
			};
			class xx_ACE_HandFlare_Green
			{
				name = "ACE_HandFlare_Green";
				count = 5;
			};
			class xx_ACE_HandFlare_Red
			{
				name = "ACE_HandFlare_Red";
				count = 5;
			};
			class xx_3AS_SonicDet
			{
				name = "3AS_SonicDet";
				count = 5;
			};
			class xx_3AS_SmokeOrange
			{
				name = "3AS_SmokeOrange";
				count = 5;
			};
			class xx_3AS_SmokePurple
			{
				name = "3AS_SmokePurple";
				count = 5;
			};
			class xx_3AS_SmokeYellow
			{
				name = "3AS_SmokeYellow";
				count = 5;
			};
			class xx_3AS_SmokeBlue
			{
				name = "3AS_SmokeBlue";
				count = 5;
			};
			class xx_JLTS_Clone_belt_bag
			{
				name = "JLTS_Clone_belt_bag";
				count = 5;
			};
		};
		class TransportMagazines
		{
			class xx_1Rnd_HE_Grenade_Shell
			{
				magazine = "1Rnd_HE_Grenade_Shell";
				count = 15;
			};
			class xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine = "1Rnd_SmokeRed_Grenade_shell";
				count = 10;
			};
			class xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 10;
			};
			class xx_UGL_Flare_White_F
			{
				magazine = "UGL_Flare_White_F";
				count = 10;
			};
			class xx_UGL_Flare_Yellow_F
			{
				magazine = "UGL_Flare_Yellow_F";
				count = 5;
			};
			class xx_UGL_Flare_Red_F
			{
				magazine = "UGL_Flare_Red_F";
				count = 5;
			};
			class xx_UGL_Flare_Green_F
			{
				magazine = "UGL_Flare_Green_F";
				count = 5;
			};
			class xx_1Rnd_SmokeOrange_grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_grenade_shell";
				count = 5;
			};
			class xx_1Rnd_SmokeBlue_grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_grenade_shell";
				count = 5;
			};
			class xx_1Rnd_SmokePurple_grenade_shell
			{
				magazine = "1Rnd_SmokePurple_grenade_shell";
				count = 5;
			};
			class xx_1Rnd_SmokeYellow_grenade_shell
			{
				magazine = "1Rnd_SmokeYellow_grenade_shell";
				count = 5;
			};
			class xx_1Rnd_SmokeGreen_grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_grenade_shell";
				count = 5;
			};
		};
		class TransportWeapons{};
		class AnimationSources
		{
			class ammo_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class grenades_source: ammo_source
			{
				initPhase = 0;
			};
		};
	};*/
};