/*
	author: sbondo1234
	description: sg_sdar.sqf
*/


_unit = _this select 1;

//-removing all items from player

removeAllWeapons _unit;
removeAllItems _unit;
removeAllAssignedItems _unit;
removeUniform _unit;
removeVest _unit;
removeBackpack _unit;
removeHeadgear _unit;
removeGoggles _unit;

//-Adding Clothing

_unit addHeadgear "H_PilotHelmetFighter_B";
_unit addVest "V_RebreatherB";
_unit addUniform "U_B_Wetsuit";
_unit addBackpack "B_LegStrapBag_black_F";
_unit addGoggles "G_Balaclava_lowprofile";

//-Adding Weapons & Mags

//Primary Weapon
_unit addWeapon "arifle_SDAR_F";
_unit addPrimaryWeaponItem "20Rnd_556x45_UW_mag";
_unit addMagazines ["20Rnd_556x45_UW_mag", 15];

//Pistol
_unit addWeapon "hgun_Rook40_F";
_unit addHandgunItem "30Rnd_9x21_Mag";

//-AIDS / Misc
_unit addWeapon "Rangefinder";
_unit addItem "Medikit";
_unit addItem "ItemMap";
_unit assignItem "ItemMap";
_unit addItem "ItemGPS";
_unit assignItem "ItemGPS";
_unit addItem "ItemRadio";
_unit assignItem "ItemRadio";
_unit addItem "ItemCompass";
_unit assignItem "ItemCompass";


//-hint

hint format ["Have fun in the water, stay in the redzone to fight!"];