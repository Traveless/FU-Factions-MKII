class CfgPatches
{
    class FU_faction_MKII_vehicles_b
    {
           name = "Freelance Union";
           Author = "Bolttrooper";
           units[] = {"FU_Tank_b","FU_MRAP_b","FU_MRAP_hmg_b","FU_MRAP_gmg_b","FU_apc_b","FU_apc_2_b","FU_apc_2_blk",};
           weapons[] = {};
   };
};

class cfgvehicles
{


class I_MBT_03_cannon_F;
class B_MRAP_01_F;
class B_MRAP_01_hmg_F;
class B_MRAP_01_gmg_F;

class I_APC_Wheeled_03_cannon_F;
class O_APC_Wheeled_02_rcws_v2_F;

class FU_APC_B : O_APC_Wheeled_02_rcws_v2_F
{
              author = "Bolty";
              crew   = "FU_crew_nor";
              displayName = "(Nor)Otokar";
              side = 1;
              Faction = "FU_Faction_blufor";
              editorPreview = "\FU_Factions_MK2\data\editor\FU_APC_i.jpg";
              hiddenSelectionsTextures[] = {"\FU_Factions_MK2_vehicles\data\FU_apc_body_i_whi.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_apc_top_i_whi.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_Turret_whi.paa",
                                      "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa","A3\armor_f\data\cage_csat_co.paa"};
              textureList[] = {"FU_APC_b_green", 1};
     class textureSources
     {
         class FU_APC_b_green
         {              displayName = "FU green";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_apc_body_i_gree.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_apc_top_i_gree.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_Turret_gree.paa",
                                      "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa","A3\armor_f\data\cage_csat_co.paa"};
			materials[] = {}; 
			factions[] = {};
         };
         class FU_APC_b_white_apc
         {              displayName = "FU white";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_apc_body_i_whi.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_apc_top_i_whi.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_Turret_whi.paa",
                                      "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa","A3\armor_f\data\cage_csat_co.paa"};
			materials[] = {}; 
			factions[] = {};
         };
         class FU_APC_b_white_apc_logo
         {              displayName = "FU white UN logo";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_apc_body_i_whi_logo.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_apc_top_i_whi.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_Turret_whi.paa",
                                      "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa","A3\armor_f\data\cage_csat_co.paa"};
			materials[] = {}; 
			factions[] = {};
         };

      };
         class TransportWeapons
	{
         class _FU_rifle_B {weapon = "FU_shortrifle_b"; count = 3;};
         
         };

	class TransportMagazines 
	{
                class _FU_Mags_B  {magazine = "30Rnd_556x45_Stanag_red" ;count = 15;};
                class _FU_Mags_B1 {magazine = "30Rnd_556x45_Stanag_Tracer_Red" ;count = 15;};
                class _FU_Mags_B7 {magazine = "HandGrenade"; count = 6;};
	};
class TransportItems
	{
class _fu_item1 {name = "ACE_elasticBandage";count = 20;};
class _fu_item4 {name = "ACE_epinephrine";count = 10;};
class _fu_item5 {name = "ACE_morphine";count = 6;};
class _fu_item10 {name = "SmokeShell";count = 10;};
class _fu_item11 {name = "TFAR_anprc152";count = 10;};
class _fu_item12 {name = "ACE_splint";count = 10;};
class _fu_tool {name = "ToolKit"; count = 1;};
class _fu_detect1 {name = "MineDetector";count = 1;};

	};

};


class FU_APC_2_B : I_APC_Wheeled_03_cannon_F
{
              author = "Bolty";
              crew   = "FU_crew_Nor";
              displayName = "(Nor)Pandur II";
              side = 1;
              Faction = "FU_Faction_blufor";
              editorPreview = "\FU_Factions_MK2\data\editor\FU_APC_2_i.jpg";
              hiddenSelectionsTextures[] = {"\FU_Factions_MK2_vehicles\data\FU_APC_body_b_gre.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_APC_wheel_b_gre.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_APC_rcws_b_gre.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_APC_extra_b_gre.paa",
                                      "A3\Armor_F\Data\camonet_AAF_FIA_green_CO.paa","A3\armor_f\data\cage_G1_co.paa"};
              textureList[] = {"FU_APC_b_green", 1};
     class textureSources
     {
         class FU_APC_b_green
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
         class FU_APC_b_blk
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
         class FU_APC_b_whi
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
         class FU_APC_b_white_logo
         {              displayName = "FU white UN logo";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_APC_body_b_whi.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_APC_wheel_b_whi_logo.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_APC_rcws_b_whi.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_APC_extra_b_whi.paa",
                                      "A3\Armor_F\Data\camonet_AAF_FIA_green_CO.paa","A3\armor_f\data\cage_G1_co.paa"};
			materials[] = {}; 
			factions[] = {};
         }; 
      };
         class TransportWeapons
	{
         class _FU_rifle_B {weapon = "FU_shortrifle_b"; count = 3;};
         
         };

	class TransportMagazines 
	{
                class _FU_Mags_B  {magazine = "30Rnd_556x45_Stanag_red" ;count = 15;};
                class _FU_Mags_B1 {magazine = "30Rnd_556x45_Stanag_Tracer_Red" ;count = 15;};
                class _FU_Mags_B7 {magazine = "HandGrenade"; count = 6;};
	};
