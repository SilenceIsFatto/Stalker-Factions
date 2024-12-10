params [["_unit", player]];

if (is3DEN) exitWith {nil};

private _randomIdentity = call SIL_STALKER_fnc_getRandomIdentity;
private _randomFace = _randomIdentity#0;
private _randomSpeaker = _randomIdentity#1;

[_unit, _randomFace] remoteExec ["setFace", 0, _unit];
[_unit, _randomSpeaker] remoteExec ["setSpeaker", 0, _unit];