params ["_target"];

tag_headtarget = _target;

[2, [], {
	
	
	if (alive tag_headtarget) then 
{
	tag_headtarget setDamage 1;
	playSound3D ["\WebKnightsRobotics\sounds\B1_DeathSound_1.ogg", tag_headtarget, false, getPosASL tag_headtarget, 5, 1, 10];
};

{
	_x createDiaryRecord ["Diary", ["T-Series Intel", "The intelligence contained inside of a T-series Droid's memory banks has been recovered! It will be decrypted by intelligence after the mission."]];
} foreach units (side player);
	
	
tag_headtarget setVariable ["tag_hashead", false];
	
	}, {hint "Failure!"}, "Extracting Intel..."] call ace_common_fnc_progressBar;


