/*
	author: sbondo1234
	description: sg_fnc_help.sqf
*/

sg_fnc_openHelp = {
    disableSerialization;
    lbClear 5545;
    {lbAdd[5545,_x]} forEach ["Spawn A Vehicle","Gun On Back","Jumping","Earplugs"];
};

sg_fnc_helpInfo = {
    _selectedLb = lbCurSel 5545;
        //2001 = idd for dialog. 5545 is idc for structured text.
    _lbText = ((findDisplay 2001) displayCtrl (5545));

    if (_selectedLb == 0) then{
        _lbText ctrlSetStructuredText parseText "You have selected Spawn A Vehicle.";
    };
    if (_selectedLb == 1) then{
        _lbText ctrlSetStructuredText parseText "You have selected Gun On Back.";
    };
};