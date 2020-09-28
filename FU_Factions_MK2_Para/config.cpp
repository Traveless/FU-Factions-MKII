class CfgPatches
{
    class FU_faction_MKII_Para
    {
           name = "Freelance Union";
           Author = "Bolttrooper";
           units[] = {"Flag_FU"};
           weapons[] = {};
   };
};
class CfgFactionClasses
{
    class FU_Faction_p_blufor
    {
        displayName = "Contract Union";
        Priority = 5; 
        side = 1; 
    };
    class FU_Faction_p_Opfor
    {
        displayName = "Contract Union";
        Priority = 5; 
        side = 0; 
    };
    class FU_Faction_p_Indep
    {
        displayName = "Contract Union";
        Priority = 5; 
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
class B_G_engineer_F;

class B_Kitbag_Base;
class TFAR_rt1523g;
class TFAR_mr3000;
class B_Carryall_Base;


class FlagCarrier;

class FU_base_p_B : B_G_engineer_F 
                  {
                  facewear = "";
	          allowedfacewear[] = {""};
	          allowedHeadgear[] = {""};
	          allowedHeadgearB[] = {""};
	          headgearList[] = {""};
                  identityTypes[] = {"LanguageENGFRE_F","Head_Tanoan"};
                  side = 1;
                  scope = 1;
                  icon = "iconMan";
                  Faction = "FU_Faction_p_blufor";
                  uniformClass = "FU_Uni_p_pmc";
linkedItems[] = {"FU_Vest_kha_lit","H_Cap_oli_hs","ItemCompass","ItemMap","TFAR_anprc152","ItemWatch"};
                  items[] = {mags_5(ACE_packingBandage),mags_5(ACE_fieldDressing),mags_2(ACE_tourniquet),mags_2(ACE_morphine),mags_2(ACE_epinephrine),
                             mags_2(ACE_CableTie),mags_2(ACE_splint),"ACE_Flashlight_XL50"};
         respawnlinkedItems[] = {"FU_Vest_kha_lit","H_Cap_oli_hs","ItemCompass","ItemMap","TFAR_anprc152","ItemWatch"};
         respawnitems[] = {mags_5(ACE_packingBandage),mags_5(ACE_fieldDressing),mags_2(ACE_tourniquet),mags_2(ACE_morphine),mags_2(ACE_epinephrine),
                             mags_2(ACE_CableTie),mags_2(ACE_splint),"ACE_Flashlight_XL50"};
                  };

class FU_base_p_O : O_Soldier_base_F 
                  {
                  facewear = "";
	          allowedfacewear[] = {""};
	          allowedHeadgear[] = {""};
	          headgearList[] = {""};
                  identityTypes[] = {"LanguagePOL_F","Head_Enoch"};
                  side = 0;
                  Faction = "FU_Faction_p_opfor";
                  uniformClass = "FU_Uni_p_kha";
linkedItems[] = {"V_TacVest_brn","H_ShemagOpen_tan","ItemCompass","ItemMap","TFAR_fadak","ItemWatch"};
                  items[] = {mags_5(ACE_packingBandage),mags_5(ACE_fieldDressing),mags_2(ACE_tourniquet),mags_2(ACE_morphine),mags_2(ACE_epinephrine),
                             mags_2(ACE_CableTie),mags_2(ACE_splint),"ACE_Flashlight_XL50"};
              respawnlinkedItems[] = {"V_TacVest_brn","H_ShemagOpen_tan","ItemCompass","ItemMap","TFAR_fadak","ItemWatch"};
              respawnitems[] = {mags_5(ACE_packingBandage),mags_5(ACE_fieldDressing),mags_2(ACE_tourniquet),mags_2(ACE_morphine),mags_2(ACE_epinephrine),
                             mags_2(ACE_CableTie),mags_2(ACE_splint),"ACE_Flashlight_XL50"};
                  };
class FU_base_p_I : I_Soldier_base_F 
                  {
                  facewear = "";
	          allowedfacewear[] = {""};
	          allowedHeadgear[] = {""};
	          headgearList[] = {""};
                  identityTypes[] = {"LanguageCHI_F","Head_Asian"};
                  side = 2;
                  Faction = "FU_Faction_p_Indep";
                  uniformClass = "FU_uni_p_blue_t";
linkedItems[] = {"V_TacVest_blk_POLICE","H_MilCap_blue","ItemCompass","ItemMap","TFAR_anprc148jem","ItemWatch"};
                  items[] = {mags_5(ACE_packingBandage),mags_5(ACE_fieldDressing),mags_2(ACE_tourniquet),mags_2(ACE_morphine),mags_2(ACE_epinephrine),
                             mags_2(ACE_CableTie),mags_2(ACE_splint),"ACE_Flashlight_XL50"};
             respawnlinkedItems[] = {"V_TacVest_blk_POLICE","H_MilCap_blue","ItemCompass","ItemMap","TFAR_anprc148jem","ItemWatch"};
             respawnitems[] = {mags_5(ACE_packingBandage),mags_5(ACE_fieldDressing),mags_2(ACE_tourniquet),mags_2(ACE_morphine),mags_2(ACE_epinephrine),
                             mags_2(ACE_CableTie),mags_2(ACE_splint),"ACE_Flashlight_XL50"};
                  };

class FU_Uni_p_pmc : B_G_engineer_F
{
         displayname = "FU Uniform (PMC)";
         scope = 1;
         modelSides[] = {0,1,2,3};
         uniformClass = "FU_uni_p_pmc";
         hiddenSelections[] = {"camo"};
         hiddenSelectionsTextures[] = {"\FU_Factions_MK2_para\data\FU_uni_p_pmc.paa"};
         model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla2_1.p3d";
};
class FU_Uni_p_mil : B_Soldier_base_F
{
         displayname = "FU Uniform (Mil)";
         scope = 1;
         modelSides[] = {0,1,2,3};
         uniformClass = "FU_Uni_p_mil";
         hiddenSelections[] = {"camo"};
         hiddenSelectionsTextures[] = {"\FU_Factions_MK2_para\data\FU_Uni_p_mil.paa"};
         model = "\A3\characters_F\OPFOR\o_officer_noinsignia_f.p3d";
};
class FU_Uni_p_tig : B_Soldier_base_F
{
         displayname = "FU Uniform (tig)";
         scope = 1;
         modelSides[] = {0,1,2,3};
         uniformClass = "FU_Uni_p_tig";
         hiddenSelections[] = {"camo"};
         hiddenSelectionsTextures[] = {"\FU_Factions_MK2_para\data\FU_Uni_p_tig.paa"};
         model = "\A3\characters_F\OPFOR\o_officer_noinsignia_f.p3d";
};
class FU_Uni_p_grey : B_Soldier_base_F
{
         displayname = "FU Uniform (grey)";
         scope = 1;
         modelSides[] = {0,1,2,3};
         uniformClass = "FU_Uni_p_grey";
         hiddenSelections[] = {"camo"};
         hiddenSelectionsTextures[] = {"\FU_Factions_MK2_para\data\FU_Uni_p_grey.paa"};
         model = "\A3\characters_F\OPFOR\o_officer_noinsignia_f.p3d";
};

class FU_Uni_p_kha : B_Soldier_base_F
{
         displayname = "FU Uniform (khaki)";
         scope = 1;
         modelSides[] = {0,1,2,3};
         uniformClass = "FU_Uni_p_kha";
         hiddenSelections[] = {"camo"};
         hiddenSelectionsTextures[] = {"\FU_Factions_MK2_para\data\FU_Uni_p_kha.paa"};
         model = "\A3\characters_F\OPFOR\o_officer_noinsignia_f.p3d";
};
class FU_Uni_p_stone_o : B_Soldier_base_F
{
         displayname = "FU Uniform (stone)";
         scope = 1;
         modelSides[] = {0,1,2,3};
         uniformClass = "FU_Uni_p_stone_o";
         hiddenSelections[] = {"camo1","camo2","insignia"};
         hiddenSelectionsTextures[] = {"\FU_Factions_MK2_para\data\FU_Uni_p_stone_legs.paa","\FU_Factions_MK2_para\data\FU_Uni_p_stone.paa"};
         model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
};
class FU_Uni_p_stone_b : B_Soldier_base_F
{
         displayname = "FU Combat fatigues (stone)";
         scope = 1;
         modelSides[] = {0,1,2,3};
         uniformClass = "FU_Uni_p_stone_b";
         hiddenSelections[] = {"camo"};
         hiddenSelectionsTextures[] = {"\FU_Factions_MK2_para\data\FU_Uni_p_stone_legs.paa"};
         model = "\A3\characters_F\OPFOR\o_officer_noinsignia_f.p3d";
};
class FU_Uni_p_stone : i_Soldier_base_F
{
         displayname = "FU Combat fatigues (stone)";
         scope = 1;
         modelSides[] = {0,1,2,3};
         uniformClass = "FU_Uni_p_stone";
         hiddenSelections[] = {"camo"};
         hiddenSelectionsTextures[] = {"\FU_Factions_MK2_para\data\FU_Uni_p_stone.paa"};
};

class FU_Uni_p_Gre_2 : i_Soldier_base_F
{
         displayname = "FU Combat fatigues (stone)";
         scope = 1;
         modelSides[] = {0,1,2,3};
         uniformClass = "FU_Uni_p_Gre_2";
         hiddenSelections[] = {"camo"};
         hiddenSelectionsTextures[] = {"\FU_Factions_MK2_para\data\FU_Uni_p_Gre_2.paa"};

};
class FU_uni_p_blue_t : B_Soldier_base_F
{
         displayname = "FU blue (tee)";
         scope = 1;
         modelSides[] = {0,1,2,3};
         model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
         uniformClass = "FU_uni_p_blue_t";
         hiddenSelections[] = {"camo"};
         hiddenSelectionsTextures[] = {"\FU_Factions_MK2_para\data\FU_uni_p_blue.paa"};
}; 
class FU_uni_p_blue : B_Soldier_base_F
{
         displayname = "FU blue";
         scope = 1;
         modelSides[] = {0,1,2,3};
         uniformClass = "FU_uni_p_blue";
         hiddenSelections[] = {"camo"};
         hiddenSelectionsTextures[] = {"\FU_Factions_MK2_para\data\FU_uni_p_blue.paa"};
}; 





class FU_Bigbag_base : B_carryall_base 
{
picture = "\A3\Supplies_F_Orange\Bags\Data\UI\icon_B_UAV_06_ca";
displayname = "Carrier Backpack";
hiddenSelectionsMaterials[] = {"\A3\Supplies_F_Orange\Bags\Data\UAV_backpack.rvmat"};
hiddenSelections[] = {"Camo"};
hiddenSelectionsTextures[] = {"\A3\Supplies_F_Orange\Bags\Data\UAV_06_backpack_NATO_co.paa"};
model = "\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\UAV_backpack_F.p3d";
};
class FU_Bigbag_p_blk : FU_Bigbag_base
{
scope = 2;
displayname = "Carrier Backpack (black)";
hiddenSelectionsTextures[] = {"\FU_Factions_MK2_para\data\FU_Big_pack_blk.paa"};
};
class FU_Bigbag_p_gre : FU_Bigbag_base
{
scope = 2;
displayname = "Carrier Backpack (Green)";
hiddenSelectionsTextures[] = {"\FU_Factions_MK2_para\data\FU_Big_pack_gre.paa"};
};
class FU_Bigbag_p_green : FU_Bigbag_base
{
scope = 2;
displayname = "Carrier Backpack";
hiddenSelectionsTextures[] = {"\FU_Factions_MK2_para\data\FU_Big_pack_green.paa"};
};
class FU_Bigbag_p_kha : FU_Bigbag_base
{
scope = 2;
displayname = "Carrier Backpack (khaki)";
hiddenSelectionsTextures[] = {"\FU_Factions_MK2_para\data\FU_Big_pack_kha.paa"};
};




class FU_radio_p_blk : TFAR_rt1523g
       {
	displayName = "FU rt1523g (Black)";
        scope = 2;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2_para\data\FU_radio_p_blk.paa"};
       };

class FU_radio_p_gre : TFAR_rt1523g
       {
	displayName = "FU rt1523g (Green)";
        scope = 2;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2_para\data\FU_radio_p_gre.paa"};
       };
class FU_radio_p_kha : TFAR_rt1523g
       {
	displayName = "FU rt1523g (Khaki)";
        scope = 2;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2_para\data\FU_radio_p_kha.paa"};
       };


class Flag_FU : FlagCarrier
{
        author="Bolty";
        class SimpleObject
        {
            animate[] = {["flag",0]};
            eden=0;
            hide[]={};
            init="''";
            verticalOffset=3.977;
            verticalOffsetWorld=0;
        };
        editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Flag_Red_F.jpg";
        scope=2;
        scopeCurator=2;
        displayName="FU Flag";
        hiddenSelectionsTextures[]=
        {
            "\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat"
        };
        class EventHandlers
        {
            init="(_this select 0) setFlagTexture '\FU_Factions_MK2_para\data\flag_fu.paa'";

        };
    };



};
class cfgWeapons
{
    class UniformItem;
    class vestitem;
    class itemcore;
    class uniform_base : itemcore {class iteminfo;}; 

