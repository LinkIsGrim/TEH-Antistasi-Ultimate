/*  
Maintainer: John Jordan
    Select from distance-weighted list of available enemy air bases or return full list
    Checks idle, spawner, distance and garrison
    Carrier is always available, so always returns something

Scope: Anywhere? Only using on server atm
Environment: Scheduled or unscheduled

Arguments:
    <SIDE> Side of enemy faction
    <POS2D> Target position to use
    <BOOL> Optional, true to return all bases & weights (Default: false)

Return value:
    <STRING> Marker name of airbase, or <ARRAY, ARRAY> [airbases, weights]
*/

params ["_side", "_targPos", ["_returnAll", false]];

// Dynamically reposition the carrier based on support target position
private _worldSize = worldSize;  // you could cache this globally if needed
private _x = _targPos select 0;
private _y = _targPos select 1;

private _distLeft = _x;
private _distRight = _worldSize - _x;
private _distTop = _worldSize - _y;
private _distBottom = _y;

private _minDist = _distTop;
private _direction = 0; // North

if (_distRight < _minDist) then {
    _minDist = _distRight;
    _direction = 90; // East
};
if (_distBottom < _minDist) then {
    _minDist = _distBottom;
    _direction = 180; // South
};
if (_distLeft < _minDist) then {
    _minDist = _distLeft;
    _direction = 270; // West
};

private _offset = -45 + random 90;
private _finalDir = _direction + _offset;
//increasing the length so that the pie is ouside the borders but not too close
_minDist = (sqrt (_minDist^2 * 2)) max 2000;

private _carrierPos = _targPos getPos [_minDist, _finalDir];

private _carrier = ["CSAT_carrier", "NATO_carrier"] select (_side == Occupants);
_carrier setMarkerPos _carrierPos;

private _freeAirports = [];
private _weights = [];
{
    if (sidesX getVariable [_x,sideUnknown] != _side) then {continue};
    if (dateToNumber date < server getVariable [_x, 0]) then {continue};
    if (spawner getVariable _x == 0) then {continue};              // don't need spawn places, so this is fine
    if (count (garrison getVariable [_x,[]]) < 16) then {continue};

    private _effDist = (markerPos _x distance2D _targPos);     // prefer mid-distance spawns
	if (_effDist < 2000) then {continue};
	
    _freeAirports pushBack _x;
    _weights pushBack (1 / _effDist^2);
} forEach airportsX;

// Carrier/air corridor is always available
_freeAirports pushBack _carrier;
_weights pushBack (1 / (markerPos _carrier distance2D _targPos)^2);

if (_returnAll) exitWith { [_freeAirports, _weights] };
_freeAirports selectRandomWeighted _weights;
