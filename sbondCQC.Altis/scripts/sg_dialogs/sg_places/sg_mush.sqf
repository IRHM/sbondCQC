/*
	author: sbondo1234
	description: sg_mush.sqf, Check for players is not needed since you spawn in a safezone.
*/

_sg_mush = ceil(random 5);

if (_sg_mush == 1) then{
    player setPos getMarkerPos "sg_mush_1";
    player setDir (markerDir "sg_mush_1");
} else {
    _sg_mush = 2;
};
if (_sg_mush == 2) then{
    player setPos getMarkerPos "sg_mush_2";
    player setDir (markerDir "sg_mush_2");
} else {
    _sg_mush = 3;
};
if (_sg_mush == 3) then{
    player setPos getMarkerPos "sg_mush_3";
    player setDir (markerDir "sg_mush_3");
} else {
    _sg_mush = 4;
};
if (_sg_mush == 4) then{
    player setPos getMarkerPos "sg_mush_4";
    player setDir (markerDir "sg_mush_4");
} else {
     _sg_mush = 5;
 };
if (_sg_mush == 5) then{
    player setPos getMarkerPos "sg_mush_5";
    player setDir (markerDir "sg_mush_5");
};

closeDialog 2;