class CfgPatches
{
    class FU_faction_MKII_vehicles_i
    {
           name = "Freelance Union";
           Author = "Bolttrooper";
           units[] = {"FU_Tank_I","FU_Tank_s","FU_MRAP_i","FU_MRAP_hmg_i","FU_MRAP_gmg_i","FU_MRAP_s","FU_MRAP_hmg_s","FU_MRAP_gmg_s",
                      "FU_apc_I","FU_apc_2_I","FU_apc_S","FU_apc_2_S"};
           weapons[] = {};
   };
};

class cfgvehicles
{


class I_MBT_03_cannon_F;

class I_MRAP_03_F;
class I_MRAP_03_hmg_F;
class I_MRAP_03_gmg_F;

class I_APC_Wheeled_03_cannon_F;
class O_APC_Wheeled_02_rcws_v2_F;


class FU_Tank_I : I_MBT_03_cannon_F
{
              author = "Bolty";
              crew   = "FU_crew_swe";
              displayName = "(Swe)Leopard 2SG";
              side = 2;
              Faction = "FU_Faction_Indep";
              editorPreview = "\FU_Factions_MK2\data\editor\FU_tank_I.jpg";
              hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_tank_body.paa",
              "\FU_Factions_MK2\data\FU_tank_turret.paa",
              "\FU_Factions_MK2\data\FU_tank_rcws.paa",
              "A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa"};
              textureList[] = {"FU_tank_i_green", 1};
         class textureSources
     {
         class FU_tank_i_green
         {              displayName = "FU green";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2\data\FU_tank_body.paa",
                                      "\FU_Factions_MK2\data\FU_tank_turret.paa",
                                      "\FU_Factions_MK2\data\FU_tank_rcws.paa",
                                      "A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa"};
			materials[] = {}; 
			factions[] = {};
         };
         class FU_tank_i_white
         {              displayName = "FU white";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_tank_body_whi.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_tank_turret_whi.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_tank_rcws_whi.paa",
                                      "A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa"};
			materials[] = {}; 
			factions[] = {};
         };
     };
         class TransportWeapons
	{
         class _FU_rifle_B {weapon = "FU_longrifle_b"; count = 3;};
         
         };

	class TransportMagazines 
	{
		class _FU_Mags_B  {magazine =  "30Rnd_556x45_Stanag_green" ;count = 15;};
                class _FU_Mags_B1 {magazine =  "30Rnd_556x45_Stanag_Tracer_Green" ;count = 15;};
                class _FU_Mags_B7 {magazine = "HandGrenade"; count = 6;};
	};
        class TransportItems
	{
class _fu_item1 {name = "ACE_elasticBandage";count = 20;};
class _fu_item4 {name = "ACE_epinephrine";count = 10;};
class _fu_item5 {name = "ACE_morphine";count = 6;};
class _fu_item10 {name = "SmokeShell";count = 10;};
class _fu_item11 {name = "TFAR_anprc148jem";count = 10;};
class _fu_item12 {name = "ACE_splint";count = 10;};
class _fu_tool {name = "ToolKit"; count = 1;};
class _fu_detect1 {name = "MineDetector";count = 1;};

	};


};

class FU_Tank_s : I_MBT_03_cannon_F
{
              author = "Bolty";
              crew   = "FU_crew_s";
              displayName = "(UN)Leopard 2SG";
              side = 2;
              Faction = "FU_Faction_Indep";
              editorPreview = "\FU_Factions_MK2\data\editor\FU_Tank_s.jpg";
              hiddenSelectionsTextures[] = {"\FU_Factions_MK2_vehicles\data\FU_tank_body_whi.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_tank_turret_whi.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_tank_rcws_whi.paa",
                                      "A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa"};
        
