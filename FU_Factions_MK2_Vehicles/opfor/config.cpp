class CfgPatches
{
    class FU_faction_MKII_vehicles_o
    {
           name = "Freelance Union";
           Author = "Bolttrooper";
           units[] = {"FU_MRAP_o","FU_MRAP_hmg_o","FU_MRAP_gmg_o","FU_MRAP_bis","FU_MRAP_hmg_bis","FU_MRAP_gmg_bis","FU_APC_2_O","FU_APC_O","FU_Tank_O","FU_Tank_blk"};
           weapons[] = {};
   };
};

class cfgvehicles
{

class O_MRAP_02_F;
class O_MRAP_02_hmg_F;
class O_MRAP_02_gmg_F;

class I_MRAP_03_F;
class I_MRAP_03_hmg_F;
class I_MRAP_03_gmg_F;

class O_APC_Wheeled_02_rcws_v2_F;
class I_APC_Wheeled_03_cannon_F;

class O_MBT_02_cannon_F;
class B_MBT_01_cannon_F;

class FU_Tank_O : o_MBT_02_cannon_F
{
              author = "Bolty";
              crew   = "FU_crew_bel";
              displayName = "(Bel)T100 Black Eagle";
              side = 0;
              Faction = "FU_Faction_opfor";
              editorPreview = "\FU_Factions_MK2\data\editor\FU_tank_o_gre.jpg";
              hiddenSelectionsTextures[] = {"\FU_Factions_MK2_vehicles\data\FU_tank_body_o_gree.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_tank_turret_o_gree.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_tank_rcws_o_gree.paa",
                                            "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"};
              textureList[] = {"FU_tank_o_green", 1};
         class textureSources
     {
         class FU_tank_o_green
         {              displayName = "FU green";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_tank_body_o_gree.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_tank_turret_o_gree.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_tank_rcws_o_gree.paa",
                                      "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"};
			materials[] = {}; 
			factions[] = {};
         };
         class FU_tank_o_black
         {              displayName = "FU black";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_tank_body_o_blk.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_tank_turret_o_blk.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_tank_rcws_o_blk.paa",
                                      "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"};
			materials[] = {}; 
			factions[] = {};
         };
         class FU_tank_o_bel
         {              displayName = "FU Green (No Camo)";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_tank_body_o_gre.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_tank_turret_o_gre.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_tank_rcws_o_gre.paa",
                                      "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"};
			materials[] = {}; 
			factions[] = {};
         };
         class FU_tank_o_red
         {              displayName = "FU red (No Camo)";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_tank_body_o_2_red.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_tank_turret_o_2_red.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_tank_rcws_o_2_red.paa",
                                      "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"};
			materials[] = {}; 
			factions[] = {};
         };
     };
         class TransportWeapons
	{
         class _FU_rifle_B {weapon = "FU_shortrifle_o"; count = 2;};
         
         };

	class TransportMagazines 
	{
                class _FU_Mags_B  {magazine = "30Rnd_762x39_AK12_Mag_F" ;count = 15;};
                class _FU_Mags_B1 {magazine = "30Rnd_762x39_AK12_Mag_Tracer_F" ;count = 15;};
                class _FU_Mags_B7 {magazine = "HandGrenade"; count = 6;};
	};
class TransportItems
	{
class _fu_item1 {name = "ACE_elasticBandage";count = 20;};
class _fu_item4 {name = "ACE_epinephrine";count = 10;};
class _fu_item5 {name = "ACE_morphine";count = 6;};
class _fu_item10 {name = "SmokeShell";count = 10;};
class _fu_item11 {name = "TFAR_fadak";count = 10;};
class _fu_item12 {name = "ACE_splint";count = 10;};
class _fu_tool {name = "ToolKit"; count = 1;};
class _fu_detect1 {name = "MineDetector";count = 1;};

	};

};

