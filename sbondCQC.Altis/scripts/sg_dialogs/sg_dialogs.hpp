/*
    Author: sbondo1234
    Description: sg_dialogs.hpp
*/

class teleportMenu{
	
	idd = 2000;
	movingEnable = false;

	
	class controls{

       class sg_frame
       		{
       			type = 0;
       			idc = -1;
       			x = 0.37727273;
       			y = 0.13939396;
       			w = 0.30454546;
       			h = 0.48747477;
       			style = 0;
       			text = "";
       			colorBackground[] = {0.1137,0.1137,0.1137,1};
       			colorText[] = {1,1,1,1};
       			font = "PuristaMedium";
       			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

       		};
       class sg_topBar
       		{
       			type = 0;
       			idc = -1;
       			x = safeZoneX + safeZoneW * 0.449375;
       			y = safeZoneY + safeZoneH * 0.30111112;
       			w = safeZoneW * 0.125625;
       			h = safeZoneH * 0.01666667;
       			style = 0;
       			text = "";
       			colorBackground[] = {0,0.2,0,1};
       			colorText[] = {1,1,1,1};
       			font = "PuristaMedium";
       			sizeEx = (((((safezoneW / safezoneH) min 1.5) / 1.5) / 500) *13);

       		};

       	class sg_topBarText
       		{
       			type = 0;
       			idc = -1;
       			x = safeZoneX + safeZoneW * 0.44375;
       			y = safeZoneY + safeZoneH * 0.29777778;
       			w = safeZoneW * 0.4125;
       			h = safeZoneH * 0.01666667;
       			style = 0;
       			text = "Teleport";
       			colorBackground[] = {0.5686,0.7569,0.2431,0};
       			colorText[] = {1,1,1,1};
       			font = "PuristaMedium";
       			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);

       		};
       	class sg_button_OG
       		{
       			type = 1;
       			idc = -1;
       			x = 0.41212122;
       			y = 0.21818183;
       			w = 0.23424246;
       			h = 0.05454546;
       			style = 0+2;
       			text = "OG Arms";
       			action = [] execVM "scripts\sg_dialogs\sg_places\sg_og.sqf";
       			borderSize = 0;
       			colorBackground[] = {0.2,0.2,0.2,1};
       			colorBackgroundActive[] = {0.2,0.2,0.2,1};
       			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
       			colorBorder[] = {0,0,0,0};
       			colorDisabled[] = {0.2,0.2,0.2,1};
       			colorFocused[] = {0.2,0.2,0.2,1};
       			colorShadow[] = {0,0,0,0};
       			colorText[] = {1,1,1,1};
       			font = "PuristaMedium";
       			offsetPressedX = 0.01;
       			offsetPressedY = 0.01;
       			offsetX = 0.01;
       			offsetY = 0.01;
       			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
       			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
       			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
       			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
       			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};

       		};
       	class sg_button_Airport
       		{
       			type = 1;
       			idc = -1;
       			x = 0.41212122;
       			y = 0.28818184;
       			w = 0.23424246;
       			h = 0.05454546;
       			style = 0+2;
       			text = "Airport";
       			action = [] execVM "scripts\sg_dialogs\sg_places\sg_air.sqf";
       			borderSize = 0;
       			colorBackground[] = {0.2,0.2,0.2,1};
       			colorBackgroundActive[] = {0.2,0.2,0.2,1};
       			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
       			colorBorder[] = {0,0,0,0};
       			colorDisabled[] = {0.2,0.2,0.2,1};
       			colorFocused[] = {0.2,0.2,0.2,1};
       			colorShadow[] = {0,0,0,0};
       			colorText[] = {1,1,1,1};
       			font = "PuristaMedium";
       			offsetPressedX = 0.01;
       			offsetPressedY = 0.01;
       			offsetX = 0.01;
       			offsetY = 0.01;
       			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
       			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
       			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
       			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
       			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};

       		};
       	class sg_button_Church
       		{
       			type = 1;
       			idc = -1;
       			x = 0.41212122;
       			y = 0.35818186;
       			w = 0.23424246;
       			h = 0.05454546;
       			style = 0+2;
       			text = "Church";
       			action = [] execVM "scripts\sg_dialogs\sg_places\sg_church.sqf";
       			borderSize = 0;
       			colorBackground[] = {0.2,0.2,0.2,1};
       			colorBackgroundActive[] = {0.2,0.2,0.2,1};
       			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
       			colorBorder[] = {0,0,0,0};
       			colorDisabled[] = {0.2,0.2,0.2,1};
       			colorFocused[] = {0.2,0.2,0.2,1};
       			colorShadow[] = {0,0,0,0};
       			colorText[] = {1,1,1,1};
       			font = "PuristaMedium";
       			offsetPressedX = 0.01;
       			offsetPressedY = 0.01;
       			offsetX = 0.01;
       			offsetY = 0.01;
       			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
       			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
       			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
       			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
       			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};

       		};
       	class sg_button_Fed
       		{
       			type = 1;
       			idc = -1;
       			x = 0.41212122;
       			y = 0.42818189;
       			w = 0.23424246;
       			h = 0.05454546;
       			style = 0+2;
       			text = "Federal Reserve";
       			action = [] execVM "scripts\sg_dialogs\sg_places\sg_fed.sqf";
       			borderSize = 0;
       			colorBackground[] = {0.2,0.2,0.2,1};
       			colorBackgroundActive[] = {0.2,0.2,0.2,1};
       			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
       			colorBorder[] = {0,0,0,0};
       			colorDisabled[] = {0.2,0.2,0.2,1};
       			colorFocused[] = {0.2,0.2,0.2,1};
       			colorShadow[] = {0,0,0,0};
       			colorText[] = {1,1,1,1};
       			font = "PuristaMedium";
       			offsetPressedX = 0.01;
       			offsetPressedY = 0.01;
       			offsetX = 0.01;
       			offsetY = 0.01;
       			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
       			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
       			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
       			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
       			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};

       		};
       	class sg_button_cancel
       	{
       			type = 1;
       			idc = -1;
       			x = 0.41212122;
       			y = 0.5281819;
       			w = 0.23424246;
       			h = 0.05454546;
       			style = 0+2;
       			text = "Cancel";
       			action = closeDialog 2;
       			borderSize = 0;
       			colorBackground[] = {0.2,0.2,0.2,1};
       			colorBackgroundActive[] = {0.2,0.2,0.2,1};
       			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
       			colorBorder[] = {0,0,0,0};
       			colorDisabled[] = {0.2,0.2,0.2,1};
       			colorFocused[] = {0.2,0.2,0.2,1};
       			colorShadow[] = {0,0,0,0};
       			colorText[] = {1,1,1,1};
       			font = "PuristaMedium";
       			offsetPressedX = 0.01;
       			offsetPressedY = 0.01;
       			offsetX = 0.01;
       			offsetY = 0.01;
       			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
       			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
       			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
       			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
                soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};

 		 };
 	};

 };
