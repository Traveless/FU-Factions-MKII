class CfgPatches
{
    class FU_faction_MKII_weapons
    {
           name = "Freelance Union";
           Author = "Bolttrooper";
           units[] = {"FU_Crate_b","FU_Crate_o","FU_Crate_i","FU_ammo_b","FU_ammo_o","FU_ammo_i"};
           weapons[] = {};
   };
};

class cfgvehicles
{

class FU_Medic_backpack;
class FU_Crew_backpack; 
class B_kitbag_base_fu;
class TFAR_rt1523g_sage;
class TFAR_mr3000;
class B_carryall_base_fu;
class TFAR_rt1523g_black;
class B_supplyCrate_F;
class box_NATO_Ammo_F;



class FU_LMG_backpack_b : B_kitbag_base_fu
{
        scope = 1;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_kitbag_winter.paa"};
class TransportItems {

class _fu_ammo1 {name = "200Rnd_556x45_Box_Red_F"; count = 1;};

	};
};
class FU_lead_backpack_b : TFAR_rt1523g_sage
{
        displayName = "FU rt1523g";
       scope = 1;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_bigradio_winter.paa"};
class TransportItems {

class _fu_ammo1 {name = "ACE_HuntIR_monitor"; count = 1;};
class _fu_ammo2 {name = "1Rnd_Smoke_Grenade_shell";count = 3;};
class _fu_ammo3 {name = "1Rnd_HE_Grenade_shell";count = 10;};
class _fu_ammo4 {name = "ACE_HuntIR_M203";count = 2;};
class _fu_ammo5 {name = "ACE_40mm_Flare_white";count = 2;};

	};
};
class FU_lead_backpack_bb : TFAR_rt1523g_black
{
        displayName = "FU rt1523g";
       scope = 1;
class TransportItems {

class _fu_ammo1 {name = "ACE_HuntIR_monitor"; count = 1;};
class _fu_ammo2 {name = "1Rnd_Smoke_Grenade_shell";count = 3;};
class _fu_ammo3 {name = "1Rnd_HE_Grenade_shell";count = 10;};
class _fu_ammo4 {name = "ACE_HuntIR_M203";count = 2;};
class _fu_ammo5 {name = "ACE_40mm_Flare_white";count = 2;};

	};
};

class FU_exp_backpack_b : B_carryall_base_fu
{
        displayName = "FU Carryall";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_carryall_winter.paa"};
class TransportItems {

class _fu_ammo1 {name = "DemoCharge_Remote_Mag"; count = 2;};
class _fu_ammo2 {name = "SatchelCharge_Remote_Mag";count = 1;};
class _fu_ammo3 {name = "ACE_Clacker";count = 1;};
class _fu_ammo4 {name = "MineDetector";count = 1;};
class _fu_ammo5 {name = "ACE_DefusalKit";count = 1;};

	};
};



class FU_LMG_backpack_o : B_kitbag_base_fu
{
        scope = 1;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_blk_co.paa"};
class TransportItems {

class _fu_ammo1 {name = "150Rnd_762x54_Box"; count = 2;};

	};
};

class FU_LAT_backpack_o : B_kitbag_base_fu
{
        scope = 1;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_blk_co.paa"};
class TransportItems {

class _fu_ammo1 {name = "150Rnd_762x54_Box"; count = 2;};
class _fu_ammo2 {name = "RPG32_F"; count = 3;};

	};
};

class FU_lead_backpack_o : TFAR_mr3000
{       scope = 1;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_radio_bdu.paa"};
class TransportItems {

class _fu_ammo1 {name = "1Rnd_Smoke_Grenade_shell";count = 3;};
class _fu_ammo2 {name = "1Rnd_HE_Grenade_shell";count = 10;};
class _fu_ammo4 {name = "ACE_40mm_Flare_white";count = 2;};

	};
};
class FU_exp_backpack_o : B_kitbag_base_fu
{
        displayName = "FU Kitbag";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_blk_co.paa"};
class TransportItems {

class _fu_ammo1 {name = "DemoCharge_Remote_Mag"; count = 2;};
class _fu_ammo2 {name = "SatchelCharge_Remote_Mag";count = 1;};
class _fu_ammo3 {name = "ACE_Clacker";count = 1;};
class _fu_ammo4 {name = "MineDetector";count = 1;};
class _fu_ammo5 {name = "ACE_DefusalKit";count = 1;};

	};
};



class FU_LMG_backpack_i : B_kitbag_base_fu
{
        scope = 1;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_kitbag_biz.paa"};
class TransportItems {

class _fu_ammo1 {name = "200Rnd_65x39_cased_Box_Red"; count = 2;};

	};
};
class FU_lead_backpack_I : TFAR_mr3000
{       scope = 1;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_radio_biz.paa"};
class TransportItems {

class _fu_ammo1 {name = "ACE_40mm_Flare_white"; count = 4;};
class _fu_ammo2 {name = "1Rnd_Smoke_Grenade_shell";count = 3;};
class _fu_ammo3 {name = "1Rnd_HE_Grenade_shell";count = 10;};

	};
};
class FU_exp_backpack_I : B_kitbag_base_fu
{
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_kitbag_biz.paa"};
class TransportItems {

class _fu_ammo1 {name = "DemoCharge_Remote_Mag"; count = 2;};
class _fu_ammo2 {name = "SatchelCharge_Remote_Mag";count = 1;};
class _fu_ammo3 {name = "ACE_Clacker";count = 1;};
class _fu_ammo4 {name = "MineDetector";count = 1;};
class _fu_ammo5 {name = "ACE_DefusalKit";count = 1;};

	};
};


class FU_LMG_backpack_s : B_kitbag_base_fu
{
        scope = 1;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_blk_co.paa"};
class TransportItems {

class _fu_ammo1 {name = "20Rnd_762x51_Mag"; count = 2;};

	};
};
class FU_lead_backpack_s : TFAR_rt1523g_black
{
        displayName = "rt1523g";
       scope = 1;
class TransportItems {

class _fu_ammo1 {name = "ACE_30Rnd_556x45_Stanag_M995_AP_mag"; count = 5;};
class _fu_ammo2 {name = "SmokeShell";count = 10;};

	};
};

class FU_exp_backpack_s : B_carryall_base_fu
{
        displayName = "Carryall";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_blk_co.paa"};
class TransportItems {

class _fu_ammo1 {name = "DemoCharge_Remote_Mag"; count = 2;};
class _fu_ammo2 {name = "SatchelCharge_Remote_Mag";count = 1;};
class _fu_ammo3 {name = "ACE_Clacker";count = 1;};
class _fu_ammo4 {name = "MineDetector";count = 1;};
class _fu_ammo5 {name = "ACE_DefusalKit";count = 1;};

	};
};





class FU_Medic_backpack_b : FU_medic_backpack
{
   hiddenSelections[] = {"Camo"};
   hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_kitbag_winter.paa"};
};
class FU_Crew_backpack_b : FU_Crew_backpack
{
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_radio_winter.paa"};
};

class FU_Medic_backpack_jungle : FU_medic_backpack
{
   hiddenSelections[] = {"Camo"};
   hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_kitbag_jungle.paa"};
};
class FU_Crew_backpack_jungle : FU_Crew_backpack
{
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_radio_jungle.paa"};
};
class FU_LMG_backpack_jungle : FU_LMG_backpack_b
{
        scope = 1;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_kitbag_jungle.paa"};
};
class FU_lead_backpack_jungle : FU_Lead_backpack_b
{       scope = 1;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_bigradio_jungle.paa"};
};
class FU_exp_backpack_jungle : FU_exp_backpack_b
{       scope = 1;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_carryall_jungle.paa"};
};
class FU_LMG_backpack_bb : FU_LMG_backpack_b
{
        scope = 1;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_blk_co.paa"};
};



class FU_Medic_backpack_o : FU_medic_backpack
{
   hiddenSelections[] = {"Camo"};
   hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_blk_co.paa"};
};
class FU_Crew_backpack_o : FU_Crew_backpack
{
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_radio_bdu.paa"};
};



class FU_Medic_backpack_i : FU_medic_backpack
{
   hiddenSelections[] = {"Camo"};
   hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_kitbag_biz.paa"};
};
class FU_Crew_backpack_i : FU_Crew_backpack
{
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_radio_biz.paa"};
};


class FU_exp_backpack_N : FU_exp_backpack_i
{       scope = 1;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_kitbag_nor.paa"};
};
class FU_Crew_backpack_n : FU_Crew_backpack
{
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_radio_nor.paa"};
};
class FU_lead_backpack_N : FU_lead_backpack_I
{       scope = 1;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_radio_nor.paa"};
};

class FU_LMG_backpack_N : FU_LMG_backpack_b
{       scope = 1;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_kitbag_nor.paa"};
};
class FU_Medic_backpack_N : FU_medic_backpack
{
   hiddenSelections[] = {"Camo"};
   hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_kitbag_nor.paa"};
};
class FU_LAT_backpack_n : B_kitbag_base_fu
{
        scope = 1;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_kitbag_nor.paa"};
class TransportItems {

class _fu_ammo1 {name = "200Rnd_556x45_Box_Red_F"; count = 1;};
class _fu_ammo2 {name = "MRAWS_HEAT55_F"; count = 3;};

	};
};
class FU_LAT_backpack_bel : B_kitbag_base_fu
{
        scope = 1;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_blk_co.paa"};
class TransportItems {

class _fu_ammo1 {name = "150Rnd_762x54_Box"; count = 1;};
class _fu_ammo2 {name = "MRAWS_HEAT55_F"; count = 3;};

	};
};

class FU_exp_backpack_swe: FU_exp_backpack_i
{       scope = 1;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_kitbag_swe.paa"};
};
class FU_Crew_backpack_swe: FU_Crew_backpack
{
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_radio_swe.paa"};
};
class FU_lead_backpack_swe: FU_lead_backpack_I
{       scope = 1;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_radio_swe.paa"};
};

class FU_LMG_backpack_swe: FU_LMG_backpack_b
{       scope = 1;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_kitbag_swe.paa"};
};
class FU_Medic_backpack_swe: FU_medic_backpack
{
   hiddenSelections[] = {"Camo"};
   hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_kitbag_swe.paa"};
};
class FU_LAT_backpack_swe: B_kitbag_base_fu
{
        scope = 1;
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\FU_Factions_MK2\data\FU_kitbag_swe.paa"};
class TransportItems {

class _fu_ammo1 {name = "200Rnd_556x45_Box_Red_F"; count = 1;};
class _fu_ammo2 {name = "MRAWS_HEAT55_F"; count = 3;};

	};
};



class FU_Crate_b : B_supplyCrate_F 
{
	scope = 2;
	vehicleClass = "Ammo";
	displayName = "FU Supplies (BLUFOR)";
	transportMaxWeapons = 25;
	transportMaxMagazines = 500;
	class TransportWeapons
	{
         class _FU_ATlauncher_B {weapon = "launch_NLAW_F"; count = 2;};
         
         };

