params ["_unit","_instigator"];

private _side = _unit getVariable "originalSide";

// Only occupiers/invaders get SWAT-style response
if !(_side in [Occupants, Invaders]) exitWith {};

private _dispatch = true;
private _incidentPos = getPosATL _unit;

// Cities controlled by this side (citiesX = array of marker names)
private _policeCities = citiesX select { sidesX getVariable [_x, sideUnknown] == _side };
if (_policeCities isEqualTo []) exitWith {};

// First nearest city
private _loc = [_policeCities, _incidentPos] call BIS_fnc_nearestPosition;
private _nearestPos  = getMarkerPos _loc;

// Prevent spawn on top of players
if ((allPlayers inAreaArray [_nearestPos, 200, 200, 0, false]) isNotEqualTo []) then {
    _policeCities = _policeCities - [_loc];
    if (_policeCities isEqualTo []) exitWith {};

    _loc = [_policeCities, _incidentPos] call BIS_fnc_nearestPosition;
};

diag_log "Chosen city for SWAT spawn:";
diag_log _loc;

// Create SWAT group on same side as dead cop
private _grp = createGroup _side;
private _veh = 0;


if (TEH_spawnSwat == 1) then {
	// Gendarmerie secion
	private _partyVan = "B_GEN_Van_02_vehicle_F";
	private _inCharge = "B_GEN_Commander_F";
	private _policeman = "B_GEN_Soldier_F";

    private _spawnPos = (getMarkerPos _loc) findEmptyPosition [5, 40, _partyVan];
	if (_spawnPos isEqualTo []) exitWith {};
	_veh = createVehicle [_partyVan, _spawnPos, [], 0, "NONE"];

	private _skill = (0.1 * A3A_enemySkillMul) + (0.07 * (1 max A3A_activePlayerCount^0.5)) + (0.01 * tierWar);
	// Commander first → becomes leader
	private _commander = _grp createUnit [_inCharge, _spawnPos, [], 0, "NONE"];
	[_commander] call A3A_fnc_NATOinit;
	_commander setSkill _skill*1.1;

	// Group size: commander + N grunts (max 11 seats in van)
	private _gruntCount = 4 + tierWar;
	if (_gruntCount > 10) then { _gruntCount = 10; };

	for "_i" from 1 to _gruntCount do {
		private _u = _grp createUnit [_policeman, _spawnPos, [], 0, "NONE"];

		// Override headgear
		removeHeadgear _u;
		_u addHeadgear "H_PASGT_basic_blue_F";
		[_u] call A3A_fnc_NATOinit;
		_u setSkill _skill*1.05;
	};
};

if (TEH_spawnSwat == 2) then {
	private _faction = [A3A_faction_occ, A3A_faction_inv] select (_side == Invaders);
	private _partyVan = selectRandom (_faction get "vehiclesPolice");
    private _spawnPos = (getMarkerPos _loc) findEmptyPosition [5, 40, _partyVan];
	if (_spawnPos isEqualTo []) exitWith {};
	_veh = createVehicle [_partyVan, _spawnPos, [], 0, "NONE"];

	private _typeCargoGroup = [_partyVan, _side] call A3A_fnc_cargoSeats;
	_grp = [_spawnPos, _side, _typeCargoGroup, true,false] call A3A_fnc_spawnGroup;

	{
		private _unitToChange = _x;
		removeHeadgear _unitToChange;
		_unitToChange addHeadgear "H_PASGT_basic_blue_F";
		private _vestItems = vestItems _unitToChange;
		removeVest _unitToChange;
		_unitToChange addVest "V_TacVest_gen_F";

		{
			_x params ["_item", "_count"];

			for "_i" from 1 to _count do {
				_unitToChange addItemToVest _item;
			};
		} forEach (_vestItems call BIS_fnc_consolidateArray);
	} forEach (units _grp);
};

_veh setVariable ["originalSide", _side];

// Initial group behaviour while mounted
_grp setCombatMode "YELLOW";      // will shoot if threatened
_grp setBehaviour "AWARE";
_grp setSpeedMode "FULL";
_grp setFormation "COLUMN";

