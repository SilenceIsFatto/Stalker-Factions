private _faces = [
    "WhiteHead_01",
    "WhiteHead_02",
    "WhiteHead_03",
    "WhiteHead_04",
    "WhiteHead_05",
    "WhiteHead_06",
    "WhiteHead_07",
    "WhiteHead_08",
    "WhiteHead_09"
];

for "_i" from 10 to 32 do 
{
	_faces pushBack format["WhiteHead_%1", _i];
};

private _speakers = [
    "Male01ENG",
    "Male02ENG",
    "Male03ENG",
    "Male04ENG",
    "Male05ENG",
    "Male06ENG",
    "Male07ENG",
    "Male08ENG",
    "Male09ENG",
    "Male10ENG",
    "Male11ENG",
    "Male12ENG"
];

if (sil_stalker_setting_useContact) then {
    _faces = [
        "LivonianHead_1",
        "LivonianHead_2",
        "LivonianHead_3",
        "LivonianHead_4",
        "LivonianHead_5",
        "LivonianHead_6",
        "LivonianHead_7",
        "LivonianHead_8",
        "LivonianHead_9",
        "LivonianHead_10",
        "RussianHead_1",
        "RussianHead_2",
        "RussianHead_3",
        "RussianHead_4",
        "RussianHead_5"
    ];

    _speakers = [
        "Male01POL",
        "Male02POL",
        "Male03POL"
    ];
};

private _randomFace = selectRandom _faces;
private _randomSpeaker = selectRandom _speakers;
private _randomIdentity = [_randomFace, _randomSpeaker];

_randomIdentity;