              textureList[] = {"FU_tank_i_white", 1};
     class textureSources
     {
         class FU_tank_i_white
         {              displayName = "FU white";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_tank_body_whi.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_tank_turret_whi.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_tank_rcws_whi.paa",
                                      "A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa"};
			materials[] = {}; 
			factions[] = {};
         };
         class FU_tank_i_white_logo
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
         class _FU_rifle_B {weapon = "FU_longrifle_b"; count = 3;};
         
         };

	class TransportMagazines 
	{
		class _FU_Mags_B  {magazine =  "30Rnd_556x45_Stanag_green" ;count = 15;};
                class _FU_Mags_B1 {magazine =  "30Rnd_556x45_Stanag_Tracer_Green" ;count = 15;};
                class _FU_Mags_B7 {magazine = "HandGrenade"; count = 6;};
	};
        class TransportItems
	{
class _fu_item1 {name = "ACE_elasticBandage";count = 20;};
class _fu_item4 {name = "ACE_epinephrine";count = 10;};
class _fu_item5 {name = "ACE_morphine";count = 6;};
class _fu_item10 {name = "SmokeShell";count = 10;};
class _fu_item11 {name = "TFAR_anprc148jem";count = 10;};
class _fu_item12 {name = "ACE_splint";count = 10;};
class _fu_tool {name = "ToolKit"; count = 1;};
class _fu_detect1 {name = "MineDetector";count = 1;};

	};


};

class FU_APC_2_I : I_APC_Wheeled_03_cannon_F
{
              author = "Bolty";
              crew   = "FU_crew_swe";
              displayName = "(Swe)Pandur II";
              side = 2;
              Faction = "FU_Faction_Indep";
              editorPreview = "\FU_Factions_MK2\data\editor\FU_APC_2_I.jpg";
              hiddenSelectionsTextures[] = {"\FU_Factions_MK2_vehicles\data\FU_APC_body_b_gre.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_APC_wheel_b_gre.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_APC_rcws_b_gre.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_APC_extra_b_gre.paa"};
              textureList[] = {"FU_APC_i_green_2", 1};
     class textureSources
     {
         class FU_APC_i_green_2
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
         class FU_APC_s_white
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
         class FU_APC_s_white_logo
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
         class _FU_rifle_B {weapon = "FU_longrifle_b"; count = 3;};
         
         };

	class TransportMagazines 
	{
		class _FU_Mags_B  {magazine =  "30Rnd_556x45_Stanag_green" ;count = 15;};
                class _FU_Mags_B1 {magazine =  "30Rnd_556x45_Stanag_Tracer_Green" ;count = 15;};
                class _FU_Mags_B7 {magazine = "HandGrenade"; count = 6;};
	};
        class TransportItems
	{
class _fu_item1 {name = "ACE_elasticBandage";count = 20;};
class _fu_item4 {name = "ACE_epinephrine";count = 10;};
class _fu_item5 {name = "ACE_morphine";count = 6;};
class _fu_item10 {name = "SmokeShell";count = 10;};
class _fu_item11 {name = "TFAR_anprc148jem";count = 10;};
class _fu_item12 {name = "ACE_splint";count = 10;};
class _fu_tool {name = "ToolKit"; count = 1;};
class _fu_detect1 {name = "MineDetector";count = 1;};

	};


};

class FU_APC_2_S : I_APC_Wheeled_03_cannon_F
{
              author = "Bolty";
              crew   = "FU_crew_s";
              displayName = "(UN)Pandur II";
              side = 2;
              Faction = "FU_Faction_Indep";
              editorPreview = "\FU_Factions_MK2\data\editor\FU_APC_2_S.jpg";
              hiddenSelectionsTextures[] = {"\FU_Factions_MK2_vehicles\data\FU_APC_body_b_whi.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_APC_wheel_b_whi.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_APC_rcws_b_whi.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_APC_extra_b_whi.paa",
                                      "A3\Armor_F\Data\camonet_AAF_FIA_green_CO.paa","A3\armor_f\data\cage_G1_co.paa"};
              textureList[] = {"FU_APC_s_white", 1};
     class textureSources
     {
         class FU_APC_s_white
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
         class FU_APC_s_white_logo
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
         class _FU_rifle_B {weapon = "FU_longrifle_b"; count = 3;};
         
         };

