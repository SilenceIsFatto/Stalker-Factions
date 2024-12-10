#include "..\..\script_component.hpp"

#define SETTING_HEADER STALKER Factions
#define SETTING_HEADER_QUOTE QUOTE(SETTING_HEADER)

[
    "sil_stalker_setting_useContact", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "CHECKBOX", // setting type
    ["Use Contact Identities", "Enabling this will change the faces and voices used by the [STALKER] faction units."], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    SETTING_HEADER_QUOTE, // Pretty name of the category where the setting can be found. Can be stringtable entry.
    false,
    true // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
] call CBA_fnc_addSetting;