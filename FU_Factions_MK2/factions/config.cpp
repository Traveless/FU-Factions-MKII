class CfgPatches
{
    class FU_faction_MKII_units
    {
           name = "Freelance Union";
           Author = "Bolttrooper";
           units[] = {"FU_Squadlead_b", "FU_Teamlead_b", "FU_Rifleman_b", "FU_Medic_b", "FU_crew_b", "FU_riflemanDEM_b","FU_RiflemanLAT_b","FU_Machinegun_b","FU_Officer_b","FU_Heli_b","FU_FAC_b",
"FU_Squadlead_o", "FU_Teamlead_o", "FU_Rifleman_o", "FU_Medic_o", "FU_crew_o", "FU_riflemanDEM_o","FU_RiflemanLAT_o","FU_Machinegun_o","FU_Officer_o","FU_Heli_o","FU_FAC_o",
"FU_Squadlead_i", "FU_Teamlead_i", "FU_Rifleman_i", "FU_Medic_i", "FU_crew_i", "FU_riflemanDEM_i","FU_RiflemanLAT_i","FU_Machinegun_i","FU_Officer_i","FU_Heli_i","FU_FAC_i",
"FU_Squadlead_bison", "FU_Teamlead_bison", "FU_Rifleman_bison", "FU_Medic_bison", "FU_crew_bison", "FU_riflemanDEM_bison","FU_RiflemanLAT_bison","FU_Machinegun_bison","FU_Officer_bison","FU_Heli_bison","FU_FAC_bison",
"FU_Squadlead_s", "FU_Teamlead_s", "FU_Rifleman_s", "FU_Medic_s", "FU_crew_s", "FU_riflemanDEM_s","FU_RiflemanLAT_s","FU_Machinegun_s","FU_Officer_s","FU_Heli_s","FU_FAC_s",
"FU_Squadlead_blk", "FU_Teamlead_blk", "FU_Rifleman_blk", "FU_Medic_blk", "FU_crew_blk", "FU_riflemanDEM_blk","FU_RiflemanLAT_blk","FU_Machinegun_blk","FU_Officer_blk","FU_Heli_blk","FU_FAC_blk",
"FU_Squadlead_jun", "FU_Teamlead_jun", "FU_Rifleman_jun", "FU_Medic_jun", "FU_crew_jun", "FU_riflemanDEM_jun","FU_RiflemanLAT_jun","FU_Machinegun_jun","FU_Officer_jun","FU_Heli_jun","FU_FAC_jun",
"FU_Squadlead_nor", "FU_Teamlead_nor", "FU_Rifleman_nor", "FU_Medic_nor", "FU_crew_nor", "FU_riflemanDEM_nor","FU_RiflemanLAT_nor","FU_Machinegun_nor","FU_Officer_nor","FU_Heli_nor","FU_FAC_nor",
"FU_Squadlead_bel", "FU_Teamlead_bel", "FU_Rifleman_bel", "FU_Medic_bel", "FU_crew_bel", "FU_riflemanDEM_bel","FU_RiflemanLAT_bel","FU_Machinegun_bel","FU_Officer_bel","FU_Heli_bel","FU_FAC_bel",
"FU_Squadlead_swe", "FU_Teamlead_swe", "FU_Rifleman_swe", "FU_Medic_swe", "FU_crew_swe", "FU_riflemanDEM_swe","FU_RiflemanLAT_swe","FU_Machinegun_swe","FU_Officer_swe","FU_Heli_swe","FU_FAC_swe"};
           weapons[] = {};
   };
};

