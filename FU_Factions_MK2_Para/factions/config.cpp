class CfgPatches
{
    class FU_faction_MKII_units_p_b
    {
           name = "Freelance Union";
           Author = "Bolttrooper";
           units[] = {"FU_SquadLead_p_pmc","FU_Officer_p_pmc","FU_Rifleman_p_pmc","FU_RiflemanLAT_p_pmc","FU_Medic_p_pmc","FU_Eng_p_pmc","FU_crew_p_pmc","FU_heli_p_pmc",
                      "FU_SquadLead_p_gre","FU_Officer_p_gre","FU_Rifleman_p_gre","FU_RiflemanLAT_p_gre","FU_Medic_p_gre","FU_Eng_p_gre","FU_crew_p_gre","FU_heli_p_gre",
                      "FU_SquadLead_p_blk","FU_Officer_p_blk","FU_Rifleman_p_blk","FU_RiflemanLAT_p_blk","FU_Medic_p_blk","FU_Eng_p_blk","FU_crew_p_blk","FU_heli_p_blk",
                      "FU_SquadLead_p_ter","FU_Officer_p_ter","FU_Rifleman_p_ter","FU_RiflemanLAT_p_ter","FU_Medic_p_ter","FU_Eng_p_ter","FU_crew_p_ter","FU_heli_p_ter",
                      "FU_SquadLead_p_sto","FU_Officer_p_sto","FU_Rifleman_p_sto","FU_RiflemanLAT_p_sto","FU_Medic_p_sto","FU_Eng_p_sto","FU_crew_p_sto","FU_heli_p_sto",
                      "FU_SquadLead_p_gry","FU_Officer_p_gry","FU_Rifleman_p_gry","FU_RiflemanLAT_p_gry","FU_Medic_p_gry","FU_Eng_p_gry","FU_crew_p_gry","FU_heli_p_gry",
                      "FU_SquadLead_p_blu","FU_Officer_p_blu","FU_Rifleman_p_blu","FU_RiflemanLAT_p_blu","FU_Medic_p_blu","FU_Eng_p_blu","FU_crew_p_blu","FU_heli_p_blu",
                      "FU_SquadLead_p_mil","FU_Officer_p_mil","FU_Rifleman_p_mil","FU_RiflemanLAT_p_mil","FU_Medic_p_mil","FU_Eng_p_mil","FU_crew_p_mil","FU_heli_p_mil",
                      "FU_SquadLead_p_tig","FU_Officer_p_tig","FU_Rifleman_p_tig","FU_RiflemanLAT_p_tig","FU_Medic_p_tig","FU_Eng_p_tig","FU_crew_p_tig","FU_heli_p_tig"};
           weapons[] = {};
   };
};

