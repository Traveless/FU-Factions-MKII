class CfgPatches
{
    class FU_faction_MKII_vehicles_t
    {
           name = "Freelance Union";
           Author = "Bolttrooper";
           units[] = {"FU_Truck_b","FU_Truck_o","FU_Truck_s"};
           weapons[] = {};
   };
};

class cfgvehicles
{

class O_Truck_02_covered_F;
class I_Truck_02_covered_F;


class FU_Truck_b : O_Truck_02_covered_F
{
              author = "Bolty";
              crew   = "FU_crew_nor";
              displayName = "(Nor)KamAZ Transport";
              side = 1;
              Faction = "FU_Faction_blufor";
              editorPreview = "\FU_Factions_MK2\data\editor\FU_truck_b.jpg";
              hiddenSelectionsTextures[] = {"\FU_Factions_MK2_vehicles\data\FU_Truck_body_gre.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_truck_can_gre.paa",
                                            "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
              textureList[] = {"FU_truck_b_green", 1};
     class textureSources
     {
         class FU_truck_b_green
         {              displayName = "FU green";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_Truck_body_gre.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_truck_can_gre.paa",
                                      "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
			materials[] = {}; 
			factions[] = {};
         };
         class FU_truck_o_red
         {              displayName = "FU red";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_Truck_body_red.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_truck_can_red.paa",
                                      "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
			materials[] = {}; 
			factions[] = {};
         };
         class FU_truck_o_whi
         {              displayName = "FU Camo";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_Truck_body_whi.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_truck_Can_whi_logo.paa",
                                      "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
			materials[] = {}; 
			factions[] = {};
         };
         class FU_truck_o_whi_logo
         {              displayName = "FU white";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_Truck_body_whi.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_truck_can_whi.paa",
                                      "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
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

class FU_Truck_o : O_Truck_02_covered_F
{
              author = "Bolty";
              crew   = "FU_crew_bison";
              displayName = "(Bis)KamAZ Transport";
              side = 0;
              Faction = "FU_Faction_opfor";
              editorPreview = "\FU_Factions_MK2\data\editor\FU_truck_o.jpg";
              hiddenSelectionsTextures[] = {"\FU_Factions_MK2_vehicles\data\FU_Truck_body_red.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_truck_can_red.paa",
                                            "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
              textureList[] = {"FU_truck_b_red", 1};
     class textureSources
     {
         class FU_truck_b_green
         {              displayName = "FU green";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_Truck_body_gre.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_truck_can_gre.paa",
                                      "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
			materials[] = {}; 
			factions[] = {};
         };
         class FU_truck_o_red
         {              displayName = "FU red";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_Truck_body_red.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_truck_can_red.paa",
                                      "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
			materials[] = {}; 
			factions[] = {};
         };
         class FU_truck_o_whi
         {              displayName = "FU Camo";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_Truck_body_whi.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_truck_Can_whi_logo.paa",
                                      "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
			materials[] = {}; 
			factions[] = {};
         };
         class FU_truck_o_whi_logo
         {              displayName = "FU white";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_Truck_body_whi.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_truck_can_whi.paa",
                                      "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
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


class FU_Truck_s : I_Truck_02_covered_F
{
              author = "Bolty";
              crew   = "FU_crew_s";
              displayName = "(UN)KamAZ Transport";
              side = 2;
              Faction = "FU_Faction_Indep";
              editorPreview = "\FU_Factions_MK2\data\editor\FU_truck_s.jpg";
              hiddenSelectionsTextures[] = {"\FU_Factions_MK2_vehicles\data\FU_truck_body_whi.paa",
                                            "\FU_Factions_MK2_vehicles\data\FU_Truck_Can_whi_logo.paa",
                                            "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
              textureList[] = {"FU_truck_o_whi", 1};
     class textureSources
     {
         class FU_truck_b_green
         {              displayName = "FU green";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_Truck_body_gre.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_truck_can_gre.paa",
                                      "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
			materials[] = {}; 
			factions[] = {};
         };
         class FU_truck_o_red
         {              displayName = "FU red";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_Truck_body_red.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_truck_can_red.paa",
                                      "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
			materials[] = {}; 
			factions[] = {};
         };
         class FU_truck_o_whi
         {              displayName = "FU Camo";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_Truck_body_whi.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_truck_Can_whi_logo.paa",
                                      "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
			materials[] = {}; 
			factions[] = {};
         };
         class FU_truck_o_whi_logo
         {              displayName = "FU white";
			author = "bolty";
			textures[] = {"\FU_Factions_MK2_vehicles\data\FU_Truck_body_whi.paa",
                                      "\FU_Factions_MK2_vehicles\data\FU_truck_can_whi.paa",
                                      "\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
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



};

