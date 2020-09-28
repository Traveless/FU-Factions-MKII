_intelman = player;

[_intelman, "Activate", "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa", "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_hack_ca.paa", "currentWeapon _this isKindOf [""hgun_esd_01_base_F"", configFile >> ""CfgWeapons""]", "currentWeapon _this isKindOf [""hgun_esd_01_base_F"", configFile >> ""CfgWeapons""]", {playSound "click"; }, {}, {

_radar = ["muzzle_antenna_01_f"];
_cellphone = ["muzzle_antenna_02_f"];
_disrupt = ["muzzle_antenna_03_f"];
markerList = [];
markerUnits = [];
_items = handgunItems _caller;
_disrupted = cursorTarget;
{
if (_x in _radar) then
{
_randomradio = selectrandom ["RadioAmbient2","RadioAmbient6","RadioAmbient8"]; 
playSound _randomradio;
{

                                        _unit = _x; //assigns a variable to the unit
					markerUnits = markerUnits + [_x]; //adds the unit to an array
					_markerName = str(format ["%1",name _x]); //gathers the name of the unit to use as a marker name
					_mName = "m" + _markerName; //adds m to the marker name
		
						if(side _x == side player) then //Creates marker for people on your team (shows up blue)
						{}
						else //Creates marker for people on the opposite teams (red)
						{
							_unit = _x;
							markerUnits = markerUnits + [_x];
							_mName setMarkerSizeLocal [0.3, 0.6];
							_mName = createMarkerLocal [_markerName, position _x]; 
							_mName setMarkerShapeLocal "ICON";
							_mName setMarkerTypeLocal "mil_triangle";
							_mName setMarkerColorLocal "ColorRed";
							_mName setMarkerDirLocal (direction _x);
							markerList = markerList + [_mName];
						};
						
						
					
				} forEach allUnits;
hint "Map updated for 15 seconds";
sleep 15;{deleteMarkerLocal _x;} forEach markerList; playSound "Orange_Lights_Off";hint "Device recharging";sleep 105; hint "Device ready"; playSound "Orange_Lights_On"


}else{};} forEach _items;


{
if (_x in _disrupt) then 
   {
    if(side _disrupted == side player) then { hint "Cannot be used on Friendlies";} else {
              if(_disrupted in vehicles) then 
{
private "_gas";
_gas = Fuel _disrupted;
[_disrupted,0] remoteexec ['setfuel',_disrupted];
hint "Target disabled for 30 seconds";
sleep 30; 
[_disrupted,_gas] remoteexec ['setfuel',_disrupted];
[_disrupted,true] remoteexec ['engineOn',_disrupted];
playSound "Orange_Lights_Off";hint "Device recharging";sleep 300; hint "Device ready"; playSound "Orange_Lights_On"
}else{ hint "Select Vehicle with T";};
                                                     };
   }else{};
} forEach _items;


{
if (_x in _cellphone) then 
{
hint "Creating audible enemy radio ping.";
{if(side _x == side _caller &&{typeOf _x isKindOf "CAManBase"}) then {} else{

[_x,["TacticalPing3", 200]] remoteExec ["say3d"];[_x,["TacticalPing3", 200]] remoteExec ["say3d"];
[_x,["TacticalPing3", 200]] remoteExec ["say3d"];[_x,["TacticalPing3", 200]] remoteExec ["say3d"];

};}forEach allUnits; sleep 5;
{if(side _x == side _caller &&{typeOf _x isKindOf "CAManBase"}) then {} else{
[_x,["TacticalPing3", 200]] remoteExec ["say3d"];[_x,["TacticalPing3", 200]] remoteExec ["say3d"];
[_x,["TacticalPing3", 200]] remoteExec ["say3d"];[_x,["TacticalPing3", 200]] remoteExec ["say3d"];

};}forEach allUnits; sleep 10;
playSound "Orange_Lights_Off";hint "Device recharging";sleep 15; hint "Device ready"; playSound "Orange_Lights_On"
}else{};} forEach _items;


}, { hint "You stop what you're doing"; }, [], 2, nil, false, false] call BIS_fnc_holdActionAdd;