    class H_Beret_02;

    class FU_Uni_p_pmc : uniform_base
    {
        author = "Bolty";
        scope = 2;
        displayName = "FU Combat Fatigues [PMC]";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2_para\data\FU_uni_p_pmc.paa"};
        picture = "\FU_Factions_MK2_para\data\ui\FU_uniform_pmc_icon.paa";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "FU_Uni_p_pmc";
            containerClass = "Supply40";
            mass = 30;
        };
    };

    class FU_Uni_p_mil : uniform_base
    {
        author = "Bolty";
        scope = 2;
        displayName = "FU Combat Fatigues [Mil]";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2_para\data\FU_Uni_p_mil.paa"};
        picture = "\FU_Factions_MK2_para\data\ui\FU_uniform_gre_icon.paa";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "FU_Uni_p_mil";
            containerClass = "Supply40";
            mass = 30;
        };
    };
    class FU_Uni_p_tig : uniform_base
    {
        author = "Bolty";
        scope = 2;
        displayName = "FU Combat Fatigues [TIGER]";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2_para\data\FU_Uni_p_tig.paa"};
        picture = "\FU_Factions_MK2_para\data\ui\FU_uniform_tig_icon.paa";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "FU_Uni_p_tig";
            containerClass = "Supply40";
            mass = 30;
        };
    };
    class FU_Uni_p_grey : uniform_base
    {
        author = "Bolty";
        scope = 2;
        displayName = "FU Combat Fatigues [Grey]";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2_para\data\FU_Uni_p_grey.paa"};
        picture = "\FU_Factions_MK2_para\data\ui\FU_uniform_blk_icon.paa";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "FU_Uni_p_grey";
            containerClass = "Supply40";
            mass = 30;
        };
    };

    class FU_Uni_p_kha : uniform_base
    {
        author = "Bolty";
        scope = 2;
        displayName = "FU Combat Fatigues [Khaki]";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2_para\data\FU_Uni_p_kha.paa"};
        picture = "\FU_Factions_MK2_para\data\ui\FU_uniform_ter_icon.paa";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "FU_Uni_p_kha";
            containerClass = "Supply40";
            mass = 30;
        };
    };

    class FU_Uni_p_stone_o : uniform_base
    {
        author = "Bolty";
        scope = 2;
        displayName = "FU Combat Fatigues [Stone]";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2_para\data\FU_Uni_p_stone_legs.paa"};
        picture = "\FU_Factions_MK2_para\data\ui\FU_uniform_sto_icon.paa";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "FU_Uni_p_stone_o";
            containerClass = "Supply40";
            mass = 30;
        };
    };
    class FU_Uni_p_stone_b : uniform_base
    {
        author = "Bolty";
        scope = 2;
        displayName = "FU Combat Fatigues [Stone]";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2_para\data\FU_Uni_p_stone_legs.paa"};
        picture = "\FU_Factions_MK2_para\data\ui\FU_uniform_sto_icon.paa";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "FU_Uni_p_stone_b";
            containerClass = "Supply40";
            mass = 30;
        };
    };

    class FU_Uni_p_stone : uniform_base
    {
        author = "Bolty";
        scope = 2;
        displayName = "FU Combat Fatigues [Stone]";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2_para\data\FU_Uni_p_stone.paa"};
        picture = "\FU_Factions_MK2_para\data\ui\FU_uniform_sto_icon.paa";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "FU_Uni_p_stone";
            containerClass = "Supply40";
            mass = 30;
        };
    };

    class FU_Uni_p_Gre_2 : uniform_base
    {
        author = "Bolty";
        scope = 2;
        displayName = "FU Combat Fatigues [Green]";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2_para\data\FU_Uni_p_Gre_2.paa"};
        picture = "\FU_Factions_MK2_para\data\ui\FU_uniform_gre_icon.paa";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "FU_Uni_p_Gre_2";
            containerClass = "Supply40";
            mass = 30;
        };
    };
    class FU_uni_p_blue_t : uniform_base
    {
        author = "Bolty";
        scope = 2;
        displayName = "FU Combat Fatigues [Blue] (Tee)";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2_para\data\FU_uni_p_blue.paa"};
        picture = "\FU_Factions_MK2_para\data\ui\FU_uniform_blu_icon.paa";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "FU_uni_p_blue_t";
            containerClass = "Supply40";
            mass = 30;
        };
    };
    class FU_uni_p_blue : uniform_base
    {
        author = "Bolty";
        scope = 2;
        displayName = "FU Combat Fatigues [Blue]";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2_para\data\FU_uni_p_blue.paa"};
        picture = "\FU_Factions_MK2_para\data\ui\FU_uniform_blua_icon.paa";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "FU_uni_p_blue";
            containerClass = "Supply40";
            mass = 30;
        };
    };
class FU_Beret_tig : H_Beret_02
{
        author = "Bolty";
        displayName = "Beret [TIGER]";
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2_para\data\FU_Beret_Tig.paa"};
        picture = "\FU_Factions_MK2_para\data\ui\FU_beret_tig_icon.paa";
};
class FU_Beret_afr : H_Beret_02
{
        author = "Bolty";
        displayName = "Beret [AFR]";
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2_para\data\FU_Beret_afr.paa"};
        picture = "\FU_Factions_MK2_para\data\ui\FU_beret_tig_icon.paa";
};





    
};  