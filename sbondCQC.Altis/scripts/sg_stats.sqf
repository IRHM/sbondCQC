/*
	author: sbondo1234
	description: sg_stats.sqf
*/

// sg_stats.sqf - executed on every client when player it is assigned to is killed
params [["_unitKilled", objNull], ["_killer", objNull]]; // https://community.bistudio.com/wiki/Arma_3:_Event_Handlers#MPKilled﻿
private ["_sg_kills"];

// Check if you are the ﻿killer
if (player isEqualTo _killer) then {

    // Update kill count
    _sg_kills = (player getVariable ["sg_kills", 0]) + 1; // 0 is the default value
    profileNamespace setVariable ["sg_kills", _sg_kills]; // ProfileNamespace cannot use true with setVariable
    player setVariable ["sg_kills", _sg_kills];

    // Inform user of kill
    if (_unitKilled in allUnits) then {
        hint format["You just killed %1, and now your current kill count is %2", name _unitKilled, _sg_kills];
    };
};