	class TransportMagazines 
	{
		class _FU_Mags_B  {magazine = "30Rnd_556x45_Stanag_red" ;count = 25;};
                class _FU_Mags_B1 {magazine = "30Rnd_556x45_Stanag_Tracer_Red" ;count = 25;};
                class _FU_Mags_B2 {magazine = "1Rnd_Smoke_Grenade_shell" ;count = 10;};
                class _FU_Mags_B3 {magazine = "1Rnd_HE_Grenade_shell" ;count = 10;};
                class _FU_Mags_B4 {magazine = "16Rnd_9x21_Mag" ;count = 10;};
                class _FU_Mags_B5 {magazine = "ACE_40mm_Flare_white" ;count = 10;};
                class _FU_Mags_B6 {magazine = "ACE_HuntIR_M203" ;count = 5;};
                class _FU_Mags_B7 {magazine = "HandGrenade"; count = 8;};
                class _FU_Mags_B8 {magazine = "Laserbatteries"; count = 5;};
                class _FU_Mags_B9 {magazine = "200Rnd_556x45_Box_Red_F"; count = 3;};
	};
	class TransportItems
	{
class _fu_item_bino {name = "Laserdesignator"; count = 2;};
class _fu_item {name = "ACE_quikclot"; count = 30;};
class _fu_item1 {name = "ACE_elasticBandage";count = 30;};
class _fu_item2 {name = "ACE_fieldDressing";count = 30;};
class _fu_item3 {name = "ACE_packingbandage";count = 30;};
class _fu_item4 {name = "ACE_epinephrine";count = 20;};
class _fu_item5 {name = "ACE_morphine";count = 10;};
class _fu_item6 {name = "ACE_tourniquet";count = 30;};
class _fu_item8 {name = "ACE_BloodIV";count = 10;};
class _fu_item9{name = "ACE_BloodIV_500";count = 10;};
class _fu_item0 {name = "ACE_BloodIV_250";count = 10;};
class _fu_item10 {name = "SmokeShell";count = 20;};
class _fu_item11 {name = "TFAR_anprc152";count = 10;};
class _fu_item12 {name = "ACE_splint";count = 20;};
class _fu_item13 {name = "ACE_surgicalKit";count = 3;};

	};
        class TransportBackpacks 
        {
        class _fu_back {backpack = "FU_literadio_bdu"; count = 2;};
        class _fu_back1 {backpack = "FU_kitbag_black"; count = 2;};
        };
};
class FU_Crate_o : B_supplyCrate_F 
{
	scope = 2;
	vehicleClass = "Ammo";
	displayName = "FU Supplies (OPFOR)";
	transportMaxWeapons = 25;
	transportMaxMagazines = 500;
	class TransportWeapons
	{
         class _FU_ATlauncher_B {weapon = "launch_RPG32_green_F"; count = 2;};
         
         };

