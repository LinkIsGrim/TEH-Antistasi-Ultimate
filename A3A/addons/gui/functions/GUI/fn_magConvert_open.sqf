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
private _ctrlAmount = _disp displayCtrl A3A_IDC_MAGCONVERT_AMOUNT;

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

	
	private _magIdx = jna_dataList # IDC_RSCDISPLAYARSENAL_TAB_CARGOMAGALL findIf {_x # 0 isEqualTo _magClass};
	private _amount = jna_dataList # IDC_RSCDISPLAYARSENAL_TAB_CARGOMAGALL # _magIdx # 1;
    private _amountStr = if(_amount == -1) then {
		"[   ∞  ]  ";
	} else {
		private["_suffix","_prefix","_amountString"];
		_suffix = "";
		_prefix = "";
		if(_amount > 999)then{
			_amount = round(_amount/1000);_suffix="k";
			_prefix = switch true do{
				case(_amount>=100):{_amount = 99; "";};
				case(_amount>=10):{"";};
				case(_amount>=0):{"0";};
			};
		}else{
			_prefix = switch true do{
				case(_amount>=100):{"";};
				case(_amount>=10):{"0";};
				case(_amount>=0):{"00";};
			};
		};
		("[ " + _prefix + (str _amount) + _suffix + " ]  ");
	};
    private _idx = _srcCtrl lbAdd (_amountStr + _dispName);
    _srcCtrl lbSetData [_idx, _magClass];
} forEach _sourceMags;

// auto-select first source (triggers onSourceChanged)
if ((lbSize _srcCtrl) > 0) then {
    _srcCtrl lbSetCurSel 0;
};


{
    private _idx = _ctrlAmount lbAdd (_x select 0);
    _ctrlAmount lbSetData [_idx, str (_x select 1)];
} forEach [
    ["All", -1],
    ["10", 10],
    ["25", 25],
    ["50", 50]
];
_ctrlAmount lbSetCurSel 0;