class helpMenu{

     idd = 2001;
     movingEnable = false;

     class controls{
        class sg_spawnVeh{
            type = 0;
            idc = 5546;
            x = safeZoneX + safeZoneW * 0.52375;
            y = safeZoneY + safeZoneH * 0.39222223;
            w = safeZoneW * 0.048125;
            h = safeZoneH * 0.02444445;
            style = 0;
            text = "";
            colorBackground[] = {0.302,0.302,0.302,0};
            colorText[] = {1,1,1,1};
            font = "PuristaMedium";
            sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
        };
		class sg_frame
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.339375;
			y = safeZoneY + safeZoneH * 0.35333334;
			w = safeZoneW * 0.313125;
			h = safeZoneH * 0.26777778;
			style = 0;
			text = "";
			colorBackground[] = {0.1137,0.1137,0.1137,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class sg_topBar
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.339375;
			y = safeZoneY + safeZoneH * 0.35333334;
			w = safeZoneW * 0.313125;
			h = safeZoneH * 0.01666667;
			style = 0;
			text = "";
			colorBackground[] = {0,0.2,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.5) / 1.5) / 500) *13);

		};
		class sg_list_1
		{
			type = 5;
			idc = 5545;
			onLoad = [] spawn sg_fnc_openHelp;
			onLBDblClick = [] spawn sg_fnc_helpInfo;
			x = safeZoneX + safeZoneW * 0.343125;
			y = safeZoneY + safeZoneH * 0.37555556;
			w = safeZoneW * 0.10375;
			h = safeZoneH * 0.24;
			style = 16;
			colorBackground[] = {0.302,0.302,0.302,0.4683};
			colorDisabled[] = {0.302,0.302,0.302,0.4841};
			colorSelect[] = {1,1,1,1};
			colorText[] = {1,1,1,0.381};
			font = "PuristaMedium";
			maxHistoryDelay = 0;
			rowHeight = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1.0};
			class ListScrollBar
			{
				color[] = {1,1,1,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";

			};

		};
		class sg_bottom_bar
		{
			type = 0;
			idc = 0;
			x = safeZoneX + safeZoneW * 0.45125;
			y = safeZoneY + safeZoneH * 0.59777778;
			w = safeZoneW * 0.196875;
			h = safeZoneH * 0.01777778;
			style = 0;
			text = "";
			colorBackground[] = {0.302,0.302,0.302,0.5079};
			colorText[] = {0.5765,0.098,0.6471,0};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class sg_text_2
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.496875;
			y = safeZoneY + safeZoneH * 0.59888889;
			w = safeZoneW * 0.1075;
			h = safeZoneH * 0.01666667;
			style = 0+2;
			text = "Created By sbondo1234";
			colorBackground[] = {0.9412,0.5843,0.8549,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 35) * 1);
			moving = false;

		};
		class sg_main_textFrame
		{
			type = 0;
			idc = 0;
			x = safeZoneX + safeZoneW * 0.45125;
			y = safeZoneY + safeZoneH * 0.37555556;
			w = safeZoneW * 0.196875;
			h = safeZoneH * 0.21666667;
			style = 0;
			text = "";
			colorBackground[] = {0.302,0.302,0.302,0.5079};
			colorText[] = {0.5765,0.098,0.6471,0};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class sg_topBarText
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.3425;
			y = safeZoneY + safeZoneH * 0.35222223;
			w = safeZoneW * 0.040625;
			h = safeZoneH * 0.01666667;
			style = 0;
			text = "Help";
			colorBackground[] = {0.5686,0.7569,0.2431,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);

		};

	};
};
class ammoMenu{