	class TransportMagazines 
	{
		class _FU_Mags_B  {magazine = "30Rnd_762x39_AK12_Mag_F" ;count = 25;};
                class _FU_Mags_B1 {magazine = "30Rnd_762x39_AK12_Mag_Tracer_F" ;count = 25;};
                class _FU_Mags_B2 {magazine = "1Rnd_Smoke_Grenade_shell" ;count = 10;};
                class _FU_Mags_B3 {magazine = "1Rnd_HE_Grenade_shell" ;count = 10;};
                class _FU_Mags_B4 {magazine = "16Rnd_9x21_Mag" ;count = 10;};
                class _FU_Mags_B5 {magazine = "ACE_40mm_Flare_white" ;count = 10;};
                class _FU_Mags_B7 {magazine = "HandGrenade"; count = 8;};
                class _FU_Mags_B8 {magazine = "Laserbatteries"; count = 5;};
                class _FU_Mags_B9 {magazine = "150Rnd_762x54_Box"; count = 3;};
                class _FU_Mags_B0 {magazine = "RPG32_HE_F"; count = 2;};
                class _FU_Mags_BA {magazine = "RPG32_F"; count = 2;};
	};
	class TransportItems
	{
class _fu_item_bino {name = "Laserdesignator"; count = 2;};
class _fu_item {name = "ACE_quikclot"; count = 30;};
class _fu_item1 {name = "ACE_elasticBandage";count = 30;};
class _fu_item2 {name = "ACE_fieldDressing";count = 30;};
class _fu_item3 {name = "ACE_packingbandage";count = 30;};
class _fu_item4 {name = "ACE_epinephrine";count = 20;};
class _fu_item5 {name = "ACE_morphine";count = 10;};
class _fu_item6 {name = "ACE_tourniquet";count = 30;};
class _fu_item8 {name = "ACE_BloodIV";count = 10;};
class _fu_item9{name = "ACE_BloodIV_500";count = 10;};
class _fu_item0 {name = "ACE_BloodIV_250";count = 10;};
class _fu_item10 {name = "SmokeShell";count = 20;};
class _fu_item11 {name = "TFAR_anprc152";count = 10;};
class _fu_item12 {name = "ACE_splint";count = 20;};
class _fu_item13 {name = "ACE_surgicalKit";count = 3;};

	};
        class TransportBackpacks 
        {
        class _fu_back {backpack = "FU_literadio_bdu"; count = 2;};
        class _fu_back1 {backpack = "FU_kitbag_black"; count = 2;};
        };
};
class FU_Crate_i : B_supplyCrate_F 
{
	scope = 2;
	vehicleClass = "Ammo";
	displayName = "FU Supplies (INDEP)";
	transportMaxWeapons = 25;
	transportMaxMagazines = 500;
	class TransportWeapons
	{
         class _FU_ATlauncher_B {weapon = "launch_NLAW_F"; count = 2;};
         
         };

