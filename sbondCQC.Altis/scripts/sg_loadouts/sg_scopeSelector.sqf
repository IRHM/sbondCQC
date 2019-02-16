/*
	author: sbondo1234
	description: sg_scopeSelector.sqf
*/

_this = sg_scopeSelector;

_this addAction ["MRCO", {
    player addPrimaryWeaponItem "optic_MRCO"; hint "Your Scope Has Been Set!"
}, [], 1, false, true, "", "", 5];

_this addAction ["ARCO", {
    player addPrimaryWeaponItem "optic_Arco"; hint "Your Scope Has Been Set!"
}, [], 1, false, true, "", "", 5];

_this addAction ["RCO", {
    player addPrimaryWeaponItem "optic_Hamr"; hint "Your Scope Has Been Set!"
}, [], 1, false, true, "", "", 5];

_this addAction ["ACO", {
    player addPrimaryWeaponItem "optic_Aco"; hint "Your Scope Has Been Set!"
}, [], 1, false, true, "", "", 5];
