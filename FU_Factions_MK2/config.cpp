class CfgPatches
{
    class FU_faction_MKII
    {
           name = "Freelance Union";
           Author = "Bolttrooper";
           units[] = {};
           weapons[] = {};
   };
};
class CfgFunctions
{
	class FU_faction
	{
		class FU_Category
		{ 
                 class FU_Function
			{tag = "FU scripts";
                        requiredAddons[] = {"FU_faction_MKII"};
			postInit = 1;
                        recompile = 1;
                        file = "\FU_Factions_MK2\data\FU_Brief.sqf";
                      };
                  class FU_Spectrum
			{tag = "FU scripts";
                        requiredAddons[] = {"FU_faction_MKII"};
			postInit = 1;
                        recompile = 1;
                        file = "\FU_Factions_MK2\data\Spectrum.sqf";
                      };
                  class FU_Zeus
			{tag = "FU scripts";
                        requiredAddons[] = {"FU_faction_MKII"};
			postInit = 1;
                        recompile = 1;
                        file = "\FU_Factions_MK2\data\CustomZeus.sqf";
                      };
                  class FU_flag
			{tag = "FU scripts";
                        requiredAddons[] = {"FU_faction_MKII"};
			postInit = 1;
                        recompile = 1;
                        file = "\FU_Factions_MK2\data\FlagScript.sqf";
                      };
		};
	};
};

class CfgFactionClasses
{
    class FU_Faction_blufor
    {
        displayName = "Freelancers Union";
        Priority = 6; 
        side = 1; 
    };
    class FU_Faction_Opfor
    {
        displayName = "Freelancers Union";
        Priority = 6; 
        side = 0; 
    };
    class FU_Faction_Indep
    {
        displayName = "Freelancers Union";
        Priority = 6; 
        side = 2; 
    };
}; 


