class sbondCQC_health
{
	idd = -1;
    duration = 1e+1000;
    onLoad = "uiNamespace setVariable ['sbondCQC_healthText2', _this select 0];";

	class Controls
	{
        class sg_background_5
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.92625;
			y = safeZoneY + safeZoneH * 0.83222223;
			w = safeZoneW * 0.06375;
			h = safeZoneH * 0.03333334;
			style = 0;
			text = "";
			colorBackground[] = {0.2869,0.2869,0.2869,0.8};
			colorText[] = {0.9843,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class sg_health_ico
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.931875;
			y = safeZoneY + safeZoneH * 0.84;
			w = safeZoneW * 0.01;
			h = safeZoneH * 0.01777778;
			style = 48;
			text = "images\health.paa";
			colorBackground[] = {0.1176,0.2314,0.9098,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class sg_health_txt
		{
			type = 0;
			idc = 1337;
			x = safeZoneX + safeZoneW * 0.95;
			y = safeZoneY + safeZoneH * 0.84333334;
			w = safeZoneW * 0.033125;
			h = safeZoneH * 0.01222223;
			style = 0;
			text = "";
			colorBackground[] = {0.1176,0.2314,0.9098,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};

	};
};