// Load everyone into the van
{ _x moveInAny _veh } forEach units _grp;

// Turn on emergency lights (if supported)
_veh animateSource ["lights_em_hide", 1];
[_veh,'CustomSoundController1',1,0.2] remoteExec ['BIS_fnc_setCustomSoundController', 0, ['CustomSoundController1', netID this] joinString ':'];

// Waypoint: drive to crime scene
private _wp = _grp addWaypoint [_incidentPos, 0];
_wp setWaypointType "MOVE";
_wp setWaypointBehaviour "AWARE";
_wp setWaypointSpeed "FULL";
_wp setWaypointCombatMode "YELLOW";
_wp setWaypointFormation "COLUMN";

// Spawn behaviour thread: disembark, search, then RTB
[_grp, _veh, _incidentPos, _instigator] spawn {
	params ["_grp", "_veh", "_incidentPos", "_instigator"];

	// === Phase 1: arrive and disembark near the scene ===
	waitUntil {
		sleep 1;
		({ alive _x } count units _grp == 0)
		|| { !alive _veh }
		|| { !canMove _veh }
		|| { (leader _grp distance2D _incidentPos) < 60 }
	};

	// Everyone dead → nothing more to do
	if ({ alive _x } count units _grp == 0) exitWith {};

	// Force disembark
	{
		if (alive _x) then {
			unassignVehicle _x;
			[_x] orderGetIn false;
			doGetOut _x;
		};
	} forEach units _grp;
	
	//turn off sirens
	[_veh, 'CustomSoundController1',0,0.4] remoteExec ['BIS_fnc_setCustomSoundController', 0, ['CustomSoundController1', netID this] joinString ':'];

	// Aggressive posture on foot
	_grp setCombatMode "RED";
	_grp setBehaviour "AWARE";
	_grp setSpeedMode "FULL";
	_grp setFormation "LINE";

	// Clear old waypoints (drive-to)
	while {count waypoints _grp > 0} do {
		deleteWaypoint [_grp, 0];
	};

	// Choose search position: instigator if valid, else incident pos
	private _searchPos =
		if (!isNull _instigator && {alive _instigator}) then {
			getPosWorld _instigator
		} else {
			_incidentPos
		};

	// Search-and-destroy around target area
	private _wpSearch = _grp addWaypoint [_searchPos, 10];
	_wpSearch setWaypointType "SAD";
	_wpSearch setWaypointBehaviour "AWARE";
	_wpSearch setWaypointSpeed "FULL";
	_wpSearch setWaypointCombatMode "RED";
	_wpSearch setWaypointFormation "LINE";

	// === Phase 2: monitor situation and eventually RTB ===

	private _tickLimit = diag_tickTime + 900;   // 15 min max
	private _allDead = false;

	waitUntil {
		sleep 20;
		_allDead = { alive _x } count units _grp == 0;

		_allDead
		|| { isNull _instigator || !alive _instigator }
		|| { diag_tickTime > _tickLimit }
	};

	if (_allDead) exitWith {};

	// Done here → clear waypoints
	while {count waypoints _grp > 0} do {
		deleteWaypoint [_grp, 0];
	};

	// Try to re-use their own van if it's still usable and nearby
	if (
		!isNull _veh
		&& { _veh isKindOf "Car" }
		&& { alive _veh }
		&& { count crew _veh == 0 }
		&& { (leader _grp) distance2D _veh < 300 }
	) then {
		private _passengers = [];
		{
			if (alive _x) then {
				_x assignAsCargo _veh;
				_passengers pushBack _x;
			};
		} forEach units _grp;
		_passengers orderGetIn true;

		private _lead = leader _grp;
		_lead assignAsDriver _veh;
		[_lead] orderGetIn true;

		// Give them some time to mount before RTB logic kicks in
		sleep 90;
	};

	// Hand off to global RTB logic
	[_grp] spawn A3A_fnc_enemyReturnToBase;
};