class CfgVehicles 
{
#define mags_5(a) a, a, a, a, a
#define mags_4(a) a, a, a, a
#define mags_2(a) a, a

class B_Soldier_base_F;
class I_Soldier_base_F;
class O_Soldier_base_F;
class b_soldier_survival_F;
class O_ghillie_base_F;

class B_Kitbag_Base;
class TFAR_rt1523g_sage;
class TFAR_mr3000;
class B_Carryall_Base;

class FU_base_B : B_Soldier_base_F 
                  {
                  identityTypes[] = {"Head_NATO","LanguageENGB_F","G_NATO_casual"};
                  side = 1;
                  Faction = "FU_Faction_blufor";
                  uniformClass = "FU_uni_win";
                  items[] = {mags_5(ACE_packingBandage),mags_5(ACE_elasticBandage),mags_4(ACE_tourniquet),mags_4(ACE_morphine),mags_4(ACE_epinephrine),
                             mags_2(ACE_CableTie),"ACE_RangeCard","ACE_MapTools","ACE_Flashlight_XL50","ACE_EntrenchingTool"};
                  backpack = "FU_kitbag_W";
                  };

class FU_base_O : O_Soldier_base_F 
                  {
                  identityTypes[] = {"LanguageRUS_F","Head_Russian","Head_Asian","Head_Euro","Head_Enoch"};
                  side = 0;
                  Faction = "FU_Faction_opfor";
                  uniformClass = "FU_uni_bdu";
                  items[] = {mags_5(ACE_packingBandage),mags_5(ACE_elasticBandage),mags_4(ACE_tourniquet),mags_4(ACE_morphine),mags_4(ACE_epinephrine),
                             mags_2(ACE_CableTie),"ACE_RangeCard","ACE_MapTools","ACE_Flashlight_XL50","ACE_EntrenchingTool"};
                  backpack = "FU_kitbag_black";
                  };
class FU_base_I : I_Soldier_base_F 
                  {
                  identityTypes[] = {"LanguageGRE_F","Head_Greek","G_GUERIL_default"};
                  side = 2;
                  Faction = "FU_Faction_Indep";
                  uniformClass = "FU_uni_biz";
                  items[] = {mags_5(ACE_packingBandage),mags_5(ACE_elasticBandage),mags_4(ACE_tourniquet),mags_4(ACE_morphine),mags_4(ACE_epinephrine),
                             mags_2(ACE_CableTie),"ACE_RangeCard","ACE_MapTools","ACE_Flashlight_XL50","ACE_EntrenchingTool"};
                  backpack = "FU_kitbag_biz";
                  };
class FU_Uni_guile : B_Soldier_base_F
{
         displayname = "Z-Trooper (UN)";
         scope = 1;
         modelSides[] = {0,1,2,3};
         uniformClass = "FU_Uni_guile";
         hiddenSelections[] = {"camo"};
         hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_uni_guile.paa"};
}; 
class FU_Uni_jungle : B_Soldier_base_F
{
         displayname = "FU jungle";
         scope = 1;
         uniformClass = "FU_Uni_jungle";
         hiddenSelections[] = {"camo"};
         hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_uni_jungle.paa"};
}; 
class FU_Uni_bison : I_Soldier_base_F
{
         displayname = "Z-Trooper (Bison)";
         scope = 1;
         Faction = "FU_Faction_Opfor";
         modelSides[] = {0,3};
         uniformClass = "FU_Uni_bison";
         hiddenSelections[] = {"Camo"};
         hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_uni_bison.paa"};
         model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
};

class FU_Uni_navy : b_soldier_survival_F
{
         displayname = "FU Survival Fatigues (Navy)";
         scope = 1;
         uniformClass = "FU_Uni_navy";
         hiddenSelections[] = {"camo"};
         hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_uni_navy.paa"};
         model = "\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
}; 

class FU_Uni_black : B_Soldier_base_F
{
         displayname = "FU Coveralls (Black)";
         scope = 1;
         modelSides[] = {0,1,2,3};
         uniformClass = "FU_Uni_black";
         hiddenSelections[] = {"camo"};
         hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_uni_black.paa"};
         model = "\A3\characters_F\common\coveralls";
}; 

class FU_Uni_win : B_Soldier_base_F
{
         displayname = "FU Uniform (Winter)";
         scope = 1;
         uniformClass = "FU_Uni_win";
         hiddenSelections[] = {"camo"};
         hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_uni_winter.paa"};
}; 
class FU_Uni_biz : I_Soldier_base_F
{
         displayname = "FU Uniform indep (biz)";
         scope = 1;
         Faction = "FU_Faction_indep";
         uniformClass = "FU_Uni_biz";
         hiddenSelections[] = {"Camo"};
         hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_uni_biz.paa"};
}; 
class FU_Uni_navy_2 : B_Soldier_base_F
{
         displayname = "FU Uniform (Navy)";
         scope = 1;
         Faction = "FU_Faction_indep";
         uniformClass = "FU_Uni_navy_2";
         hiddenSelections[] = {"Camo"};
         hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_uni_navy.paa"};
}; 
class FU_Uni_bdu : O_Soldier_base_F
{
         displayname = "FU Uniform opfor (BDU)";
         scope = 1;
         Faction = "FU_Faction_Opfor";
         uniformClass = "FU_Uni_bdu";
         hiddenSelections[] = {"Camo1","Camo2"};
         hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_uni_bdu.paa","\FU_Factions_MK2\data\FU_tech_bdu.paa"};
};
class FU_Uni_nor : B_Soldier_base_F
{
         displayname = "FU Uniform (Norway)";
         scope = 1;
         modelSides[] = {0,1,2,3};
         uniformClass = "FU_Uni_nor";
         hiddenSelections[] = {"camo"};
         hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_uni_nor.paa"};
         model = "\A3\characters_F\OPFOR\o_officer_noinsignia_f.p3d";
}; 
class FU_Uni_Swe : I_Soldier_base_F
{
         displayname = "FU Uniform indep (Swe)";
         scope = 1;
         Faction = "FU_Faction_indep";
         uniformClass = "FU_Uni_swe";
         hiddenSelections[] = {"Camo"};
         hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_uni_swe.paa"};
}; 
class FU_Uni_bel : O_Soldier_base_F
{
         displayname = "FU Uniform opfor (bel)";
         scope = 1;
         Faction = "FU_Faction_Opfor";
         uniformClass = "FU_Uni_bel";
         hiddenSelections[] = {"Camo1","Camo2"};
         hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_uni_bel.paa","\FU_Factions_MK2\data\FU_tech_bel.paa"};
};
class FU_Uni_o_p_blk : O_Soldier_base_F
{
         displayname = "FU Uniform opfor (blk)";
         scope = 1;
         Faction = "FU_Faction_Opfor";
         uniformClass = "FU_Uni_o_p_blk";
         hiddenSelections[] = {"Camo1","Camo2"};
         hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_uni_o_p_blk.paa","\FU_Factions_MK2\data\FU_tech_blk.paa"};
};

class FU_Uni_b_black : B_Soldier_base_F
{
         displayname = "FU Uniform (Black)";
         scope = 1;
         uniformClass = "FU_Uni_b_black";
         hiddenSelections[] = {"camo"};
         hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_uni_b_black.paa"};
}; 









class FU_Medic_backpack : B_Kitbag_Base 
      {
        displayname = "FU Kitbag";
	scope = 1;
	class TransportItems {

class _fu_qband {name = "ACE_quikclot"; count = 15;};
class _fu_Eband {name = "ACE_elasticBandage";count = 50;};
class _fu_fband {name = "ACE_fieldDressing";count = 15;};
class _fu_pband {name = "ACE_packingbandage";count = 15;};
class _fu_epi {name = "ACE_epinephrine";count = 20;};
class _fu_morph {name = "ACE_morphine";count = 10;};
class _fu_torq {name = "ACE_tourniquet";count = 10;};
class _fu_blood {name = "ACE_BloodIV";count = 2;};
class _fu_blood5 {name = "ACE_BloodIV_500";count = 6;};
class _fu_blood2 {name = "ACE_BloodIV_250";count = 3;};
class _fu_smoke {name = "SmokeShell";count = 4;};
class _fu_splint {name = "ACE_splint";count = 20;};
class _fu_sugkit {name = "ACE_surgicalKit";count = 1;};
	                     };
      };
class FU_Crew_backpack : TFAR_mr3000 
      {
	scope = 1;
	class TransportItems {

class _fu_tool {name = "ToolKit"; count = 1;};
class _fu_detect1 {name = "MineDetector";count = 1;};
class _fu_smoke {name = "SmokeShell";count = 5;};

	};
};

class B_carryall_base_fu : B_carryall_base 
{
displayname = "FU Carryall";
};
class B_kitbag_base_fu : B_kitbag_base
{
displayname = "FU kitbag";
};



class FU_kitbag_UN : B_Kitbag_Base
{       displayName = "FU Kitbag (Blue)";
        scope = 2;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_kitbag_un.paa"};
};
class FU_kitbag_black : B_Kitbag_Base
{       displayName = "FU Kitbag (Black)";
        scope = 2;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_blk_co.paa"};
};
class FU_kitbag_W : B_Kitbag_Base
{       displayName = "FU Kitbag (Winter)";
        scope = 2;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_kitbag_winter.paa"};
};
class FU_kitbag_biz : B_Kitbag_Base
{       displayName = "FU Kitbag (Biz)";
        scope = 2;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_kitbag_biz.paa"};
};
class FU_kitbag_nor : B_Kitbag_Base
{       displayName = "FU Kitbag (Nor)";
        scope = 2;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_kitbag_nor.paa"};
};
class FU_kitbag_Swe : B_Kitbag_Base
{       displayName = "FU Kitbag (Swe)";
        scope = 2;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_kitbag_Swe.paa"};
};

class FU_radio_big : TFAR_rt1523g_sage 
       {
	displayName = "FU rt1523g (Winter)";
        scope = 2;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_bigradio_winter.paa"};
       };
class FU_radio_big_jun : TFAR_rt1523g_sage 
       {
	displayName = "FU rt1523g (Jungle)";
        scope = 2;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_bigradio_jungle.paa"};
       };
class FU_Carryall_Winter : B_Carryall_Base
{       displayName = "FU Carryall (Winter)";
        scope = 2;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_carryall_winter.paa"};
};

class FU_literadio_W : TFAR_mr3000
{       displayName = "FU mr3000 (Winter)";
        scope = 2;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_radio_winter.paa"};
};
class FU_literadio_biz : TFAR_mr3000
{       displayName = "FU mr3000 (Biz)";
        scope = 2;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_radio_biz.paa"};
};
class FU_literadio_bdu : TFAR_mr3000
{       displayName = "FU mr3000 (Black)";
        scope = 2;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_radio_bdu.paa"};
};
class FU_Carryall_Jungle : B_Carryall_Base
{       displayName = "FU Carryall (Jungle)";
        scope = 2;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_carryall_jungle.paa"};
};
class FU_kitbag_J : B_Kitbag_Base
{       displayName = "FU Kitbag (Jungle)";
        scope = 2;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_kitbag_Jungle.paa"};
};
class FU_literadio_J : TFAR_mr3000
{       displayName = "FU mr3000 (Jungle)";
        scope = 2;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_radio_Jungle.paa"};
};
class FU_literadio_nor : TFAR_mr3000
{       displayName = "FU mr3000 (Nor)";
        scope = 2;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_radio_nor.paa"};
};
class FU_literadio_swe : TFAR_mr3000
{       displayName = "FU mr3000 (Swe)";
        scope = 2;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_radio_swe.paa"};
};



};
class cfgWeapons
{
    class UniformItem;
    class U_O_CombatUniform_ocamo;
    class vestitem;
    class itemcore;
    class U_B_survival_uniform;
    class U_O_FullGhillie_sard;
    class uniform_base : itemcore {class iteminfo;}; 
    class vest_base : itemcore {class iteminfo;};
    class H_Helmetb : itemcore {class iteminfo;};
    class H_HelmetO_ocamo;
    class V_PlateCarrierIAGL_oli;
    class V_Press_F;
    class FU_Uni_win : uniform_base
    {
        author = "Bolty";
        scope = 2;
        displayName = "FU Combat Fatigues [Winter]";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_uni_winter.paa"};
        picture = "\FU_Factions_MK2\data\ui\FU_uniform_icon.paa";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "FU_Uni_win";
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class FU_Uni_jungle : uniform_base
    {
        author = "Bolty";
        scope = 2;
        displayName = "FU Combat Fatigues [Jungle]";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_uni_jungle.paa"};
        picture = "\FU_Factions_MK2\data\ui\FU_uniform_a_icon.paa";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "FU_Uni_jungle";
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class FU_Uni_b_black : uniform_base
    {
        author = "Bolty";
        scope = 2;
        displayName = "FU Combat Fatigues [Black]";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_uni_b_black.paa"};
        picture = "\FU_Factions_MK2\data\ui\FU_uni_black_icon.paa";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "FU_Uni_b_black";
            containerClass = "Supply40";
            mass = 40;
        };
    };