class TransportItems
	{
class _fu_item1 {name = "ACE_elasticBandage";count = 20;};
class _fu_item4 {name = "ACE_epinephrine";count = 10;};
class _fu_item5 {name = "ACE_morphine";count = 6;};
class _fu_item10 {name = "SmokeShell";count = 10;};
class _fu_item11 {name = "TFAR_anprc152";count = 10;};
class _fu_item12 {name = "ACE_splint";count = 10;};
class _fu_tool {name = "ToolKit"; count = 1;};
class _fu_detect1 {name = "MineDetector";count = 1;};

	};

};


class FU_APC_2_blk : I_APC_Wheeled_03_cannon_F
{
              author = "Bolty";
              crew   = "FU_crew_blk";
              displayName = "(Blk)Pandur II";
              side = 1;
              Faction = "FU_Faction_blufor";
              editorPreview = "\FU_Factions_MK2\data\editor\FU_APC_2_blk.jpg";
              hiddenSelectionsTextures[] = {"\FU_Factions_MK2_vehicles\data\FU_APC_body_b_blk.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_APC_wheel_b_blk.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_APC_rcws_b_blk.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_APC_extra_b_blk.paa",
                                      "A3\Armor_F\Data\camonet_AAF_FIA_green_CO.paa","A3\armor_f\data\cage_G1_co.paa"};
              textureList[] = {"FU_APC_b_blk", 1};
     class textureSources
     {
         class FU_APC_b_green
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
         class FU_APC_b_blk
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
         class FU_APC_b_whi
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
         class FU_APC_b_white_logo
         {              displayName = "FU white UN logo";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_APC_body_b_whi.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_APC_wheel_b_whi_logo.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_APC_rcws_b_whi.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_APC_extra_b_whi.paa",
                                      "A3\Armor_F\Data\camonet_AAF_FIA_green_CO.paa","A3\armor_f\data\cage_G1_co.paa"};
			materials[] = {}; 
			factions[] = {};
         }; 
      };
         class TransportWeapons
	{
         class _FU_rifle_B {weapon = "FU_shortrifle_b"; count = 3;};
         
         };

	class TransportMagazines 
	{
                class _FU_Mags_B  {magazine = "30Rnd_556x45_Stanag_red" ;count = 15;};
                class _FU_Mags_B1 {magazine = "30Rnd_556x45_Stanag_Tracer_Red" ;count = 15;};
                class _FU_Mags_B7 {magazine = "HandGrenade"; count = 6;};
	};
class TransportItems
	{
class _fu_item1 {name = "ACE_elasticBandage";count = 20;};
class _fu_item4 {name = "ACE_epinephrine";count = 10;};
class _fu_item5 {name = "ACE_morphine";count = 6;};
class _fu_item10 {name = "SmokeShell";count = 10;};
class _fu_item11 {name = "TFAR_anprc152";count = 10;};
class _fu_item12 {name = "ACE_splint";count = 10;};
class _fu_tool {name = "ToolKit"; count = 1;};
class _fu_detect1 {name = "MineDetector";count = 1;};

	};

};


class FU_Tank_b : I_MBT_03_cannon_F
{
              author = "Bolty";
              crew   = "FU_crew_nor";
              displayName = "(Nor)Leopard 2SG";
              side = 1;
              Faction = "FU_Faction_blufor";
              editorPreview = "\FU_Factions_MK2\data\editor\FU_tank_I.jpg";
              hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_tank_body.paa",
              "\FU_Factions_MK2\data\FU_tank_turret.paa",
              "\FU_Factions_MK2\data\FU_tank_rcws.paa",
              "A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa"};
     textureList[] = {"FU_tank_b_green", 1};
     class textureSources
     {
         class FU_tank_b_green
         {              displayName = "FU green";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2\data\FU_tank_body.paa",
                                      "\FU_Factions_MK2\data\FU_tank_turret.paa",
                                      "\FU_Factions_MK2\data\FU_tank_rcws.paa",
                                      "A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa"};
			materials[] = {}; 
			factions[] = {};
         };
         class FU_tank_b_white
         {              displayName = "FU white";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_tank_body_whi.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_tank_turret_whi.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_tank_rcws_whi.paa",
                                      "A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa"};
			materials[] = {}; 
			factions[] = {};
         };
         class FU_tank_b_white_logo
         {              displayName = "FU white UN logo";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_tank_body_whi_logo.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_tank_turret_whi.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_tank_rcws_whi.paa",
                                      "A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa"};
			materials[] = {}; 
			factions[] = {};
         };
      };
         class TransportWeapons
	{
         class _FU_rifle_B {weapon = "FU_shortrifle_b"; count = 3;};
         
         };

	class TransportMagazines 
	{
                class _FU_Mags_B  {magazine = "30Rnd_556x45_Stanag_red" ;count = 15;};
                class _FU_Mags_B1 {magazine = "30Rnd_556x45_Stanag_Tracer_Red" ;count = 15;};
                class _FU_Mags_B7 {magazine = "HandGrenade"; count = 6;};
	};
