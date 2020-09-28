class CfgPatches
{
    class FU_faction_MKII_p_groups_b
    {
           name = "Contract Union";
           Author = "Bolttrooper";
           units[] = {};
           weapons[] = {};
   };
};


class CfgGroups {
    
class WEST
{
class FU_Faction_p_Blufor 
                          {
name = "Contract Union";

class FU_urban_pmc {
name = "Infantry (Urban)";

class FU_Command_p_pmc_a
       {
name = "1: Commander Squad";
side = 1;
faction = "FU_Faction_p_blufor";
icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
rarityGroup = 0.5;


                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "FU_Officer_p_pmc";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "FU_Medic_p_pmc";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_eng_p_pmc";
                    };

       };
class FU_Squad_p_pmc_b
       {
name = "2: Squad";
side = 1;
faction = "FU_Faction_p_blufor";
icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "FU_Squadlead_p_pmc";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "FU_Medic_p_pmc";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_eng_p_pmc";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_RiflemanLAT_p_pmc";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_Rifleman_p_pmc";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_Rifleman_p_pmc";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_Rifleman_p_pmc";
                    };
       };
class FU_Squad_p_pmc_c
       {
name = "3: Squad (AT)";
side = 1;
faction = "FU_Faction_p_blufor";
icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "FU_Squadlead_p_pmc";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "FU_Medic_p_pmc";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_eng_p_pmc";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_RiflemanLAT_p_pmc";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_Rifleman_p_pmc";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_Rifleman_p_pmc";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_Rifleman_p_pmc";
                    };
       };
class FU_Squad_p_pmc_d
       {
name = "4: Fireteam";
side = 1;
faction = "FU_Faction_p_blufor";
icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "FU_Squadlead_p_pmc";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "FU_Medic_p_pmc";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_Rifleman_p_pmc";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_Rifleman_p_pmc";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_RiflemanLAT_p_pmc";
                    };

       };
                          };

class FU_Combat_gre {
name = "Infantry (Combat Patrol)";

class FU_Command_p_gre_a
       {
name = "1: Commander Squad";
side = 1;
faction = "FU_Faction_p_blufor";
icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
rarityGroup = 0.5;


                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "FU_Officer_p_gre";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "FU_Medic_p_gre";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_eng_p_gre";
                    };

       };
class FU_Squad_p_gre_b
       {
name = "2: Squad";
side = 1;
faction = "FU_Faction_p_blufor";
icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "FU_Squadlead_p_gre";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "FU_Medic_p_gre";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_eng_p_gre";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_RiflemanLAT_p_gre";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_Rifleman_p_gre";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_Rifleman_p_gre";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_Rifleman_p_gre";
                    };
       };
class FU_Squad_p_gre_c
       {
name = "3: Squad (AT)";
side = 1;
faction = "FU_Faction_p_blufor";
icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "FU_Squadlead_p_gre";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "FU_Medic_p_gre";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_eng_p_gre";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_RiflemanLAT_p_gre";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_RiflemanLAT_p_gre";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_Rifleman_p_gre";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_Rifleman_p_gre";
                    };
       };
class FU_Squad_p_gre_d
       {
name = "4: Fireteam";
side = 1;
faction = "FU_Faction_p_blufor";
icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "FU_Squadlead_p_gre";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "FU_Medic_p_gre";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_Rifleman_p_gre";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_Rifleman_p_gre";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_RiflemanLAT_p_gre";
                    };

       };
                          };
class FU_Spec_p_blk {
name = "Infantry (Special Forces)";

class FU_Command_p_blk_a
       {
name = "1: Commander Squad";
side = 1;
faction = "FU_Faction_p_blufor";
icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
rarityGroup = 0.5;


                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "FU_Officer_p_blk";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "FU_Medic_p_blk";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_eng_p_blk";
                    };
               };
class FU_Squad_p_blk_b
       {
name = "2: Squad";
side = 1;
faction = "FU_Faction_p_blufor";
icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "FU_Squadlead_p_blk";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "FU_Medic_p_blk";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_eng_p_blk";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_RiflemanLAT_p_blk";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_Rifleman_p_blk";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_Rifleman_p_blk";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_Rifleman_p_blk";
                    };
               };
class FU_Squad_p_blk_c
       {
name = "3: Squad (AT)";
side = 1;
faction = "FU_Faction_p_blufor";
icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "FU_Squadlead_p_blk";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "FU_Medic_p_blk";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_eng_p_blk";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_RiflemanLAT_p_blk";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_RiflemanLAT_p_blk";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_Rifleman_p_blk";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_Rifleman_p_blk";
                    };
               };
class FU_Squad_p_blk_d
       {
name = "4: Fireteam";
side = 1;
faction = "FU_Faction_p_blufor";
icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "FU_Squadlead_p_blk";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "FU_Medic_p_blk";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_Rifleman_p_blk";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_Rifleman_p_blk";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "FU_RiflemanLAT_p_blk";
                    };

       };
                          };

};
                };
};