    class FU_Uni_biz : uniform_base
    {
        author = "Bolty";
        scope = 2;
        displayName = "FU Combat Fatigues [Biz]";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_uni_biz.paa"};
        picture = "\A3\characters_f_beta\data\ui\icon_U_IR_CrewUniform_rucamo_ca.paa";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "FU_Uni_biz";
            containerClass = "Supply40";
            mass = 40;
        };
    };


     class FU_Uni_bdu : uniform_base
    {
        author = "Bolty";
        scope = 2;
        displayName = "FU Fatigues [BDU]";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_Uni_bdu.paa"};
        picture = "\FU_Factions_MK2\data\ui\FU_uni_bdu_icon.paa";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "FU_Uni_bdu";
            containerClass = "Supply40";
            mass = 80;
        };
    };

    class FU_Uni_navy : U_B_survival_uniform
    {
        author = "Bolty";
        scope = 2;
        displayName = "FU Survival Fatigues [Navy]";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"a3\characters_f\common\data\diver_suit_nato_co.paa"};
        picture = "\FU_Factions_MK2\data\ui\FU_uni_navy_s_icon.paa";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "FU_Uni_navy";
            containerClass = "Supply40";
            mass = 60;
            uniformType = "Neopren";
        };
    };
class FU_Uni_navy_2 : uniform_base
    {
        author = "Bolty";
        scope = 2;
        displayName = "FU Combat Fatigues [Navy]";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_uni_navy.paa"};
        picture = "\FU_Factions_MK2\data\ui\FU_uni_navy_icon.paa";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "FU_Uni_navy_2";
            containerClass = "Supply40";
            mass = 40;
        };
    };