class FU_Tank_blk : o_MBT_02_cannon_F
{
              author = "Bolty";
              crew   = "FU_crew_o";
              displayName = "(bdu)T100 Black Eagle";
              side = 0;
              Faction = "FU_Faction_opfor";
              editorPreview = "\FU_Factions_MK2\data\editor\FU_tank_o_blk.jpg";
              hiddenSelectionsTextures[] = {"\FU_Factions_MK2_vehicles\data\FU_tank_body_o_blk.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_tank_turret_o_blk.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_tank_rcws_o_blk.paa",
                                            "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"};
              textureList[] = {"FU_tank_o_black", 1};
         class textureSources
     {
         class FU_tank_o_green
         {              displayName = "FU green";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_tank_body_o_gree.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_tank_turret_o_gree.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_tank_rcws_o_gree.paa",
                                      "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"};
			materials[] = {}; 
			factions[] = {};
         };
         class FU_tank_o_black
         {              displayName = "FU black";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_tank_body_o_blk.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_tank_turret_o_blk.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_tank_rcws_o_blk.paa",
                                      "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"};
			materials[] = {}; 
			factions[] = {};
         };
         class FU_tank_o_bel
         {              displayName = "FU Green (No Camo)";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_tank_body_o_gre.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_tank_turret_o_gre.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_tank_rcws_o_gre.paa",
                                      "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"};
			materials[] = {}; 
			factions[] = {};
         };
         class FU_tank_o_red
         {              displayName = "FU red (No Camo)";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_tank_body_o_2_red.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_tank_turret_o_2_red.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_tank_rcws_o_2_red.paa",
                                      "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"};
			materials[] = {}; 
			factions[] = {};
         };
     };
         class TransportWeapons
	{
         class _FU_rifle_B {weapon = "FU_shortrifle_o"; count = 2;};
         
         };

	class TransportMagazines 
	{
                class _FU_Mags_B  {magazine = "30Rnd_762x39_AK12_Mag_F" ;count = 15;};
                class _FU_Mags_B1 {magazine = "30Rnd_762x39_AK12_Mag_Tracer_F" ;count = 15;};
                class _FU_Mags_B7 {magazine = "HandGrenade"; count = 6;};
	};
class TransportItems
	{
class _fu_item1 {name = "ACE_elasticBandage";count = 20;};
class _fu_item4 {name = "ACE_epinephrine";count = 10;};
class _fu_item5 {name = "ACE_morphine";count = 6;};
class _fu_item10 {name = "SmokeShell";count = 10;};
class _fu_item11 {name = "TFAR_fadak";count = 10;};
class _fu_item12 {name = "ACE_splint";count = 10;};
class _fu_tool {name = "ToolKit"; count = 1;};
class _fu_detect1 {name = "MineDetector";count = 1;};

	};

};


class FU_APC_o : O_APC_Wheeled_02_rcws_v2_F
{
              author = "Bolty";
              crew   = "FU_crew_bel";
              displayName = "(Bel)Otokar";
              side = 0;
              Faction = "FU_Faction_opfor";
              editorPreview = "\FU_Factions_MK2\data\editor\FU_APC_o.jpg";
              hiddenSelectionsTextures[] = {"\FU_Factions_MK2_vehicles\data\FU_apc_body_o_gre.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_apc_top_o_gre.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_Turret_gre.paa",
                                      "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa","A3\armor_f\data\cage_csat_co.paa"};
              textureList[] = {"FU_APC_o_green", 1};
     class textureSources
     {
         class FU_APC_o_green
         {              displayName = "FU green";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_apc_body_o_gre.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_apc_top_o_gre.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_Turret_gre.paa",
                                      "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa","A3\armor_f\data\cage_csat_co.paa"};
			materials[] = {}; 
			factions[] = {};
         };
      };
         class TransportWeapons
	{
         class _FU_rifle_B {weapon = "FU_shortrifle_o"; count = 2;};
         
         };

	class TransportMagazines 
	{
                class _FU_Mags_B  {magazine = "30Rnd_762x39_AK12_Mag_F" ;count = 15;};
                class _FU_Mags_B1 {magazine = "30Rnd_762x39_AK12_Mag_Tracer_F" ;count = 15;};
                class _FU_Mags_B7 {magazine = "HandGrenade"; count = 6;};
	};
class TransportItems
	{
class _fu_item1 {name = "ACE_elasticBandage";count = 20;};
class _fu_item4 {name = "ACE_epinephrine";count = 10;};
class _fu_item5 {name = "ACE_morphine";count = 6;};
class _fu_item10 {name = "SmokeShell";count = 10;};
class _fu_item11 {name = "TFAR_fadak";count = 10;};
class _fu_item12 {name = "ACE_splint";count = 10;};
class _fu_tool {name = "ToolKit"; count = 1;};
class _fu_detect1 {name = "MineDetector";count = 1;};

	};

};



