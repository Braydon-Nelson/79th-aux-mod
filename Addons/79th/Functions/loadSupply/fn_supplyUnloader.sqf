cargoTypes = ["JLTS_Ammobox_ammo_GAR", "JLTS_Ammobox_grenades_GAR", "JLTS_Ammobox_launchers_GAR", "JLTS_Ammobox_explosives_GAR", "JLTS_Ammobox_support_GAR", "Land_Pod_Heli_Transport_04_ammo_black_F", "Land_Pod_Heli_Transport_04_fuel_black_F", "Land_Pod_Heli_Transport_04_medevac_black_F"];

_allCargo = getVehicleCargo (_this select 0);
_cargoIndex = count _allCargo - 1;
_cargo = _allCargo select _cargoIndex;
objNull setVehicleCargo _cargo;
_cargo allowdamage false;
_smoke = createVehicle ["SmokeShellYellow", [0,0,0], [], 0 , ""];
_smoke attachTo [_cargo, [0,0,0]];