class FU_Uni_black : uniform_base
    {
        author = "Bolty";
        scope = 2;
        displayName = "FU Coveralls [Black]";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_uni_black.paa"};
        picture = "\FU_Factions_MK2\data\ui\FU_uni_black_icon.paa";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "FU_Uni_black";
            containerClass = "Supply40";
            mass = 60;
        };
    };

class FU_Uni_bison : uniform_base
    {
        author = "Bolty";
        scope = 2;
        displayName = "FU Combat Fatigues [BISON]";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_uni_bison.paa"};
        picture = "\FU_Factions_MK2\data\ui\FU_uniform_bis_icon.paa";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "FU_Uni_bison";
            containerClass = "Supply40";
            mass = 40;
        };
    };

    class FU_Uni_guile : U_B_survival_uniform
    {
        author = "Bolty";
        scope = 2;
        displayName = "FU Combat Fatigues [UN]";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_uni_guile.paa"};
        picture = "\FU_Factions_MK2\data\ui\FU_uniform_un_icon.paa";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "FU_Uni_guile";
            containerClass = "Supply40";
            mass = 60;
        };
    };
    class FU_Uni_nor : uniform_base
    {
        author = "Bolty";
        scope = 2;
        displayName = "FU Combat Fatigues [Nor]";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_uni_nor.paa"};
        picture = "\FU_Factions_MK2\data\ui\FU_uniform_nor_icon.paa";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "FU_Uni_nor";
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class FU_Uni_swe : uniform_base
    {
        author = "Bolty";
        scope = 2;
        displayName = "FU Combat Fatigues [Swe]";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_uni_Swe.paa"};
        picture = "\A3\characters_f_beta\data\ui\icon_U_IR_CrewUniform_rucamo_ca.paa";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "FU_Uni_Swe";
            containerClass = "Supply40";
            mass = 40;
        };
    };
     class FU_Uni_bel : uniform_base
    {
        author = "Bolty";
        scope = 2;
        displayName = "FU Fatigues [Bel]";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_Uni_bel.paa"};
        picture = "\FU_Factions_MK2\data\ui\FU_uni_bel_icon.paa";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "FU_Uni_bel";
            containerClass = "Supply40";
            mass = 80;
        };
    };
     class FU_Uni_o_p_blk : uniform_base
    {
        author = "Bolty";
        scope = 2;
        displayName = "FU Layered Armour [Black]";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_Uni_o_p_blk.paa"};
        picture = "\FU_Factions_MK2\data\ui\FU_Uni_o_p_blk_icon.paa";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "FU_Uni_o_p_blk";
            containerClass = "Supply40";
            mass = 80;
        };
    };



