/*
    Author: sbondo1234
    Description: Init.sqf
*/

cutRsc ["sbondCQC_text","PLAIN"]; //Text Intro

//- Disable Saving
enableSaving [false, false];

//- Disable AI radio messages
enableRadio false;
enableSentences false;
0 fadeRadio 0;

//               text   voice
0 enableChannel [true, false]; //global
1 enableChannel [true, false]; //side
2 enableChannel [false, false]; //command
3 enableChannel [false, false]; //group
4 enableChannel [true, true]; //vehicle
5 enableChannel [true, true]; //direct

execVM "scripts\sg_macro.sqf";