	class TransportMagazines 
	{
		class _FU_Mags_B  {magazine = "30Rnd_556x45_Stanag_Tracer_Green" ;count = 25;};
                class _FU_Mags_B1 {magazine = "30Rnd_556x45_Stanag_green" ;count = 25;};
                class _FU_Mags_B2 {magazine = "1Rnd_Smoke_Grenade_shell" ;count = 10;};
                class _FU_Mags_B3 {magazine = "1Rnd_HE_Grenade_shell" ;count = 10;};
                class _FU_Mags_B4 {magazine = "9Rnd_45ACP_Mag" ;count = 10;};
                class _FU_Mags_B5 {magazine = "ACE_40mm_Flare_white" ;count = 10;};
                class _FU_Mags_B6 {magazine = "20Rnd_762x51_Mag"; count = 5;};
                class _FU_Mags_B7 {magazine = "HandGrenade"; count = 8;};
                class _FU_Mags_B8 {magazine = "Laserbatteries"; count = 5;};
                class _FU_Mags_B9 {magazine = "200Rnd_65x39_cased_Box_Red"; count = 3;};
	};
	class TransportItems
	{
class _fu_item_bino {name = "Laserdesignator"; count = 2;};
class _fu_item {name = "ACE_quikclot"; count = 30;};
class _fu_item1 {name = "ACE_elasticBandage";count = 30;};
class _fu_item2 {name = "ACE_fieldDressing";count = 30;};
class _fu_item3 {name = "ACE_packingbandage";count = 30;};
class _fu_item4 {name = "ACE_epinephrine";count = 20;};
class _fu_item5 {name = "ACE_morphine";count = 10;};
class _fu_item6 {name = "ACE_tourniquet";count = 30;};
class _fu_item8 {name = "ACE_BloodIV";count = 10;};
class _fu_item9{name = "ACE_BloodIV_500";count = 10;};
class _fu_item0 {name = "ACE_BloodIV_250";count = 10;};
class _fu_item10 {name = "SmokeShell";count = 20;};
class _fu_item11 {name = "TFAR_anprc152";count = 10;};
class _fu_item12 {name = "ACE_splint";count = 20;};
class _fu_item13 {name = "ACE_surgicalKit";count = 3;};

	};
        class TransportBackpacks 
        {
        class _fu_back {backpack = "FU_literadio_bdu"; count = 2;};
        class _fu_back1 {backpack = "FU_kitbag_black"; count = 2;};
        };
};
class FU_Ammo_B : box_NATO_Ammo_F
{
	scope = 2;
	vehicleClass = "Ammo";
	displayName = "FU Ammo (BLUFOR)";
	transportMaxWeapons = 25;
	transportMaxMagazines = 500;
	class TransportWeapons
	{};