class TransportItems
	{
class _fu_item1 {name = "ACE_elasticBandage";count = 20;};
class _fu_item4 {name = "ACE_epinephrine";count = 10;};
class _fu_item5 {name = "ACE_morphine";count = 6;};
class _fu_item10 {name = "SmokeShell";count = 10;};
class _fu_item11 {name = "TFAR_anprc152";count = 10;};
class _fu_item12 {name = "ACE_splint";count = 10;};
class _fu_tool {name = "ToolKit"; count = 1;};
class _fu_detect1 {name = "MineDetector";count = 1;};

	};

};

class FU_MRAP_b : B_MRAP_01_F
{
              author = "Bolty";
              crew   = "FU_crew_blk";
              displayName = "(Blk)M-ATV";
              side = 1;
              Faction = "FU_Faction_blufor";
              editorPreview = "\FU_Factions_MK2\data\editor\FU_MRAP_b.jpg";
              hiddenSelectionsTextures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_b_blk.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_car_top_b_blk.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_turret_blk.paa"};

     textureList[] = {"FU_Mrap_b_blk", 1};
     class textureSources
     {
         class FU_Mrap_b_blk
         {              displayName = "FU blk";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_b_blk.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_car_top_b_blk.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_turret_blk.paa"};
			materials[] = {}; 
			factions[] = {};
         };
         class FU_Mrap_b_whi
         {              displayName = "FU White";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_b_ghi.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_car_top_b_ghi.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_turret_whi.paa"};
			materials[] = {}; 
			factions[] = {};
         };
      };
         class TransportWeapons
	{
         class _FU_rifle_B {weapon = "FU_shortrifle_b"; count = 2;};
         
         };

	class TransportMagazines 
	{
                class _FU_Mags_B  {magazine = "30Rnd_556x45_Stanag_red" ;count = 15;};
                class _FU_Mags_B1 {magazine = "30Rnd_556x45_Stanag_Tracer_Red" ;count = 15;};
                class _FU_Mags_B7 {magazine = "HandGrenade"; count = 6;};
	};
class TransportItems
	{
class _fu_item1 {name = "ACE_elasticBandage";count = 20;};
class _fu_item4 {name = "ACE_epinephrine";count = 10;};
class _fu_item5 {name = "ACE_morphine";count = 6;};
class _fu_item10 {name = "SmokeShell";count = 10;};
class _fu_item11 {name = "TFAR_anprc152";count = 10;};
class _fu_item12 {name = "ACE_splint";count = 10;};
class _fu_tool {name = "ToolKit"; count = 1;};
class _fu_detect1 {name = "MineDetector";count = 1;};

	};

};


class FU_MRAP_hmg_b : B_MRAP_01_hmg_F
{
              author = "Bolty";
              crew   = "FU_crew_blk";
              displayName = "(Blk)M-ATV HMG";
              side = 1;
              Faction = "FU_Faction_blufor";
              editorPreview = "\FU_Factions_MK2\data\editor\FU_MRAP_hmg_b.jpg";
              hiddenSelectionsTextures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_b_blk.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_car_top_b_blk.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_turret_blk.paa"};

     textureList[] = {"FU_Mrap_b_blk", 1};
     class textureSources
     {
         class FU_Mrap_b_blk
         {              displayName = "FU blk";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_b_blk.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_car_top_b_blk.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_turret_blk.paa"};
			materials[] = {}; 
			factions[] = {};
         };
         class FU_Mrap_b_whi
         {              displayName = "FU White";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_b_ghi.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_car_top_b_ghi.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_turret_whi.paa"};
			materials[] = {}; 
			factions[] = {};
         };
      };
         class TransportWeapons
	{
         class _FU_rifle_B {weapon = "FU_shortrifle_b"; count = 2;};
         
         };

