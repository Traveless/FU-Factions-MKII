class CfgPatches
{
    class FU_faction_MKII_heli_b
    {
           name = "Freelance Union";
           Author = "Bolttrooper";
           units[] = {"FU_helic_b"};
           weapons[] = {};
   };
};
class SensorTemplatePassiveRadar;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateLaser;
class SensorTemplateNV;

class cfgvehicles
{
class Heli_Light_01_base_F;
class Heli_Light_01_dynamicLoadout_base_F : Heli_Light_01_base_F
	{
		class Components; 
	};
class B_Heli_Light_01_dynamicLoadout_F : Heli_Light_01_dynamicLoadout_base_F
	{        
		class Components : Components{}; 
	};
class FU_helic_base : B_Heli_Light_01_dynamicLoadout_F
	{scope = 1;
		class Components : Components
                {
class SensorsManagerComponent;
class VehicleSystemsDisplayManagerComponentLeft
                      {
componentType = "VehicleSystemsDisplayManager";
defaultDisplay = "MinimapDisplay";
left = 1;
x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"",	(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
class Components
                                 {
                                 class CrewDisplay{componentType = "CrewDisplayComponent";resource = "RscCustomInfoCrew";};
                                 class EmptyDisplay{componentType = "EmptyDisplayComponent";};
                                 class MinimapDisplay{componentType = "MinimapDisplayComponent";resource = "RscCustomInfoAirborneMiniMap";};
                                 class SlingLoadDisplay{componentType = "SlingLoadDisplayComponent";resource = "RscCustomInfoSlingLoad";};
                                 class UAVDisplay{componentType = "UAVFeedDisplayComponent";};
                                 class VehicleDriverDisplay{componentType = "TransportFeedDisplayComponent";source = "Driver";};
                                 class SensorDisplay{componentType = "SensorsDisplayComponent";range[] = {4000,2000,16000,8000};resource = "RscCustomInfoSensors";};
                                 };
                       };
class VehicleSystemsDisplayManagerComponentRight
                      {
componentType = "VehicleSystemsDisplayManager";
defaultDisplay = "SensorDisplay";
right = 1;
x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
class Components
                                 {
                                 class CrewDisplay{componentType = "CrewDisplayComponent";resource = "RscCustomInfoCrew";};
                                 class EmptyDisplay{componentType = "EmptyDisplayComponent";};
                                 class MinimapDisplay{componentType = "MinimapDisplayComponent";resource = "RscCustomInfoAirborneMiniMap";};
                                 class SlingLoadDisplay{componentType = "SlingLoadDisplayComponent";resource = "RscCustomInfoSlingLoad";};
                                 class UAVDisplay{componentType = "UAVFeedDisplayComponent";};
                                 class VehicleDriverDisplay{componentType = "TransportFeedDisplayComponent";source = "Driver";};
                                 class SensorDisplay{componentType = "SensorsDisplayComponent";range[] = {4000,2000,16000,8000};resource = "RscCustomInfoSensors";};
                                 };
                       };
                }; 
	};


class FU_helic_b : FU_helic_base
{
              hiddenSelectionsTextures[] = {"A3\Air_F\Heli_Light_01\Data\heli_light_01_ext_ion_co","a3\air_f\heli_light_01\data\heli_light_01_dot_ca.paa"};
              author = "Bolty";
              crew   = "FU_heli_nor";
              typicalCargo[] = {"FU_heli_nor"};
              displayName = "AH-6X Little Bird";
              side = 1;
              scope = 2;
              scopeCurator = 2;
              Faction = "FU_Faction_blufor";
              magazines[] = {"ACE_500Rnd_20mm_shells_Comanche"};
              weapons[] = {"ACE_gatling_20mm_Comanche"};
         class Components : Components
         {
            class SensorsManagerComponent
                {
                 class Components
                                  {
                 class ActiveRadarSensorComponent : SensorTemplateActiveRadar
                         {
						class AirTarget
						{
							minRange = 6000;
							maxRange = 6000;
							objectDistanceLimitCoef	= -1;
							viewDistanceLimitCoef	= -1;
						};
						angleRangeHorizontal = 60;
						angleRangeVertical = 60;
					};
                 class IRSensorComponent : SensorTemplateIR{};
                 class LaserSensorComponent : SensorTemplateLaser{};
                 class NVSensorComponent : SensorTemplateNV{};
                 class PassiveRadarSensorComponent : SensorTemplatePassiveRadar{};
                 class VisualSensorComponent : SensorTemplateVisual{};
                                  };
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



};

