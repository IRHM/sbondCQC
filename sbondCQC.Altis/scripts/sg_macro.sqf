/*
	Author: sbondo1234
	File: sg_macro.sqf
*/

waitUntil {!isNull(findDisplay 46)};
(findDisplay 46) displaySetEventHandler ["KeyDown","_this call keyspressed"];

keyspressed = {
    _shift =_this select 2;
    _ctrl = _this select 3;
    _alt = _this select 4;
    _handled = false;
    switch (_this select 1) do {

        case 35: {//h
                if (_shift) then {
                    player action ["SwitchWeapon", player, player, 100];
                    _handled = true;
                };
            };
        case 2: {//1
                    if (_shift) then {
                        createDialog "ammoMenu";
                        _handled = true;
                    };
                };
        case 3: {//2
                    if (_shift) then {
                        createDialog "NMD_RscDisplayGarage";
                        _handled = true;
                    };
                };
        case 24: { //o

                    if (_shift) then{
                        switch (player getVariable ["CurrentVolume", 0]) do
                        {
                            case 0: {1 fadeSound 0.1; player setVariable ["CurrentVolume", 10];hintSilent "Earplugs at 90%";}; //Earplugs at 90%
                            case 10: {1 fadeSound 0.5; player setVariable ["CurrentVolume", 20];hintSilent "Earplugs at 50%";};
                            case 20: {1 fadeSound 0.2; player setVariable ["CurrentVolume", 50];hintSilent "Earplugs at 20%";};
                            case 50: {1 fadeSound 1; player setVariable ["CurrentVolume", 0];hintSilent "Earplugs Out";}; //Taken Out
                            _handled = true;
                        };
                    };
                 };
};
    _handled;
};