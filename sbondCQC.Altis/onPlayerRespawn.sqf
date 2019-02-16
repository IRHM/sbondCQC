/*
	author: sbondo1234
	description: onPlayerRespawn.sqf
*/

player enableFatigue false;
player switchCamera "EXTERNAL";

player setUnitLoadout (player getVariable ["Saved_Loadout",[]]); //set saved loadout