class FU_Vest_rig_i: vest_base
    {
        scope = 2;
        displayName = "FU Carrier Lite (Biz)";
        author = "Bolty";
        picture = "\A3\characters_f_Beta\Data\UI\icon_V_I_Vest_01_ca.paa";
        model = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_vest_biz.paa"};
        class Iteminfo : vestitem 
        {
            uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
            containerClass = "Supply130";
            mass = 60;
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class Body
                {
                     hitPointName = "HitBody";
                     armor = 0;
                     passThrough = 0.3;
                };
                class Abdomen
                {
                     hitpointName = "HitAbdomen";
                     armor = 17;
                     passThrough = 0.3;
                };
                class Chest
                {
                     HitpointName = "HitChest";
                     armor = 17;
                     passThrough = 0.3;
                };
                class Diaphragm
                {
                     HitpointName = "HitDiaphragm";
                     armor = 17;
                     passThrough = 0.3;
                };
            };
        };
        
    };

class FU_Vest_rig_ib: vest_base
    {
        scope = 2;
        displayName = "FU Carrier Rig (Biz)";
        author = "Bolty";
        picture = "\A3\characters_f_Beta\Data\UI\icon_V_I_Vest_01_ca.paa";
        model = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_vest_biz.paa"};
        class Iteminfo : vestitem 
        {
            uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
            containerClass = "Supply130";
            mass = 80;
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class Body
                {
                     hitPointName = "HitBody";
                     armor = 0;
                     passThrough = 0.3;
                };
                class Abdomen
                {
                     hitpointName = "HitAbdomen";
                     armor = 17;
                     passThrough = 0.3;
                };
                class Chest
                {
                     HitpointName = "HitChest";
                     armor = 17;
                     passThrough = 0.3;
                };
                class Diaphragm
                {
                     HitpointName = "HitDiaphragm";
                     armor = 17;
                     passThrough = 0.3;
                };
                class Pelvis
                {
                     HitpointName = "HitPelvis";
                     armor = 17;
                     passThrough = 0.3;
                };
            };
        };
        
    };




    class FU_Vest_rig: vest_base
    {
        scope = 2;
        displayName = "FU Carrier Rig (Winter)";
        author = "Bolty";
        picture = "\FU_Factions_MK2\data\ui\FU_vest_icon.paa";
        model = "A3\Characters_f\BLUFOR\equip_b_vest01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_vestnologo_winter.paa"};
        class Iteminfo : vestitem 
        {
            uniformmodel = "A3\Characters_f\BLUFOR\equip_b_vest01.p3d";
            containerClass = "Supply140";
            mass = 100;
            armor = "20";
            passThrough = 0.3;
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class Body
                {
                     hitPointName = "HitBody";
                     armor = 0;
                     passThrough = 0.2;
                };
                class Abdomen
                {
                     hitpointName = "HitAbdomen";
                     armor = 20;
                     passThrough = 0.2;
                };
                class Chest
                {
                     HitpointName = "HitChest";
                     armor = 20;
                     passThrough = 0.2;
                };
                class Diaphragm
                {
                     HitpointName = "HitDiaphragm";
                     armor = 20;
                     passThrough = 0.2;
                };
            };
        };
        
    };
    class FU_Vest_lite: vest_base
    {
        scope = 2;
        displayName = "FU Carrier Lite (Winter)";
        author = "Bolty";
        picture = "\FU_Factions_MK2\data\ui\FU_vest_icon.paa";
        model = "A3\Characters_f\BLUFOR\equip_b_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_vestnologo_winter.paa"};
        class Iteminfo : vestitem 
        {
            uniformmodel = "A3\Characters_f\BLUFOR\equip_b_vest02";
            containerClass = "Supply140";
            mass = 80;
            armor = "16";
            passThrough = 0.3;
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class Body
                {
                     hitPointName = "HitBody";
                     armor = 0;
                     passThrough = 0.3;
                };
                class Abdomen
                {
                     hitpointName = "HitAbdomen";
                     armor = 16;
                     passThrough = 0.3;
                };
                class Chest
                {
                     HitpointName = "HitChest";
                     armor = 16;
                     passThrough = 0.3;
                };
                class Diaphragm
                {
                     HitpointName = "HitDiaphragm";
                     armor = 16;
                     passThrough = 0.3;
                };
            };
        };
        
    };

    class FU_Vest_litex: vest_base
    {
        scope = 2;
        displayName = "FU Carrier Freelancer (Winter)";
        author = "Bolty";
        picture = "\FU_Factions_MK2\data\ui\FU_vest_icon.paa";
        model = "A3\Characters_f_EPA\BLUFOR\equip_b_vest_kerry";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_vest_winter.paa"};
        class Iteminfo : vestitem 
        {
            uniformmodel = "A3\Characters_f_EPA\BLUFOR\equip_b_vest_kerry";
            containerClass = "Supply130";
            mass = 70;
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class Body
                {
                     hitPointName = "HitBody";
                     armor = 0;
                     passThrough = 0.2;
                };
                class Abdomen
                {
                     hitpointName = "HitAbdomen";
                     armor = 22;
                     passThrough = 0.2;
                };
                class Chest
                {
                     HitpointName = "HitChest";
                     armor = 22;
                     passThrough = 0.2;
                };
                class Diaphragm
                {
                     HitpointName = "HitDiaphragm";
                     armor = 22;
                     passThrough = 0.2;
                };
            };
         };
     };
     class FU_Vest_Spec: vest_base
    {
        scope = 2;
        displayName = "FU Carrier Special Rig (Winter)";
        author = "Bolty";
        picture = "\FU_Factions_MK2\data\ui\FU_cvest_icon.paa";
        model = "\A3\Characters_F\BLUFOR\equip_b_carrier_spec_rig.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_carrierbullet_winter.paa"};
        class Iteminfo : vestitem 
        {
            uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_carrier_spec_rig.p3d";
            containerClass = "Supply110";
            mass = 120;
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class Body
                {
                     hitPointName = "HitBody";
                     armor = 0;
                     passThrough = 0.1;
                };
                class Abdomen
                {
                     hitpointName = "HitAbdomen";
                     armor = 24;
                     passThrough = 0.1;
                };
                class Chest
                {
                     HitpointName = "HitChest";
                     armor = 24;
                     passThrough = 0.1;
                };
                class Diaphragm
                {
                     HitpointName = "HitDiaphragm";
                     armor = 24;
                     passThrough = 0.1;
                };
                class Arms
                {
                     HitpointName = "HitArms";
                     armor = 8;
                     passThrough = 0.5;
                };
                class Neck
                {
                     HitpointName = "HitNeck";
                     armor = 8;
                     passThrough = 0.5;
                };
            };
         };
     };
     class FU_Vest_Explo: vest_base
    {
        scope = 2;
        displayName = "FU Carrier Explosives Rig (Winter)";
        author = "Bolty";
        picture = "\FU_Factions_MK2\data\ui\FU_cvest_icon.paa";
        model = "\A3\Characters_F\BLUFOR\equip_b_carrier_gl_rig.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_carrierbullet_winter.paa"};
        class Iteminfo : vestitem 
        {
            uniformmodel = "\A3\Characters_F\BLUFOR\equip_b_carrier_spec_rig.p3d";
            containerClass = "Supply130";
            mass = 100;
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class Body
                {
                     hitPointName = "HitBody";
                     armor = 0;
                     passThrough = 0.6;
                };
                class Abdomen
                {
                     hitpointName = "HitAbdomen";
                     armor = 16;
                     passThrough = 0.3;
                };
                class Chest
                {
                     HitpointName = "HitChest";
                     armor = 78;
                     passThrough = 0.6;
                };
                class Diaphragm
                {
                     HitpointName = "HitDiaphragm";
                     armor = 78;
                     passThrough = 0.6;
                };
                class Arms
                {
                     HitpointName = "HitArms";
                     armor = 8;
                     passThrough = 0.5;
                };
                class Neck
                {
                     HitpointName = "HitNeck";
                     armor = 8;
                     passThrough = 0.5;
                };
             };
          };
       };

