class CfgPatches
{
    class FU_faction_MKII_AA_b
    {
           name = "Freelance Union";
           Author = "Bolttrooper";
           units[] = {"FU_AntiAir_b"};
           weapons[] = {};
   };
};

class cfgvehicles
{
class Tank_F;
    class B_APC_Tracked_01_base_F: Tank_F
    {
        class Turrets;
    };
class B_APC_Tracked_01_AA_F: B_APC_Tracked_01_base_F
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
    };
class FU_AntiAir_b : B_APC_Tracked_01_AA_F
{ scope = 2
 Displayname = "Bardelas (FU)"
        class Turrets: Turrets
        {
            class MainTurret: MainTurret {
                                          magazines[] = {"680Rnd_35mm_AA_shells_Tracer_Red","ACE_120Rnd_35mm_ABM_shells_Tracer_Red"};
                                          weapons[] = {"autocannon_35mm"};
                                          };
                        };
};






};


