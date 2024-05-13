#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class 79th_Aux_Mod
	{
		name = "79th Aux Mod";
		author = "Bravocado & Panda";
		url = //"https://79th-legion.com/";
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
	};

};

class Extended_PostInit_EventHandlers
{
	// Adding our uniform guide items to Ace Arsenal
	class default_arsenal_init_event {
		init = "call compile preprocessFileLineNumbers '79th\Functions\inits\default_loadouts_init.sqf'";
	};
};