/*
	author: sbondo1234
	description: initPlayerLocal.sqf
*/

private ["_sg_kills", "_sg_deaths"];

systemChat "Welcome to sbondCQC";
execVM "scripts\sg_jump.sqf";

//Disable Stamina
player enableFatigue false;

player setCustomAimCoef 0;

call compile preprocessFile "scripts\sg_dialogs\health.sqf";
[] spawn sbondCQC_healthText;

player addMPEventHandler ["MPRespawn", {player setCustomAimCoef 0.00;}];
player addMPEventHandler ["MPKilled",{_this execVM "MPKilled.sqf"}];

//Respawn Points
player addMPEventHandler ["MPRespawn", {[
    respawn_1,
    respawn_2,
    respawn_3,
    respawn_4,
    respawn_5,
    respawn_6,
    respawn_7,
    respawn_8,
    respawn_9,
    respawn_10
]}];

//Keep Gear On Respawn (also in init)
player addEventHandler ["Killed",  {_this spawn Fnc_Set_Loadout}];
player addEventHandler ["Respawn", {_this spawn Fnc_Get_Loadout}];

player addEventHandler ["HandleHeal", {
	_this spawn {
		params ["_injured","_healer"];
		_damage = damage _injured;
		waitUntil {damage _injured != _damage};
		if (damage _injured < _damage) then {
			_injured setDamage 0;
		};
	};
}];

if (isNil {profileNamespace getVariable "sg_kills"}) then
{
	profileNamespace setVariable ["sg_kills", 0];
};

_sg_kills = profileNamespace getVariable ["sg_kills", 0];
player setVariable ["sg_kills", _sg_kills, true];

player addMPEventHandler ["MPKilled", {null = _this execVM "scripts\sg_stats.sqf";}];

call compile preprocessFile "scripts\sg_dialogs\sg_fnc_help.sqf";