class FU_APC_2_O : I_APC_Wheeled_03_cannon_F
{
              author = "Bolty";
              crew   = "FU_crew_bison";
              displayName = "(Bis)Pandur II";
              side = 0;
              Faction = "FU_Faction_opfor";
              editorPreview = "\FU_Factions_MK2\data\editor\FU_APC_2_O.jpg";
              hiddenSelectionsTextures[] = {"\FU_Factions_MK2_vehicles\data\FU_APC_body_b_red.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_APC_wheel_b_red.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_APC_rcws_b_red.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_APC_extra_b_red.paa",
                                      "A3\Armor_F\Data\camonet_AAF_FIA_green_CO.paa","A3\armor_f\data\cage_G1_co.paa"};
              textureList[] = {"FU_APC_o_red", 1};
     class textureSources
     {
         class FU_APC_o_red
         {              displayName = "FU red";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_APC_body_b_red.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_APC_wheel_b_red.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_APC_rcws_b_red.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_APC_extra_b_red.paa",
                                      "A3\Armor_F\Data\camonet_AAF_FIA_green_CO.paa","A3\armor_f\data\cage_G1_co.paa"};
			materials[] = {}; 
			factions[] = {};
         };
         class FU_APC_o_green
         {              displayName = "FU green";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_APC_body_b_gre.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_APC_wheel_b_gre.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_APC_rcws_b_gre.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_APC_extra_b_gre.paa",
                                      "A3\Armor_F\Data\camonet_AAF_FIA_green_CO.paa","A3\armor_f\data\cage_G1_co.paa"};
			materials[] = {}; 
			factions[] = {};
         };
         class FU_APC_o_blk
         {              displayName = "FU black";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_APC_body_b_blk.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_APC_wheel_b_blk.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_APC_rcws_b_blk.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_APC_extra_b_blk.paa",
                                      "A3\Armor_F\Data\camonet_AAF_FIA_green_CO.paa","A3\armor_f\data\cage_G1_co.paa"};
			materials[] = {}; 
			factions[] = {};
         };
         class FU_APC_o_whi
         {              displayName = "FU white";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_APC_body_b_whi.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_APC_wheel_b_whi.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_APC_rcws_b_whi.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_APC_extra_b_whi.paa",
                                      "A3\Armor_F\Data\camonet_AAF_FIA_green_CO.paa","A3\armor_f\data\cage_G1_co.paa"};
			materials[] = {}; 
			factions[] = {};
         };
      };
         class TransportWeapons
	{
         class _FU_rifle_B {weapon = "FU_shortrifle_o"; count = 2;};
         
         };

	class TransportMagazines 
	{
                class _FU_Mags_B  {magazine = "30Rnd_762x39_AK12_Mag_F" ;count = 15;};
                class _FU_Mags_B1 {magazine = "30Rnd_762x39_AK12_Mag_Tracer_F" ;count = 15;};
                class _FU_Mags_B7 {magazine = "HandGrenade"; count = 6;};
	};
class TransportItems
	{
class _fu_item1 {name = "ACE_elasticBandage";count = 20;};
class _fu_item4 {name = "ACE_epinephrine";count = 10;};
class _fu_item5 {name = "ACE_morphine";count = 6;};
class _fu_item10 {name = "SmokeShell";count = 10;};
class _fu_item11 {name = "TFAR_fadak";count = 10;};
class _fu_item12 {name = "ACE_splint";count = 10;};
class _fu_tool {name = "ToolKit"; count = 1;};
class _fu_detect1 {name = "MineDetector";count = 1;};

	};

};



class FU_MRAP_o : O_MRAP_02_F
{
              author = "Bolty";
              crew   = "FU_crew_bel";
              displayName = "(Bel)Karatel";
              side = 0;
              Faction = "FU_Faction_opfor";
              editorPreview = "\FU_Factions_MK2\data\editor\FU_MRAP_o.jpg";
              hiddenSelections[] = {"Camo1","Camo2","Camo3"};
              hiddenSelectionsTextures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_o_gre.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_car_top_o_gre.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_turret_gre.paa"};
              textureList[] = {"FU_Mrap_o_gre", 1};
     class textureSources
     {
         class FU_Mrap_o_gre
         {              displayName = "FU Green";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_o_gre.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_car_top_o_gre.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_turret_gre.paa"};
			materials[] = {}; 
			factions[] = {};
         };
         class FU_Mrap_o_red
         {              displayName = "FU red";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_o_2_red.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_car_top_o_2_red.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_turret_red.paa"};
			materials[] = {}; 
			factions[] = {};
         };
      };
         class TransportWeapons
	{
         class _FU_rifle_B {weapon = "FU_shortrifle_o"; count = 2;};
         
         };

