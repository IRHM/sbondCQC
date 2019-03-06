/*
	author: sbondo1234
	description: onPlayerKilled.sqf
*/

player enableFatigue false;
player setCustomAimCoef 0;

player setVariable ["Saved_Loadout",getUnitLoadout player]; //save loadout

sleep 2;
createDialog "teleportMenu";