class FU_Vest_Explo_jungle: FU_Vest_Explo
    {
        scope = 2;
        displayName = "FU Carrier Explosives Rig (Jungle)";
        author = "Bolty";
        picture = "\FU_Factions_MK2\data\ui\FU_cvest_a_icon.paa";
     hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_carrier_jungle.paa"};
     };
class FU_Vest_Spec_jungle: FU_Vest_Spec
    {   scope = 2;
        displayName = "FU Carrier Special Rig (Jungle)";
        author = "Bolty";
        picture = "\FU_Factions_MK2\data\ui\FU_cvest_a_icon.paa";
     hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_carrier_jungle.paa"};
     };
class FU_Vest_Explo_Khaki: FU_Vest_Explo
    {
        scope = 2;
        displayName = "FU Carrier Explosives Rig (Khaki)";
        author = "Bolty";
        picture = "\FU_Factions_MK2\data\ui\FU_cvest_kha_icon.paa";
     hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_carrier_kha.paa"};
     };
class FU_Vest_Spec_Khaki: FU_Vest_Spec
    {   scope = 2;
        displayName = "FU Carrier Special Rig (Khaki)";
        author = "Bolty";
        picture = "\FU_Factions_MK2\data\ui\FU_cvest_kha_icon.paa";
     hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_carrier_kha.paa"};
     };
