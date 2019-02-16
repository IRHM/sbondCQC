/*
	author: sbondo1234
	description: sg_air.sqf (Airport)
*/

_sg_air = ceil(random 5);

if (_sg_air == 1) then{
    sg_airCheck = getMarkerPos "sg_air_1" nearEntities [["man"], 20];
    if (sg_airCheck isEqualTo []) then{
        player setPos getMarkerPos "sg_air_1";
        player setDir (markerDir "sg_air_1");
} else {
    _sg_air = 2;
};};
if (_sg_air == 2) then{
    sg_airCheck = getMarkerPos "sg_air_2" nearEntities [["man"], 20];
    if (sg_airCheck isEqualTo []) then{
        player setPos getMarkerPos "sg_air_2";
        player setDir (markerDir "sg_air_2");
} else {
    _sg_air = 3;
};};
if (_sg_air == 3) then{
    sg_airCheck = getMarkerPos "sg_air_3" nearEntities [["man"], 20];
    if (sg_airCheck isEqualTo []) then{
        player setPos getMarkerPos "sg_air_3";
        player setDir (markerDir "sg_air_3");
} else {
    _sg_air = 4;
};};
if (_sg_air == 4) then{
    sg_airCheck = getMarkerPos "sg_air_4" nearEntities [["man"], 20];
    if (sg_airCheck isEqualTo []) then{
        player setPos getMarkerPos "sg_air_4";
        player setDir (markerDir "sg_air_4");
} else {
     _sg_air = 5;
 };};
if (_sg_air == 5) then{
    sg_airCheck = getMarkerPos "sg_air_5" nearEntities [["man"], 20];
    if (sg_airCheck isEqualTo []) then{
        player setPos getMarkerPos "sg_air_5";
        player setDir (markerDir "sg_air_5");
};};

closeDialog 2;