class CfgPatches
{
    class FU_faction_MKII_heli_o
    {
           name = "Freelance Union";
           Author = "Bolttrooper";
           units[] = {"FU_Helic_O"};
           weapons[] = {};
   };
};

class cfgvehicles
{
  

class Helicopter_Base_F;
    class Heli_Attack_02_base_F: Helicopter_Base_F
    {
        class Turrets;
        class Components;
    };
    class Heli_Attack_02_dynamicLoadout_base_F: Heli_Attack_02_base_F
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
        class Components: Components
        {
            class TransportPylonsComponent;
        };
    };
    class O_Heli_Attack_02_dynamicLoadout_F: Heli_Attack_02_dynamicLoadout_base_F {};
    class FU_Helic_O: O_Heli_Attack_02_dynamicLoadout_F
    {

              author = "Bolty";
              crew   = "FU_crew_bel";
              displayName = "Mi-48 Kajman Transport";
              side = 0;
              scope = 2;
              scopeCurator = 2;
              Faction = "FU_Faction_opfor";
hiddenSelectionsTextures[] = {"A3\Air_F_Beta\Heli_Attack_02\Data\Heli_Attack_02_body1_black_CO.paa","A3\Air_F_Beta\Heli_Attack_02\Data\Heli_Attack_02_body2_black_CO.paa"};
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
        
        class Components: Components
        {
        class TransportPylonsComponent: TransportPylonsComponent
                                      {
                                       class Pylons
                                                   {
class PylonLeft1
{
attachment = "PylonMissile_1Rnd_Bomb_03_F";
hardpoints[] = {"O_MISSILE_PYLON","O_BOMB_PYLON_HELI","UNI_SCALPEL","20MM_TWIN_CANNON"};
priority = 5;
turret[] = {0};
UIposition[] = {0.06,0.4};
};
class PylonLeft2
{
attachment = "PylonRack_19Rnd_Rocket_Skyfire";
hardpoints[] = {"O_MISSILE_PYLON","O_BOMB_PYLON_HELI","UNI_SCALPEL","20MM_TWIN_CANNON"};
priority = 4;
turret[] = {0};
UIposition[] = {0.08,0.35};
};
class PylonRight1
{
attachment = "PylonRack_19Rnd_Rocket_Skyfire";
hardpoints[] = {"O_MISSILE_PYLON","O_BOMB_PYLON_HELI","UNI_SCALPEL","20MM_TWIN_CANNON"};
mirroredMissilePos = 1;
priority = 5;
turret[] = {0};
UIposition[] = {0.59,0.4};
};
class PylonRight2
{
attachment = "PylonMissile_1Rnd_Bomb_03_F";
hardpoints[] = {"O_MISSILE_PYLON","O_BOMB_PYLON_HELI","UNI_SCALPEL","20MM_TWIN_CANNON"};
mirroredMissilePos = 2;
priority = 4;
turret[] = {0};
UIposition[] = {0.57,0.35};
};
                                                   };
                                      };
        };


        class Turrets: Turrets
        {
            class MainTurret: MainTurret {
                                          magazines[] = {"2000Rnd_762x51_Belt_T_Red","Laserbatteries"};
                                          weapons[] = {"LMG_Minigun_Transport","Laserdesignator_mounted"};
                                          class OpticsIn
                                                        {
                                                         class Wide 
{
gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
initAngleX = 10;
initAngleY = 0;
initFov = 0.466;
maxAngleX = 25;
maxAngleY = 90;
maxFov = 0.466;
minAngleX = -45;
minAngleY = -90;
minFov = 0.466;
opticsDisplayName = "W";
visionMode[] = {"Normal","NVG"};
};
                                                         class Medium 
{
gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
initAngleX = 10;
initAngleY = 0;
initFov = 0.093;
maxAngleX = 25;
maxAngleY = 90;
maxFov = 0.093;
minAngleX = -45;
minAngleY = -90;
minFov = 0.093;
opticsDisplayName = "M";
visionMode[] = {"Normal","NVG"};
};
                                                         class Narrow 
{
gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
initAngleX = 10;
initAngleY = 0;
initFov = 0.029;
maxAngleX = 25;
maxAngleY = 90;
maxFov = 0.029;
minAngleX = -45;
minAngleY = -90;
minFov = 0.029;
opticsDisplayName = "N";
visionMode[] = {"Normal","NVG"};
};

                                                         
                                                        };
                                          };
        };
    };



};