	class TransportMagazines 
	{
                class _FU_Mags_B  {magazine = "30Rnd_762x39_AK12_Mag_F" ;count = 15;};
                class _FU_Mags_B1 {magazine = "30Rnd_762x39_AK12_Mag_Tracer_F" ;count = 15;};
                class _FU_Mags_B7 {magazine = "HandGrenade"; count = 6;};
	};
class TransportItems
	{
class _fu_item1 {name = "ACE_elasticBandage";count = 20;};
class _fu_item4 {name = "ACE_epinephrine";count = 10;};
class _fu_item5 {name = "ACE_morphine";count = 6;};
class _fu_item10 {name = "SmokeShell";count = 10;};
class _fu_item11 {name = "TFAR_fadak";count = 10;};
class _fu_item12 {name = "ACE_splint";count = 10;};
class _fu_tool {name = "ToolKit"; count = 1;};
class _fu_detect1 {name = "MineDetector";count = 1;};

	};

};

class FU_MRAP_hmg_o : O_MRAP_02_hmg_F
{
              author = "Bolty";
              crew   = "FU_crew_bel";
              displayName = "(Bel)Karatel HMG";
              side = 0;
              Faction = "FU_Faction_opfor";
              editorPreview = "\FU_Factions_MK2\data\editor\FU_MRAP_hmg_o.jpg";
              hiddenSelections[] = {"Camo1","Camo2","Camo3"};
              hiddenSelectionsTextures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_o_gre.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_car_top_o_gre.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_turret_gre.paa"};
              textureList[] = {"FU_Mrap_o_gre", 1};
     class textureSources
     {
         class FU_Mrap_o_gre
         {              displayName = "FU Green";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_o_gre.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_car_top_o_gre.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_turret_gre.paa"};
			materials[] = {}; 
			factions[] = {};
         };
         class FU_Mrap_o_red
         {              displayName = "FU red";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_o_2_red.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_car_top_o_2_red.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_turret_red.paa"};
			materials[] = {}; 
			factions[] = {};
         };
      };
         class TransportWeapons
	{
         class _FU_rifle_B {weapon = "FU_shortrifle_o"; count = 2;};
         
         };

	class TransportMagazines 
	{
                class _FU_Mags_B  {magazine = "30Rnd_762x39_AK12_Mag_F" ;count = 15;};
                class _FU_Mags_B1 {magazine = "30Rnd_762x39_AK12_Mag_Tracer_F" ;count = 15;};
                class _FU_Mags_B7 {magazine = "HandGrenade"; count = 6;};
	};
class TransportItems
	{
class _fu_item1 {name = "ACE_elasticBandage";count = 20;};
class _fu_item4 {name = "ACE_epinephrine";count = 10;};
class _fu_item5 {name = "ACE_morphine";count = 6;};
class _fu_item10 {name = "SmokeShell";count = 10;};
class _fu_item11 {name = "TFAR_fadak";count = 10;};
class _fu_item12 {name = "ACE_splint";count = 10;};
class _fu_tool {name = "ToolKit"; count = 1;};
class _fu_detect1 {name = "MineDetector";count = 1;};

	};

};


class FU_MRAP_gmg_o : O_MRAP_02_gmg_F
{
              author = "Bolty";
              crew   = "FU_crew_bel";
              displayName = "(Bel)Karatel GMG";
              side = 0;
              Faction = "FU_Faction_opfor";
              editorPreview = "\FU_Factions_MK2\data\editor\FU_MRAP_hmg_o.jpg";
              hiddenSelections[] = {"Camo1","Camo2","Camo3"};
              hiddenSelectionsTextures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_o_gre.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_car_top_o_gre.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_turret_gre.paa"};
              textureList[] = {"FU_Mrap_o_gre", 1};
     class textureSources
     {
         class FU_Mrap_o_gre
         {              displayName = "FU Green";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_o_gre.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_car_top_o_gre.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_turret_gre.paa"};
			materials[] = {}; 
			factions[] = {};
         };
         class FU_Mrap_o_red
         {              displayName = "FU red";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_o_2_red.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_car_top_o_2_red.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_turret_red.paa"};
			materials[] = {}; 
			factions[] = {};
         };
      };
         class TransportWeapons
	{
         class _FU_rifle_B {weapon = "FU_shortrifle_o"; count = 2;};
         
         };

