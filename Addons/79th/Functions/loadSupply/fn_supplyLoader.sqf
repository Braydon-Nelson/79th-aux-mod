cargoTypes = [player,"JLTS_Ammobox_ammo_GAR", "JLTS_Ammobox_grenades_GAR", "JLTS_Ammobox_launchers_GAR", "JLTS_Ammobox_explosives_GAR", "JLTS_Ammobox_support_GAR", "Land_Pod_Heli_Transport_04_ammo_black_F", "Land_Pod_Heli_Transport_04_fuel_black_F", "Land_Pod_Heli_Transport_04_medevac_black_F"];

private _veh = _this select 0;
private _cargo = _this select 0 nearEntities [cargoTypes, 20] select 0;
_veh setVehicleCargo _cargo;