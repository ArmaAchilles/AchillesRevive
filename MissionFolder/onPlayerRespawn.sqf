#include "paramDefault.hpp"

params ["_unit", "_old_body"];

private _canRevive = ["AchillesRevive", DEFAULT_CAN_REVIVE] call BIS_fnc_getParamValue;
if (_canRevive == 1) then
{
	deleteVehicle _old_body;
	[_unit] call Achilles_fnc_revive_init;
};