/*
    Author: sbondo1234
    Description: Init.sqf
*/

//Disable Saving
enableSaving [false, false];

// Disable AI radio messages
enableRadio false;
enableSentences false;
0 fadeRadio 0;

//channels
//               text   voice
0 enableChannel [true, false]; //global
1 enableChannel [true, false]; //side
2 enableChannel [false, false]; //command
3 enableChannel [false, false]; //group
4 enableChannel [true, true]; //vehicle
5 enableChannel [true, true]; //direct

waitUntil {!isNull(findDisplay 46)};
(findDisplay 46) displaySetEventHandler ["KeyDown","_this call keyspressed"];

keyspressed = {
    _shift =_this select 2;
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
    case 24: {//o
            if (_shift) then{
                if (soundVolume == 1) then{
                    2 fadeSound 0.1;
                    hint "Earplugs In";
                } else {
                    2 fadeSound 1;
                    hint "Earplugs Out";
                }; _handled = true;
            };
        };
    };
    _handled;
};

