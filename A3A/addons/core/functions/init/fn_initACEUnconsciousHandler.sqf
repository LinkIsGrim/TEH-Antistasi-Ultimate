/*
	Handler for the ACE medical unconscious event

	No arguments or return
	Should be installed on every machine.
*/

scriptName "initACEUnconsciousHandler.sqf";
#include "..\..\script_component.hpp"
FIX_LINE_NUMBERS()
Info("initACEUnconsciousHandler started");

["ace_unconscious", {
	params["_unit", "_knockout"];
	if !(local _unit) exitWith {};				// handler runs everywhere, only process where unit is local
	private _realSide = side group _unit;		// setUnconscious in ACE often breaks this otherwise
	private _groupLeader = leader (group _unit);
	private _act = objNull;
	if (_knockout) exitWith
	{
		_unit setVariable ["incapacitated", true, true];	// for canFight tests
		if (TEH_POWshortcuts) then {
			//TODO: WIP
			_unit setCaptive true;
			if (_realSide == teamPlayer) then {
				_action = [_unit,"stabilize"] remoteExec ["A3A_fnc_flagaction",[teamPlayer,civilian],_unit]; //shortcut for capturing bleeding enemies
			} else {
				_action = [_unit,"zip"] remoteExec ["A3A_fnc_flagaction",[teamPlayer,civilian],_unit]; //shortcut for capturing bleeding enemies
			};
		};

        // Pass group lead if unit is the leader
        if (_unit == leader (group _unit)) then
        {
            private _index = (units (group _unit)) findIf {_x call A3A_fnc_canFight};
            if(_index != -1) then {
                group _unit selectLeader ((units group _unit) select _index);
            };
        };

		if (_realSide == Occupants || _realSide == Invaders) then {
			[_unit, group _unit, _unit getVariable ["ace_medical_lastDamageSource", objNull]] spawn A3A_fnc_AIReactOnKill;
		};
		
		//Pick a fren to attempt rescue. Control return is postponed until player is awake, bled out, AI is knocked down, or returned manually.
		if (isPlayer _unit && unconsciousPossessAi && (getOxygenRemaining _unit > 0.1) && _unit getVariable ["owner","Nobody"] isEqualTo _unit) then {
			private _units = (
				//look up own group + able men nearby
				((units group _unit) select {_x distance _unit < 300}) + (nearestObjects [getPosATL _unit, ["Man"], 200] select {side _x == teamPlayer})
			) select {
				!(isPlayer _x)
				&& {_x isNotEqualTo petros}
				&& {!(_x getVariable ["incapacitated", false])}
			};

			//preferably with medical education
			_units = [_units, [], { _x getUnitTrait "Medic" }, "DESCEND"] call BIS_fnc_sortBy;

			if (count _units > 0) then {
				//player setCaptive false;
				[_units, true] spawn A3A_fnc_controlunit;
			} else {
				private _vehicles = nearestObjects [getPosATL _unit, ["Car"], 500] select {
					alive _x
					&& {_x isKindOf "Car"}
					&& {crew _x isEqualTo []}
					&& {(_x getVariable ["originalSide", sideUnknown]) isEqualTo teamPlayer}
				};

				if (count _vehicles > 0) then {
					private _veh = _vehicles # 0;
					private _typeRifle = FactionGet(reb, "unitRifle");

					private _newUnit = [group _unit, _typeRifle, getPosATL _veh, [], 0, "NONE"] call A3A_fnc_createUnit;

					if (!isNull _newUnit) then {
						_nul = [-1, 0] remoteExec ["A3A_fnc_resourcesFIA",2];
						[-100] call A3A_fnc_resourcesPlayer;
						[localize "STR_A3A_reinf_reinfPlayer_header", localize "STR_A3A_reinf_reinfPlayer_success"] call A3A_fnc_customHint;

						[_newUnit] spawn A3A_fnc_FIAinit;
						//player setCaptive false;
						[[_newUnit], true] spawn A3A_fnc_controlunit;
					};
				};
			};
		};
	};

	// Unit woke up
	_unit setVariable ["incapacitated", false, true];

	if !(_unit getVariable ["ACE_captives_isHandcuffed", false]) then {
		_unit setCaptive false;			// match vanilla behaviour
	};

	if (_unit == _groupLeader) then {
		group _unit selectLeader _unit;
	};
	
	if (isPlayer _unit) exitWith {};					// don't force surrender with players
	if (_realSide != Occupants && _realSide != Invaders) exitWith {};
	if (_unit getVariable ["surrendered", false]) exitWith {};		// don't surrender twice

	// surrender if we don't have a primary weapon
	if (primaryWeapon _unit == "" || _unit getVariable ["ace_captives_isHandcuffed", false]) exitWith { [_unit] spawn A3A_fnc_surrenderAction };


	// find closest fighting unit within 50m
	private _nearestUnit = objNull;
	private _minDist = 999;
	{
		private _dist = _x distance _unit;
		if (side _x != civilian && _x != _unit && _dist < _minDist && {_x call A3A_fnc_canFight}) then {
			_minDist = _dist;
			_nearestUnit = _x;
		};
	} forEach (_unit nearEntities ["Man", 50]);

	if (side _nearestUnit == teamPlayer) then { [_unit] spawn A3A_fnc_surrenderAction };

}] call CBA_fnc_addEventHandler;

Info("initACEUnconsciousHandler completed");
