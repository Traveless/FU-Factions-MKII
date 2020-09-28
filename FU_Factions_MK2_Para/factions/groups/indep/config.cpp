class CfgPatches
{
    class FU_faction_MKII_p_groups_i
    {
           name = "Contract Union";
           Author = "Bolttrooper";
           units[] = {};
           weapons[] = {};
   };
};


class CfgGroups {
    
class Indep 
{
class FU_Faction_p_Indep
                          {
name = "Contract Union";

class FU_urban_blu {
name = "Infantry (Urban)";

class FU_Command_p_blu_a
       {
name = "1: Commander Squad";
side = 2;
faction = "FU_Faction_p_indep";
icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
rarityGroup = 0.5;


                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "FU_Officer_p_blu";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "FU_Medic_p_blu";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_eng_p_blu";
                    };

       };
class FU_Squad_p_blu_b
       {
name = "2: Squad";
side = 2;
faction = "FU_Faction_p_indep";
icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "FU_Squadlead_p_blu";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "FU_Medic_p_blu";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_eng_p_blu";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_RiflemanLAT_p_blu";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_Rifleman_p_blu";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_Rifleman_p_blu";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_Rifleman_p_blu";
                    };
       };
class FU_Squad_p_blu_c
       {
name = "3: Squad (AT)";
side = 2;
faction = "FU_Faction_p_indep";
icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "FU_Squadlead_p_blu";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "FU_Medic_p_blu";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_eng_p_blu";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_RiflemanLAT_p_blu";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_Rifleman_p_blu";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_Rifleman_p_blu";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_Rifleman_p_blu";
                    };
       };
class FU_Squad_p_blu_d
       {
name = "4: Fireteam";
side = 2;
faction = "FU_Faction_p_indep";
icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "FU_Squadlead_p_blu";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "FU_Medic_p_blu";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_Rifleman_p_blu";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_Rifleman_p_blu";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_RiflemanLAT_p_blu";
                    };

       };
                          };

class FU_Combat_tig {
name = "Infantry (Combat Patrol)";

class FU_Command_p_tig_a
       {
name = "1: Commander Squad";
side = 2;
faction = "FU_Faction_p_indep";
icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
rarityGroup = 0.5;


                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "FU_Officer_p_tig";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "FU_Medic_p_tig";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_eng_p_tig";
                    };

       };
class FU_Squad_p_tig_b
       {
name = "2: Squad";
side = 2;
faction = "FU_Faction_p_indep";
icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "FU_Squadlead_p_tig";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "FU_Medic_p_tig";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_eng_p_tig";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_RiflemanLAT_p_tig";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_Rifleman_p_tig";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_Rifleman_p_tig";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_Rifleman_p_tig";
                    };
       };
class FU_Squad_p_tig_c
       {
name = "3: Squad (AT)";
side = 2;
faction = "FU_Faction_p_indep";
icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "FU_Squadlead_p_tig";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "FU_Medic_p_tig";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_eng_p_tig";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_RiflemanLAT_p_tig";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_RiflemanLAT_p_tig";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_Rifleman_p_tig";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_Rifleman_p_tig";
                    };
       };
class FU_Squad_p_tig_d
       {
name = "4: Fireteam";
side = 2;
faction = "FU_Faction_p_indep";
icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "FU_Squadlead_p_tig";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "FU_Medic_p_tig";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_Rifleman_p_tig";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_Rifleman_p_tig";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_RiflemanLAT_p_tig";
                    };

       };
                          };
class FU_Spec_p_mil {
name = "Infantry (Special Forces)";

class FU_Command_p_mil_a
       {
name = "1: Commander Squad";
side = 2;
faction = "FU_Faction_p_indep";
icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
rarityGroup = 0.5;


                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "FU_Officer_p_mil";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "FU_Medic_p_mil";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_eng_p_mil";
                    };
               };
class FU_Squad_p_mil_b
       {
name = "2: Squad";
side = 2;
faction = "FU_Faction_p_indep";
icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "FU_Squadlead_p_mil";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "FU_Medic_p_mil";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_eng_p_mil";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_RiflemanLAT_p_mil";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_Rifleman_p_mil";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_Rifleman_p_mil";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_Rifleman_p_mil";
                    };
               };
class FU_Squad_p_mil_c
       {
name = "3: Squad (AT)";
side = 2;
faction = "FU_Faction_p_indep";
icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "FU_Squadlead_p_mil";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "FU_Medic_p_mil";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_eng_p_mil";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_RiflemanLAT_p_mil";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_RiflemanLAT_p_mil";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_Rifleman_p_mil";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_Rifleman_p_mil";
                    };
               };
class FU_Squad_p_mil_d
       {
name = "4: Fireteam";
side = 2;
faction = "FU_Faction_p_indep";
icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "FU_Squadlead_p_mil";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 2;
                        vehicle = "FU_Medic_p_mil";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_Rifleman_p_mil";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_Rifleman_p_mil";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "FU_RiflemanLAT_p_mil";
                    };

       };
                          };

};
                };
};