	class TransportMagazines
	{
                class _FU_Mags_B  {magazine = "30Rnd_556x45_Stanag_red" ;count = 25;};
                class _FU_Mags_B2 {magazine = "1Rnd_Smoke_Grenade_shell" ;count = 10;};
                class _FU_Mags_B3 {magazine = "1Rnd_HE_Grenade_shell" ;count = 10;};
                class _FU_Mags_B4 {magazine = "16Rnd_9x21_Mag" ;count = 10;};
                class _FU_Mags_B5 {magazine = "ACE_40mm_Flare_white" ;count = 10;};
                class _FU_Mags_B7 {magazine = "HandGrenade"; count = 8;};
                class _FU_Mags_B9 {magazine = "200Rnd_556x45_Box_Red_F"; count = 3;};

	};
	class TransportItems
	{
class _fu_item10 {name = "SmokeShell";count = 5;};

	};
        class TransportBackpacks 
        {class _fu_backA {backpack = "B_AssaultPack_blk"; count = 1;}};
};
class FU_Ammo_O : box_NATO_Ammo_F
{
	scope = 2;
	vehicleClass = "Ammo";
	displayName = "FU Ammo (OPFOR)";
	transportMaxWeapons = 25;
	transportMaxMagazines = 500;
	class TransportWeapons
	{};

