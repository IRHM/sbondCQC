waitUntil {!isNull(findDisplay 46)};
	disableSerialization;

	[]	spawn {
		
	(findDisplay 46) displayAddEventHandler ["KeyDown", {
	if(_this select 1 == 0x07) // key 6		DIK_6 
	then {
	_Earplugs_ctrl = (_this select 0) displayCtrl 9001;
	if(isNull(_Earplugs_ctrl)) then {
	_Earplugs_ctrl = (_this select 0) ctrlCreate ["RscText", 9001];
	_Earplugs_ctrl ctrlShow false;		
	};
	_shown = ctrlShown _Earplugs_ctrl;
	
	(if(_shown)then{
		
	//________________ EARPLUGS OUT ________________			
	//you can add your own display notification	here	
	
	"GF_Earplugs" cutText ["", "PLAIN"];
	
	titleText ["<t color='#FF3333' size='2'font='PuristaBold'>EARPLUGS OUT</t>", "PLAIN DOWN", -1, true, true];	
	1 fadeSound (player getVariable ['GF_Earplugs_Volume',1]);
	}else{
			
	//________________ EARPLUGS IN ________________			
	//you can add your own display notification	here
	
	"GF_Earplugs" cutRsc ["Rsc_GF_Earplugs", "PLAIN"];
	
	titleText ["<t color='#339933' size='2'font='PuristaBold'>EARPLUGS IN</t>", "PLAIN DOWN", -1, true, true];	
	player setVariable ['GF_Earplugs_Volume',soundVolume,FALSE];
	1 fadeSound 0.1;
	}); 
				
	_Earplugs_ctrl ctrlShow !_shown;
	};
}];
};