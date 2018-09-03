if (!isServer) exitWith {};

params [
        "_pos",
        "_grpSize",
        "_faction",
        "_side"
    ];

_grpSize params ["_grpMin", "_grpMax"];

private _r = floor (random (_grpMax - _grpMin));
private _grpSize = _r + _grpMin;

private _pool = [_faction, parseNumber (surfaceiswater _pos)] call TB_EOS_fnc_unitPools;
private _grp = createGroup _side;

for "_i" from 1 to _grpSize do
{
    _grp createUnit [selectRandom _pool, _pos, [], 6, "FORM"];
};

_grp