	class TransportMagazines 
	{
		class _FU_Mags_B  {magazine =  "30Rnd_556x45_Stanag_green" ;count = 15;};
                class _FU_Mags_B1 {magazine =  "30Rnd_556x45_Stanag_Tracer_Green" ;count = 15;};
                class _FU_Mags_B7 {magazine = "HandGrenade"; count = 6;};
	};
        class TransportItems
	{
class _fu_item1 {name = "ACE_elasticBandage";count = 20;};
class _fu_item4 {name = "ACE_epinephrine";count = 10;};
class _fu_item5 {name = "ACE_morphine";count = 6;};
class _fu_item10 {name = "SmokeShell";count = 10;};
class _fu_item11 {name = "TFAR_anprc148jem";count = 10;};
class _fu_item12 {name = "ACE_splint";count = 10;};
class _fu_tool {name = "ToolKit"; count = 1;};
class _fu_detect1 {name = "MineDetector";count = 1;};

	};


};


class FU_APC_I : O_APC_Wheeled_02_rcws_v2_F
{
              author = "Bolty";
              crew   = "FU_crew_swe";
              displayName = "(Swe)Otokar";
              side = 2;
              Faction = "FU_Faction_Indep";
              editorPreview = "\FU_Factions_MK2\data\editor\FU_APC_I.jpg";
              hiddenSelectionsTextures[] = {"\FU_Factions_MK2_vehicles\data\FU_apc_body_i_gree.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_apc_top_i_gree.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_Turret_gree.paa",
                                      "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa","A3\armor_f\data\cage_csat_co.paa"};
              textureList[] = {"FU_APC_i_green", 1};
     class textureSources
     {
         class FU_APC_i_green
         {              displayName = "FU green";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_apc_body_i_gree.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_apc_top_i_gree.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_Turret_gree.paa",
                                      "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa","A3\armor_f\data\cage_csat_co.paa"};
			materials[] = {}; 
			factions[] = {};
         };
      };
         class TransportWeapons
	{
         class _FU_rifle_B {weapon = "FU_longrifle_b"; count = 3;};
         
         };

	class TransportMagazines 
	{
		class _FU_Mags_B  {magazine =  "30Rnd_556x45_Stanag_green" ;count = 15;};
                class _FU_Mags_B1 {magazine =  "30Rnd_556x45_Stanag_Tracer_Green" ;count = 15;};
                class _FU_Mags_B7 {magazine = "HandGrenade"; count = 6;};
	};
        class TransportItems
	{
class _fu_item1 {name = "ACE_elasticBandage";count = 20;};
class _fu_item4 {name = "ACE_epinephrine";count = 10;};
class _fu_item5 {name = "ACE_morphine";count = 6;};
class _fu_item10 {name = "SmokeShell";count = 10;};
class _fu_item11 {name = "TFAR_anprc148jem";count = 10;};
class _fu_item12 {name = "ACE_splint";count = 10;};
class _fu_tool {name = "ToolKit"; count = 1;};
class _fu_detect1 {name = "MineDetector";count = 1;};

	};


};

class FU_APC_S : O_APC_Wheeled_02_rcws_v2_F
{
              author = "Bolty";
              crew   = "FU_crew_s";
              displayName = "(UN)Otokar";
              side = 2;
              Faction = "FU_Faction_Indep";
              editorPreview = "\FU_Factions_MK2\data\editor\FU_APC_S.jpg";
              hiddenSelectionsTextures[] = {"\FU_Factions_MK2_vehicles\data\FU_apc_body_i_whi.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_apc_top_i_whi.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_Turret_whi.paa",
                                      "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa","A3\armor_f\data\cage_csat_co.paa"};
              textureList[] = {"FU_APC_s_white_apc", 1};
     class textureSources
     {
         class FU_APC_s_white_apc
         {              displayName = "FU white";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_apc_body_i_whi.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_apc_top_i_whi.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_Turret_whi.paa",
                                      "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa","A3\armor_f\data\cage_csat_co.paa"};
			materials[] = {}; 
			factions[] = {};
         };
         class FU_APC_s_white_apc_logo
         {              displayName = "FU white UN logo";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_apc_body_i_whi_logo.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_apc_top_i_whi.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_Turret_whi.paa",
                                      "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa","A3\armor_f\data\cage_csat_co.paa"};
			materials[] = {}; 
			factions[] = {};
         };
         class FU_APC_i_green
         {              displayName = "FU green";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_apc_body_i_gree.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_apc_top_i_gree.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_Turret_gree.paa",
                                      "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa","A3\armor_f\data\cage_csat_co.paa"};
			materials[] = {}; 
			factions[] = {};
         };
      };
         class TransportWeapons
	{
         class _FU_rifle_B {weapon = "FU_longrifle_s"; count = 3;};
         
         };

	class TransportMagazines 
	{
		class _FU_Mags_B  {magazine =  "30Rnd_556x45_Stanag_green" ;count = 15;};
                class _FU_Mags_B1 {magazine =  "30Rnd_556x45_Stanag_Tracer_Green" ;count = 15;};
                class _FU_Mags_B7 {magazine = "HandGrenade"; count = 6;};
	};
        class TransportItems
	{
class _fu_item1 {name = "ACE_elasticBandage";count = 20;};
class _fu_item4 {name = "ACE_epinephrine";count = 10;};
class _fu_item5 {name = "ACE_morphine";count = 6;};
class _fu_item10 {name = "SmokeShell";count = 10;};
class _fu_item11 {name = "TFAR_anprc148jem";count = 10;};
class _fu_item12 {name = "ACE_splint";count = 10;};
class _fu_tool {name = "ToolKit"; count = 1;};
class _fu_detect1 {name = "MineDetector";count = 1;};

	};


};


