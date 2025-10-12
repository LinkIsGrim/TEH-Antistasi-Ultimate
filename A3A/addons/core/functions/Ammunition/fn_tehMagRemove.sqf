params ["_unit", "_magClass", "_origCount", "_newCount"];

private _allMags = ((magazinesAmmoCargo uniformContainer _unit) + (magazinesAmmoCargo vestContainer _unit) + (magazinesAmmoCargo backpackContainer _unit)) select { (_x#0) == _magClass };
{
    _unit removeMagazine _magClass;
} forEach _allMags;

private _removed = false;
{
    if (!_removed && (_x#1) == _origCount) then {
        _removed = true;
        _unit addMagazine [_x#0, _newCount];
    } else {
        _unit addMagazine [_x#0, _x#1];
    };
} forEach _allMags;