	class TransportMagazines
	{
		class _FU_Mags_B  {magazine = "30Rnd_762x39_AK12_Mag_F" ;count = 25;};
                class _FU_Mags_B2 {magazine = "1Rnd_Smoke_Grenade_shell" ;count = 10;};
                class _FU_Mags_B3 {magazine = "1Rnd_HE_Grenade_shell" ;count = 10;};
                class _FU_Mags_B4 {magazine = "16Rnd_9x21_Mag" ;count = 10;};
                class _FU_Mags_B5 {magazine = "ACE_40mm_Flare_white" ;count = 10;};
                class _FU_Mags_B7 {magazine = "HandGrenade"; count = 8;};
                class _FU_Mags_B9 {magazine = "150Rnd_762x54_Box"; count = 3;};

	};
	class TransportItems
	{
class _fu_item10 {name = "SmokeShell";count = 5;};

	};
        class TransportBackpacks 
        {class _fu_backA {backpack = "B_AssaultPack_blk"; count = 1;}};
};
class FU_Ammo_I : box_NATO_Ammo_F
{
	scope = 2;
	vehicleClass = "Ammo";
	displayName = "FU Ammo (INDEP)";
	transportMaxWeapons = 25;
	transportMaxMagazines = 500;
	class TransportWeapons
	{};

	class TransportMagazines
	{
		class _FU_Mags_B  {magazine = "30Rnd_556x45_Stanag_Tracer_Green" ;count = 25;};
                class _FU_Mags_B2 {magazine = "1Rnd_Smoke_Grenade_shell" ;count = 10;};
                class _FU_Mags_B3 {magazine = "1Rnd_HE_Grenade_shell" ;count = 10;};
                class _FU_Mags_B4 {magazine = "9Rnd_45ACP_Mag" ;count = 10;};
                class _FU_Mags_B5 {magazine = "ACE_40mm_Flare_white" ;count = 10;};
                class _FU_Mags_B6 {magazine = "20Rnd_762x51_Mag"; count = 5;};
                class _FU_Mags_B7 {magazine = "HandGrenade"; count = 8;};
                class _FU_Mags_B9 {magazine = "200Rnd_65x39_cased_Box_Red"; count = 3;};

	};
	class TransportItems
	{
class _fu_item10 {name = "SmokeShell";count = 5;};

	};
        class TransportBackpacks 
        {class _fu_backA {backpack = "B_AssaultPack_blk"; count = 1;}};
};





};



class cfgweapons 
{


class arifle_SPAR_02_blk_F;
class arifle_SPAR_01_blk_F;
class arifle_SPAR_01_GL_blk_F;
class LMG_03_F;

class arifle_SPAR_01_snd_F;
class arifle_SPAR_02_snd_F;
class srifle_DMR_03_F;

class arifle_AK12_F;
class arifle_AK12_GL_F;
class LMG_Zafir_ARCO_F;

class arifle_TRG21_F;
class arifle_TRG20_F; 
class arifle_TRG21_GL_F;
class LMG_Mk200_black_F;

class H_PilotHelmetHeli_B;
class H_PilotHelmetHeli_O;

class hgun_p07_f;
class hgun_Rook40_F;
class hgun_ACPC2_F;

class FU_NVG_helm : H_PilotHelmetHeli_B
{
displayName = "FU Heli Pilot Helmet [Black]";
subItems[] = {"Integrated_NVG_F"};
};

class FU_NVG_helm_B : H_PilotHelmetHeli_O
{
displayName = "FU Heli Pilot Helmet [Green]";
subItems[] = {"Integrated_NVG_F"};
};




class FU_pistol_b : hgun_p07_f{scope = 1;};
class FU_pistol_o : hgun_Rook40_F{scope = 1;};
class FU_pistol_i : hgun_ACPC2_F{scope = 1;};




class FU_longrifle_b : arifle_SPAR_02_blk_F
      {
	scope = 1;
	class LinkedItems {

		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "optic_hamr";
		                       };

		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "acc_pointer_ir";
		                     };
	                  };
       };
