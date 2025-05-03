/*
	Function: HALs_store_fnc_getCompatibleItems
	Author: HallyG
	Returns all items and magazines compatible with a weapon.

	Argument(s):
	0: Weapon classname <STRING>

	Return Value:
	<ARRAY>

	Example:
	(primaryWeapon player) call HALs_store_fnc_getCompatibleItems;
__________________________________________________________________*/
params [
	["_classname", ""]
];

private _attachments = _classname call BIS_fnc_compatibleItems;
_attachments append (compatibleMagazines  _classname);


_attachments
