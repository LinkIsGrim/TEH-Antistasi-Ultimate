params ["_anchor"];

//NOTE: set vector first, otherwise they won't align
private _up  = [0, 0, 1];
_anchor setVectorUp _up;

private _posASL   = getPosASLW _anchor; 
private _z        = (_posASL select 2) - 1.1; 

// Prepare vectoring: platforms are aligned to the righthand side
private _dir      = vectorDir _anchor; 
private _fwd      = vectorNormalized [ (_dir select 0), (_dir select 1), 0 ]; 
private _right    = vectorNormalized [ (_fwd select 1), -(_fwd select 0), 0 ]; // +90° right 
 
private _towers   = nearestObjects [getPosATL _anchor, ["CargoPlatform_01_base_F"], 20]; 
 
private _pairs    = floor((count _towers)/2) min 3; 
 
// Add platforms in pairs
for "_i" from 0 to (_pairs - 1) do { 
    private _dxBase = 4.5 + (_i * 6); 
     
    private _towerApos = [ 
        (_posASL select 0) + (_right select 0) * _dxBase,  
        (_posASL select 1) + (_right select 1) * _dxBase,  
        _z 
    ]; 
     
    private _towerBpos = [ 
        (_posASL select 0) + (_fwd select 0) * 6 + (_right select 0) * _dxBase, 
        (_posASL select 1) + (_fwd select 1) * 6 + (_right select 1) * _dxBase, 
        _z 
    ]; 
     
    // Select towers by index 
    private _towerA = _towers select (_i*2); 
    private _towerB = _towers select (_i*2 + 1); 
    
	//NOTE: set vector first, otherwise they won't align
	_towerA setVectorDirAndUp [_fwd,_up];  
    _towerA setPosASLW _towerApos; 
    
	_towerB setVectorDirAndUp [_fwd,_up]; 
    _towerB setPosASLW _towerBpos; 
    
 
};

//adjust tower parts
{ 
	_x animateSource ["Panel_1_hide_source", 1]; 
	_x animateSource ["Panel_2_hide_source", 1]; 
	_x animateSource ["Panel_3_hide_source", 1]; 
	_x animateSource ["Panel_4_hide_source", 1];
	_x animateSource ["Leg_1_move_source", 1.1]; 
	_x animateSource ["Leg_2_move_source", 1.1]; 
	_x animateSource ["Leg_3_move_source", 1.1]; 
	_x animateSource ["Leg_4_move_source", 1.1];
} forEach _towers;

//straighten statics on top of the platforms (or rather above scaffolds base)
{
	if (getPosASLW _x # 2 - _z > 4) then {
		_x setVectorUp _up;
	}
} forEach nearestObjects [getPosATL _anchor, ["static"], 20];