class FU_shortrifle_b : arifle_SPAR_01_blk_F
      {
	scope = 1;
	class LinkedItems {

		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "optic_hamr";
		                       };

		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "acc_pointer_ir";
		                     };
	                  };
       };
class FU_grenaderifle_b : arifle_SPAR_01_GL_blk_F
      {
	scope = 1;
	class LinkedItems {

		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "optic_hamr";
		                       };

		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "acc_pointer_ir";
		                     };
	                  };
       };
class FU_LMG_b : LMG_03_F
      {
	scope = 1;
	class LinkedItems {

		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "optic_hamr";
		                       };

		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "acc_pointer_ir";
		                     };
	                  };
       };



class FU_longrifle_o : arifle_AK12_F
      {
	scope = 1;
	class LinkedItems {

		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "optic_arco_blk_f";
		                       };
	                  };
       };
class FU_shortrifle_o : arifle_AK12_F
      {
	scope = 1;
	class LinkedItems {

		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "optic_arco_blk_f";
		                       };
	                  };
       };
class FU_grenaderifle_o : arifle_AK12_GL_F
      {
	scope = 1;
	class LinkedItems {

		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "optic_arco_blk_f";
		                       };
	                  };
       };
class FU_LMG_o : LMG_Zafir_ARCO_F
      {
	scope = 1;
	class LinkedItems {

		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "optic_arco_blk_f";
		                       };

		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "acc_pointer_ir";
		                     };
	                  };
       };



class FU_longrifle_i : arifle_TRG21_F
      {
	scope = 1;
	class LinkedItems {

		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "optic_MRCO";
		                       };

		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "acc_pointer_ir";
		                     };
	                  };
       };
class FU_shortrifle_i : arifle_TRG20_F
      {
	scope = 1;
	class LinkedItems {

		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "optic_MRCO";
		                       };

		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "acc_pointer_ir";
		                     };
	                  };
       };
class FU_grenaderifle_i : arifle_TRG21_GL_F
      {
	scope = 1;
	class LinkedItems {

		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "optic_MRCO";
		                       };

		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "acc_pointer_ir";
		                     };
	                  };
       };
class FU_LMG_i : LMG_Mk200_black_F
      {
	scope = 1;
	class LinkedItems {

		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "optic_MRCO";
		                       };

		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "acc_pointer_ir";
		                     };
	                  };
       };

class FU_longrifle_s : arifle_SPAR_02_snd_F
      {
	scope = 1;
	class LinkedItems {

		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "optic_aco";
		                       };

		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "acc_pointer_ir";
		                     };
             class LinkedItemsMuzzle {
                          slot = "MuzzleSlot";
                          item = "muzzle_snds_m";
                                     };
                          };
	                  
       };
class FU_shortrifle_s : arifle_SPAR_01_snd_F
      {
	scope = 1;
	class LinkedItems {

		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "optic_aco";
		                       };

		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "acc_pointer_ir";
		                     };
                  class LinkedItemsMuzzle {
                          slot = "MuzzleSlot";
                          item = "muzzle_snds_m";
                                     };
	                  };
       };

class FU_LMG_s : srifle_DMR_03_F
      {
	scope = 1;
	class LinkedItems {

		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "optic_MRCO";
		                       };

		class LinkedItemsAcc {
			slot = "PointerSlot";
			item = "acc_pointer_ir";
		                     };
                  class LinkedItemsMuzzle {
                          slot = "MuzzleSlot";
                          item = "muzzle_snds_570";
                                          };
                 class LinkedItemsUnder {
                          slot = "UnderBarrelSlot";
                          item = "bipod_01_f_blk";
                                        };
	                  };
       };



};

