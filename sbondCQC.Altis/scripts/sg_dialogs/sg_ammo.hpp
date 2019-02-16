/*
    Author: sbondo1234
    Description: sg_ammo.hpp
*/

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
            			h = safeZoneH * 0.31666667;
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
            			text = "Teleport";
            			colorBackground[] = {0.5686,0.7569,0.2431,0};
            			colorText[] = {1,1,1,1};
            			font = "PuristaMedium";
            			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);

            		};
            		class sg_762
            		{
            			type = 1;
            			idc = -1;
            			action = "player addMagazine ""20Rnd_762x51_Mag"";";
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
                        action = "player addMagazine ""30Rnd_762x39_Mag_F"";";
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
            			action = "player addMagazine ""30Rnd_65x39_caseless_green"";";
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
            			action = "player addMagazine ""30Rnd_556x45_Stanag"";";
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
            			action = "player addMagazines [""30Rnd_65x39_caseless_mag"", 5];";"hint "5 mags added";";
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
            		class sg_button_cancel_2
            		{
            			type = 1;
            			action = closeDialog 2;
            			idc = -1;
            			x = safeZoneX + safeZoneW * 0.46375;
            			y = safeZoneY + safeZoneH * 0.56333334;
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