class FU_Vest_rig_jungle: FU_Vest_rig
    {
        scope = 2;
        displayName = "FU Carrier Rig (Jungle)";
        author = "Bolty";
        picture = "\FU_Factions_MK2\data\ui\FU_vest_a_icon.paa";
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_vest_jungle.paa"};    
    };

    class FU_Vest_lite_jungle : FU_Vest_lite
    {
        scope = 2;
        displayName = "FU Carrier Lite (Jungle)";
        author = "Bolty";
        picture = "\FU_Factions_MK2\data\ui\FU_vest_a_icon.paa";
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_vest_jungle.paa"};
    };

    class FU_Helm_win : H_Helmetb
    {
        scope = 2;
        displayName = "FU Combat Helmet (Winter)";
        author = "Bolty";
        picture = "\FU_Factions_MK2\data\ui\FU_Helm_combat_icon.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_equip_winter.paa"};
        class Iteminfo : ItemInfo 
        {
            uniformmodel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
            allowedSlots[] = {901,605};
            mass = 30;
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo"};
              class Head
                {
                     HitpointName = "HitHead";
                     armor = 10;
                     passThrough = 0.4;
                };
          };
     };
    class FU_Helm_Enhanced : H_Helmetb
    {
        scope = 2;
        displayName = "FU Enhanced Combat Helmet (Winter)";
        author = "Bolty";
        picture = "\FU_Factions_MK2\data\ui\FU_Helm_enhanced_icon.paa";
        model = "A3\Characters_f\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_equip_winter.paa"};
        class Iteminfo : ItemInfo 
        {
            uniformmodel = "A3\Characters_f\BLUFOR\headgear_b_helmet_ballistic";
            allowedSlots[] = {901,605};
            mass = 50;
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo"};
              class Head
                {
                     HitpointName = "HitHead";
                     armor = 10;
                     passThrough = 0.4;
                };
          };
     };
     class FU_Helm_Light : H_Helmetb
    {
        scope = 2;
        displayName = "FU Light Combat Helmet (Winter)";
        author = "Bolty";
        picture = "\FU_Factions_MK2\data\ui\FU_Helm_light_icon.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_equip_winter.paa"};
        class Iteminfo : ItemInfo 
        {
            uniformmodel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
            allowedSlots[] = {901,605};
            mass = 20;
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo"};
                class Head
                {
                     HitpointName = "HitHead";
                     armor = 4;
                     passThrough = 0.4;
                };
          };
     };
     class FU_Helm_jungle : FU_Helm_win
    {
        scope = 2;
        displayName = "FU Combat Helmet (Jungle)";
        author = "Bolty";
        picture = "\FU_Factions_MK2\data\ui\FU_Helm_combat_a_icon.paa";
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_equip_jungle.paa"};
     };
    class FU_Helm_Enhanced_Jungle : FU_Helm_Enhanced
    {
        scope = 2;
        displayName = "FU Enhanced Combat Helmet (Jungle)";
        author = "Bolty";
        picture = "\FU_Factions_MK2\data\ui\FU_Helm_enhanced_a_icon.paa";
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_equip_jungle.paa"};
     };
     class FU_Helm_Light_jungle : FU_Helm_Light
    {
        scope = 2;
        displayName = "FU Light Combat Helmet (Jungle)";
        author = "Bolty";
        picture = "\FU_Factions_MK2\data\ui\FU_Helm_light_a_icon.paa";
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_equip_jungle.paa"};
     };
     class FU_Helm_Crew : H_Helmetb
    {
        ace_hearing_lowerVolume = 0.6;
        ace_hearing_protection = 0.85;
        scope = 2;
        displayName = "FU Crew Helmet (Winter)";
        author = "Bolty";
        picture = "\FU_Factions_MK2\data\ui\FU_Helm_crew_icon.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_crew";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_arm_winter.paa"};
        class Iteminfo : ItemInfo 
        {
            uniformmodel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_crew";
            allowedSlots[] = {901,605};
            mass = 40;
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo"};
              class Head
                {
                     HitpointName = "HitHead";
                     armor = 8;
                     passThrough = 0.3;
                };
          };
     };
     class FU_Helm_bdu : H_HelmetO_ocamo
    {
        scope = 2;
        displayName = "FU Assassin Helmet (BDU)";
        author = "Bolty";
        picture = "\FU_Factions_MK2\data\ui\FU_Helm_bdu_icon.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_tech_bdu.paa"};
        
     };

    class FU_Helm_biz : H_Helmetb
    {
        scope = 2;
        displayName = "FU Modular Helmet (Biz)";
        author = "Bolty";
        picture = "\A3\characters_F_Beta\Data\UI\icon_H_I_Helmet_canvas_ca.paa";
        model = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_helm_biz.paa"};
        class Iteminfo : ItemInfo 
        {
            uniformmodel = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
            allowedSlots[] = {901,605};
            mass = 30;
            modelSides[] = {2,3};
            hiddenSelections[] = {"camo"};
              class Head
                {
                     HitpointName = "HitHead";
                     armor = 8;
                     passThrough = 0.4;
                };
          };
     };
     class FU_helm_black : FU_helm_biz 
     { 
        scope = 2;
        displayname = "FU Modular Helmet (Black)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_helm_black.paa"};
        picture = "\FU_Factions_MK2\data\ui\FU_helm_black_icon.paa";
     };
     class FU_helm_bison : FU_helm_biz 
     { 
        scope = 2;
        displayname = "FU Modular Helmet (Bison)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_helm_bison.paa"};
        picture = "\FU_Factions_MK2\data\ui\FU_helm_bison_icon.paa";
     };
     class FU_helm_un : FU_helm_biz 
     { 
        scope = 2;
        displayname = "FU Modular Helmet (Blue)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_helm_un.paa"};
        picture = "\FU_Factions_MK2\data\ui\FU_helm_blue_icon.paa";
     };
     class FU_Vest_lite_un : FU_Vest_litex
    {
        scope = 2;
        displayName = "FU Carrier Lite (Blue)";
        author = "Bolty";
        picture = "\FU_Factions_MK2\data\ui\FU_vest_blue_icon.paa";
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_vest_un.paa"};
    };
     class FU_vest_civ : V_Press_F
     {
      displayname = "FU Vest (blue)" 
      hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_vest_blue.paa"};
      class Iteminfo : vestitem 
        {
            uniformModel = "\A3\Characters_F_EPC\Civil\equip_press_vest_01.p3d";
            containerClass = "Supply80";
            mass = 40;
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class Body
                {
                     hitPointName = "HitBody";
                     passThrough = 0.4;
                };
                class Abdomen
                {
                     hitpointName = "HitAbdomen";
                     armor = 12;
                     passThrough = 0.4;
                };
                class Chest
                {
                     HitpointName = "HitChest";
                     armor = 12;
                     passThrough = 0.4;
                };
                class Diaphragm
                {
                     HitpointName = "HitDiaphragm";
                     armor = 12;
                     passThrough = 0.4;
                };
                class Pelvis
                {
                     HitpointName = "HitPelvis";
                     armor = 12;
                     passThrough = 0.4;
                };
            };
         };
     };
     