class Cfgvehicles 
{
#define mags_7(a) a, a, a, a, a, a, a
#define mags_4(a) a, a, a, a
#define mags_3(a) a, a, a
#define mags_2(a) a, a
#define ammo_rifle_p "20Rnd_762x51_Mag"
#define ammo_pis_b "16Rnd_9x21_Mag"
#define ammo_pis_o "16Rnd_9x21_Mag"
#define ammo_pis_i "9Rnd_45ACP_Mag"



class FU_base_p_B;
class FU_base_p_O;
class FU_base_p_I;




class FU_SquadLead_p_pmc : FU_Base_p_B
      {editorSubcategory = "EdSubcat_Personnel_Camo_Urban";
      icon = "iconManLeader";
      scope = 2;
      DisplayName = "Squad Leader";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_pmc.jpg";
      weapons[] = {"FU_Rifle_p_b","FU_pistol_b","Throw","Put","Rangefinder"};
      magazines[] = {mags_2(ammo_pis_b),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_Lead_p_pack_kha"

      };

class FU_Officer_p_pmc : FU_Base_p_B
      {editorSubcategory = "EdSubcat_Personnel_Camo_Urban";
      icon = "iconManOfficer";
      uavHacker = 1;
      attendant = 1;
      engineer = 1;
      scope = 2;
      DisplayName = "Platoon Leader";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_pmc.jpg";
      weapons[] = {"FU_Rifle_p_b","FU_pistol_b","Throw","Put","Laserdesignator"};
      magazines[] = {mags_2(ammo_pis_b),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell),"Laserbatteries"};
      backpack = "FU_Lead_p_pack_kha"

      };


class FU_Rifleman_p_pmc : FU_Base_p_B
      {editorSubcategory = "EdSubcat_Personnel_Camo_Urban";
      uavHacker = 1;
      scope = 2;
      DisplayName = "Rifleman";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_pmc.jpg";
      weapons[] = {"FU_Rifle_p_b","FU_pistol_b","Throw","Put","Binocular"};
      magazines[] = {mags_2(ammo_pis_b),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_Rifle_p_pack_kha"

      };
class FU_RiflemanLAT_p_pmc : FU_Base_p_B
      {editorSubcategory = "EdSubcat_Personnel_Camo_Urban";
      icon = "iconManAT";
      scope = 2;
      DisplayName = "Rifleman (AT)";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_RiflemanLAT_p_pmc.jpg";
      weapons[] = {"FU_Rifle_p_b","FU_pistol_b","launch_MRAWS_sand_rail_F","Throw","Put","Binocular"};
      magazines[] = {mags_2(ammo_pis_b),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_RifleLAT_p_pack_kha"

      };


class FU_Medic_p_pmc : FU_Base_p_B
      {editorSubcategory = "EdSubcat_Personnel_Camo_Urban";
      attendant = 1;
      icon = "iconManMedic";
      scope = 2;
      DisplayName = "Support Medic";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_pmc.jpg";
      weapons[] = {"FU_Rifle_p_b","FU_pistol_b","Throw","Put","Binocular"};
      magazines[] = {mags_2(ammo_pis_b),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_Medic_p_pack_kha"

      };


class FU_Eng_p_pmc : FU_Base_p_B
      {editorSubcategory = "EdSubcat_Personnel_Camo_Urban";
      engineer = 1;
      uavHacker = 1;
      icon = "IconManEngineer";
      scope = 2;
      DisplayName = "Support Engineer";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_pmc.jpg";
      weapons[] = {"FU_Rifle_p_b","FU_pistol_b","Throw","Put","Binocular"};
      magazines[] = {mags_2(ammo_pis_b),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_Supp_p_pack_kha"
      };

class FU_crew_p_pmc : FU_Base_p_B
      {editorSubcategory = "EdSubcat_Personnel_Camo_Urban";
      engineer = 1;
      uavHacker = 1;
      icon = "IconManEngineer";
      scope = 2;
      DisplayName = "Logistics Crew";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_pmc.jpg";
      weapons[] = {"FU_Rifle_p_b","FU_pistol_b","Throw","Put","Binocular"};
      magazines[] = {mags_2(ammo_pis_b),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_crew_p_pack_kha"
      };
class FU_heli_p_pmc : FU_crew_p_pmc
      {
      linkedItems[] = {"FU_Vest_kha_lit","FU_NVG_helm_B","ItemCompass","ItemMap","TFAR_anprc152","ItemWatch"};
      DisplayName = "Pilot";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_pmc.jpg";
      };






class FU_SquadLead_p_gre : FU_SquadLead_p_pmc
      {
      linkedItems[] = {"V_TacVest_oli","H_MilCap_grn","ItemCompass","ItemMap","TFAR_anprc152","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_CombatPatrol";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_gre.jpg";
      magazines[] = {mags_2(ammo_pis_b),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_Lead_p_pack_gre"
      uniformClass = "FU_Uni_p_Gre_2";
      };

class FU_Officer_p_gre : FU_Officer_p_pmc
      {
      linkedItems[] = {"V_TacVest_oli","H_MilCap_grn","ItemCompass","ItemMap","TFAR_anprc152","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_CombatPatrol";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_gre.jpg";
      magazines[] = {mags_2(ammo_pis_b),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell),"Laserbatteries"};
      backpack = "FU_Lead_p_pack_gre"
      uniformClass = "FU_Uni_p_Gre_2";

      };


class FU_Rifleman_p_gre : FU_Rifleman_p_pmc
      {
      linkedItems[] = {"V_TacVest_oli","H_MilCap_grn","ItemCompass","ItemMap","TFAR_anprc152","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_CombatPatrol";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_gre.jpg";
      magazines[] = {mags_2(ammo_pis_b),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_Rifle_p_pack_gre"
      uniformClass = "FU_Uni_p_Gre_2";

      };
class FU_RiflemanLAT_p_gre : FU_RiflemanLAT_p_pmc
      {
      linkedItems[] = {"V_TacVest_oli","H_MilCap_grn","ItemCompass","ItemMap","TFAR_anprc152","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_CombatPatrol";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_RiflemanLAT_p_gre.jpg";
      weapons[] = {"FU_Rifle_p_b","FU_pistol_b","launch_MRAWS_green_rail_F","Throw","Put","Binocular"};
      magazines[] = {mags_2(ammo_pis_b),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_RifleLAT_p_pack_gre"
      uniformClass = "FU_Uni_p_Gre_2";

      };


class FU_Medic_p_gre : FU_Medic_p_pmc
      {
      linkedItems[] = {"V_TacVest_oli","H_MilCap_grn","ItemCompass","ItemMap","TFAR_anprc152","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_CombatPatrol";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_gre.jpg";
      magazines[] = {mags_2(ammo_pis_b),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_Medic_p_pack_gre"
      uniformClass = "FU_Uni_p_Gre_2";

      };


class FU_Eng_p_gre : FU_Eng_p_pmc
      {
      linkedItems[] = {"V_TacVest_oli","H_MilCap_grn","ItemCompass","ItemMap","TFAR_anprc152","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_CombatPatrol";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_gre.jpg";
      magazines[] = {mags_2(ammo_pis_b),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_Supp_p_pack_gre"
      uniformClass = "FU_Uni_p_Gre_2";

      };
class FU_crew_p_gre : FU_crew_p_pmc
      {
      linkedItems[] = {"V_TacVest_oli","H_MilCap_grn","ItemCompass","ItemMap","TFAR_anprc152","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_CombatPatrol";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_gre.jpg";
      magazines[] = {mags_2(ammo_pis_b),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_crew_p_pack_gre"
      uniformClass = "FU_Uni_p_Gre_2";
      };
class FU_heli_p_gre : FU_heli_p_pmc
      {
      linkedItems[] = {"V_TacVest_oli","FU_NVG_helm_B","ItemCompass","ItemMap","TFAR_anprc152","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_CombatPatrol";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_gre.jpg";
      magazines[] = {mags_2(ammo_pis_b),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_crew_p_pack_gre"
      uniformClass = "FU_Uni_p_Gre_2";
      };





class FU_SquadLead_p_blk : FU_SquadLead_p_pmc
      {
      camouflage = 0.6;
      linkedItems[] = {"V_PlateCarrier1_blk","FU_Beret_afr","ItemCompass","ItemMap","TFAR_anprc152","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_blk.jpg";
      magazines[] = {mags_2(ammo_pis_b),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_Lead_p_pack_blk"
      uniformClass = "FU_Uni_b_black";
      };

class FU_Officer_p_blk : FU_Officer_p_pmc
      {
      camouflage = 0.6;
      linkedItems[] = {"V_PlateCarrier1_blk","FU_Beret_afr","ItemCompass","ItemMap","TFAR_anprc152","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_blk.jpg";
      magazines[] = {mags_2(ammo_pis_b),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell),"Laserbatteries"};
      backpack = "FU_Lead_p_pack_blk"
      uniformClass = "FU_Uni_b_black";

      };


class FU_Rifleman_p_blk : FU_Rifleman_p_pmc
      {
      camouflage = 0.6;
      linkedItems[] = {"V_PlateCarrier1_blk","FU_Beret_afr","ItemCompass","ItemMap","TFAR_anprc152","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_blk.jpg";
      magazines[] = {mags_2(ammo_pis_b),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_Rifle_p_pack_blk"
      uniformClass = "FU_Uni_b_black";

      };
class FU_RiflemanLAT_p_blk : FU_RiflemanLAT_p_pmc
      {
      camouflage = 0.6;
      linkedItems[] = {"V_PlateCarrier1_blk","FU_Beret_afr","ItemCompass","ItemMap","TFAR_anprc152","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_RiflemanLAT_p_blk.jpg";
      weapons[] = {"FU_Rifle_p_b","FU_pistol_b","launch_MRAWS_green_rail_F","Throw","Put","Binocular"};
      magazines[] = {mags_2(ammo_pis_b),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_RifleLAT_p_pack_blk"
      uniformClass = "FU_Uni_b_black";

      };


class FU_Medic_p_blk : FU_Medic_p_pmc
      {
      camouflage = 0.6;
      linkedItems[] = {"V_PlateCarrier1_blk","FU_Beret_afr","ItemCompass","ItemMap","TFAR_anprc152","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_blk.jpg";
      magazines[] = {mags_2(ammo_pis_b),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_Medic_p_pack_blk"
      uniformClass = "FU_Uni_b_black";

      };


class FU_Eng_p_blk : FU_Eng_p_pmc
      {
      camouflage = 0.6;
      linkedItems[] = {"V_PlateCarrier1_blk","FU_Beret_afr","ItemCompass","ItemMap","TFAR_anprc152","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_blk.jpg";
      magazines[] = {mags_2(ammo_pis_b),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_Supp_p_pack_blk"
      uniformClass = "FU_Uni_b_black";

      };
class FU_crew_p_blk : FU_crew_p_pmc
      {
      camouflage = 0.6;
      linkedItems[] = {"V_PlateCarrier1_blk","FU_Beret_afr","ItemCompass","ItemMap","TFAR_anprc152","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_blk.jpg";
      magazines[] = {mags_2(ammo_pis_b),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_crew_p_pack_blk"
      uniformClass = "FU_Uni_b_black";
      };
class FU_heli_p_blk : FU_heli_p_pmc
      {
      camouflage = 0.6;
      linkedItems[] = {"V_PlateCarrier1_blk","FU_NVG_helm","ItemCompass","ItemMap","TFAR_anprc152","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_blk.jpg";
      magazines[] = {mags_2(ammo_pis_b),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_crew_p_pack_blk"
      uniformClass = "FU_Uni_b_black";
      };










class FU_SquadLead_p_ter : FU_Base_p_O
      {editorSubcategory = "EdSubcat_Personnel_CombatPatrol";
      icon = "iconManLeader";
      scope = 2;
      DisplayName = "Squad Leader";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_ter.jpg";
      weapons[] = {"FU_Rifle_p_o","FU_pistol_o","Throw","Put","Rangefinder"};
      magazines[] = {mags_2(ammo_pis_o),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_Lead_p_pack_kha"

      };

class FU_Officer_p_ter : FU_Base_p_O
      {editorSubcategory = "EdSubcat_Personnel_CombatPatrol";
      icon = "iconManOfficer";
      uavHacker = 1;
      attendant = 1;
      engineer = 1;
      scope = 2;
      DisplayName = "Platoon Leader";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_ter.jpg";
      weapons[] = {"FU_Rifle_p_o","FU_pistol_o","Throw","Put","Laserdesignator"};
      magazines[] = {mags_2(ammo_pis_o),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell),"Laserbatteries"};
      backpack = "FU_Lead_p_pack_kha"

      };


class FU_Rifleman_p_ter : FU_Base_p_O
      {editorSubcategory = "EdSubcat_Personnel_CombatPatrol";
      uavHacker = 1;
      scope = 2;
      DisplayName = "Rifleman";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_ter.jpg";
      weapons[] = {"FU_Rifle_p_o","FU_pistol_o","Throw","Put","Binocular"};
      magazines[] = {mags_2(ammo_pis_o),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_Rifle_p_pack_kha"

      };
class FU_RiflemanLAT_p_ter : FU_Base_p_O
      {editorSubcategory = "EdSubcat_Personnel_CombatPatrol";
      icon = "iconManAT";
      scope = 2;
      DisplayName = "Rifleman (AT)";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_RiflemanLAT_p_ter.jpg";
      weapons[] = {"FU_Rifle_p_o","FU_pistol_o","launch_MRAWS_sand_rail_F","Throw","Put","Binocular"};
      magazines[] = {mags_2(ammo_pis_o),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_RifleLAT_p_pack_kha"

      };


class FU_Medic_p_ter : FU_Base_p_O
      {editorSubcategory = "EdSubcat_Personnel_CombatPatrol";
      attendant = 1;
      icon = "iconManMedic";
      scope = 2;
      DisplayName = "Support Medic";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_ter.jpg";
      weapons[] = {"FU_Rifle_p_o","FU_pistol_o","Throw","Put","Binocular"};
      magazines[] = {mags_2(ammo_pis_o),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_Medic_p_pack_kha"

      };


class FU_Eng_p_ter : FU_Base_p_O
      {editorSubcategory = "EdSubcat_Personnel_CombatPatrol";
      engineer = 1;
      uavHacker = 1;
      icon = "IconManEngineer";
      scope = 2;
      DisplayName = "Support Engineer";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_ter.jpg";
      weapons[] = {"FU_Rifle_p_o","FU_pistol_o","Throw","Put","Binocular"};
      magazines[] = {mags_2(ammo_pis_o),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_Supp_p_pack_kha"
      };

class FU_crew_p_ter : FU_Base_p_O
      {editorSubcategory = "EdSubcat_Personnel_CombatPatrol";
      engineer = 1;
      uavHacker = 1;
      icon = "IconManEngineer";
      scope = 2;
      DisplayName = "Logistics Crew";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_ter.jpg";
      weapons[] = {"FU_Rifle_p_o","FU_pistol_o","Throw","Put","Binocular"};
      magazines[] = {mags_2(ammo_pis_o),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_crew_p_pack_kha"
      };
class FU_heli_p_ter : FU_crew_p_ter
      {
      linkedItems[] = {"V_TacVest_brn","FU_NVG_helm","ItemCompass","ItemMap","TFAR_fadak","ItemWatch"};
      DisplayName = "Pilot";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_ter.jpg";
      };






class FU_SquadLead_p_sto : FU_SquadLead_p_ter
      {
      linkedItems[] = {"V_TacVest_blk","H_Beret_blk","ItemCompass","ItemMap","TFAR_fadak","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_Camo_Urban";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_sto.jpg";
      magazines[] = {mags_2(ammo_pis_o),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_Lead_p_pack_blk"
      uniformClass = "FU_Uni_p_stone_b";
      };
class FU_Officer_p_sto : FU_Officer_p_ter
      {
      linkedItems[] = {"V_TacVest_blk","H_Beret_blk","ItemCompass","ItemMap","TFAR_fadak","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_Camo_Urban";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_sto.jpg";
      magazines[] = {mags_2(ammo_pis_o),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell),"Laserbatteries"};
      backpack = "FU_Lead_p_pack_blk"
      uniformClass = "FU_Uni_p_stone_o";
      };
class FU_Rifleman_p_sto : FU_Rifleman_p_ter
      {
      linkedItems[] = {"V_TacVest_blk","H_Beret_blk","ItemCompass","ItemMap","TFAR_fadak","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_Camo_Urban";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_sto.jpg";
      magazines[] = {mags_2(ammo_pis_o),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_Rifle_p_pack_blk"
      uniformClass = "FU_Uni_p_stone";
      };
class FU_RiflemanLAT_p_sto : FU_RiflemanLAT_p_ter
      {
      linkedItems[] = {"V_TacVest_blk","H_Beret_blk","ItemCompass","ItemMap","TFAR_fadak","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_Camo_Urban";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_RiflemanLAT_p_sto.jpg";
      weapons[] = {"FU_Rifle_p_o","FU_pistol_o","launch_MRAWS_green_rail_F","Throw","Put","Binocular"};
      magazines[] = {mags_2(ammo_pis_o),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_RifleLAT_p_pack_blk"
      uniformClass = "FU_Uni_p_stone";
      };
class FU_Medic_p_sto : FU_Medic_p_ter
      {
      linkedItems[] = {"V_TacVest_blk","H_Beret_blk","ItemCompass","ItemMap","TFAR_fadak","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_Camo_Urban";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_sto.jpg";
      magazines[] = {mags_2(ammo_pis_o),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_Medic_p_pack_blk"
      uniformClass = "FU_Uni_p_stone";
      };
class FU_Eng_p_sto : FU_Eng_p_ter
      {
      linkedItems[] = {"V_TacVest_blk","H_Beret_blk","ItemCompass","ItemMap","TFAR_fadak","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_Camo_Urban";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_sto.jpg";
      magazines[] = {mags_2(ammo_pis_o),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_Supp_p_pack_blk"
      uniformClass = "FU_Uni_p_stone";
      };
class FU_crew_p_sto : FU_crew_p_ter
      {
      linkedItems[] = {"V_TacVest_blk","H_Beret_blk","ItemCompass","ItemMap","TFAR_fadak","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_Camo_Urban";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_sto.jpg";
      magazines[] = {mags_2(ammo_pis_o),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_crew_p_pack_blk"
      uniformClass = "FU_Uni_p_stone";
      };
class FU_heli_p_sto : FU_heli_p_ter
      {
      linkedItems[] = {"V_TacVest_blk","FU_NVG_helm","ItemCompass","ItemMap","TFAR_fadak","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_Camo_Urban";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_sto.jpg";
      magazines[] = {mags_2(ammo_pis_o),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_crew_p_pack_blk"
      uniformClass = "FU_Uni_p_stone";
      };






class FU_SquadLead_p_gry: FU_SquadLead_p_ter
      {
      camouflage = 0.6;
      linkedItems[] = {"V_PlateCarrier1_blk","H_Watchcap_blk","ItemCompass","ItemMap","TFAR_fadak","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_gry.jpg";
      magazines[] = {mags_2(ammo_pis_o),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_Lead_p_pack_blk"
      uniformClass = "FU_Uni_p_grey";
      };

class FU_Officer_p_gry: FU_Officer_p_ter
      {
      camouflage = 0.6;
      linkedItems[] = {"V_PlateCarrier1_blk","H_Watchcap_blk","ItemCompass","ItemMap","TFAR_fadak","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_gry.jpg";
      magazines[] = {mags_2(ammo_pis_o),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell),"Laserbatteries"};
      backpack = "FU_Lead_p_pack_blk"
      uniformClass = "FU_Uni_p_grey";

      };


class FU_Rifleman_p_gry: FU_Rifleman_p_ter
      {
      camouflage = 0.6;
      linkedItems[] = {"V_PlateCarrier1_blk","H_Watchcap_blk","ItemCompass","ItemMap","TFAR_fadak","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_gry.jpg";
      magazines[] = {mags_2(ammo_pis_o),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_Rifle_p_pack_blk"
      uniformClass = "FU_Uni_p_grey";

      };
class FU_RiflemanLAT_p_gry: FU_RiflemanLAT_p_ter
      {
      camouflage = 0.6;
      linkedItems[] = {"V_PlateCarrier1_blk","H_Watchcap_blk","ItemCompass","ItemMap","TFAR_fadak","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_RiflemanLAT_p_gry.jpg";
      weapons[] = {"FU_Rifle_p_o","FU_pistol_o","launch_MRAWS_green_rail_F","Throw","Put","Binocular"};
      magazines[] = {mags_2(ammo_pis_o),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_RifleLAT_p_pack_blk"
      uniformClass = "FU_Uni_p_grey";

      };


class FU_Medic_p_gry: FU_Medic_p_ter
      {
      camouflage = 0.6;
      linkedItems[] = {"V_PlateCarrier1_blk","H_Watchcap_blk","ItemCompass","ItemMap","TFAR_fadak","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_gry.jpg";
      magazines[] = {mags_2(ammo_pis_o),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_Medic_p_pack_blk"
      uniformClass = "FU_Uni_p_grey";

      };


class FU_Eng_p_gry: FU_Eng_p_ter
      {
      camouflage = 0.6;
      linkedItems[] = {"V_PlateCarrier1_blk","H_Watchcap_blk","ItemCompass","ItemMap","TFAR_fadak","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_gry.jpg";
      magazines[] = {mags_2(ammo_pis_o),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_Supp_p_pack_blk"
      uniformClass = "FU_Uni_p_grey";

      };
class FU_crew_p_gry: FU_crew_p_ter
      {
      camouflage = 0.6;
      linkedItems[] = {"V_PlateCarrier1_blk","H_Watchcap_blk","ItemCompass","ItemMap","TFAR_fadak","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_gry.jpg";
      magazines[] = {mags_2(ammo_pis_o),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_crew_p_pack_blk"
      uniformClass = "FU_Uni_p_grey";
      };
class FU_heli_p_gry: FU_heli_p_ter
      {
      camouflage = 0.6;
      linkedItems[] = {"V_PlateCarrier1_blk","FU_NVG_helm_B","ItemCompass","ItemMap","TFAR_fadak","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_gry.jpg";
      magazines[] = {mags_2(ammo_pis_o),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_crew_p_pack_blk"
      uniformClass = "FU_Uni_p_grey";
      };








class FU_SquadLead_p_blu : FU_Base_p_I
      {
      editorSubcategory = "EdSubcat_Personnel_Camo_Urban";
      icon = "iconManLeader";
      scope = 2;
      DisplayName = "Squad Leader";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_blu.jpg";
      weapons[] = {"FU_Rifle_p_i","FU_pistol_i","Throw","Put","Rangefinder"};
      magazines[] = {mags_2(ammo_pis_i),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_Lead_p_pack_blk"

      };

class FU_Officer_p_blu : FU_Base_p_I
      {editorSubcategory = "EdSubcat_Personnel_Camo_Urban";
      icon = "iconManOfficer";
      uavHacker = 1;
      attendant = 1;
      engineer = 1;
      scope = 2;
      DisplayName = "Platoon Leader";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_blu.jpg";
      weapons[] = {"FU_Rifle_p_i","FU_pistol_i","Throw","Put","Laserdesignator"};
      magazines[] = {mags_2(ammo_pis_i),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell),"Laserbatteries"};
      backpack = "FU_Lead_p_pack_blk"

      };


class FU_Rifleman_p_blu : FU_Base_p_I
      {editorSubcategory = "EdSubcat_Personnel_Camo_Urban";
      uavHacker = 1;
      scope = 2;
      DisplayName = "Rifleman";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_blu.jpg";
      weapons[] = {"FU_Rifle_p_i","FU_pistol_i","Throw","Put","Binocular"};
      magazines[] = {mags_2(ammo_pis_i),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_Rifle_p_pack_blk"

      };
class FU_RiflemanLAT_p_blu : FU_Base_p_I
      {editorSubcategory = "EdSubcat_Personnel_Camo_Urban";
      icon = "iconManAT";
      scope = 2;
      DisplayName = "Rifleman (AT)";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_RiflemanLAT_p_blu.jpg";
      weapons[] = {"FU_Rifle_p_i","launch_MRAWS_green_rail_F","Throw","Put","Binocular"};
      magazines[] = {mags_2(ammo_pis_i),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_RifleLAT_p_pack_blk"

      };


class FU_Medic_p_blu : FU_Base_p_I
      {editorSubcategory = "EdSubcat_Personnel_Camo_Urban";
      attendant = 1;
      icon = "iconManMedic";
      scope = 2;
      DisplayName = "Support Medic";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_blu.jpg";
      weapons[] = {"FU_Rifle_p_i","FU_pistol_i","Throw","Put","Binocular"};
      magazines[] = {mags_2(ammo_pis_i),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_Medic_p_pack_blk"

      };


class FU_Eng_p_blu : FU_Base_p_I
      {editorSubcategory = "EdSubcat_Personnel_Camo_Urban";
      engineer = 1;
      uavHacker = 1;
      icon = "IconManEngineer";
      scope = 2;
      DisplayName = "Support Engineer";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_blu.jpg";
      weapons[] = {"FU_Rifle_p_i","FU_pistol_i","Throw","Put","Binocular"};
      magazines[] = {mags_2(ammo_pis_i),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_Supp_p_pack_blk"
      };

class FU_crew_p_blu : FU_Base_p_I
      {editorSubcategory = "EdSubcat_Personnel_Camo_Urban";
      engineer = 1;
      uavHacker = 1;
      icon = "IconManEngineer";
      scope = 2;
      DisplayName = "Logistics Crew";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_blu.jpg";
      weapons[] = {"FU_Rifle_p_i","FU_pistol_i","Throw","Put","Binocular"};
      magazines[] = {mags_2(ammo_pis_i),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_crew_p_pack_blk"
      };
class FU_heli_p_blu : FU_crew_p_blu
      {
      linkedItems[] = {"V_TacVest_blk_POLICE","FU_NVG_helm","ItemCompass","ItemMap","TFAR_anprc148jem","ItemWatch"};
      DisplayName = "Pilot";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_blu.jpg";
      };





class FU_SquadLead_p_mil : FU_SquadLead_p_blu 
      {
      camouflage = 0.6;
      linkedItems[] = {"FU_Vest_swe_lit","H_Booniehat_oli","ItemCompass","ItemMap","TFAR_anprc148jem","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_mil.jpg";
      magazines[] = {mags_2(ammo_pis_i),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_Lead_p_pack_gre"
      uniformClass = "FU_Uni_p_mil";
      };

class FU_Officer_p_mil : FU_Officer_p_blu 
      {
      camouflage = 0.6;
      linkedItems[] = {"FU_Vest_swe_lit","H_Booniehat_oli","ItemCompass","ItemMap","TFAR_anprc148jem","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_mil.jpg";
      magazines[] = {mags_2(ammo_pis_i),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell),"Laserbatteries"};
      backpack = "FU_Lead_p_pack_gre"
      uniformClass = "FU_Uni_p_mil";

      };


class FU_Rifleman_p_mil : FU_Rifleman_p_blu 
      {
      camouflage = 0.6;
      linkedItems[] = {"FU_Vest_swe_lit","H_Booniehat_oli","ItemCompass","ItemMap","TFAR_anprc148jem","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_mil.jpg";
      magazines[] = {mags_2(ammo_pis_i),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_Rifle_p_pack_gre"
      uniformClass = "FU_Uni_p_mil";

      };
class FU_RiflemanLAT_p_mil : FU_RiflemanLAT_p_blu 
      {
      camouflage = 0.6;
      linkedItems[] = {"FU_Vest_swe_lit","H_Booniehat_oli","ItemCompass","ItemMap","TFAR_anprc148jem","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_RiflemanLAT_p_mil.jpg";
      weapons[] = {"FU_Rifle_p_i","launch_MRAWS_green_rail_F","Throw","Put","Binocular"};
      magazines[] = {mags_2(ammo_pis_i),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_RifleLAT_p_pack_gre"
      uniformClass = "FU_Uni_p_mil";

      };


class FU_Medic_p_mil : FU_Medic_p_blu 
      {
      camouflage = 0.6;
      linkedItems[] = {"FU_Vest_swe_lit","H_Booniehat_oli","ItemCompass","ItemMap","TFAR_anprc148jem","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_mil.jpg";
      magazines[] = {mags_2(ammo_pis_i),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_Medic_p_pack_gre"
      uniformClass = "FU_Uni_p_mil";

      };


class FU_Eng_p_mil : FU_Eng_p_blu 
      {
      camouflage = 0.6;
      linkedItems[] = {"FU_Vest_swe_lit","H_Booniehat_oli","ItemCompass","ItemMap","TFAR_anprc148jem","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_mil.jpg";
      magazines[] = {mags_2(ammo_pis_i),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_Supp_p_pack_gre"
      uniformClass = "FU_Uni_p_mil";

      };
class FU_crew_p_mil : FU_crew_p_blu 
      {
      camouflage = 0.6;
      linkedItems[] = {"FU_Vest_swe_lit","H_Booniehat_oli","ItemCompass","ItemMap","TFAR_anprc148jem","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_mil.jpg";
      magazines[] = {mags_2(ammo_pis_i),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_crew_p_pack_gre"
      uniformClass = "FU_Uni_p_mil";
      };
class FU_heli_p_mil : FU_heli_p_blu 
      {
      camouflage = 0.6;
      linkedItems[] = {"FU_Vest_swe_lit","FU_NVG_helm_B","ItemCompass","ItemMap","TFAR_anprc148jem","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_mil.jpg";
      magazines[] = {mags_2(ammo_pis_i),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_crew_p_pack_gre"
      uniformClass = "FU_Uni_p_mil";
      };




class FU_SquadLead_p_tig : FU_SquadLead_p_blu 
      {
      linkedItems[] = {"FU_Vest_swe_lit","FU_beret_tig","ItemCompass","ItemMap","TFAR_anprc148jem","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_CombatPatrol";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_tig.jpg";
      magazines[] = {mags_2(ammo_pis_i),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_Lead_p_pack_gre"
      uniformClass = "FU_Uni_p_tig";
      };

class FU_Officer_p_tig : FU_Officer_p_blu 
      {
      linkedItems[] = {"FU_Vest_swe_lit","FU_Beret_tig","ItemCompass","ItemMap","TFAR_anprc148jem","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_CombatPatrol";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_tig.jpg";
      magazines[] = {mags_2(ammo_pis_i),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell),"Laserbatteries"};
      backpack = "FU_Lead_p_pack_gre"
      uniformClass = "FU_Uni_p_tig";

      };


class FU_Rifleman_p_tig : FU_Rifleman_p_blu 
      {
      linkedItems[] = {"FU_Vest_swe_lit","FU_Beret_tig","ItemCompass","ItemMap","TFAR_anprc148jem","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_CombatPatrol";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_tig.jpg";
      magazines[] = {mags_2(ammo_pis_i),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_Rifle_p_pack_gre"
      uniformClass = "FU_Uni_p_tig";

      };
class FU_RiflemanLAT_p_tig : FU_RiflemanLAT_p_blu 
      {
      linkedItems[] = {"FU_Vest_swe_lit","FU_Beret_tig","ItemCompass","ItemMap","TFAR_anprc148jem","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_CombatPatrol";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_RiflemanLAT_p_tig.jpg";
      weapons[] = {"FU_Rifle_p_i","launch_MRAWS_green_rail_F","Throw","Put","Binocular"};
      magazines[] = {mags_2(ammo_pis_i),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_RifleLAT_p_pack_gre"
      uniformClass = "FU_Uni_p_tig";

      };


class FU_Medic_p_tig : FU_Medic_p_blu 
      {
      linkedItems[] = {"FU_Vest_swe_lit","FU_Beret_tig","ItemCompass","ItemMap","TFAR_anprc148jem","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_CombatPatrol";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_tig.jpg";
      magazines[] = {mags_2(ammo_pis_i),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_Medic_p_pack_gre"
      uniformClass = "FU_Uni_p_tig";

      };


class FU_Eng_p_tig : FU_Eng_p_blu 
      {
      linkedItems[] = {"FU_Vest_swe_lit","FU_Beret_tig","ItemCompass","ItemMap","TFAR_anprc148jem","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_CombatPatrol";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_tig.jpg";
      magazines[] = {mags_2(ammo_pis_i),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_Supp_p_pack_gre"
      uniformClass = "FU_Uni_p_tig";

      };
class FU_crew_p_tig : FU_crew_p_blu 
      {
      linkedItems[] = {"FU_Vest_swe_lit","FU_Beret_tig","ItemCompass","ItemMap","TFAR_anprc148jem","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_CombatPatrol";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_tig.jpg";
      magazines[] = {mags_2(ammo_pis_i),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_crew_p_pack_gre"
      uniformClass = "FU_Uni_p_tig";
      };
class FU_heli_p_tig : FU_heli_p_blu 
      {
      linkedItems[] = {"FU_Vest_swe_lit","FU_NVG_helm_B","ItemCompass","ItemMap","TFAR_anprc148jem","ItemWatch"};
      editorSubcategory = "EdSubcat_Personnel_CombatPatrol";
      editorPreview = "\FU_Factions_MK2_para\data\editor\FU_Rifleman_p_tig.jpg";
      magazines[] = {mags_2(ammo_pis_i),mags_7(ammo_rifle_p),mags_2(HandGrenade),mags_2(SmokeShell)};
      backpack = "FU_crew_p_pack_gre"
      uniformClass = "FU_Uni_p_tig";
      };



};


