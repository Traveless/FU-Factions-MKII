class CfgPatches
{
    class FU_faction_MKII_AA_o
    {
           name = "Freelance Union";
           Author = "Bolttrooper";
           units[] = {"FU_AntiAir_o"};
           weapons[] = {};
   };
};

class cfgvehicles
{

class Tank_F;
    class APC_Tracked_02_base_F: Tank_F
    {
        class Turrets;
    };
class O_APC_Tracked_02_AA_F: APC_Tracked_02_base_F
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
    };
class FU_AntiAir_O : O_APC_Tracked_02_AA_F
{ scope = 2
 Displayname = "ZSU-35 Tigris (FU)";
        class Turrets: Turrets
        {
            class MainTurret: MainTurret {
                                          magazines[] = {"680Rnd_35mm_AA_shells_Tracer_Green","ACE_120Rnd_35mm_ABM_shells_Tracer_Green"};
                                          weapons[] = {"autocannon_35mm"};
                                          };
                        };
};

};


