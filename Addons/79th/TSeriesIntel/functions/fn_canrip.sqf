params ["_target"];

if (_target getvariable ["tag_hashead", true] AND (((uniform _target) isKindOf "3AS_U_CIS_TS") OR (uniform _target == "3AS_U_CIS_TS"))) exitwith
{
	true
};

false


