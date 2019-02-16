/*
	author: sbondo1234
	description: sg_church.sqf
*/

_sg_god = ceil(random 5);

if (_sg_god == 1) then{
    sg_godCheck = getMarkerPos "sg_god_1" nearEntities [["man"], 20];
    if (sg_godCheck isEqualTo []) then{
        player setPos getMarkerPos "sg_god_1";
        player setDir (markerDir "sg_god_1");
} else {
    _sg_god = 2;
};};
if (_sg_god == 2) then{
    sg_godCheck = getMarkerPos "sg_god_2" nearEntities [["man"], 20];
    if (sg_godCheck isEqualTo []) then{
        player setPos getMarkerPos "sg_god_2";
        player setDir (markerDir "sg_god_2");
} else {
    _sg_god = 3;
};};
if (_sg_god == 3) then{
    sg_godCheck = getMarkerPos "sg_god_3" nearEntities [["man"], 20];
    if (sg_godCheck isEqualTo []) then{
        player setPos getMarkerPos "sg_god_3";
        player setDir (markerDir "sg_god_3");
} else {
    _sg_god = 4;
};};
if (_sg_god == 4) then{
    sg_godCheck = getMarkerPos "sg_god_4" nearEntities [["man"], 20];
    if (sg_godCheck isEqualTo []) then{
        player setPos getMarkerPos "sg_god_4";
        player setDir (markerDir "sg_god_4");
} else {
     _sg_god = 5;
 };};
if (_sg_god == 5) then{
    sg_godCheck = getMarkerPos "sg_god_5" nearEntities [["man"], 20];
    if (sg_godCheck isEqualTo []) then{
        player setPos getMarkerPos "sg_god_5";
        player setDir (markerDir "sg_god_5");
};};

closeDialog 2;