	class TransportMagazines 
	{
                class _FU_Mags_B  {magazine = "30Rnd_762x39_AK12_Mag_F" ;count = 15;};
                class _FU_Mags_B1 {magazine = "30Rnd_762x39_AK12_Mag_Tracer_F" ;count = 15;};
                class _FU_Mags_B7 {magazine = "HandGrenade"; count = 6;};
	};
class TransportItems
	{
class _fu_item1 {name = "ACE_elasticBandage";count = 20;};
class _fu_item4 {name = "ACE_epinephrine";count = 10;};
class _fu_item5 {name = "ACE_morphine";count = 6;};
class _fu_item10 {name = "SmokeShell";count = 10;};
class _fu_item11 {name = "TFAR_fadak";count = 10;};
class _fu_item12 {name = "ACE_splint";count = 10;};
class _fu_tool {name = "ToolKit"; count = 1;};
class _fu_detect1 {name = "MineDetector";count = 1;};

	};

};

class FU_MRAP_bis : I_MRAP_03_F
{
              author = "Bolty";
              crew   = "FU_crew_bison";
              displayName = "(Bis)Fennek";
              side = 0;
              Faction = "FU_Faction_opfor";
              editorPreview = "\FU_Factions_MK2\data\editor\FU_MRAP_bis.jpg";
              hiddenSelections[] = {"Camo1","Camo2","Camo3"};
              hiddenSelectionsTextures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_o_red.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_turret_red.paa"};
              textureList[] = {"FU_Mrap_o_red", 1};
     class textureSources
     {
         class FU_Mrap_o_red
         {              displayName = "FU red";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_o_red.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_turret_red.paa"};
			materials[] = {}; 
			factions[] = {};
         };
      };
         class TransportWeapons
	{
         class _FU_rifle_B {weapon = "FU_shortrifle_o"; count = 2;};
         
         };

	class TransportMagazines 
	{
                class _FU_Mags_B  {magazine = "30Rnd_762x39_AK12_Mag_F" ;count = 15;};
                class _FU_Mags_B1 {magazine = "30Rnd_762x39_AK12_Mag_Tracer_F" ;count = 15;};
                class _FU_Mags_B7 {magazine = "HandGrenade"; count = 6;};
	};
class TransportItems
	{
class _fu_item1 {name = "ACE_elasticBandage";count = 20;};
class _fu_item4 {name = "ACE_epinephrine";count = 10;};
class _fu_item5 {name = "ACE_morphine";count = 6;};
class _fu_item10 {name = "SmokeShell";count = 10;};
class _fu_item11 {name = "TFAR_fadak";count = 10;};
class _fu_item12 {name = "ACE_splint";count = 10;};
class _fu_tool {name = "ToolKit"; count = 1;};
class _fu_detect1 {name = "MineDetector";count = 1;};
	};

};


class FU_MRAP_hmg_bis : I_MRAP_03_hmg_F
{
              author = "Bolty";
              crew   = "FU_crew_bison";
              displayName = "(Bis)Fennek HMG";
              side = 0;
              Faction = "FU_Faction_opfor";
              editorPreview = "\FU_Factions_MK2\data\editor\FU_MRAP_hmg_bis.jpg";
              hiddenSelections[] = {"Camo1","Camo2","Camo3"};
              hiddenSelectionsTextures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_o_red.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_turret_red.paa"};
              textureList[] = {"FU_Mrap_o_red", 1};
     class textureSources
     {
         class FU_Mrap_o_red
         {              displayName = "FU red";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_o_red.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_turret_red.paa"};
			materials[] = {}; 
			factions[] = {};
         };
      };
         class TransportWeapons
	{
         class _FU_rifle_B {weapon = "FU_shortrifle_o"; count = 2;};
         
         };

