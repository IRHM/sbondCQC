/*
	author: sbondo1234
	description: onPlayerKilled.sqf
*/

player enableFatigue false;

player setVariable ["Saved_Loadout",getUnitLoadout player]; //save loadout

sleep 1;
createDialog "teleportMenu";