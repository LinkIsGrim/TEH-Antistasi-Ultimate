#include "..\..\dialogues\ids.inc"
#include "..\..\script_component.hpp"
#include "\A3\Ui_f\hpp\defineResinclDesign.inc"

FIX_LINE_NUMBERS()

/*
  Opens the magazine conversion dialog
*/
disableSerialization;

createDialog "RscMagConvertDialog";

private _disp    = findDisplay A3A_IDD_MAGCONVERTDIALOG;
private _srcCtrl = _disp displayCtrl A3A_IDC_MAGCONVERT_SOURCE;
private _tgtCtrl = _disp displayCtrl A3A_IDC_MAGCONVERT_TARGET;

// clear both controls
lbClear _srcCtrl;
lbClear _tgtCtrl;

// build source list with displayName / lbData and CUP mm fix
private _sourceMags = [];
{
    _x params ["_magClass", "_count"];
    //if (_count <= 0) exitWith {};
	private _ammoCap = getNumber (configFile >> "CfgMagazines" >> _magClass >> "count");
	
	if (_ammoCap > 1) then {
		private _dispName = getText (configFile >> "CfgMagazines" >> _magClass >> "displayName");
		if (_dispName isEqualTo "") then { _dispName = _magClass; };

		// CUP fix: "30rnd 545x39mm" -> "30rnd 545x39 mm"
		_dispName = _dispName regexReplace ["([0-9])mm", "$1 mm"];

		_sourceMags pushBack [_dispName, _magClass];
	};
} forEach (jna_dataList # IDC_RSCDISPLAYARSENAL_TAB_CARGOMAGALL);

// sort alphabetically by display name
_sourceMags sort true;

// populate source combo
{
    _x params ["_dispName", "_magClass"];
    private _idx = _srcCtrl lbAdd _dispName;
    _srcCtrl lbSetData [_idx, _magClass];
} forEach _sourceMags;

// auto-select first source (triggers onSourceChanged)
if ((lbSize _srcCtrl) > 0) then {
    _srcCtrl lbSetCurSel 0;
};