	class TransportMagazines 
	{
                class _FU_Mags_B  {magazine = "30Rnd_556x45_Stanag_red" ;count = 15;};
                class _FU_Mags_B1 {magazine = "30Rnd_556x45_Stanag_Tracer_Red" ;count = 15;};
                class _FU_Mags_B7 {magazine = "HandGrenade"; count = 6;};
	};
class TransportItems
	{
class _fu_item1 {name = "ACE_elasticBandage";count = 20;};
class _fu_item4 {name = "ACE_epinephrine";count = 10;};
class _fu_item5 {name = "ACE_morphine";count = 6;};
class _fu_item10 {name = "SmokeShell";count = 10;};
class _fu_item11 {name = "TFAR_anprc152";count = 10;};
class _fu_item12 {name = "ACE_splint";count = 10;};
class _fu_tool {name = "ToolKit"; count = 1;};
class _fu_detect1 {name = "MineDetector";count = 1;};

	};

};


class FU_MRAP_gmg_b : B_MRAP_01_gmg_F
{
              author = "Bolty";
              crew   = "FU_crew_blk";
              displayName = "(Blk)M-ATV GMG";
              side = 1;
              Faction = "FU_Faction_blufor";
              editorPreview = "\FU_Factions_MK2\data\editor\FU_MRAP_hmg_b.jpg";
              hiddenSelectionsTextures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_b_blk.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_car_top_b_blk.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_turret_blk.paa"};

     textureList[] = {"FU_Mrap_b_blk", 1};
     class textureSources
     {
         class FU_Mrap_b_blk
         {              displayName = "FU blk";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_b_blk.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_car_top_b_blk.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_turret_blk.paa"};
			materials[] = {}; 
			factions[] = {};
         };
         class FU_Mrap_b_whi
         {              displayName = "FU White";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_b_ghi.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_car_top_b_ghi.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_turret_whi.paa"};
			materials[] = {}; 
			factions[] = {};
         };
      };
         class TransportWeapons
	{
         class _FU_rifle_B {weapon = "FU_shortrifle_b"; count = 2;};
         
         };

	class TransportMagazines 
	{
                class _FU_Mags_B  {magazine = "30Rnd_556x45_Stanag_red" ;count = 15;};
                class _FU_Mags_B1 {magazine = "30Rnd_556x45_Stanag_Tracer_Red" ;count = 15;};
                class _FU_Mags_B7 {magazine = "HandGrenade"; count = 6;};
	};
class TransportItems
	{
class _fu_item1 {name = "ACE_elasticBandage";count = 20;};
class _fu_item4 {name = "ACE_epinephrine";count = 10;};
class _fu_item5 {name = "ACE_morphine";count = 6;};
class _fu_item10 {name = "SmokeShell";count = 10;};
class _fu_item11 {name = "TFAR_anprc152";count = 10;};
class _fu_item12 {name = "ACE_splint";count = 10;};
class _fu_tool {name = "ToolKit"; count = 1;};
class _fu_detect1 {name = "MineDetector";count = 1;};

	};

};


class FU_MRAP_b_2 : FU_MRAP_b
{
              author = "Bolty";
              crew   = "FU_crew_s";
              displayName = "(S)M-ATV";
              side = 1;
              Faction = "FU_Faction_blufor";
              editorPreview = "\FU_Factions_MK2\data\editor\FU_MRAP_b_2.jpg";
              hiddenSelectionsTextures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_b_ghi.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_car_top_b_ghi.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_turret_whi.paa"};

     textureList[] = {"FU_Mrap_b_blk", 1};
};
class FU_MRAP_b_2_hmg : FU_MRAP_hmg_b
{
              author = "Bolty";
              crew   = "FU_crew_s";
              displayName = "(S)M-ATV HMG";
              side = 1;
              Faction = "FU_Faction_blufor";
              editorPreview = "\FU_Factions_MK2\data\editor\FU_MRAP_b_2_hmg.jpg";
              hiddenSelectionsTextures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_b_ghi.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_car_top_b_ghi.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_turret_whi.paa"};

     textureList[] = {"FU_Mrap_b_blk", 1};
};
class FU_MRAP_b_2_GMG : FU_MRAP_gmg_b
{
              author = "Bolty";
              crew   = "FU_crew_s";
              displayName = "(S)M-ATV GMG";
              side = 1;
              Faction = "FU_Faction_blufor";
              editorPreview = "\FU_Factions_MK2\data\editor\FU_MRAP_b_2_hmg.jpg";
              hiddenSelectionsTextures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_b_ghi.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_car_top_b_ghi.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_turret_whi.paa"};

     textureList[] = {"FU_Mrap_b_blk", 1};
};



};

