if (isNil "FUzeus") exitwith {};

FUzeus addEventHandler [ "CuratorObjectPlaced", 
{params[ "", "_object" ]; 
        if ( typeOf _object isKindOf "CAManBase" && { side _object == independent } ) then { 
        _object setUnitLoadout (missionConfigFile >> "FU_CustomLoadout");}else{};

        if ( _object in vehicles ) then {
        {_x setUnitLoadout (missionConfigFile >> "FU_CustomLoadout");
        }forEach ( crew _object select { side _x == independent } );
                                        };
}];