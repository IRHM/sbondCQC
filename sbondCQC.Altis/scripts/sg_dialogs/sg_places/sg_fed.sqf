/*
	author: sbondo1234
	description: sg_fed.sqf
*/

_sg_fed = ceil(random 5);

if (_sg_fed == 1) then{
    sg_fedCheck = getMarkerPos "sg_fed_1" nearEntities [["man"], 20];
    if (sg_fedCheck isEqualTo []) then{
        player setPos getMarkerPos "sg_fed_1";
        player setDir (markerDir "sg_fed_1");
} else {
    _sg_fed = 2;
};};
if (_sg_fed == 2) then{
    sg_fedCheck = getMarkerPos "sg_fed_2" nearEntities [["man"], 20];
    if (sg_fedCheck isEqualTo []) then{
        player setPos getMarkerPos "sg_fed_2";
        player setDir (markerDir "sg_fed_2");
} else {
    _sg_fed = 3;
};};
if (_sg_fed == 3) then{
    sg_fedCheck = getMarkerPos "sg_fed_3" nearEntities [["man"], 20];
    if (sg_fedCheck isEqualTo []) then{
        player setPos getMarkerPos "sg_fed_3";
        player setDir (markerDir "sg_fed_3");
} else {
    _sg_fed = 4;
};};
if (_sg_fed == 4) then{
    sg_fedCheck = getMarkerPos "sg_fed_4" nearEntities [["man"], 20];
    if (sg_fedCheck isEqualTo []) then{
        player setPos getMarkerPos "sg_fed_4";
        player setDir (markerDir "sg_fed_4");
} else {
     _sg_fed = 5;
 };};
if (_sg_fed == 5) then{
    sg_fedCheck = getMarkerPos "sg_fed_5" nearEntities [["man"], 20];
    if (sg_fedCheck isEqualTo []) then{
        player setPos getMarkerPos "sg_fed_5";
        player setDir (markerDir "sg_fed_5");
};};

closeDialog 2;