class FU_Vest_nor_lit: FU_Vest_litex
{
displayName = "FU Carrier Nor (Khaki)";
picture = "\FU_Factions_MK2\data\ui\FU_vest_nor_icon.paa";
hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_vest_nor.paa"};
};
class FU_Vest_kha_lit: FU_Vest_lite
{
displayName = "FU Carrier (Khaki)";
picture = "\FU_Factions_MK2\data\ui\FU_vest_nor_icon.paa";
hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_vest_kha.paa"};
};
class FU_Vest_swe_lit: FU_Vest_litex
{
displayName = "FU Carrier Swe (Green)";
picture = "\FU_Factions_MK2\data\ui\FU_vest_swe_icon.paa";
hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_vest_swe.paa"};
};

    class FU_Helm_Light_nor : H_Helmetb
    {
        scope = 2;
        displayName = "FU Light Combat Helmet (Nor)";
        author = "Bolty";
        picture = "\FU_Factions_MK2\data\ui\FU_Helm_light_nor_icon.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_helm_nor.paa"};
        class Iteminfo : ItemInfo 
        {
            uniformmodel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
            allowedSlots[] = {901,605};
            mass = 20;
            modelSides[] = {3,1};
            hiddenSelections[] = {"camo"};
                class Head
                {
                     HitpointName = "HitHead";
                     armor = 4;
                     passThrough = 0.4;
                };
          };
     };
class FU_Helm_swe : H_Helmetb
    {
        scope = 2;
        displayName = "FU Modular Helmet (Swe)";
        author = "Bolty";
        picture = "\A3\characters_F_Beta\Data\UI\icon_H_I_Helmet_canvas_ca.paa";
        model = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_helm_Swe.paa"};
        class Iteminfo : ItemInfo 
        {
            uniformmodel = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
            allowedSlots[] = {901,605};
            mass = 30;
            modelSides[] = {2,3};
            hiddenSelections[] = {"camo"};
              class Head
                {
                     HitpointName = "HitHead";
                     armor = 8;
                     passThrough = 0.4;
                };
          };
     };
     class FU_Helm_bel : H_HelmetO_ocamo
    {
        scope = 2;
        displayName = "FU Assassin Helmet (Bel)";
        author = "Bolty";
        picture = "\FU_Factions_MK2\data\ui\FU_Helm_bel_icon.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_tech_Bel.paa"};
        
     };

class FU_Vest_rig_black : FU_Vest_rig_i 
{
        displayname = "FU Carrier lite (Black)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_carriervest_black.paa"};
        picture = "\FU_Factions_MK2\data\ui\FU_vest_black_icon.paa";
};
class FU_Vest_rig_blackb : FU_Vest_rig_ib
{
        displayname = "FU Carrier Rig (Black)";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_carriervest_black.paa"};
        picture = "\FU_Factions_MK2\data\ui\FU_vestb_black_icon.paa";
};

class FU_cVest_rig_black : V_PlateCarrierIAGL_oli
{
        displayname = "FU Carrier GL Rig (Black)";
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_carriervest_black.paa","\FU_Factions_MK2\data\FU_carrier_black.paa"};
        picture = "\FU_Factions_MK2\data\ui\FU_cvest_black_icon.paa";
};


    
};  