     idd = 2002;
     movingEnable = false;

     class Controls{

     		class sg_frame_2
            		{
            			type = 0;
            			idc = -1;
            			x = safeZoneX + safeZoneW * 0.449375;
						y = safeZoneY + safeZoneH * 0.30111112;
						w = safeZoneW * 0.125625;
						h = safeZoneH * 0.34111112;
						style = 0;
            			text = "";
            			colorBackground[] = {0.1137,0.1137,0.1137,1};
            			colorText[] = {1,1,1,1};
            			font = "PuristaMedium";
            			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

            		};
            		class sg_topBar_2
            		{
            			type = 0;
            			idc = -1;
            			x = safeZoneX + safeZoneW * 0.449375;
            			y = safeZoneY + safeZoneH * 0.30111112;
            			w = safeZoneW * 0.125625;
            			h = safeZoneH * 0.01666667;
            			style = 0;
            			text = "";
            			colorBackground[] = {0,0.2,0,1};
            			colorText[] = {1,1,1,1};
            			font = "PuristaMedium";
            			sizeEx = (((((safezoneW / safezoneH) min 1.5) / 1.5) / 500) *13);

            		};
            		class sg_topBarText_2
            		{
            			type = 0;
            			idc = -1;
            			x = safeZoneX + safeZoneW * 0.4475;
            			y = safeZoneY + safeZoneH * 0.3;
            			w = safeZoneW * 0.4125;
            			h = safeZoneH * 0.01666667;
            			style = 0;
            			text = "Items";
            			colorBackground[] = {0.5686,0.7569,0.2431,0};
            			colorText[] = {1,1,1,1};
            			font = "PuristaMedium";
            			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);

            		};
            		class sg_762
            		{
            			type = 1;
            			idc = -1;
            			action = " player addMagazines ['20Rnd_762x51_Mag', 5]; hint '5 magazines added'; ";
            			x = 0.41212122;
            			y = 0.21818183;
            			w = 0.23424246;
            			h = 0.05454546;
            			style = 0+2;
            			text = "7.62";
            			borderSize = 0;
            			colorBackground[] = {0.2,0.2,0.2,1};
            			colorBackgroundActive[] = {0.2,0.2,0.2,1};
            			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
            			colorBorder[] = {0,0,0,0};
            			colorDisabled[] = {0.2,0.2,0.2,1};
            			colorFocused[] = {0.2,0.2,0.2,1};
            			colorShadow[] = {0,0,0,0};
            			colorText[] = {1,1,1,1};
            			font = "PuristaMedium";
            			offsetPressedX = 0.01;
            			offsetPressedY = 0.01;
            			offsetX = 0.01;
            			offsetY = 0.01;
            			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
            			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
            			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
            			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
            			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};

            		};
            		class sg_ak762
                    {
                        type = 1;
                        idc = -1;
                        action = " player addMagazines ['30Rnd_762x39_Mag_F', 5]; hint '5 magazines added'; ";
                        x = safeZoneX + safeZoneW * 0.46375;
                        y = safeZoneY + safeZoneH * 0.38333334;
                        w = safeZoneW * 0.096875;
                        h = safeZoneH * 0.03;
                        style = 0+2;
                        text = "AK 7.62";
                        borderSize = 0;
                        colorBackground[] = {0.2,0.2,0.2,1};
                        colorBackgroundActive[] = {0.2,0.2,0.2,1};
                        colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
                        colorBorder[] = {0,0,0,0};
                        colorDisabled[] = {0.2,0.2,0.2,1};
                        colorFocused[] = {0.2,0.2,0.2,1};
                        colorShadow[] = {0,0,0,0};
                        colorText[] = {1,1,1,1};
                        font = "PuristaMedium";
                        offsetPressedX = 0.01;
                        offsetPressedY = 0.01;
                        offsetX = 0.01;
                        offsetY = 0.01;
                        sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
                        soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
                        soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
                        soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
                        soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};

                    };
            		class sg_65c
            		{
            			type = 1;
            			idc = -1;
            			action = " player addMagazines ['30Rnd_65x39_caseless_green', 5]; hint '5 magazines added'; ";
            			x = 0.41212122;
            			y = 0.35818186;
            			w = 0.23424246;
            			h = 0.05454546;
            			style = 0+2;
            			text = "6.5 Caseless";
            			borderSize = 0;
            			colorBackground[] = {0.2,0.2,0.2,1};
            			colorBackgroundActive[] = {0.2,0.2,0.2,1};
            			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
            			colorBorder[] = {0,0,0,0};
            			colorDisabled[] = {0.2,0.2,0.2,1};
            			colorFocused[] = {0.2,0.2,0.2,1};
            			colorShadow[] = {0,0,0,0};
            			colorText[] = {1,1,1,1};
            			font = "PuristaMedium";
            			offsetPressedX = 0.01;
            			offsetPressedY = 0.01;
            			offsetX = 0.01;
            			offsetY = 0.01;
            			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
            			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
            			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
            			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
            			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};

            		};
            		class sg_556
            		{
            			type = 1;
            			idc = -1;
            			action = " player addMagazines ['30Rnd_556x45_Stanag', 5]; hint '5 magazines added'; ";
            			x = safeZoneX + safeZoneW * 0.46375;
            			y = safeZoneY + safeZoneH * 0.5;
            			w = safeZoneW * 0.096875;
            			h = safeZoneH * 0.03;
            			style = 0+2;
            			text = "5.56";
            			borderSize = 0;
            			colorBackground[] = {0.2,0.2,0.2,1};
            			colorBackgroundActive[] = {0.2,0.2,0.2,1};
            			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
            			colorBorder[] = {0,0,0,0};
            			colorDisabled[] = {0.2,0.2,0.2,1};
            			colorFocused[] = {0.2,0.2,0.2,1};
            			colorShadow[] = {0,0,0,0};
            			colorText[] = {1,1,1,1};
            			font = "PuristaMedium";
            			offsetPressedX = 0.01;
            			offsetPressedY = 0.01;
            			offsetX = 0.01;
            			offsetY = 0.01;
            			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
            			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
            			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
            			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
            			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};

            		};
            		class sg_65s
            		{
            			type = 1;
            			idc = -1;
            			action = " player addMagazines ['30Rnd_65x39_caseless_mag', 5]; hint '5 magazines added'; ";
            			x = 0.41212122;
            			y = 0.42818189;
            			w = 0.23424246;
            			h = 0.05454546;
            			style = 0+2;
            			text = "6.5 STANAG";
            			borderSize = 0;
            			colorBackground[] = {0.2,0.2,0.2,1};
            			colorBackgroundActive[] = {0.2,0.2,0.2,1};
            			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
            			colorBorder[] = {0,0,0,0};
            			colorDisabled[] = {0.2,0.2,0.2,1};
            			colorFocused[] = {0.2,0.2,0.2,1};
            			colorShadow[] = {0,0,0,0};
            			colorText[] = {1,1,1,1};
            			font = "PuristaMedium";
            			offsetPressedX = 0.01;
            			offsetPressedY = 0.01;
            			offsetX = 0.01;
            			offsetY = 0.01;
            			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
            			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
            			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
            			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
            			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};

            		};
					class sg_fak
					{
						type = 1;
						idc = -1;
						action = " player addItem 'FirstAidKit'; hint '1 FAK added'; ";
						x = safeZoneX + safeZoneW * 0.46375;
						y = safeZoneY + safeZoneH * 0.54;
						w = safeZoneW * 0.096875;
						h = safeZoneH * 0.03;
						style = 0+2;
						text = "First Aid Kit";
						borderSize = 0;
						colorBackground[] = {0.2,0.2,0.2,1};
						colorBackgroundActive[] = {0.2,0.2,0.2,1};
						colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
						colorBorder[] = {0,0,0,0};
						colorDisabled[] = {0.2,0.2,0.2,1};
						colorFocused[] = {0.2,0.2,0.2,1};
						colorShadow[] = {0,0,0,0};
						colorText[] = {1,1,1,1};
						font = "PuristaMedium";
						offsetPressedX = 0.01;
						offsetPressedY = 0.01;
						offsetX = 0.01;
						offsetY = 0.01;
						sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
						soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
						soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
						soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
						soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
						
					};
            		class sg_button_cancel_2
            		{
            			type = 1;
            			action = closeDialog 2;
            			idc = -1;
						x = safeZoneX + safeZoneW * 0.46375;
						y = safeZoneY + safeZoneH * 0.58777778;
						w = safeZoneW * 0.096875;
						h = safeZoneH * 0.03;
            			style = 0+2;
            			text = "Cancel";
            			borderSize = 0;
            			colorBackground[] = {0.2,0.2,0.2,1};
            			colorBackgroundActive[] = {0.2,0.2,0.2,1};
            			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
            			colorBorder[] = {0,0,0,0};
            			colorDisabled[] = {0.2,0.2,0.2,1};
            			colorFocused[] = {0.2,0.2,0.2,1};
            			colorShadow[] = {0,0,0,0};
            			colorText[] = {1,1,1,1};
            			font = "PuristaMedium";
            			offsetPressedX = 0.01;
            			offsetPressedY = 0.01;
            			offsetX = 0.01;
            			offsetY = 0.01;
            			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
            			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
            			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
            			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
            			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};

            		};

            };

     };
