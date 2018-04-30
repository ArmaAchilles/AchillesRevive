#include "paramDefault.hpp"
#include "\A3\ui_f_curator\ui\defineResinclDesign.inc"

private _isCurator = player in (allCurators apply {getAssignedCuratorUnit _x});

if (_isCurator) then
{
	if (isClass (configFile >> "CfgPatches" >> "achilles_modules_f_achilles")) then
	{
		waitUntil{ !isNil "ares_category_list" };

		#include "functions\revive\initCurator.hpp"
	};
};
