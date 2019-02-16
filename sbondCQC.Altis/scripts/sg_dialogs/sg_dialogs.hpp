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
         			x = safeZoneX + safeZoneW * 0.45875;
         			y = safeZoneY + safeZoneH * 0.35666667;
         			w = safeZoneW * 0.1075;
         			h = safeZoneH * 0.01666667;
         			style = 0+2;
         			text = "shift+h = holster gun on back";
         			colorBackground[] = {0.9412,0.5843,0.8549,0};
         			colorText[] = {1,1,1,1};
         			font = "PuristaMedium";
         			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 35) * 1);
         			moving = false;

         	};
         	class sg_text_4
            {
            		type = 0;
            		idc = -1;
            		x = safeZoneX + safeZoneW * 0.45875;
            		y = safeZoneY + safeZoneH * 0.38111112;
           			w = safeZoneW * 0.1075;
           			h = safeZoneH * 0.01666667;
           			style = 0+2;
           			text = "shift+2 = Vehicle Menu";
           			colorBackground[] = {0.9412,0.5843,0.8549,0};
           			colorText[] = {1,1,1,1};
           			font = "PuristaMedium";
           			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 35) * 1);
           			moving = false;

            };
            class sg_text_3
            {
            		type = 0;
            		idc = -1;
           			x = safeZoneX + safeZoneW * 0.45875;
           	    	y = safeZoneY + safeZoneH * 0.40555556;
           			w = safeZoneW * 0.1075;
           			h = safeZoneH * 0.01666667;
           			style = 0+2;
           			text = "shift+o = Earplugs";
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
         			x = safeZoneX + safeZoneW * 0.45875;
         			y = safeZoneY + safeZoneH * 0.47666667;
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
         	class sg_topBarText
             {
             		type = 0;
             		idc = -1;
             		x = safeZoneX + safeZoneW * 0.449375;
             		y = safeZoneY + safeZoneH * 0.3;
             		w = safeZoneW * 0.4125;
             		h = safeZoneH * 0.01666667;
             		style = 0;
             		text = "Help";
             		colorBackground[] = {0.5686,0.7569,0.2431,0};
             		colorText[] = {1,1,1,1};
             		font = "PuristaMedium";
             		sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 30) * 1);

             };
         	class sg_AlphaText
         	{
         			type = 0;
         			idc = -1;
         			x = safeZoneX + safeZoneW * -0.02050781;
         			y = safeZoneY + safeZoneH * 0.95486112;
         			w = safeZoneW * 0.94921875;
         			h = safeZoneH * 0.06597223;
         			style = 0;
         			text = "sbondCQC - Alpha";
         			colorBackground[] = {0.5686,0.7569,0.2431,0};
         			colorText[] = {1,1,1,1};
         			font = "PuristaMedium";
         			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 28) * 1);

         	};

     };


 };

