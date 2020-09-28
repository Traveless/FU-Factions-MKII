class CfgPatches
{
    class FU_faction_MKII_story
    {
           name = "Freelance Union";
           Author = "Bolttrooper";
           units[] = {"FU_story_Noname_b","FU_story_Parkterd_b","FU_story_dwarf_b","FU_story_Lukaz_b","FU_story_beast_b","FU_story_Wezel_b","FU_story_Balti_b","FU_story_Bizo_b",
                      "FU_story_Noname_i","FU_story_Parkterd_i","FU_story_dwarf_i","FU_story_Lukaz_i","FU_story_beast_i","FU_story_Wezel_i","FU_story_Balti_i","FU_story_Bizo_i",
                      "FU_story_Noname_o","FU_story_Parkterd_o","FU_story_dwarf_o","FU_story_Lukaz_o","FU_story_beast_o","FU_story_Wezel_o","FU_story_Balti_o","FU_story_Bizo_o",};
           weapons[] = {};
   };
};
#define mags_5(a) a, a, a, a, a
#define mags_4(a) a, a, a, a
#define mags_2(a) a, a
#define ammo_rifle_b "30Rnd_556x45_Stanag_red"
#define ammo_riflet_b "30Rnd_556x45_Stanag_Tracer_Red"
#define ammo_rifle_o "30Rnd_762x39_AK12_Mag_F"
#define ammo_riflet_o "30Rnd_762x39_AK12_Mag_Tracer_F"
#define ammo_rifle_i "30Rnd_556x45_Stanag_green"
#define ammo_riflet_i "30Rnd_556x45_Stanag_tracer_green"
#define ammo_pis_b "16Rnd_9x21_Mag"
#define ammo_pis_o "16Rnd_9x21_Mag"
#define ammo_pis_i "9Rnd_45ACP_Mag"
class CBA_Extended_EventHandlers_base;
class CBA_Extended_EventHandlers;
class cfgidentities 
{



class Beezo 
{
	face = "WhiteHead_06";
	glasses = "G_Spectacles_Tinted";
	name = "General Beezo";
	nameSound = "Adams";
	pitch = 1.0;
	speaker = "Male01GRE";
};

class BeezoWar
{
	face = "WhiteHead_06";
	glasses = "G_Spectacles_Tinted";
	name = "Warlord Beezo";
	nameSound = "Adams";
	pitch = 1.0;
	speaker = "Male01GRE";
};

class Balti 
{
	face = "WhiteHead_30";
	glasses = "G_Balaclava_TI_tna_F";
	name = "Captain Balti";
	nameSound = "Adams";
	pitch = 1.0;
	speaker = "Male01GRE";
};

class wezel
{
	face = "LivonianHead_1";
	glasses = "G_WirelessEarpiece_F";
	name = "Reporter Wezel";
	nameSound = "Adams";
	pitch = 1.0;
	speaker = "Male01GRE";
};

class beast 
{
	face = "WhiteHead_20";
	glasses = "G_Blindfold_01_black_F";
	name = "Slobodan beest";
	nameSound = "Adams";
	pitch = 1.0;
	speaker = "Male01GRE";
};

class Lukaz
{
	face = "AsianHead_A3_02";
	glasses = "G_Bandanna_beast";
	name = "War Criminal Lukaz";
	nameSound = "Adams";
	pitch = 1.0;
	speaker = "Male01GRE";
};

class Lt_Dworf 
{
	face = "AfricanHead_03";
	glasses = "G_Respirator_white_F";
	name = "Lieutenant Dworf";
	nameSound = "Adams";
	pitch = 1.0;
	speaker = "Male01GRE";
};

class Parkterd
{
	face = "WhiteHead_21";
	glasses = "G_Squares";
	name = "Colonel Porktord";
	nameSound = "Adams";
	pitch = 1.0;
	speaker = "Male01GRE";
};

class NoName
{
	face = "WhiteHead_19";
	glasses = "G_Tactical_Black";
	name = "Nameless Novichok";
	nameSound = "Adams";
	pitch = 1.0;
	speaker = "Male01GRE";
};


};
class cfgweapons 
{
class U_C_Journalist;

class FU_uni_journ : U_C_Journalist
      {
       scope = 1;
       class ItemInfo {
                containerClass = "Supply60";
                mass = 10;
                scope = 0;
                type = 801;
                uniformClass = "FU_story_c";
                uniformModel = "-";
                      };
      };
};
class cfgvehicles
{
class B_Soldier_base_F;
class I_Soldier_base_F;
class O_Soldier_base_F;
class C_journalist_F;



class FU_story_c : C_journalist_F
{
scope = 1
modelSides[] = {0,1,2,3};
};

class FU_story_B : B_Soldier_base_F 
                  {
                  identityTypes[] = {"Head_NATO","LanguageENGB_F","G_NATO_casual"};
                  side = 1;
                  Faction = "FU_Faction_blufor";
                  editorSubcategory = "EdSubcat_Personnel_Story";
                  weapons[] = {"FU_grenaderifle_b","FU_pistol_b","Throw","Put","Rangefinder"};
                  magazines[] = {mags_2(ammo_pis_b),mags_5(ammo_rifle_b),mags_4(ammo_riflet_b),
                     mags_2(HandGrenade),mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
                  linkedItems[] ={"V_BandollierB_rgr","H_Cap_tan_specops_US","ItemCompass","ItemMap","ItemGPS","TFAR_anprc152","ItemWatch"};
                  items[] = {mags_5(ACE_packingBandage),mags_5(ACE_elasticBandage),mags_4(ACE_tourniquet),mags_4(ACE_morphine),mags_4(ACE_epinephrine),
                             mags_2(ACE_CableTie)};
                  };

class FU_story_O : O_Soldier_base_F 
                  {
                  identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Asian","Head_Euro","Head_Enoch"};
                  side = 0;
                  Faction = "FU_Faction_opfor";
                  editorSubcategory = "EdSubcat_Personnel_Story";
                  weapons[] = {"FU_grenaderifle_o","FU_pistol_o","Throw","Put","Rangefinder"};
                  magazines[] = {mags_2(ammo_pis_o),mags_5(ammo_rifle_o),mags_4(ammo_riflet_o),
                     mags_2(HandGrenade),mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
                  linkedItems[] ={"V_BandollierB_khk","H_Cap_brn_SPECOPS","ItemCompass","ItemMap","ItemGPS","TFAR_fadak","ItemWatch"};
                  items[] = {mags_5(ACE_packingBandage),mags_5(ACE_elasticBandage),mags_4(ACE_tourniquet),mags_4(ACE_morphine),mags_4(ACE_epinephrine),
                             mags_2(ACE_CableTie)};
                  };
class FU_story_I : I_Soldier_base_F
                  {
                  side = 2;
                  Faction = "FU_Faction_Indep";
                  editorSubcategory = "EdSubcat_Personnel_Story";
                  weapons[] = {"FU_grenaderifle_i","FU_pistol_i","Throw","Put","Rangefinder"};
                  magazines[] = {mags_2(ammo_pis_i),mags_5(ammo_rifle_i),mags_4(ammo_riflet_i),
                     mags_2(HandGrenade),mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
                  linkedItems[] ={"V_BandollierB_oli","H_Cap_blk_Raven","ItemCompass","ItemMap","ItemGPS","TFAR_anprc148jem","ItemWatch"};
                  items[] = {mags_5(ACE_packingBandage),mags_5(ACE_elasticBandage),mags_4(ACE_tourniquet),mags_4(ACE_morphine),mags_4(ACE_epinephrine),
                             mags_2(ACE_CableTie)};
                  };





class FU_story_Bizo : FU_story_I 
                  {
                  identityTypes[] = {"Beezo"};
                  Scope = 2;
                  DisplayName = "General Beezo";
                  class EventHandlers{init = "(_this select 0) setIdentity ""Beezo""";
                                      class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers{};
                                      };
                  };

class FU_story_Balti : FU_story_i
                  {
                  identityTypes[] = {"Balti"};
                  Scope = 2;
                  DisplayName = "Captain Balti";
                  class EventHandlers{init = "(_this select 0) setIdentity ""Balti""";
                                     class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base{};
                                      };
                  };

class FU_story_Wezel_i : FU_story_I 
                  {
                  identityTypes[] = {"wezel"};
                  Scope = 2;
                  DisplayName = "Reporter Wezel";
                  weapons[] = {"FU_pistol_i","Throw","Put","Rangefinder"};
                  magazines[] = {mags_2(ammo_pis_i),mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
                  linkedItems[] ={"V_Press_F","H_Cap_press","ItemCompass","ItemMap","ItemGPS","TFAR_anprc148jem","ItemWatch","G_Spectacles_Tinted"};
                  uniformClass = "FU_uni_journ";
                  class EventHandlers{init = "(_this select 0) setIdentity ""wezel""";
                                     class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base{};
                                      };
                  };

class FU_story_beast : FU_story_i
                  {
                  identityTypes[] = {"beast"};
                  Scope = 2;
                  DisplayName = "Slobodan beest";
                  class EventHandlers{init = "(_this select 0) setIdentity ""beast""";
                                      class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers{};
                                      };
                  };
class FU_story_Lukaz : FU_story_i
                  {
                  identityTypes[] = {"Lukaz"};
                  Scope = 2;
                  DisplayName = "War Criminal Lukaz";
                  class EventHandlers{init = "(_this select 0) setIdentity ""Lukaz""";
                                      class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers{};
                                      };
                  };
class FU_story_dwarf : FU_story_i
                  {
                  identityTypes[] = {"Lt_Dworf"};
                  Scope = 2;
                  DisplayName = "Lieutenant Dworf";
                  class EventHandlers{init = "(_this select 0) setIdentity ""Lt_Dworf""";
                                      class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers{};
                                      };
                  };
class FU_story_Parkterd : FU_story_i
                  {
                  identityTypes[] = {"Parkterd"};
                  Scope = 2;
                  DisplayName = "Colonel Parkterd";
                  class EventHandlers{init = "(_this select 0) setIdentity ""Parkterd""";
                                      class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers{};
                                      };
                  };

class FU_story_Noname : FU_story_i
                  {
                  identityTypes[] = {"NoName"};
                  Scope = 2;
                  DisplayName = "Nameless Novichok";
                  class EventHandlers{init = "(_this select 0) setIdentity ""NoName""";
                                      class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers{};
                                      };
                  };

class FU_story_Bizo_o : FU_story_o
                  {
                  identityTypes[] = {"Beezo"};
                  Scope = 2;
                  DisplayName = "Warlord Beezo";
                  class EventHandlers{init = "(_this select 0) setIdentity ""Beezo""";
                                      class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers{};
                                      };
                  };

class FU_story_Balti_o : FU_story_o
                  {
                  identityTypes[] = {"Balti"};
                  Scope = 2;
                  DisplayName = "Captain Balti";
                  class EventHandlers{init = "(_this select 0) setIdentity ""Balti""";
                                      class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers{};
                                      };
                  };

class FU_story_Wezel_o : FU_story_o 
                  {
                  identityTypes[] = {"wezel"};
                  Scope = 2;
                  DisplayName = "Reporter Wezel";
                  weapons[] = {"FU_pistol_o","Throw","Put","Rangefinder"};
                  linkedItems[] ={"V_Press_F","H_Cap_press","ItemCompass","ItemMap","ItemGPS","TFAR_anprc148jem","ItemWatch","G_Spectacles_Tinted"};
                  uniformClass = "FU_uni_journ";
                  magazines[] = {mags_2(ammo_pis_o),mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
                  class EventHandlers{init = "(_this select 0) setIdentity ""wezel""";
                                      class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers{};
                                      };
                  };

class FU_story_beast_o : FU_story_o
                  {
                  identityTypes[] = {"beast"};
                  Scope = 2;
                  DisplayName = "Slobodan beest";
                  class EventHandlers{init = "(_this select 0) setIdentity ""beast""";
                                      class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers{};
                                      };
                  };
class FU_story_Lukaz_o : FU_story_o
                  {
                  identityTypes[] = {"Lukaz"};
                  Scope = 2;
                  DisplayName = "War Criminal Lukaz";
                  class EventHandlers{init = "(_this select 0) setIdentity ""Lukaz""";
                                      class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers{};
                                      };
                  };
class FU_story_dwarf_o : FU_story_o
                  {
                  identityTypes[] = {"Lt_Dworf"};
                  Scope = 2;
                  DisplayName = "Lieutenant Dworf";
                  class EventHandlers{init = "(_this select 0) setIdentity ""Lt_Dworf""";
                                      class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers{};
                                      };
                  };
class FU_story_Parkterd_o : FU_story_o
                  {
                  identityTypes[] = {"Parkterd"};
                  Scope = 2;
                  DisplayName = "Colonel Parkterd";
                  class EventHandlers{init = "(_this select 0) setIdentity ""Parkterd""";
                                      class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers{};
                                      };
                  };

class FU_story_Noname_o : FU_story_o
                  {
                  identityTypes[] = {"NoName"};
                  Scope = 2;
                  DisplayName = "Nameless Novichok";
                  class EventHandlers{init = "(_this select 0) setIdentity ""NoName""";
                                      class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers{};
                                      };
                  };

class FU_story_Bizo_b : FU_story_b
                  {
                  identityTypes[] = {"Beezo"};
                  Scope = 2;
                  DisplayName = "General Beezo";
                  class EventHandlers{init = "(_this select 0) setIdentity ""Beezo""";
                                      class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers{};
                                      };
                  };

class FU_story_Balti_b : FU_story_b
                  {
                  identityTypes[] = {"Balti"};
                  Scope = 2;
                  DisplayName = "Captain Balti";
                  class EventHandlers{init = "(_this select 0) setIdentity ""Balti""";
                                      class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers{};
                                      };
                  };

class FU_story_Wezel_b : FU_story_b 
                  {
                  identityTypes[] = {"wezel"};
                  Scope = 2;
                  DisplayName = "Reporter Wezel";
                  weapons[] = {"FU_pistol_b","Throw","Put","Rangefinder"};
                  magazines[] = {mags_2(ammo_pis_b),mags_2(SmokeShell),mags_2(ACE_Chemlight_UltraHiOrange)};
                  linkedItems[] ={"V_Press_F","H_Cap_press","ItemCompass","ItemMap","ItemGPS","TFAR_anprc148jem","ItemWatch","G_Spectacles_Tinted"};
                  uniformClass = "FU_uni_journ";
                  class EventHandlers{init = "(_this select 0) setIdentity ""wezel""";
                                      class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers{};
                                      };
                  };

class FU_story_beast_b : FU_story_b
                  {
                  identityTypes[] = {"beast"};
                  Scope = 2;
                  DisplayName = "Slobodan beest";
                  class EventHandlers{init = "(_this select 0) setIdentity ""beast""";
                                      class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers{};
                                      };
                  };
class FU_story_Lukaz_b : FU_story_b
                  {
                  identityTypes[] = {"Lukaz"};
                  Scope = 2;
                  DisplayName = "War Criminal Lukaz";
                  class EventHandlers{init = "(_this select 0) setIdentity ""Lukaz""";
                                      class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers{};
                                      };
                  };
class FU_story_dwarf_b : FU_story_b
                  {
                  identityTypes[] = {"Lt_Dworf"};
                  Scope = 2;
                  DisplayName = "Lieutenant Dworf";
                  class EventHandlers{init = "(_this select 0) setIdentity ""Lt_Dworf""";
                                      class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers{};
                                      };
                  };
class FU_story_Parkterd_b : FU_story_b
                  {
                  identityTypes[] = {"Parkterd"};
                  Scope = 2;
                  DisplayName = "Colonel Parkterd";
                  class EventHandlers{init = "(_this select 0) setIdentity ""Parkterd""";
                                      class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers{};
                                      };
                  };

class FU_story_Noname_b : FU_story_b
                  {
                  identityTypes[] = {"NoName"};
                  Scope = 2;
                  DisplayName = "Nameless Novichok";
                  class EventHandlers{init = "(_this select 0) setIdentity ""NoName""";
                                      class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers{};
                                      };
                  };


};