class Cfgvehicles 
{
#define mags_5(a) a, a, a, a, a
#define mags_4(a) a, a, a, a
#define mags_3(a) a, a, a
#define mags_2(a) a, a
#define uni_j "FU_uni_jungle"
#define ammo_rifle_b "30Rnd_556x45_Stanag_red"
#define ammo_riflet_b "30Rnd_556x45_Stanag_Tracer_Red"
#define ammo_rifle_o "30Rnd_762x39_AK12_Mag_F"
#define ammo_riflet_o "30Rnd_762x39_AK12_Mag_Tracer_F"
#define ammo_rifle_i "30Rnd_556x45_Stanag_green"
#define ammo_riflet_i "30Rnd_556x45_Stanag_tracer_green"
#define ammo_rifle_s "ACE_30Rnd_556x45_Stanag_M995_AP_mag"
#define ammo_riflet_s "ACE_30Rnd_556x45_Stanag_M995_AP_mag"
#define ammo_lmg_b "200Rnd_556x45_Box_Red_F"
#define ammo_lmg_o "150Rnd_762x54_Box"
#define ammo_lmg_i "200Rnd_65x39_cased_Box_Red"
#define ammo_lmg_s "20Rnd_762x51_Mag"
#define ammo_pis_b "16Rnd_9x21_Mag"
#define ammo_pis_o "16Rnd_9x21_Mag"
#define ammo_pis_i "9Rnd_45ACP_Mag"




class FU_base_B;
class FU_base_O;
class FU_base_I;




class FU_SquadLead_b : FU_Base_B
      {editorSubcategory = "EdSubcat_Personnel_Camo_Arctic";
      icon = "iconManLeader";
      scope = 2;
      DisplayName = "Squad Leader";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_win_lead.jpg";
      weapons[] = {"FU_grenaderifle_b","FU_pistol_b","Throw","Put","Rangefinder"};
      linkedItems[] = {"FU_Vest_Spec","FU_Helm_Enhanced","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","ACE_NVG_Wide","ACE_Altimeter"};
      magazines[] = {mags_2(ammo_pis_b),mags_5(ammo_rifle_b),mags_4(ammo_riflet_b),
                     mags_2(HandGrenade),mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
      backpack = "FU_lead_backpack_b"
      };
class FU_Teamlead_b : FU_Base_B
      {editorSubcategory = "EdSubcat_Personnel_Camo_Arctic";
      icon = "iconManLeader";
      scope = 2;
      DisplayName = "Team Leader";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_win_lead.jpg";
      weapons[] = {"FU_grenaderifle_b","FU_pistol_b","Throw","Put","Rangefinder"};
      linkedItems[] = {"FU_Vest_Spec","FU_Helm_Enhanced","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","ACE_NVG_Wide","ACE_Altimeter"};
      magazines[] = {mags_2(ammo_pis_b),mags_5(ammo_rifle_b),mags_4(ammo_riflet_b),
                     mags_2(HandGrenade),mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
      backpack = "FU_lead_backpack_b"
      };
class FU_Officer_b : FU_Base_B
      {editorSubcategory = "EdSubcat_Personnel_Camo_Arctic";
      icon = "iconManOfficer";
      scope = 2;
      DisplayName = "Platoon leader";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_win_lite.jpg";
      weapons[] = {"FU_grenaderifle_b","FU_pistol_b","Throw","Put","Laserdesignator"};
      linkedItems[] = {"FU_Vest_litex","FU_Helm_Light","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","ACE_NVG_Wide","ACE_Altimeter"};
      magazines[] = {mags_2(ammo_pis_b),mags_5(ammo_rifle_b),mags_4(ammo_riflet_b),
                     mags_2(HandGrenade),mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange),"Laserbatteries"};
      backpack = "FU_lead_backpack_b"
      };
class FU_FAC_b : FU_Base_B
      {editorSubcategory = "EdSubcat_Personnel_Camo_Arctic";
      icon = "iconManRecon";
      scope = 2;
      DisplayName = "Forward-Air-Controller";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_win_lite.jpg";
      weapons[] = {"FU_grenaderifle_b","FU_pistol_b","Throw","Put","Laserdesignator"};
      linkedItems[] = {"FU_Vest_lite","FU_Helm_Light","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","ACE_NVG_Wide","ACE_Altimeter"};
      magazines[] = {mags_2(ammo_pis_b),mags_4(ammo_rifle_b),mags_4(ammo_riflet_b),
                     mags_2(HandGrenade),mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange),"Laserbatteries"};
      backpack = "FU_lead_backpack_b"
      };

class FU_Rifleman_b : FU_Base_B
      {editorSubcategory = "EdSubcat_Personnel_Camo_Arctic";
      uavHacker = 1;
      scope = 2;
      DisplayName = "Rifleman";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_win_lite.jpg";
      weapons[] = {"FU_longrifle_b","FU_pistol_b","Throw","Put","Binocular"};
      linkedItems[] = {"FU_Vest_rig","FU_Helm_win","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","ACE_NVG_Wide","ACE_Altimeter"};
      magazines[] = {mags_2(ammo_pis_b),mags_5(ammo_rifle_b),mags_5(ammo_riflet_b),
                     mags_2(HandGrenade),mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
      backpack = "FU_LMG_backpack_b"
      };
class FU_RiflemanLAT_b : FU_Base_B
      {editorSubcategory = "EdSubcat_Personnel_Camo_Arctic";
      icon = "iconManAT";
      scope = 2;
      DisplayName = "Rifleman (LAT)";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_win_lite.jpg";
      weapons[] = {"FU_longrifle_b","FU_pistol_b","launch_NLAW_F","Throw","Put","Binocular"};
      linkedItems[] = {"FU_Vest_rig","FU_Helm_win","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","ACE_NVG_Wide","ACE_Altimeter"};
      magazines[] = {mags_2(ammo_pis_b),mags_5(ammo_rifle_b),mags_5(ammo_riflet_b),
                     mags_2(HandGrenade),mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
      backpack = "FU_LMG_backpack_b"
      };
class FU_RiflemanDEM_b : FU_Base_B
      {editorSubcategory = "EdSubcat_Personnel_Camo_Arctic";
      icon = "iconManExplosive";
      scope = 2;
      DisplayName = "Rifleman (Demo)";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_win_lead.jpg";
      weapons[] = {"FU_longrifle_b","FU_pistol_b","Throw","Put","Binocular"};
      linkedItems[] = {"FU_Vest_Explo","FU_Helm_win","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","ACE_NVG_Wide","ACE_Altimeter"};
      magazines[] = {mags_2(ammo_pis_b),mags_5(ammo_rifle_b),mags_5(ammo_riflet_b),
                     mags_2(HandGrenade),mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
      backpack = "FU_exp_backpack_b"
      };
class FU_Machinegun_b : FU_Base_B
      {editorSubcategory = "EdSubcat_Personnel_Camo_Arctic";
      icon = "iconManMG";
      scope = 2;
      DisplayName = "Gunner (LMG)";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_win_lite.jpg";
      weapons[] = {"FU_lmg_b","FU_pistol_b","Throw","Put","Binocular"};
      linkedItems[] = {"FU_Vest_rig","FU_Helm_win","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","ACE_NVG_Wide","ACE_Altimeter"};
      magazines[] = {mags_2(ammo_pis_b),mags_3(ammo_lmg_b),mags_2(HandGrenade),mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
      backpack = "FU_LMG_backpack_b"
      };


class FU_Medic_b : FU_Base_B
      {editorSubcategory = "EdSubcat_Personnel_Camo_Arctic";
      attendant = 1;
      icon = "iconManMedic";
      scope = 2;
      DisplayName = "Medic";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_win_lead.jpg";
      weapons[] = {"FU_shortrifle_b","FU_pistol_b","Throw","Put","Binocular"};
      linkedItems[] = {"FU_Vest_Spec","FU_Helm_win","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","ACE_NVG_Wide","ACE_Altimeter"};
      magazines[] = {mags_2(ammo_pis_b),mags_5(ammo_rifle_b),mags_5(ammo_riflet_b),
                     mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
      backpack = "FU_medic_backpack_b"
      };


class FU_crew_b : FU_Base_B
      {editorSubcategory = "EdSubcat_Personnel_Camo_Arctic";
      engineer = 1;
      icon = "IconManEngineer";
      scope = 2;
      DisplayName = "Crewman";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_win_lite.jpg";
      weapons[] = {"FU_shortrifle_b","FU_pistol_b","Throw","Put","Binocular"};
      linkedItems[] = {"FU_Vest_lite","FU_Helm_crew","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","ACE_NVG_Wide","ACE_Altimeter"};
      magazines[] = {mags_2(ammo_pis_b),mags_5(ammo_rifle_b),mags_5(ammo_riflet_b),
                     mags_2(HandGrenade),mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
      backpack = "FU_crew_backpack_b"
      };
class FU_Heli_b : FU_crew_B
      {editorSubcategory = "EdSubcat_Personnel_Camo_Arctic";
      DisplayName = "Helicopter Pilot";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_win_pilot.jpg";
      linkedItems[] = {"FU_Vest_lite","FU_NVG_helm","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","ACE_Altimeter"};
      magazines[] = {mags_2(ammo_pis_b),mags_5(ammo_rifle_b),mags_5(ammo_riflet_b),
                     mags_2(HandGrenade),mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
      backpack = "FU_crew_backpack_b"
      };





class FU_SquadLead_jun : FU_SquadLead_b
      {editorSubcategory =  "EdSubcat_Personnel_Camo_Jungle"
      editorPreview = "\FU_Factions_MK2\data\editor\FU_jun_lead.jpg";
      linkedItems[] = {"FU_Vest_Spec_jungle","FU_Helm_Enhanced_jungle","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","ACE_NVG_Wide","ACE_Altimeter"};
      uniformClass = "FU_uni_jungle";
      backpack = "FU_lead_backpack_jungle"
      };
class FU_Teamlead_jun : FU_Teamlead_b
      {editorSubcategory =  "EdSubcat_Personnel_Camo_Jungle"
      editorPreview = "\FU_Factions_MK2\data\editor\FU_jun_lead.jpg";
      linkedItems[] = {"FU_Vest_Spec_jungle","FU_Helm_Enhanced_jungle","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","ACE_NVG_Wide","ACE_Altimeter"};
      uniformClass = "FU_uni_jungle";
      backpack = "FU_lead_backpack_jungle"
      };
class FU_Officer_jun : FU_Officer_b
      {editorSubcategory =  "EdSubcat_Personnel_Camo_Jungle"
      editorPreview = "\FU_Factions_MK2\data\editor\FU_jun_lite.jpg";
      linkedItems[] = {"FU_Vest_lite_jungle","FU_Helm_Light_jungle","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","ACE_NVG_Wide","ACE_Altimeter"};
      uniformClass = "FU_uni_jungle";
      backpack = "FU_lead_backpack_jungle"
      };
class FU_FAC_jun : FU_FAC_b
      {editorSubcategory =  "EdSubcat_Personnel_Camo_Jungle"
      editorPreview = "\FU_Factions_MK2\data\editor\FU_jun_lite.jpg";
      linkedItems[] = {"FU_Vest_lite_jungle","FU_Helm_Light_jungle","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","ACE_NVG_Wide","ACE_Altimeter"};
      uniformClass = "FU_uni_jungle";
      backpack = "FU_lead_backpack_jungle"
      };

class FU_Rifleman_jun : FU_Rifleman_b
      {editorSubcategory =  "EdSubcat_Personnel_Camo_Jungle"
      editorPreview = "\FU_Factions_MK2\data\editor\FU_jun_lite.jpg";
      linkedItems[] = {"FU_Vest_rig_jungle","FU_Helm_jungle","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","ACE_NVG_Wide","ACE_Altimeter"};
      uniformClass = "FU_uni_jungle";
      backpack = "FU_lmg_backpack_jungle"
      };
class FU_RiflemanLAT_jun : FU_RiflemanLAT_b
      {editorSubcategory =  "EdSubcat_Personnel_Camo_Jungle"
      editorPreview = "\FU_Factions_MK2\data\editor\FU_jun_lite.jpg";
      linkedItems[] = {"FU_Vest_rig_jungle","FU_Helm_jungle","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","ACE_NVG_Wide","ACE_Altimeter"};
      uniformClass = "FU_uni_jungle";
      backpack = "FU_lmg_backpack_jungle"
      };
class FU_RiflemanDEM_jun : FU_RiflemanDEM_b
      {editorSubcategory =  "EdSubcat_Personnel_Camo_Jungle"
      editorPreview = "\FU_Factions_MK2\data\editor\FU_jun_lead.jpg";
      linkedItems[] = {"FU_Vest_Explo_jungle","FU_Helm_jungle","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","ACE_NVG_Wide","ACE_Altimeter"};
      uniformClass = "FU_uni_jungle";
      backpack = "FU_exp_backpack_jungle"
      };
class FU_Machinegun_jun : FU_Machinegun_b
      {editorSubcategory =  "EdSubcat_Personnel_Camo_Jungle"
      editorPreview = "\FU_Factions_MK2\data\editor\FU_jun_lite.jpg";
      linkedItems[] = {"FU_Vest_rig_jungle","FU_Helm_jungle","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","ACE_NVG_Wide","ACE_Altimeter"};
      uniformClass = "FU_uni_jungle";
      backpack = "FU_lmg_backpack_jungle"
      };


class FU_Medic_jun : FU_Medic_b
      {editorSubcategory =  "EdSubcat_Personnel_Camo_Jungle"
      editorPreview = "\FU_Factions_MK2\data\editor\FU_jun_lead.jpg";
      linkedItems[] = {"FU_Vest_Spec_jungle","FU_Helm_jungle","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","ACE_NVG_Wide","ACE_Altimeter"};
      uniformClass = "FU_uni_jungle";
      backpack = "FU_medic_backpack_jungle"
      };


class FU_crew_jun : FU_crew_b
      {editorSubcategory =  "EdSubcat_Personnel_Camo_Jungle"
      editorPreview = "\FU_Factions_MK2\data\editor\FU_jun_lite.jpg";
      linkedItems[] = {"FU_Vest_lite_jungle","H_HelmetCrew_B","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","ACE_NVG_Wide","ACE_Altimeter"};
      uniformClass = "FU_uni_jungle";
      backpack = "FU_crew_backpack_jungle"
      };
class FU_Heli_jun : FU_Heli_b
      {editorSubcategory =  "EdSubcat_Personnel_Camo_Jungle"
      editorPreview = "\FU_Factions_MK2\data\editor\FU_jun_pilot.jpg";
      linkedItems[] = {"FU_Vest_lite_jungle","FU_NVG_helm_b","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","ACE_Altimeter"};
      uniformClass = "FU_uni_jungle";
      backpack = "FU_crew_backpack_jungle"
      };




class FU_SquadLead_blk : FU_SquadLead_b
      {
      camouflage = 0.6;
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_blk_lead.jpg";
      linkedItems[] = {"FU_cVest_rig_black","FU_helm_black","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","NVGogglesB_blk_F","ACE_Altimeter","G_Balaclava_lowprofile"};
      uniformClass = "FU_Uni_black";
      backpack = "FU_lead_backpack_bb"
      };
class FU_Teamlead_blk : FU_Teamlead_b
      {
      camouflage = 0.6;
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_blk_lead.jpg";
      linkedItems[] = {"FU_cVest_rig_black","FU_helm_black","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","NVGogglesB_blk_F","ACE_Altimeter","G_Balaclava_lowprofile"};
      uniformClass = "FU_Uni_black";
      backpack = "FU_lead_backpack_bb"
      };
class FU_Officer_blk : FU_Officer_b
      {
      camouflage = 0.6;
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_blk_lite.jpg";
      linkedItems[] = {"FU_Vest_rig_black","FU_helm_black","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","NVGogglesB_blk_F","ACE_Altimeter","G_Balaclava_lowprofile"};
      uniformClass = "FU_Uni_black";
      backpack = "FU_lead_backpack_bb"
      };
class FU_FAC_blk : FU_FAC_b
      {
      camouflage = 0.6;
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_blk_lite.jpg";
      linkedItems[] = {"FU_Vest_rig_blackb","FU_helm_black","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","NVGogglesB_blk_F","ACE_Altimeter","G_Balaclava_lowprofile"};
      uniformClass = "FU_Uni_black";
      backpack = "FU_lead_backpack_bb"
      };

class FU_Rifleman_blk : FU_Rifleman_b
      {
      camouflage = 0.6;
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_blk_lite.jpg";
      linkedItems[] = {"FU_Vest_rig_blackb","FU_helm_black","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","NVGogglesB_blk_F","ACE_Altimeter","G_Balaclava_lowprofile"};
      uniformClass = "FU_Uni_black";
      backpack = "FU_lmg_backpack_bb"
      };
class FU_RiflemanLAT_blk : FU_RiflemanLAT_b
      {
      camouflage = 0.6;
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_blk_lite.jpg";
      linkedItems[] = {"FU_Vest_rig_black","FU_helm_black","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","NVGogglesB_blk_F","ACE_Altimeter","G_Balaclava_lowprofile"};
      uniformClass = "FU_Uni_black";
      backpack = "FU_lmg_backpack_bb"
      };
class FU_RiflemanDEM_blk : FU_RiflemanDEM_b
      {
      camouflage = 0.6;
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_blk_lead.jpg";
      linkedItems[] = {"FU_cVest_rig_black","FU_helm_black","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","NVGogglesB_blk_F","ACE_Altimeter","G_Balaclava_lowprofile"};
      uniformClass = "FU_Uni_black";
      backpack = "FU_exp_backpack_s"
      };
class FU_Machinegun_blk : FU_Machinegun_b
      {
      camouflage = 0.6;
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_blk_lite.jpg";
      linkedItems[] = {"FU_Vest_rig_black","FU_helm_black","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","NVGogglesB_blk_F","ACE_Altimeter","G_Balaclava_lowprofile"};
      uniformClass = "FU_Uni_black";
      backpack = "FU_lmg_backpack_bb"
      };


class FU_Medic_blk : FU_Medic_b
      {
      camouflage = 0.6;
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_blk_lead.jpg";
      linkedItems[] = {"FU_cVest_rig_black","FU_helm_black","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","NVGogglesB_blk_F","ACE_Altimeter","G_Balaclava_lowprofile"};
      uniformClass = "FU_Uni_black";
      backpack = "FU_medic_backpack_o"
      };


class FU_crew_blk : FU_crew_b
      {
      camouflage = 0.6;
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_blk_lite.jpg";
      linkedItems[] = {"FU_Vest_rig_black","FU_helm_black","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","NVGogglesB_blk_F","ACE_Altimeter","G_Balaclava_lowprofile"};
      uniformClass = "FU_Uni_black";
      backpack = "FU_crew_backpack_o"
      };
class FU_Heli_blk : FU_Heli_b
      {
      camouflage = 0.6;
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_blk_pilot.jpg";
      linkedItems[] = {"FU_Vest_rig_black","FU_NVG_helm","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","ACE_Altimeter","G_Balaclava_lowprofile"};
      uniformClass = "FU_Uni_black";
      backpack = "FU_crew_backpack_o"
      };










class FU_SquadLead_o : FU_Base_o
      {editorSubcategory = "EdSubcat_Personnel_Camo_Arid";
      icon = "iconManLeader";
      scope = 2;
      DisplayName = "Squad Leader";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_bdu_lead.jpg";
      weapons[] = {"FU_grenaderifle_o","FU_pistol_o","Throw","Put","Rangefinder"};
      linkedItems[] = {"V_TacVest_blk","FU_Helm_bdu","ItemCompass","ItemMap","ItemGPS","TFAR_fadak","ACE_NVG_Wide","ItemWatch"};
      magazines[] = {mags_2(ammo_pis_o),mags_5(ammo_rifle_o),mags_4(ammo_riflet_o),
                     mags_2(HandGrenade),mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
      backpack = "FU_lead_backpack_o"
      };
class FU_Teamlead_o : FU_Base_o
      {editorSubcategory = "EdSubcat_Personnel_Camo_Arid";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_bdu_lead.jpg";
      icon = "iconManLeader";
      scope = 2;
      DisplayName = "Team Leader";
      weapons[] = {"FU_grenaderifle_o","FU_pistol_o","Throw","Put","Rangefinder"};
      linkedItems[] = {"V_TacVest_blk","FU_Helm_bdu","ItemCompass","ItemMap","ItemGPS","TFAR_fadak","ACE_NVG_Wide","ItemWatch"};
      magazines[] = {mags_2(ammo_pis_o),mags_5(ammo_rifle_o),mags_4(ammo_riflet_o),
                     mags_2(HandGrenade),mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
      backpack = "FU_lead_backpack_o"
      };
class FU_Officer_o : FU_Base_o
      {editorSubcategory = "EdSubcat_Personnel_Camo_Arid";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_bdu_lead.jpg";
      icon = "iconManOfficer";
      scope = 2;
      DisplayName = "Platoon leader";
      weapons[] = {"FU_grenaderifle_o","FU_pistol_o","Throw","Put","Laserdesignator"};
      linkedItems[] = {"V_TacVest_blk","FU_Helm_bdu","ItemCompass","ItemMap","ItemGPS","TFAR_fadak","ACE_NVG_Wide","ItemWatch"};
      magazines[] = {mags_2(ammo_pis_o),mags_5(ammo_rifle_o),mags_4(ammo_riflet_o),
                     mags_2(HandGrenade),mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange),"Laserbatteries"};
      backpack = "FU_lead_backpack_o"
      };
class FU_FAC_o : FU_Base_o
      {editorSubcategory = "EdSubcat_Personnel_Camo_Arid";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_bdu_lead.jpg";
      icon = "iconManRecon";
      scope = 2;
      DisplayName = "Forward-Air-Controller";
      weapons[] = {"FU_grenaderifle_o","FU_pistol_o","Throw","Put","Laserdesignator"};
      linkedItems[] = {"V_TacVest_blk","FU_Helm_bdu","ItemCompass","ItemMap","ItemGPS","TFAR_fadak","ACE_NVG_Wide","ItemWatch"};
      magazines[] = {mags_2(ammo_pis_o),mags_4(ammo_rifle_o),mags_4(ammo_riflet_o),
                     mags_2(HandGrenade),mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange),"Laserbatteries"};
      backpack = "FU_lead_backpack_o"
      };
class FU_Rifleman_O : FU_Base_O
      {editorSubcategory = "EdSubcat_Personnel_Camo_Arid";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_bdu_lite.jpg";
      uavHacker = 1;
      scope = 2;
      DisplayName = "Rifleman";
      weapons[] = {"FU_longrifle_o","FU_pistol_o","Throw","Put","Binocular"};
      linkedItems[] = {"V_TacVest_blk","FU_Helm_bdu","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","ACE_NVG_Wide","ACE_Altimeter"};
      magazines[] = {mags_2(ammo_pis_o),mags_5(ammo_rifle_o),mags_5(ammo_riflet_o),
                     mags_2(HandGrenade),mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
      backpack = "FU_LMG_backpack_o"
      };
class FU_RiflemanLAT_o : FU_Base_o
      {editorSubcategory = "EdSubcat_Personnel_Camo_Arid";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_bdu_lite.jpg";
      icon = "iconManAT";
      scope = 2;
      DisplayName = "Rifleman (LAT)";
      weapons[] = {"FU_longrifle_o","FU_pistol_o","launch_RPG32_green_F","Throw","Put","Binocular"};
      linkedItems[] = {"V_TacVest_blk","FU_Helm_bdu","ItemCompass","ItemMap","ItemGPS","TFAR_fadak","ACE_NVG_Wide","ItemWatch"};
      magazines[] = {mags_2(ammo_pis_o),mags_5(ammo_rifle_o),mags_5(ammo_riflet_o),
                     mags_2(HandGrenade),mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
      backpack = "FU_LAT_backpack_o"
      };
class FU_RiflemanDEM_o : FU_Base_o
      {editorSubcategory = "EdSubcat_Personnel_Camo_Arid";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_bdu_lite.jpg";
      icon = "iconManExplosive";
      scope = 2;
      DisplayName = "Rifleman (Demo)";
      weapons[] = {"FU_longrifle_o","FU_pistol_o","Throw","Put","Binocular"};
      linkedItems[] = {"V_TacVest_blk","FU_Helm_bdu","ItemCompass","ItemMap","ItemGPS","TFAR_fadak","ACE_NVG_Wide","ItemWatch"};
      magazines[] = {mags_2(ammo_pis_o),mags_5(ammo_rifle_o),mags_5(ammo_riflet_o),
                     mags_2(HandGrenade),mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
      backpack = "FU_exp_backpack_o"
      };
class FU_Machinegun_o : FU_Base_o
      {editorSubcategory = "EdSubcat_Personnel_Camo_Arid";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_bdu_lite.jpg";
      icon = "iconManMG";
      scope = 2;
      DisplayName = "Gunner (LMG)";
      weapons[] = {"FU_lmg_o","FU_pistol_o","Throw","Put","Binocular"};
      linkedItems[] = {"V_TacVest_blk","FU_Helm_bdu","ItemCompass","ItemMap","ItemGPS","TFAR_fadak","ACE_NVG_Wide","ItemWatch"};
      magazines[] = {mags_2(ammo_pis_o),mags_2(ammo_lmg_o),mags_2(HandGrenade),mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
      backpack = "FU_LMG_backpack_o"
      };


class FU_Medic_o : FU_Base_o
      {editorSubcategory = "EdSubcat_Personnel_Camo_Arid";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_bdu_lead.jpg";
      attendant = 1;
      icon = "iconManMedic";
      scope = 2;
      DisplayName = "Medic";
      weapons[] = {"FU_shortrifle_o","FU_pistol_o","Throw","Put","Binocular"};
      linkedItems[] = {"V_TacVest_blk","FU_Helm_bdu","ItemCompass","ItemMap","ItemGPS","TFAR_fadak","ACE_NVG_Wide","ItemWatch"};
      magazines[] = {mags_2(ammo_pis_o),mags_5(ammo_rifle_o),mags_5(ammo_riflet_o),
                     mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
      backpack = "FU_medic_backpack_o"
      };


class FU_crew_o : FU_Base_o
      {editorSubcategory = "EdSubcat_Personnel_Camo_Arid";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_bdu_lite.jpg";
      engineer = 1;
      icon = "IconManEngineer";
      scope = 2;
      DisplayName = "Crewman";
      weapons[] = {"FU_shortrifle_o","FU_pistol_o","Throw","Put","Binocular"};
      linkedItems[] = {"V_TacVest_blk","FU_Helm_bdu","ItemCompass","ItemMap","ItemGPS","TFAR_fadak","ACE_NVG_Wide","ItemWatch"};
      magazines[] = {mags_2(ammo_pis_o),mags_5(ammo_rifle_o),mags_5(ammo_riflet_o),
                     mags_2(HandGrenade),mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
      backpack = "FU_crew_backpack_o"
      };
class FU_Heli_o : FU_crew_o
      {editorSubcategory = "EdSubcat_Personnel_Camo_Arid";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_bdu_pilot.jpg";
      DisplayName = "Helicopter Pilot";
      linkedItems[] = {"V_TacVest_blk","FU_NVG_helm","ItemCompass","ItemMap","ItemGPS","TFAR_fadak","ItemWatch"};
      magazines[] = {mags_2(ammo_pis_o),mags_5(ammo_rifle_o),mags_5(ammo_riflet_o),
                     mags_2(HandGrenade),mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
      backpack = "FU_crew_backpack_o"
      };



class FU_SquadLead_bison : FU_SquadLead_o 
      {editorSubcategory = "EdSubcat_Personnel_Paramilitary"
      editorPreview = "\FU_Factions_MK2\data\editor\FU_bison_lead.jpg";
      linkedItems[] = {"FU_cVest_rig_black","FU_helm_bison","ItemCompass","ItemMap","ItemGPS","TFAR_fadak","ItemWatch"};
      uniformClass = "FU_uni_bison";
      backpack = "FU_lead_backpack_o"
      };
class FU_Teamlead_bison : FU_Teamlead_o 
      {editorSubcategory = "EdSubcat_Personnel_Paramilitary"
      editorPreview = "\FU_Factions_MK2\data\editor\FU_bison_lead.jpg";
      linkedItems[] = {"FU_cVest_rig_black","FU_helm_bison","ItemCompass","ItemMap","ItemGPS","TFAR_fadak","ItemWatch"};
      uniformClass = "FU_uni_bison";
      backpack = "FU_lead_backpack_o"
      };
class FU_Officer_bison : FU_Officer_o 
      {editorSubcategory = "EdSubcat_Personnel_Paramilitary"
      editorPreview = "\FU_Factions_MK2\data\editor\FU_bison_lite.jpg";
      linkedItems[] = {"FU_Vest_rig_black","FU_helm_bison","ItemCompass","ItemMap","ItemGPS","TFAR_fadak","ItemWatch"};
      uniformClass = "FU_uni_bison";
      backpack = "FU_lead_backpack_o"
      };
class FU_FAC_bison : FU_FAC_o 
      {editorSubcategory = "EdSubcat_Personnel_Paramilitary"
      editorPreview = "\FU_Factions_MK2\data\editor\FU_bison_lite.jpg";
      linkedItems[] = {"FU_Vest_rig_black","FU_helm_bison","ItemCompass","ItemMap","ItemGPS","TFAR_fadak","ItemWatch"};
      uniformClass = "FU_uni_bison";
      backpack = "FU_lead_backpack_o"
      };
class FU_Rifleman_bison : FU_Rifleman_O 
      {editorSubcategory = "EdSubcat_Personnel_Paramilitary"
      editorPreview = "\FU_Factions_MK2\data\editor\FU_bison_lite.jpg";
      linkedItems[] = {"FU_Vest_rig_blackb","FU_helm_bison","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","ACE_Altimeter"};
      uniformClass = "FU_uni_bison";
      backpack = "FU_LMG_backpack_o"
      };
class FU_RiflemanLAT_bison : FU_RiflemanLAT_o 
      {editorSubcategory = "EdSubcat_Personnel_Paramilitary"
      editorPreview = "\FU_Factions_MK2\data\editor\FU_bison_lite.jpg";
      linkedItems[] = {"FU_Vest_rig_blackb","FU_helm_bison","ItemCompass","ItemMap","ItemGPS","TFAR_fadak","ItemWatch"};
      uniformClass = "FU_uni_bison";
      backpack = "FU_LAT_backpack_o"
      };
class FU_RiflemanDEM_bison : FU_RiflemanDEM_o 
      {editorSubcategory = "EdSubcat_Personnel_Paramilitary"
      editorPreview = "\FU_Factions_MK2\data\editor\FU_bison_lead.jpg";
      linkedItems[] = {"FU_cVest_rig_black","FU_helm_bison","ItemCompass","ItemMap","ItemGPS","TFAR_fadak","ItemWatch"};
      uniformClass = "FU_uni_bison";
      backpack = "FU_exp_backpack_o"
      };
class FU_Machinegun_bison : FU_Machinegun_o 
      {editorSubcategory = "EdSubcat_Personnel_Paramilitary"
      editorPreview = "\FU_Factions_MK2\data\editor\FU_bison_lite.jpg";
      linkedItems[] = {"FU_Vest_rig_black","FU_helm_bison","ItemCompass","ItemMap","ItemGPS","TFAR_fadak","ItemWatch"};
      uniformClass = "FU_uni_bison";
      backpack = "FU_LMG_backpack_o"
      };


class FU_Medic_bison : FU_Medic_o 
      {editorSubcategory = "EdSubcat_Personnel_Paramilitary"
      editorPreview = "\FU_Factions_MK2\data\editor\FU_bison_lead.jpg";
      linkedItems[] = {"FU_Vest_rig_blackb","FU_helm_bison","ItemCompass","ItemMap","ItemGPS","TFAR_fadak","ItemWatch"};
      uniformClass = "FU_uni_bison";
      backpack = "FU_medic_backpack_o"
      };


class FU_crew_bison : FU_crew_o 
      {editorSubcategory = "EdSubcat_Personnel_Paramilitary"
      editorPreview = "\FU_Factions_MK2\data\editor\FU_bison_lite.jpg";
      weapons[] = {"FU_shortrifle_o","FU_pistol_o","Throw","Put","Binocular"};
      linkedItems[] = {"FU_Vest_rig_black","FU_helm_bison","ItemCompass","ItemMap","ItemGPS","TFAR_fadak","ItemWatch"};
      uniformClass = "FU_uni_bison";
      backpack = "FU_crew_backpack_o"
      };
class FU_Heli_bison : FU_Heli_o 
      {editorSubcategory = "EdSubcat_Personnel_Paramilitary"
      editorPreview = "\FU_Factions_MK2\data\editor\FU_bison_pilot.jpg";
      linkedItems[] = {"FU_Vest_rig_black","FU_NVG_helm","ItemCompass","ItemMap","ItemGPS","TFAR_fadak","ItemWatch"};
      uniformClass = "FU_uni_bison";
      backpack = "FU_crew_backpack_o"
      };








class FU_SquadLead_i : FU_Base_i
      {editorSubcategory = "EdSubcat_Personnel_Camo_Woodland";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_biz_lead.jpg";
      icon = "iconManLeader";
      scope = 2;
      DisplayName = "Squad Leader";
      weapons[] = {"FU_grenaderifle_i","FU_pistol_i","Throw","Put","Rangefinder"};
      linkedItems[] = {"FU_Vest_rig_ib","FU_Helm_biz","ItemCompass","ItemMap","ItemGPS","TFAR_anprc148jem","ACE_NVG_Wide","ItemWatch"};
      magazines[] = {mags_2(ammo_pis_i),mags_5(ammo_rifle_i),mags_4(ammo_riflet_i),
                     mags_2(HandGrenade),mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
      backpack = "FU_lead_backpack_i"
      };
class FU_Teamlead_i : FU_Base_i
      {editorSubcategory = "EdSubcat_Personnel_Camo_Woodland";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_biz_lead.jpg";
      icon = "iconManLeader";
      scope = 2;
      DisplayName = "Team Leader";
      weapons[] = {"FU_grenaderifle_i","FU_pistol_i","Throw","Put","Rangefinder"};
      linkedItems[] = {"FU_Vest_rig_ib","FU_Helm_biz","ItemCompass","ItemMap","ItemGPS","TFAR_anprc148jem","ACE_NVG_Wide","ItemWatch"};
      magazines[] = {mags_2(ammo_pis_i),mags_5(ammo_rifle_i),mags_4(ammo_riflet_i),
                     mags_2(HandGrenade),mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
      backpack = "FU_lead_backpack_i"
      };
class FU_Officer_i : FU_Base_i
      {editorSubcategory = "EdSubcat_Personnel_Camo_Woodland";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_biz_lead.jpg";
      icon = "iconManOfficer";
      scope = 2;
      DisplayName = "Platoon leader";
      weapons[] = {"FU_grenaderifle_i","FU_pistol_i","Throw","Put","Laserdesignator"};
      linkedItems[] = {"FU_Vest_rig_i","FU_Helm_biz","ItemCompass","ItemMap","ItemGPS","TFAR_anprc148jem","ACE_NVG_Wide","ItemWatch"};
      magazines[] = {mags_2(ammo_pis_i),mags_5(ammo_rifle_i),mags_4(ammo_riflet_i),
                     mags_2(HandGrenade),mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange),"Laserbatteries"};
      backpack = "FU_lead_backpack_i"
      };
class FU_FAC_i : FU_Base_i
      {editorSubcategory = "EdSubcat_Personnel_Camo_Woodland";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_biz_lead.jpg";
      icon = "iconManRecon";
      scope = 2;
      DisplayName = "Forward-Air-Controller";
      weapons[] = {"FU_grenaderifle_i","FU_pistol_i","Throw","Put","Laserdesignator"};
      linkedItems[] = {"FU_Vest_rig_i","FU_Helm_biz","ItemCompass","ItemMap","ItemGPS","TFAR_anprc148jem","ACE_NVG_Wide","ItemWatch"};
      magazines[] = {mags_2(ammo_pis_i),mags_4(ammo_rifle_i),mags_4(ammo_riflet_i),
                     mags_2(HandGrenade),mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange),"Laserbatteries"};
      backpack = "FU_lead_backpack_i"
      };
class FU_Rifleman_I : FU_Base_I
      {editorSubcategory = "EdSubcat_Personnel_Camo_Woodland";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_biz_lite.jpg";
      uavHacker = 1;
      scope = 2;
      DisplayName = "Rifleman";
      weapons[] = {"FU_longrifle_i","FU_pistol_i","Throw","Put","Binocular"};
      linkedItems[] = {"FU_Vest_rig_i","FU_Helm_biz","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","ACE_NVG_Wide","ACE_Altimeter"};
      magazines[] = {mags_2(ammo_pis_i),mags_5(ammo_rifle_i),mags_5(ammo_riflet_i),
                     mags_2(HandGrenade),mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
      backpack = "FU_LMG_backpack_i"
      };
class FU_RiflemanLAT_i : FU_Base_i
      {editorSubcategory = "EdSubcat_Personnel_Camo_Woodland";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_biz_lite.jpg";
      icon = "iconManAT";
      scope = 2;
      DisplayName = "Rifleman (LAT)";
      weapons[] = {"FU_longrifle_i","FU_pistol_i","launch_NLAW_F","Throw","Put","Binocular"};
      linkedItems[] = {"FU_Vest_rig_i","FU_Helm_biz","ItemCompass","ItemMap","ItemGPS","TFAR_anprc148jem","ACE_NVG_Wide","ItemWatch"};
      magazines[] = {mags_2(ammo_pis_i),mags_5(ammo_rifle_i),mags_5(ammo_riflet_i),
                     mags_2(HandGrenade),mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
      backpack = "FU_LMG_backpack_i"
      };
class FU_RiflemanDEM_i : FU_Base_i
      {editorSubcategory = "EdSubcat_Personnel_Camo_Woodland";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_biz_lite.jpg";
      icon = "iconManExplosive";
      scope = 2;
      DisplayName = "Rifleman (Demo)";
      weapons[] = {"FU_longrifle_i","FU_pistol_i","Throw","Put","Binocular"};
      linkedItems[] = {"FU_Vest_rig_ib","FU_Helm_biz","ItemCompass","ItemMap","ItemGPS","TFAR_anprc148jem","ACE_NVG_Wide","ItemWatch"};
      magazines[] = {mags_2(ammo_pis_i),mags_5(ammo_rifle_i),mags_5(ammo_riflet_i),
                     mags_2(HandGrenade),mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
      backpack = "FU_exp_backpack_i"
      };
class FU_Machinegun_i : FU_Base_i
      {editorSubcategory = "EdSubcat_Personnel_Camo_Woodland";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_biz_lite.jpg";
      icon = "iconManMG";
      scope = 2;
      DisplayName = "Gunner (LMG)";
      weapons[] = {"FU_lmg_i","FU_pistol_i","Throw","Put","Binocular"};
      linkedItems[] = {"FU_Vest_rig_i","FU_Helm_biz","ItemCompass","ItemMap","ItemGPS","TFAR_anprc148jem","ACE_NVG_Wide","ItemWatch"};
      magazines[] = {mags_2(ammo_pis_i),mags_2(ammo_lmg_i),mags_2(HandGrenade),mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
      backpack = "FU_LMG_backpack_i"
      };


class FU_Medic_i : FU_Base_i
      {editorSubcategory = "EdSubcat_Personnel_Camo_Woodland";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_biz_lead.jpg";
      attendant = 1;
      icon = "iconManMedic";
      scope = 2;
      DisplayName = "Medic";
      weapons[] = {"FU_shortrifle_i","FU_pistol_i","Throw","Put","Binocular"};
      linkedItems[] = {"FU_Vest_rig_ib","FU_Helm_biz","ItemCompass","ItemMap","ItemGPS","TFAR_anprc148jem","ACE_NVG_Wide","ItemWatch"};
      magazines[] = {mags_2(ammo_pis_i),mags_5(ammo_rifle_i),mags_5(ammo_riflet_i),
                     mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
      backpack = "FU_medic_backpack_i"
      };


class FU_crew_i : FU_Base_i
      {editorSubcategory = "EdSubcat_Personnel_Camo_Woodland";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_biz_lite.jpg";
      engineer = 1;
      icon = "IconManEngineer";
      scope = 2;
      DisplayName = "Crewman";
      weapons[] = {"FU_shortrifle_i","FU_pistol_i","Throw","Put","Binocular"};
      linkedItems[] = {"FU_Vest_rig_i","FU_Helm_biz","ItemCompass","ItemMap","ItemGPS","TFAR_anprc148jem","ACE_NVG_Wide","ItemWatch"};
      magazines[] = {mags_2(ammo_pis_i),mags_5(ammo_rifle_i),mags_5(ammo_riflet_i),
                     mags_2(HandGrenade),mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
      backpack = "FU_crew_backpack_i"
      };
class FU_Heli_i : FU_crew_i
      {editorSubcategory = "EdSubcat_Personnel_Camo_Woodland";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_biz_lite.jpg";
      DisplayName = "Helicopter Pilot";
      linkedItems[] = {"FU_Vest_rig_i","FU_NVG_helm_b","ItemCompass","ItemMap","ItemGPS","TFAR_anprc148jem","ItemWatch"};
      magazines[] = {mags_2(ammo_pis_i),mags_5(ammo_rifle_i),mags_5(ammo_riflet_i),
                     mags_2(HandGrenade),mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
      backpack = "FU_crew_backpack_i"
      };



class FU_SquadLead_s : FU_SquadLead_i 
      {
      weapons[] = {"FU_longrifle_s","FU_pistol_i","Throw","Put","Rangefinder"};
      editorPreview = "\FU_Factions_MK2\data\editor\FU_UN_lead.jpg";
      camouflage = 0.6;
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      linkedItems[] = {"V_PlateCarrierSpec_blk","H_Beret_02","ItemCompass","ItemMap","ItemGPS","TFAR_anprc148jem","ItemWatch"};
      uniformClass = "FU_Uni_guile";
      backpack = "FU_lead_backpack_s"
      magazines[] = {mags_2(ammo_pis_i),mags_5(ammo_rifle_s),mags_5(ammo_riflet_s),
                     mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
      };
class FU_Teamlead_s : FU_Teamlead_i 
      {
      weapons[] = {"FU_longrifle_s","FU_pistol_i","Throw","Put","Rangefinder"};
      editorPreview = "\FU_Factions_MK2\data\editor\FU_UN_lead.jpg";
      camouflage = 0.6;
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      linkedItems[] = {"V_PlateCarrierSpec_blk","H_Beret_02","ItemCompass","ItemMap","ItemGPS","TFAR_anprc148jem","ItemWatch"};
      uniformClass = "FU_Uni_guile";
      backpack = "FU_lead_backpack_s"
      magazines[] = {mags_2(ammo_pis_i),mags_5(ammo_rifle_s),mags_5(ammo_riflet_s),
                     mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
      };
class FU_Officer_s : FU_Officer_i 
      {
      weapons[] = {"FU_longrifle_s","FU_pistol_i","Throw","Put","Laserdesignator"};
      editorPreview = "\FU_Factions_MK2\data\editor\FU_UN_lead.jpg";
      camouflage = 0.6;
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      linkedItems[] = {"V_PlateCarrierSpec_blk","H_Beret_02","ItemCompass","ItemMap","ItemGPS","TFAR_anprc148jem","ItemWatch"};
      uniformClass = "FU_Uni_guile";
      backpack = "FU_lead_backpack_s"
      magazines[] = {mags_2(ammo_pis_i),mags_5(ammo_rifle_s),mags_2(ammo_riflet_s),
                     mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange,"Laserbatteries")};
      };
class FU_FAC_s : FU_FAC_i 
      {
      weapons[] = {"FU_longrifle_s","FU_pistol_i","Throw","Put","Laserdesignator"};
      editorPreview = "\FU_Factions_MK2\data\editor\FU_UN_lead.jpg";
      camouflage = 0.6;
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      linkedItems[] = {"V_PlateCarrierSpec_blk","H_Beret_02","ItemCompass","ItemMap","ItemGPS","TFAR_anprc148jem","ItemWatch"};
      uniformClass = "FU_Uni_guile";
      backpack = "FU_lead_backpack_s"
      magazines[] = {mags_2(ammo_pis_i),mags_5(ammo_rifle_s),mags_2(ammo_riflet_s),
                     mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange,"Laserbatteries")};
      };
class FU_Rifleman_s : FU_Rifleman_I 
      {
      weapons[] = {"FU_longrifle_s","FU_pistol_i","Throw","Put","Binocular"};
      editorPreview = "\FU_Factions_MK2\data\editor\FU_UN_lead.jpg";
      camouflage = 0.6;
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      linkedItems[] = {"V_PlateCarrierSpec_blk","H_Beret_02","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","ACE_Altimeter"};
      uniformClass = "FU_Uni_guile";
      backpack = "FU_LMG_backpack_s"
      magazines[] = {mags_2(ammo_pis_i),mags_5(ammo_rifle_s),mags_5(ammo_riflet_s),
                     mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
      };
class FU_RiflemanLAT_s : FU_RiflemanLAT_i 
      {
      weapons[] = {"FU_longrifle_s","FU_pistol_i","launch_NLAW_F","Throw","Put","Binocular"};
      editorPreview = "\FU_Factions_MK2\data\editor\FU_UN_lead.jpg";
      camouflage = 0.6;
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      linkedItems[] = {"V_PlateCarrierSpec_blk","H_Beret_02","ItemCompass","ItemMap","ItemGPS","TFAR_anprc148jem","ItemWatch"};
      uniformClass = "FU_Uni_guile";
      backpack = "FU_LMG_backpack_s"
      magazines[] = {mags_2(ammo_pis_i),mags_5(ammo_rifle_s),mags_5(ammo_riflet_s),
                     mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
      };
class FU_RiflemanDEM_s : FU_RiflemanDEM_i 
      {
      weapons[] = {"FU_longrifle_s","FU_pistol_i","Throw","Put","Binocular"};
      editorPreview = "\FU_Factions_MK2\data\editor\FU_UN_lead.jpg";
      camouflage = 0.6;
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      linkedItems[] = {"V_PlateCarrierSpec_blk","H_Beret_02","ItemCompass","ItemMap","ItemGPS","TFAR_anprc148jem","ItemWatch"};
      uniformClass = "FU_Uni_guile";
      backpack = "FU_exp_backpack_s"
      magazines[] = {mags_2(ammo_pis_i),mags_5(ammo_rifle_s),mags_5(ammo_riflet_s),
                     mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
      };
class FU_Machinegun_s : FU_Machinegun_i 
      {
      weapons[] = {"FU_lmg_s","FU_pistol_i","Throw","Put","Binocular"};
      editorPreview = "\FU_Factions_MK2\data\editor\FU_UN_lite.jpg";
      camouflage = 0.6;
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      Displayname = "Marksman"
      linkedItems[] = {"V_PlateCarrier1_blk","H_Beret_02","ItemCompass","ItemMap","ItemGPS","TFAR_anprc148jem","ItemWatch"};
      uniformClass = "FU_Uni_guile";
      backpack = "FU_LMG_backpack_s"
      magazines[] = {mags_2(ammo_pis_i),mags_5(ammo_lmg_s),mags_2(ammo_lmg_s),
                     mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
      };


class FU_Medic_s : FU_Medic_i 
      {
      weapons[] = {"FU_shortrifle_s","FU_pistol_i","Throw","Put","Binocular"};
      editorPreview = "\FU_Factions_MK2\data\editor\FU_UN_lite.jpg";
      camouflage = 0.6;
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      linkedItems[] = {"V_PlateCarrier1_blk","H_Beret_02","ItemCompass","ItemMap","ItemGPS","TFAR_anprc148jem","ItemWatch"};
      uniformClass = "FU_Uni_guile";
      backpack = "FU_medic_backpack_o"
      magazines[] = {mags_2(ammo_pis_i),mags_5(ammo_rifle_s),mags_5(ammo_riflet_s),
                     mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
      };


class FU_crew_s : FU_crew_i 
      {
      weapons[] = {"FU_shortrifle_s","FU_pistol_i","Throw","Put","Binocular"};
      editorPreview = "\FU_Factions_MK2\data\editor\FU_UN_lite.jpg";
      camouflage = 0.6;
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      linkedItems[] = {"V_PlateCarrier1_blk","H_Beret_02","ItemCompass","ItemMap","ItemGPS","TFAR_anprc148jem","ItemWatch"};
      uniformClass = "FU_Uni_guile";
      backpack = "FU_crew_backpack_o"
      magazines[] = {mags_2(ammo_pis_i),mags_5(ammo_rifle_s),mags_5(ammo_riflet_s),
                     mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
      };
class FU_Heli_s : FU_Heli_i 
      {
      weapons[] = {"FU_shortrifle_s","FU_pistol_i","Throw","Put","Binocular"};
      editorPreview = "\FU_Factions_MK2\data\editor\FU_UN_pilot.jpg";
      camouflage = 0.6;
      editorSubcategory = "EdSubcat_Personnel_SpecialForces";
      linkedItems[] = {"V_PlateCarrier1_blk","FU_NVG_helm","ItemCompass","ItemMap","ItemGPS","TFAR_anprc148jem","ItemWatch"};
      uniformClass = "FU_Uni_guile";
      backpack = "FU_crew_backpack_o"
      magazines[] = {mags_2(ammo_pis_i),mags_5(ammo_rifle_s),mags_5(ammo_riflet_s),
                     mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
      };


     
class FU_SquadLead_nor : FU_SquadLead_b
      {editorSubcategory =  "EdSubcat_Personnel_European"
      editorPreview = "\FU_Factions_MK2\data\editor\FU_nor_lead.jpg";
      linkedItems[] = {"FU_Vest_nor_lit","FU_Helm_Light_nor","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","ACE_NVG_Wide","ItemWatch"};
      uniformClass = "FU_Uni_nor";
      backpack = "FU_lead_backpack_n"
      };
class FU_Teamlead_nor : FU_Teamlead_b
      {editorSubcategory =  "EdSubcat_Personnel_European"
      editorPreview = "\FU_Factions_MK2\data\editor\FU_nor_lead.jpg";
      linkedItems[] = {"FU_Vest_nor_lit","FU_Helm_Light_nor","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","ACE_NVG_Wide","ItemWatch"};
      uniformClass = "FU_Uni_nor";
      backpack = "FU_lead_backpack_n"
      };
class FU_Officer_nor : FU_Officer_b
      {editorSubcategory =  "EdSubcat_Personnel_European"
      editorPreview = "\FU_Factions_MK2\data\editor\FU_nor_lead.jpg";
      linkedItems[] = {"FU_Vest_nor_lit","FU_Helm_Light_nor","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","ACE_NVG_Wide","ItemWatch"};
      uniformClass = "FU_Uni_nor";
      backpack = "FU_lead_backpack_n"
      };
class FU_FAC_nor : FU_FAC_b
      {editorSubcategory =  "EdSubcat_Personnel_European"
      editorPreview = "\FU_Factions_MK2\data\editor\FU_nor_lead.jpg";
      linkedItems[] = {"FU_Vest_nor_lit","FU_Helm_Light_nor","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","ACE_NVG_Wide","ItemWatch"};
      uniformClass = "FU_Uni_nor";
      backpack = "FU_lead_backpack_n"
      };

class FU_Rifleman_nor : FU_Rifleman_b
      {editorSubcategory =  "EdSubcat_Personnel_European"
      editorPreview = "\FU_Factions_MK2\data\editor\FU_nor_lite.jpg";
      linkedItems[] = {"FU_Vest_nor_lit","FU_Helm_Light_nor","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","ACE_NVG_Wide","ItemWatch"};
      uniformClass = "FU_Uni_nor";
      backpack = "FU_lmg_backpack_n"
      };
class FU_RiflemanLAT_nor : FU_RiflemanLAT_b
      {editorSubcategory =  "EdSubcat_Personnel_European"
      editorPreview = "\FU_Factions_MK2\data\editor\FU_nor_lat.jpg";
      weapons[] = {"FU_longrifle_b","FU_pistol_b","launch_MRAWS_green_F","Throw","Put","Binocular"};
      linkedItems[] = {"FU_Vest_nor_lit","FU_Helm_Light_nor","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","ACE_NVG_Wide","ItemWatch"};
      uniformClass = "FU_Uni_nor";
      backpack = "FU_LAT_backpack_n"
      };
class FU_RiflemanDEM_nor : FU_RiflemanDEM_b
      {editorSubcategory =  "EdSubcat_Personnel_European"
      editorPreview = "\FU_Factions_MK2\data\editor\FU_nor_lite.jpg";
      linkedItems[] = {"FU_Vest_nor_lit","FU_Helm_Light_nor","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","ACE_NVG_Wide","ItemWatch"};
      uniformClass = "FU_Uni_nor";
      backpack = "FU_exp_backpack_n"
      };
class FU_Machinegun_nor : FU_Machinegun_b
      {editorSubcategory =  "EdSubcat_Personnel_European"
      editorPreview = "\FU_Factions_MK2\data\editor\FU_nor_lmg.jpg";
      linkedItems[] = {"FU_Vest_nor_lit","FU_Helm_Light_nor","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","ACE_NVG_Wide","ItemWatch"};
      uniformClass = "FU_Uni_nor";
      backpack = "FU_lmg_backpack_n"
      };


class FU_Medic_nor : FU_Medic_b
      {editorSubcategory =  "EdSubcat_Personnel_European"
      editorPreview = "\FU_Factions_MK2\data\editor\FU_nor_lite.jpg";
      linkedItems[] = {"FU_Vest_nor_lit","FU_Helm_Light_nor","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","ACE_NVG_Wide","ItemWatch"};
      uniformClass = "FU_Uni_nor";
      backpack = "FU_medic_backpack_n"
      };


class FU_crew_nor : FU_crew_b
      {editorSubcategory =  "EdSubcat_Personnel_European"
      editorPreview = "\FU_Factions_MK2\data\editor\FU_nor_crew.jpg";
      linkedItems[] = {"FU_Vest_nor_lit","H_HelmetCrew_B","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","ACE_NVG_Wide","ItemWatch"};
      uniformClass = "FU_Uni_nor";
      backpack = "FU_crew_backpack_n"
      };
class FU_Heli_nor : FU_Heli_b
      {editorSubcategory =  "EdSubcat_Personnel_European"
      editorPreview = "\FU_Factions_MK2\data\editor\FU_nor_heli.jpg";
      linkedItems[] = {"FU_Vest_nor_lit","FU_NVG_helm_b","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","ItemWatch"};
      uniformClass = "FU_Uni_nor";
      backpack = "FU_crew_backpack_n"
      };





class FU_SquadLead_swe : FU_SquadLead_i
      {editorSubcategory = "EdSubcat_Personnel_European";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_swe_lead.jpg";
      uniformClass = "FU_Uni_swe";
      weapons[] = {"FU_grenaderifle_b","FU_pistol_i","Throw","Put","Rangefinder"};
      linkedItems[] = {"FU_Vest_swe_lit","FU_Helm_swe","ItemCompass","ItemMap","ItemGPS","TFAR_anprc148jem","ACE_NVG_Wide","ItemWatch"};
      backpack = "FU_lead_backpack_swe"
      };
class FU_Teamlead_swe : FU_Teamlead_i
      {editorSubcategory = "EdSubcat_Personnel_European";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_swe_lead.jpg";
      uniformClass = "FU_Uni_swe";
      weapons[] = {"FU_grenaderifle_b","FU_pistol_i","Throw","Put","Rangefinder"};
      linkedItems[] = {"FU_Vest_swe_lit","FU_Helm_swe","ItemCompass","ItemMap","ItemGPS","TFAR_anprc148jem","ACE_NVG_Wide","ItemWatch"};
      backpack = "FU_lead_backpack_swe"
      };
class FU_Officer_swe : FU_Officer_i
      {editorSubcategory = "EdSubcat_Personnel_European";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_swe_lead.jpg";
      uniformClass = "FU_Uni_swe";
      weapons[] = {"FU_grenaderifle_b","FU_pistol_i","Throw","Put","Laserdesignator"};
      linkedItems[] = {"FU_Vest_swe_lit","FU_Helm_swe","ItemCompass","ItemMap","ItemGPS","TFAR_anprc148jem","ACE_NVG_Wide","ItemWatch"};
      backpack = "FU_lead_backpack_swe"
      };
class FU_FAC_swe : FU_FAC_i
      {editorSubcategory = "EdSubcat_Personnel_European";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_swe_lead.jpg";
      uniformClass = "FU_Uni_swe";
      weapons[] = {"FU_grenaderifle_b","FU_pistol_i","Throw","Put","Laserdesignator"};
      linkedItems[] = {"FU_Vest_swe_lit","FU_Helm_swe","ItemCompass","ItemMap","ItemGPS","TFAR_anprc148jem","ACE_NVG_Wide","ItemWatch"};
      backpack = "FU_lead_backpack_swe"
      };
class FU_Rifleman_swe : FU_Rifleman_I
      {editorSubcategory = "EdSubcat_Personnel_European";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_swe_lite.jpg";
      uniformClass = "FU_Uni_swe";
      weapons[] = {"FU_longrifle_b","FU_pistol_i","Throw","Put","Binocular"};
      linkedItems[] = {"FU_Vest_swe_lit","FU_Helm_swe","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","ACE_NVG_Wide","ACE_Altimeter"};
      backpack = "FU_LMG_backpack_swe"
      };
class FU_RiflemanLAT_swe : FU_RiflemanLAT_i
      {editorSubcategory = "EdSubcat_Personnel_European";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_swe_lat.jpg";
      uniformClass = "FU_Uni_swe";
      weapons[] = {"FU_longrifle_b","FU_pistol_i","launch_MRAWS_green_F","Throw","Put","Binocular"};
      linkedItems[] = {"FU_Vest_swe_lit","FU_Helm_swe","ItemCompass","ItemMap","ItemGPS","TFAR_anprc148jem","ACE_NVG_Wide","ItemWatch"};
      backpack = "FU_LAT_backpack_swe"
      };
class FU_RiflemanDEM_swe : FU_RiflemanDEM_i
      {editorSubcategory = "EdSubcat_Personnel_European";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_swe_lite.jpg";
      uniformClass = "FU_Uni_swe";
      weapons[] = {"FU_longrifle_b","FU_pistol_i","Throw","Put","Binocular"};
      linkedItems[] = {"FU_Vest_swe_lit","FU_Helm_swe","ItemCompass","ItemMap","ItemGPS","TFAR_anprc148jem","ACE_NVG_Wide","ItemWatch"};
      backpack = "FU_exp_backpack_swe"
      };
class FU_Machinegun_swe : FU_Machinegun_i
      {editorSubcategory = "EdSubcat_Personnel_European";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_swe_lmg.jpg";
      weapons[] = {"FU_lmg_b","FU_pistol_i","Throw","Put","Binocular"};
      uniformClass = "FU_Uni_swe";
      linkedItems[] = {"FU_Vest_swe_lit","FU_Helm_swe","ItemCompass","ItemMap","ItemGPS","TFAR_anprc148jem","ACE_NVG_Wide","ItemWatch"};
      magazines[] = {mags_2(ammo_pis_i),mags_3(ammo_lmg_b),mags_2(HandGrenade),mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
      backpack = "FU_LMG_backpack_swe"
      };


class FU_Medic_swe : FU_Medic_i
      {
      editorSubcategory = "EdSubcat_Personnel_European";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_swe_lite.jpg";
      weapons[] = {"FU_shortrifle_b","FU_pistol_i","Throw","Put","Binocular"};
      uniformClass = "FU_Uni_swe";
      linkedItems[] = {"FU_Vest_swe_lit","FU_Helm_swe","ItemCompass","ItemMap","ItemGPS","TFAR_anprc148jem","ACE_NVG_Wide","ItemWatch"};
      backpack = "FU_medic_backpack_swe"
      };


class FU_crew_swe : FU_crew_i
      {editorSubcategory = "EdSubcat_Personnel_European";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_swe_crew.jpg";
      weapons[] = {"FU_shortrifle_b","FU_pistol_i","Throw","Put","Binocular"};
      uniformClass = "FU_Uni_swe";
      linkedItems[] = {"FU_Vest_swe_lit","FU_Helm_swe","ItemCompass","ItemMap","ItemGPS","TFAR_anprc148jem","ACE_NVG_Wide","ItemWatch"};
      backpack = "FU_crew_backpack_swe"
      };
class FU_Heli_swe : FU_Heli_i
      {editorSubcategory = "EdSubcat_Personnel_European";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_swe_heli.jpg";
      weapons[] = {"FU_shortrifle_b","FU_pistol_i","Throw","Put","Binocular"};
      uniformClass = "FU_Uni_swe";
      linkedItems[] = {"FU_Vest_swe_lit","FU_NVG_helm_b","ItemCompass","ItemMap","ItemGPS","TFAR_anprc148jem","ItemWatch"};
      backpack = "FU_crew_backpack_swe"
      };



class FU_SquadLead_bel: FU_SquadLead_o
      {editorSubcategory = "EdSubcat_Personnel_European";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_bel_lead.jpg";
      uniformClass = "FU_Uni_bel";
      weapons[] = {"FU_grenaderifle_o","FU_pistol_o","Throw","Put","Rangefinder"};
      linkedItems[] = {"V_TacVest_oli","FU_Helm_bel","ItemCompass","ItemMap","ItemGPS","TFAR_fadak","ACE_NVG_Wide","ItemWatch"};
      backpack = "FU_lead_backpack_o"
      };
class FU_Teamlead_bel: FU_Teamlead_o
      {editorSubcategory = "EdSubcat_Personnel_European";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_bel_lead.jpg";
      uniformClass = "FU_Uni_bel";
      weapons[] = {"FU_grenaderifle_o","FU_pistol_o","Throw","Put","Rangefinder"};
      linkedItems[] = {"V_TacVest_oli","FU_Helm_bel","ItemCompass","ItemMap","ItemGPS","TFAR_fadak","ACE_NVG_Wide","ItemWatch"};
      backpack = "FU_lead_backpack_o"
      };
class FU_Officer_bel: FU_Officer_o
      {editorSubcategory = "EdSubcat_Personnel_European";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_bel_lead.jpg";
      uniformClass = "FU_Uni_bel";
      weapons[] = {"FU_grenaderifle_o","FU_pistol_o","Throw","Put","Laserdesignator"};
      linkedItems[] = {"V_TacVest_oli","FU_Helm_bel","ItemCompass","ItemMap","ItemGPS","TFAR_fadak","ACE_NVG_Wide","ItemWatch"};
      backpack = "FU_lead_backpack_o"
      };
class FU_FAC_bel: FU_FAC_o
      {editorSubcategory = "EdSubcat_Personnel_European";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_bel_lead.jpg";
      uniformClass = "FU_Uni_bel";
      weapons[] = {"FU_grenaderifle_o","FU_pistol_o","Throw","Put","Laserdesignator"};
      linkedItems[] = {"V_TacVest_oli","FU_Helm_bel","ItemCompass","ItemMap","ItemGPS","TFAR_fadak","ACE_NVG_Wide","ItemWatch"};
      backpack = "FU_lead_backpack_o"
      };
class FU_Rifleman_bel: FU_Rifleman_o
      {editorSubcategory = "EdSubcat_Personnel_European";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_bel_lite.jpg";
      uniformClass = "FU_Uni_bel";
      weapons[] = {"FU_longrifle_o","FU_pistol_o","Throw","Put","Binocular"};
      linkedItems[] = {"V_TacVest_oli","FU_Helm_bel","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","ACE_NVG_Wide","ACE_Altimeter"};
      backpack = "FU_LMG_backpack_o"
      };
class FU_RiflemanLAT_bel: FU_RiflemanLAT_o
      {editorSubcategory = "EdSubcat_Personnel_European";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_bel_lat.jpg";
      uniformClass = "FU_Uni_bel";
      weapons[] = {"FU_longrifle_o","FU_pistol_o","launch_MRAWS_olive_F","Throw","Put","Binocular"};
      linkedItems[] = {"V_TacVest_oli","FU_Helm_bel","ItemCompass","ItemMap","ItemGPS","TFAR_fadak","ACE_NVG_Wide","ItemWatch"};
      backpack = "FU_LAT_backpack_bel"
      };
class FU_RiflemanDEM_bel: FU_RiflemanDEM_o
      {editorSubcategory = "EdSubcat_Personnel_European";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_bel_lite.jpg";
      uniformClass = "FU_Uni_bel";
      weapons[] = {"FU_longrifle_o","FU_pistol_o","Throw","Put","Binocular"};
      linkedItems[] = {"V_TacVest_oli","FU_Helm_bel","ItemCompass","ItemMap","ItemGPS","TFAR_fadak","ACE_NVG_Wide","ItemWatch"};
      backpack = "FU_exp_backpack_o"
      };
class FU_Machinegun_bel: FU_Machinegun_o
      {editorSubcategory = "EdSubcat_Personnel_European";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_bel_lmg.jpg";
      uniformClass = "FU_Uni_bel";
      weapons[] = {"FU_lmg_o","FU_pistol_o","Throw","Put","Binocular"};
      linkedItems[] = {"V_TacVest_oli","FU_Helm_bel","ItemCompass","ItemMap","ItemGPS","TFAR_fadak","ACE_NVG_Wide","ItemWatch"};
      backpack = "FU_LMG_backpack_o"
      };


class FU_Medic_bel: FU_Medic_o
      {
      editorSubcategory = "EdSubcat_Personnel_European";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_bel_lite.jpg";
      uniformClass = "FU_Uni_bel";
      weapons[] = {"FU_shortrifle_o","FU_pistol_o","Throw","Put","Binocular"};
      linkedItems[] = {"V_TacVest_oli","FU_Helm_bel","ItemCompass","ItemMap","ItemGPS","TFAR_fadak","ACE_NVG_Wide","ItemWatch"};
      backpack = "FU_medic_backpack_o"
      };


class FU_crew_bel: FU_crew_o
      {editorSubcategory = "EdSubcat_Personnel_European";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_bel_crew.jpg";
      uniformClass = "FU_Uni_bel";
      weapons[] = {"FU_shortrifle_o","FU_pistol_o","Throw","Put","Binocular"};
      linkedItems[] = {"V_TacVest_oli","FU_Helm_bel","ItemCompass","ItemMap","ItemGPS","TFAR_fadak","ACE_NVG_Wide","ItemWatch"};
      backpack = "FU_crew_backpack_o"
      };
class FU_Heli_bel: FU_Heli_o
      {editorSubcategory = "EdSubcat_Personnel_European";
      editorPreview = "\FU_Factions_MK2\data\editor\FU_bel_heli.jpg";
      uniformClass = "FU_Uni_bel";
      weapons[] = {"FU_shortrifle_o","FU_pistol_o","Throw","Put","Binocular"};
      linkedItems[] = {"V_TacVest_oli","FU_NVG_helm","ItemCompass","ItemMap","ItemGPS","TFAR_fadak","ItemWatch"};
      backpack = "FU_crew_backpack_o"
      };







};


