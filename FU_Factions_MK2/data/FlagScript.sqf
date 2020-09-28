if (isNil "FUflag") exitwith {};

FUflag addAction['Teleport to your Leader', {
    if(leader group (_this select 1) == (_this select 1)) then {
        (_this select 1) setPosASL (getPosASL PL);
    } 
    else{
        (_this select 1) setPosASL (getPosASL leader group (_this select 1));
    }
}];