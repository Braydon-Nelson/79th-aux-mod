class CfgPatches
{
	class 79th_Functions
	{
		name = "79th Functions";
		author = "Bravocado & Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
	};
};

class CfgFunctions
{
	class OES_functions
	{
		tag = "OES";
		class afterburner_functions
		{
			file = "79th\functions\afterburners";
			class afterburners_turn_on;
			class afterburners_turn_off;
		};
		class supplyLoadingSystem
		{
			file = "79th\Functions\loadSupply";
			class masterLoader{};
			class supplyLoader{};
			class supplyUnloader{};
		};
	};
	class TAS
	{
		tag = "TAS";
		class TAS_Keybinds
		{
			class keybinds
			{
				file = "79th\functions\Keybinds.sqf";
				postInit = 1;
			};
		};

		class TAS_utility_functions
		{
			class get_attribute
			{
				file = "79th\functions\util\getAttribute.sqf";
			};
			class integer_boolean
			{
				file = "79th\functions\util\integerBoolean.sqf";
			};
		};
	};
};