	class TransportMagazines 
	{
                class _FU_Mags_B  {magazine = "30Rnd_762x39_AK12_Mag_F" ;count = 15;};
                class _FU_Mags_B1 {magazine = "30Rnd_762x39_AK12_Mag_Tracer_F" ;count = 15;};
                class _FU_Mags_B7 {magazine = "HandGrenade"; count = 6;};
	};
class TransportItems
	{
class _fu_item1 {name = "ACE_elasticBandage";count = 20;};
class _fu_item4 {name = "ACE_epinephrine";count = 10;};
class _fu_item5 {name = "ACE_morphine";count = 6;};
class _fu_item10 {name = "SmokeShell";count = 10;};
class _fu_item11 {name = "TFAR_fadak";count = 10;};
class _fu_item12 {name = "ACE_splint";count = 10;};
class _fu_tool {name = "ToolKit"; count = 1;};
class _fu_detect1 {name = "MineDetector";count = 1;};

	};

};


class FU_MRAP_gmg_bis : I_MRAP_03_gmg_F
{
              author = "Bolty";
              crew   = "FU_crew_bison";
              displayName = "(Bis)Fennek GMG";
              side = 0;
              Faction = "FU_Faction_opfor";
              editorPreview = "\FU_Factions_MK2\data\editor\FU_MRAP_hmg_bis.jpg";
              hiddenSelections[] = {"Camo1","Camo2","Camo3"};
              hiddenSelectionsTextures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_o_red.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_turret_red.paa"};
              textureList[] = {"FU_Mrap_o_red", 1};
     class textureSources
     {
         class FU_Mrap_o_red
         {              displayName = "FU red";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_o_red.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_turret_red.paa"};
			materials[] = {}; 
			factions[] = {};
         };
      };
         class TransportWeapons
	{
         class _FU_rifle_B {weapon = "FU_shortrifle_o"; count = 2;};
         
         };

	class TransportMagazines 
	{
                class _FU_Mags_B  {magazine = "30Rnd_762x39_AK12_Mag_F" ;count = 15;};
                class _FU_Mags_B1 {magazine = "30Rnd_762x39_AK12_Mag_Tracer_F" ;count = 15;};
                class _FU_Mags_B7 {magazine = "HandGrenade"; count = 6;};
	};
class TransportItems
	{
class _fu_item1 {name = "ACE_elasticBandage";count = 20;};
class _fu_item4 {name = "ACE_epinephrine";count = 10;};
class _fu_item5 {name = "ACE_morphine";count = 6;};
class _fu_item10 {name = "SmokeShell";count = 10;};
class _fu_item11 {name = "TFAR_fadak";count = 10;};
class _fu_item12 {name = "ACE_splint";count = 10;};
class _fu_tool {name = "ToolKit"; count = 1;};
class _fu_detect1 {name = "MineDetector";count = 1;};

	};

};

class FU_Tank_red : B_MBT_01_cannon_F
{
              author = "Bolty";
              crew   = "FU_crew_bison";
              displayName = "(Bis)Merkava Mk IV M";
              side = 0;
              Faction = "FU_Faction_opfor";
              editorPreview = "\FU_Factions_MK2\data\editor\FU_tank_o_red.jpg";
              hiddenSelectionsTextures[] = {"\FU_Factions_MK2_vehicles\data\FU_tank_body_o_red.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_tank_turret_red.paa",
                                            "A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"};
              textureList[] = {"FU_tank_o_red", 1};
         class textureSources
     {
         class FU_tank_o_red
         {              displayName = "FU red";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_tank_body_o_red.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_tank_turret_red.paa",
                                      "A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"};
			materials[] = {}; 
			factions[] = {};
         };

     };
         class TransportWeapons
	{
         class _FU_rifle_B {weapon = "FU_shortrifle_o"; count = 2;};
         
         };

	class TransportMagazines 
	{
                class _FU_Mags_B  {magazine = "30Rnd_762x39_AK12_Mag_F" ;count = 15;};
                class _FU_Mags_B1 {magazine = "30Rnd_762x39_AK12_Mag_Tracer_F" ;count = 15;};
                class _FU_Mags_B7 {magazine = "HandGrenade"; count = 6;};
	};
class TransportItems
	{
class _fu_item1 {name = "ACE_elasticBandage";count = 20;};
class _fu_item4 {name = "ACE_epinephrine";count = 10;};
class _fu_item5 {name = "ACE_morphine";count = 6;};
class _fu_item10 {name = "SmokeShell";count = 10;};
class _fu_item11 {name = "TFAR_fadak";count = 10;};
class _fu_item12 {name = "ACE_splint";count = 10;};
class _fu_tool {name = "ToolKit"; count = 1;};
class _fu_detect1 {name = "MineDetector";count = 1;};

	};

};

};