class helpMush{

	idd = -1;
	movingEnable = false;

	class Controls
	{
		class sg_frame
		{
			type = 0;
			idc = -1;
			x = 0.37727273;
			y = 0.13939396;
			w = 0.30454546;
			h = 0.48747477;
			style = 0;
			text = "";
			colorBackground[] = {0.1137,0.1137,0.1137,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class sg_topBar
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.449375;
			y = safeZoneY + safeZoneH * 0.30111112;
			w = safeZoneW * 0.125625;
			h = safeZoneH * 0.01666667;
			style = 0;
			text = "";
			colorBackground[] = {0,0.2,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.5) / 1.5) / 500) *13);

		};
		class sg_text_1
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.451875;
			y = safeZoneY + safeZoneH * 0.32444445;
			w = safeZoneW * 0.1075;
			h = safeZoneH * 0.01666667;
			style = 0;
			text = "What is this?";
			colorBackground[] = {0.9412,0.5843,0.8549,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);
			moving = false;
			shadow = 2;

		};
		class sg_text_4
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.4575;
			y = safeZoneY + safeZoneH * 0.35111112;
			w = safeZoneW * 0.11;
			h = safeZoneH * 0.05666667;
			style = 0+16;
			text = "Mushroom Spawn. Just get a car out and drive down the road and decamp in mushroom.";
			colorBackground[] = {0.9412,0.5843,0.8549,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 35) * 1);
			moving = false;

		};
		class sg_text_2
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.458125;
			y = safeZoneY + safeZoneH * 0.52333334;
			w = safeZoneW * 0.1075;
			h = safeZoneH * 0.01666667;
			style = 0+2;
			text = "Created By sbondo1234";
			colorBackground[] = {0.9412,0.5843,0.8549,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 35) * 1);
			moving = false;

		};
		class sg_close_helpM
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.56;
			y = safeZoneY + safeZoneH * 0.30222223;
			w = safeZoneW * 0.013125;
			h = safeZoneH * 0.01333334;
			style = 0;
			text = "images\close.paa";
			borderSize = 0;
			colorBackground[] = {0.5765,0.8431,0.7176,0};
			colorBackgroundActive[] = {1,0,0,0};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,0};
			colorFocused[] = {0.2,0.2,0.2,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0.4235,0.1569,0.2824,0};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};

		};
		class sg_topBarText
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.449375;
			y = safeZoneY + safeZoneH * 0.3;
			w = safeZoneW * 0.13875;
			h = safeZoneH * 0.01666667;
			style = 0;
			text = "Mushroom Help";
			colorBackground[] = {0.5686,0.7569,0.2431,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);

		};

	};
};