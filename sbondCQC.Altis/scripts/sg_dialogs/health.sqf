/*
	author: sbondo1234
	description: health.sqf
*/

sbondCQC_healthText =
{
    waitUntil {!isNull player};
    if (!local player) exitWith {};

    disableSerialization;
    ("sbondCQC_health_t" call BIS_fnc_rscLayer) cutRsc ["sbondCQC_health","PLAIN"];

    _display = uiNamespace getVariable "sbondCQC_healthText2";
    _ctrlHps = _display displayCtrl 1337;

    private "_heading";
    while {!isNull _display} do {

        sleep 0.1;
        _ctrlHps ctrlSetText format ["%1%2", round((1 - (damage player)) * 100), "%"];

        switch (true) do {
            case (getDammage player < 0.25): {_ctrlHps ctrlSetTextColor [0,0.5,0,1];};
            case (getDammage player >= 0.25): {_ctrlHps ctrlSetTextColor [1,1,0,1];};
            case (getDammage player >= 0.5): {_ctrlHps ctrlSetTextColor [1,0.645,0,1];};
            case (getDammage player >= 0.75): {_ctrlHps ctrlSetTextColor [1,0,0,1];};
        };

    };

};