class FU_MRAP_i : I_MRAP_03_F
{
              author = "Bolty";
              crew   = "FU_crew_swe";
              displayName = "(Swe)Fennek";
              side = 2;
              Faction = "FU_Faction_Indep";
              editorPreview = "\FU_Factions_MK2\data\editor\FU_MRAP_i.jpg";
              hiddenSelections[] = {"Camo1","Camo2"};
              hiddenSelectionsTextures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_i_gree.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_turret_gree.paa"};
              textureList[] = {"FU_Mrap_i_green", 1};
     class textureSources
     {
         class FU_Mrap_i_green
         {              displayName = "FU green";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_i_gree.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_turret_gree.paa"};
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
                class _FU_Mags_B  {magazine = "30Rnd_556x45_Stanag_green" ;count = 15;};
                class _FU_Mags_B1 {magazine = "30Rnd_556x45_Stanag_Tracer_Green" ;count = 15;};
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


class FU_MRAP_hmg_i : I_MRAP_03_hmg_F
{
              author = "Bolty";
              crew   = "FU_crew_swe";
              displayName = "(Swe)Fennek HMG";
              side = 2;
              Faction = "FU_Faction_Indep";
              editorPreview = "\FU_Factions_MK2\data\editor\FU_MRAP_hmg_i.jpg";
              hiddenSelections[] = {"Camo1","Camo2"};
              hiddenSelectionsTextures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_i_gree.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_turret_gree.paa"};
              textureList[] = {"FU_Mrap_i_green", 1};
     class textureSources
     {
         class FU_Mrap_i_green
         {              displayName = "FU green";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_i_gree.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_turret_gree.paa"};
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
                class _FU_Mags_B  {magazine = "30Rnd_556x45_Stanag_green" ;count = 15;};
                class _FU_Mags_B1 {magazine = "30Rnd_556x45_Stanag_Tracer_Green" ;count = 15;};
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


class FU_MRAP_gmg_i : I_MRAP_03_gmg_F
{
              author = "Bolty";
              crew   = "FU_crew_swe";
              displayName = "(Swe)Fennek GMG";
              side = 2;
              Faction = "FU_Faction_Indep";
              editorPreview = "\FU_Factions_MK2\data\editor\FU_MRAP_hmg_i.jpg";
              hiddenSelections[] = {"Camo1","Camo2"};
              hiddenSelectionsTextures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_i_gree.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_turret_gree.paa"};
              textureList[] = {"FU_Mrap_i_green", 1};
     class textureSources
     {
         class FU_Mrap_i_green
         {              displayName = "FU green";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_i_gree.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_turret_gree.paa"};
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
                class _FU_Mags_B  {magazine = "30Rnd_556x45_Stanag_green" ;count = 15;};
                class _FU_Mags_B1 {magazine = "30Rnd_556x45_Stanag_Tracer_Green" ;count = 15;};
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




class FU_MRAP_s : I_MRAP_03_F
{
              author = "Bolty";
              crew   = "FU_crew_s";
              displayName = "(UN)Fennek";
              side = 2;
              Faction = "FU_Faction_Indep";
              editorPreview = "\FU_Factions_MK2\data\editor\FU_MRAP_s.jpg";
              hiddenSelections[] = {"Camo1","Camo2"};
              hiddenSelectionsTextures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_i_whi.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_turret_whi.paa"};
              textureList[] = {"FU_Mrap_i_white", 1};
     class textureSources
     {
         class FU_Mrap_i_white
         {              displayName = "FU white";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_i_whi.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_turret_whi.paa"};
			materials[] = {}; 
			factions[] = {};
         };
         class FU_Mrap_i_white_logo
         {              displayName = "FU white UN Logo";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_i_whi_logo.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_turret_whi.paa"};
			materials[] = {}; 
			factions[] = {};
         };
      };
         class TransportWeapons
	{
         class _FU_rifle_B {weapon = "FU_shortrifle_s"; count = 2;};
         
         };

