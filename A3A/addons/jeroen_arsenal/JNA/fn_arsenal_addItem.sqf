

#include "tehBulletPile.inc"
#include "..\defineCommon.inc"


private _array = [[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[]];

if(typeName (_this select 0) isEqualTo "SCALAR")then{//[_index, _item] and [_index, _item, _amount];
	params["_index","_item",["_amount",1]];
	if(_index < 0)exitWith{
		ERROR_JN_2("Failed to addItem: ", _this);
		};
	_array set [_index,[[_item,_amount]]];
}else{
	_array = _this;
};

private _totalRefund = 0;
private _arsData = missionNamespace getVariable ["bis_fnc_arsenal_data", []];
private _arsPut = _arsData select IDC_RSCDISPLAYARSENAL_TAB_CARGOPUT;
private _arsThrow = _arsData select IDC_RSCDISPLAYARSENAL_TAB_CARGOTHROW;

{
	private _index = _forEachIndex;
	{
		private _mainCat = _index;
		private _item = _x select 0;
		private _amount = _x select 1;
		if (_item isEqualType "") then {
			if !(_item isEqualTo "")then {
				if(_index == -1)exitWith{["Antistasi: ERROR in additemarsenal: %1", _this] call BIS_fnc_error};
				if(_index == IDC_RSCDISPLAYARSENAL_TAB_CARGOMAG)then{_index = IDC_RSCDISPLAYARSENAL_TAB_CARGOMAGALL};
				if(_item in _arsPut) then {_index = IDC_RSCDISPLAYARSENAL_TAB_CARGOPUT};
				if(_item in _arsThrow) then {_index = IDC_RSCDISPLAYARSENAL_TAB_CARGOTHROW};

				//TFAR fix
				private _radioName = getText(configfile >> "CfgWeapons" >> _item >> "tf_parent");
				if!(_radioName isEqualTo "")then{_item = _radioName};

				//Weapon Stack fix
				private _weaponname = getText(configfile >> "CfgWeapons" >> _item >> "baseWeapon");
				if!(_weaponname isEqualTo "")then{_item = _weaponname};

				//RHS Sight Stack fix
				private _sightname = getText(configfile >> "CfgWeapons" >> _item >> "rhs_optic_base");
				if!(_sightname isEqualTo "")then{_item = _sightname};
				
				//ACRE fix
				private _radioName = getText(configfile >> "CfgVehicles" >> _item >> "acre_baseClass");
				if!(_radioName isEqualTo "")then{_item = _radioName};
				
				if (TEH_onlyRandom == 1 && (_index == IDC_RSCDISPLAYARSENAL_TAB_PRIMARYWEAPON or _index == IDC_RSCDISPLAYARSENAL_TAB_HANDGUN) && _amount > 0) then 
				{
					private _refund = true;
					private _widx = jna_dataList # _index findIf { _x # 0 isEqualTo _item};
					if (_widx >= 0) then {
						private _weaponBin = jna_dataList # _index # _widx # 1;
						if (_weaponBin == -1) then {
							_refund = false;
						};
					};
						
					if (_index == IDC_RSCDISPLAYARSENAL_TAB_PRIMARYWEAPON && _refund) then {
						_totalRefund = _totalRefund + 500 * _amount;
					};
					if (_index == IDC_RSCDISPLAYARSENAL_TAB_HANDGUN && _refund) then {
						_totalRefund = _totalRefund + 150 * _amount;
					};
				} else {
				
					// Update server immediately if local. Avoids lag after unlockEquipment
					if (isServer) then { ["UpdateItemAdd",[_index, _item, _amount,true]] call jn_fnc_arsenal }
					else { ["UpdateItemAdd",[_index, _item, _amount,true]] remoteExecCall ["jn_fnc_arsenal",2] };

					// then update other players. Don't execute on server twice
					private _playersInArsenal = +(server getVariable ["jna_playersInArsenal",[]]) - [2];
					if (0 in _playersInArsenal) then { _playersInArsenal = -2 };
					if (_playersInArsenal isEqualTo []) exitWith {};
					["UpdateItemAdd",[_index, _item, _amount,true]] remoteExecCall ["jn_fnc_arsenal",_playersInArsenal];
				};
			};
		};
		_index = _mainCat;
	} forEach _x;
}foreach _array;

[0, _totalRefund] remoteExec ["A3A_fnc_resourcesFIA",2];