	class TransportMagazines 
	{
                class _FU_Mags_B  {magazine = "30Rnd_556x45_Stanag_green" ;count = 15;};
                class _FU_Mags_B1 {magazine = "30Rnd_556x45_Stanag_Tracer_Green" ;count = 15;};
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


class FU_MRAP_hmg_s : I_MRAP_03_hmg_F
{
              author = "Bolty";
              crew   = "FU_crew_s";
              displayName = "(UN)Fennek HMG";
              side = 2;
              Faction = "FU_Faction_Indep";
              editorPreview = "\FU_Factions_MK2\data\editor\FU_MRAP_hmg_s.jpg";
              hiddenSelections[] = {"Camo1","Camo2"};
              hiddenSelectionsTextures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_i_whi.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_turret_whi.paa"};
              textureList[] = {"FU_Mrap_i_white", 1};
     class textureSources
     {
         class FU_Mrap_i_white
         {              displayName = "FU white";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_i_whi.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_turret_whi.paa"};
			materials[] = {}; 
			factions[] = {};
         };
         class FU_Mrap_i_white_logo
         {              displayName = "FU white UN Logo";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_i_whi_logo.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_turret_whi.paa"};
			materials[] = {}; 
			factions[] = {};
         };
      };
         class TransportWeapons
	{
         class _FU_rifle_B {weapon = "FU_shortrifle_s"; count = 2;};
         
         };

	class TransportMagazines 
	{
                class _FU_Mags_B  {magazine = "30Rnd_556x45_Stanag_green" ;count = 15;};
                class _FU_Mags_B1 {magazine = "30Rnd_556x45_Stanag_Tracer_Green" ;count = 15;};
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


class FU_MRAP_gmg_s : I_MRAP_03_gmg_F
{
              author = "Bolty";
              crew   = "FU_crew_s";
              displayName = "(UN)Fennek GMG";
              side = 2;
              Faction = "FU_Faction_Indep";
              editorPreview = "\FU_Factions_MK2\data\editor\FU_MRAP_hmg_s.jpg";
              hiddenSelections[] = {"Camo1","Camo2"};
              hiddenSelectionsTextures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_i_whi.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_turret_whi.paa"};
              textureList[] = {"FU_Mrap_i_white", 1};
     class textureSources
     {
         class FU_Mrap_i_white
         {              displayName = "FU white";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_i_whi.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_turret_whi.paa"};
			materials[] = {}; 
			factions[] = {};
         };
         class FU_Mrap_i_white_logo
         {              displayName = "FU white UN Logo";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_car_base_i_whi_logo.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_turret_whi.paa"};
			materials[] = {}; 
			factions[] = {};
         };
      };
         class TransportWeapons
	{
         class _FU_rifle_B {weapon = "FU_shortrifle_s"; count = 2;};
         
         };

	class TransportMagazines 
	{
                class _FU_Mags_B  {magazine = "30Rnd_556x45_Stanag_green" ;count = 15;};
                class _FU_Mags_B1 {magazine = "30Rnd_556x45_Stanag_Tracer_Green" ;count = 15;};
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



};

