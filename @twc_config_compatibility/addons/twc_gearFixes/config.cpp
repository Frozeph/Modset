class CfgPatches {
	class TWC_gearFixes {
		units[]={
			"twc_B_AAA_System_01_F",
			"twc_B_AAA_System_01_F_S"
		};
		weapons[]={"CUP_launch_RPG7V"};
		requiredVersion = 1.7;

		requiredAddons[] = {
			"a3_weapons_f",
			"cup_airvehicles_av8b",
			"uk3cb_baf_weapons_smallarms",
			"UK3CB_BAF_Vehicles",
			"cup_wheeledvehicles_mastiff",
			"cup_trackedvehicles_mcv80",
			"uk3cb_baf_vehicles_landrover",
			"uk3cb_baf_vehicles_coyote_jackal",
			"UK3CB_BAF_Equipment_Backpacks",
			"CUP_Weapons_WeaponsCore",
			"CUP_Weapons_Ammunition",
			"CUP_Weapons_Sounds",
			"CUP_Weapons_VehicleWeapons"
		};

		author[]={};
		authorUrl="";
		version="1";
		versionStr="1";
		versionAr[]={1};
	};
};

#include "CfgAmmo.hpp"

class mode_fullauto;
class Mode_SemiAuto;
class CfgWeapons {
	//TWC Night Vision
	class CUP_NVG_PVS7;
	class UK3CB_BAF_HMNVS;
	class twc_nightvision_gen2: CUP_NVG_PVS7
	{
		scope = 1;
		modelOptics = "";
		author = "[TWC] Rik";
		descriptionShort = "";
		displayName = "AN/PVS-5";
		ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa"; // Edge mask for different tube configurations. Three types: mono, bino and quad.
		ace_nightvision_bluRadius = 0.13; // Edge blur radius.
		ace_nightvision_eyeCups = 1; // Does have eyecups.
		ace_nightvision_generation = 2; // Generation 2. Affects image quality.
	};
	class twc_nightvision_gen3: UK3CB_BAF_HMNVS
	{
		scope = 1;
		modelOptics = "";
		author = "[TWC] Rik";
		descriptionShort = "";
		displayName = "HMNVS";
		ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_4096.paa"; // Edge mask for different tube configurations. Three types: mono, bino and quad.
		ace_nightvision_bluRadius = 0.15; // Edge blur radius.
		ace_nightvision_eyeCups = 0; // Does have eyecups.
		ace_nightvision_generation = 3; // Generation 3. Affects image quality.
	};
	
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class EventHandlers;
	};
	
	class launch_NLAW_F: Launcher_Base_F {
		ace_overpressure_angle = 30;
		ace_overpressure_range = 10;
		ace_overpressure_damage = 0.7;
	};
	
	class CUP_launch_RPG7V: Launcher_Base_F
	{
		class EventHandlers: EventHandlers {
			fired = "_mult = 1; if (!isserver) then {_mult = 0.3};_bullet = _this select 6; _bullet setvelocity [(velocity _bullet select 0) + (((random 24) - 12) * _mult), (velocity _bullet select 1) + (((random 24) - 12) * _mult), 	(velocity _bullet select 2) + (((random 4) - 2) * _mult)];";
		};
		scope=2;
		aiDispersionCoefX=1.03;
		aiDispersionCoefY=1.05;
		dispersion = 0.02;
		minrange=50;
		minrangeprobab=0.4;
		midrange=600;
		midrangeprobab=0.3;
		maxrange=1000;
		maxrangeprobab=0.9;

		magazines[] = {"CUP_PG7V_M", "CUP_PG7VM_M", "CUP_PG7VL_M", "CUP_PG7VR_M", "CUP_OG7_M", "CUP_TBG7V_M", "twc_og7_c_m"};
		};
		
		
	class Rifle_Short_Base_F;
	class SMG_02_base_F: Rifle_Short_Base_F
	{
		class FullAuto;
	};
	class SP_smg_sterling: SMG_02_base_F
	{
		class FullAuto: FullAuto
		{
			Burst = 1;
		};
	};
	
	class GM6_base_F;
	
	class rhs_weap_M107_Base_F: GM6_base_F
	{
		recoil = "twc_shotgun_1";
		recoilProne = "twc_rifle_762_prone";
		magazines[] = {"rhsusf_mag_10Rnd_STD_50BMG_M33", "rhsusf_mag_10Rnd_STD_50BMG_mk211"};
	};
	class UK3CB_BAF_L115_Base;
	
	class UK3CB_BAF_L115A3: UK3CB_BAF_L115_Base
	{
		recoil = "twc_shotgun_1";
		recoilProne = "twc_mg_prone";
		magazines[] = {"ACE_10Rnd_338_300gr_HPBT_Mag", "ACE_10Rnd_338_API526_Mag"};
	};
	class twc_l115a3_wd: UK3CB_BAF_L115A3
	{
		scope = 1;
		author = "jayman";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "asdg_OpticRail_UK3CB_BAF_L115";
				item = "RKSL_optic_PMII_525";
			};
			class LinkedItemsMuzzle
			{
				slot = "asdg_MuzzleSlot_UK3CB_BAF_L115";
				item= "UK3CB_BAF_Silencer_L115A3";
			};
		};
	};
	class UK3CB_BAF_L115A3_Ghillie;
	class twc_l115a3_gh: UK3CB_BAF_L115A3_Ghillie
	{
		scope = 1;
		author = "jayman";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "asdg_OpticRail_UK3CB_BAF_L115";
				item = "RKSL_optic_PMII_525";
			};
			class LinkedItemsMuzzle
			{
				slot = "asdg_muzzleslot_UK3CB_BAF_L115";
				item= "UK3CB_BAF_Silencer_L115A3";
			};
		};
	};
	
	
	class Default;
	class CannonCore: Default
	{
		class eventhandlers;
	};
	
	class autocannon_Base_F: CannonCore
	{
		class EventHandlers: EventHandlers {
		//	fired = "if ((_this select 0) == player) then {addCamShake [3, 0.3, 15]};";
		};
		
		class HE;
	};
	
	class MGunCore;
	class MGun: MGunCore
	{
		class eventhandlers;
		class mode_fullauto;
		class manual;
	};
	class GMG_F: MGun
	{
		reloadtime = 0.22;
		class EventHandlers: EventHandlers {
			fired = "if (isnil 'twc_gpmglastfired') then {twc_gpmglastfired = 0}; if (time > twc_gpmglastfired + 0.6) then {_bullet = _this select 6; _bullet setvelocity [(velocity _bullet select 0) + (random 10) - 5, (velocity _bullet select 1) + (random 10) - 5,  (velocity _bullet select 2) + (random 20) - 10];} else {_bullet = _this select 6; _bullet setvelocity [(velocity _bullet select 0) + (random 8) - 4, (velocity _bullet select 1) + (random 8) - 4,  (velocity _bullet select 2) + (random 6) - 3];};twc_gpmglastfired = time;[_this select 6] call twc_fnc_aps;";
		};
	};
	
	
	class LMG_RCWS: MGun {
		class EventHandlers: EventHandlers {
			fired = "if (isnil 'twc_gpmglastfired') then {twc_gpmglastfired = 0}; if (time > twc_gpmglastfired + 0.3) then {_bullet = _this select 6; _bullet setvelocity [(velocity _bullet select 0) + (random 16) - 8, (velocity _bullet select 1) + (random 16) - 8, 	(velocity _bullet select 2) + (random 8) - 4];};twc_gpmglastfired = time;";
		};
	};
	class RifleCore;
	class Rifle:RifleCore
	{
		class eventhandlers;
	};
	
	class Rifle_Base_F:Rifle
	{
		class EventHandlers: EventHandlers {
		//	fired = "if ((_this select 0) == player) then {addCamShake [3, 0.3, 15]};";
		};
	};
	
	class UK3CB_BAF_L1A1: Rifle_Base_F {
		recoil = "twc_rifle_762";
		recoilProne = "twc_rifle_762_prone";
	};
	
	class srifle_EBR_F;
	class UK3CB_BAF_L128A1: srifle_EBR_F {
		recoil = "twc_shotgun_1";
		recoilProne = "twc_rifle_762_prone";
	};
	
	class mk20_base_F;
	class arifle_Mk20_F: mk20_base_F
	{
		class FullAuto;
		class Single;
	};
	
	class arifle_Mk20_plain_F: arifle_Mk20_F {
		class FullAuto: Mode_FullAuto {
			
			class StandardSound {
				soundSetShot[] = {"RHSUSF_M4_Shot_SoundSet","RHSUSF_Rifle1_Tail_SoundSet"};
			};
			class SilencedSound {
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet"};
			};
		};
		class Fullauto_medium: FullAuto {
			class StandardSound {
				soundSetShot[] = {"RHSUSF_M4_Shot_SoundSet","RHSUSF_Rifle1_Tail_SoundSet"};
			};
			class SilencedSound {
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet"};
			};
		};
		class Single: Mode_SemiAuto {
			class StandardSound {
				soundSetShot[] = {"RHSUSF_M4_Shot_SoundSet","RHSUSF_Rifle1_Tail_SoundSet"};
			};
			class SilencedSound {
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet"};
			};
		};
		class Single_medium_optics1: Single {
			class StandardSound {
				soundSetShot[] = {"RHSUSF_M4_Shot_SoundSet","RHSUSF_Rifle1_Tail_SoundSet"};
			};
			class SilencedSound {
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet"};
			};
		};
		class Single_far_optics2: Single_medium_optics1 {
			class StandardSound {
				soundSetShot[] = {"RHSUSF_M4_Shot_SoundSet","RHSUSF_Rifle1_Tail_SoundSet"};
			};
			class SilencedSound {
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet"};
			};
		};
	};class UK3CB_BAF_L119_Base: arifle_Mk20_plain_F {
		class FullAuto: FullAuto {
			reloadTime = 0.07;
		};
	};
	class UK3CB_BAF_L85A2: arifle_Mk20_plain_F {
		recoil = "twc_rifle_556";
		recoilProne = "twc_rifle_556_prone";
		reloadAction = "CUP_GestureReloadSA80";
		reloadMagazineSound[] = {"\CUP\Weapons\CUP_Weapons_L85\data\sounds\l85_Reload",1,1,10};
	};
	
	class UK3CB_BAF_L86A2: UK3CB_BAF_L85A2 {
		recoil = "twc_rifle_556_long";
		recoilProne = "twc_rifle_556_long_prone";
	};
	class Rifle_Long_Base_F:Rifle_Base_F
	{
		class eventhandlers;
	};
	//for barrel swapping, put a ACE_SpareBarrel in the player's inventory
	class UK3CB_BAF_L7A2: Rifle_Long_Base_F {
		displayname = "L7A2 GPMG";
		ace_overheating_allowSwapBarrel = 1;
		ace_overheating_dispersion = 1.1;
		ace_overheating_slowdownFactor = 1.5;
		recoil = "twc_mg_762";
		recoilProne = "twc_mg_prone";
		twc_openbolt = 1;
		class WeaponSlotsInfo {
			class asdg_OpticRail_UK3CB_BAF_L7A2 { };
		};
		class fullauto: mode_fullauto
		{
			reloadTime = 0.08;
		};
		class EventHandlers: EventHandlers {
			fired = "if (isnil 'twc_gpmglastfired') then {twc_gpmglastfired = 0}; if (time > twc_gpmglastfired + 0.3) then {_bullet = _this select 6; _bullet setvelocity [(velocity _bullet select 0) + (random 24) - 12, (velocity _bullet select 1) + (random 24) - 12, 	(velocity _bullet select 2) + (random 4) - 2];};twc_gpmglastfired = time;";
		};
	};
	
	class CUP_lmg_PKM: Rifle_Long_Base_F
	{
		ace_overheating_allowSwapBarrel = 1;
		ace_overheating_mrbs = 3500;
		ace_overheating_dispersion = 1.0;
		ace_overheating_slowdownFactor = 1.5;
		
	};
	
	class rhs_pkp_base: Rifle_Long_Base_F
	{
		ace_overheating_allowSwapBarrel = 1;
		ace_overheating_mrbs = 3500;
		ace_overheating_dispersion = 1.0;
		ace_overheating_slowdownFactor = 1.5;
	};
	
	class rhs_weap_saw_base: Rifle_Base_F
	{
		ace_overheating_allowSwapBarrel = 1;
		ace_overheating_mrbs = 2900;
		ace_overheating_dispersion = 1.1;
		ace_overheating_slowdownFactor = 1.2;
	};
	//rhs m240, because it's called m249 in config which would be confusing
	class LMG_Mk200_F: Rifle_Base_F
	{
		ace_overheating_allowSwapBarrel = 1;
		ace_overheating_dispersion = 1.1;
		ace_overheating_slowdownFactor = 1.5;
	};
	
	class autocannon_30mm_CTWS: autocannon_Base_F {
	};
	
	class autocannon_40mm_CTWS: autocannon_Base_F
	{
		class HE;
		class EventHandlers;
	};
	
	class CUP_Rarden_CTWS_veh: autocannon_40mm_CTWS
	{
		magazines[] = {"ukcw_3rd_L21A1_APDS","ukcw_3rd_L21A1_HE"};
		magazineReloadTime = 1;
		muzzles[] = {"HE"};
		ReloadTime = 0.3;
		autoReload = 0;
		class HE: HE
		{
			magazines[] = {"ukcw_3rd_L21A1_APDS","ukcw_3rd_L21A1_HE"};
			magazineReloadTime = 1;
			ReloadTime = 0.3;
			autoReload = 0;
		};
	};
	/*
	class weapon_Cannon_Phalanx: CannonCore
	{
		class manual: CannonCore {
			soundContinuous = 1;
			soundBurst = 0;
			class StandardSound {
			begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\gatling_30mm\30mm_01_burst",5.62341,1,1500,[25704,32159]};
			soundBegin[] = {"begin1",1};
			};
		};
	};
	*/
	
	class gatling_30mm_base: CannonCore
	{
		class EventHandlers;
		class Mode_FullAuto;
		class manual;
	};
	
	class UK3CB_gatling_30mm_base: gatling_30mm_base
	{
		modes[] = {"Burst50","close","short","medium","far"};
		class Burst10;
		class EventHandlers: EventHandlers {
			fired = "if (isnil 'twc_gpmglastfired') then {twc_gpmglastfired = 0}; if (time > twc_gpmglastfired + 0.6) then {_bullet = _this select 6; _bullet setvelocity [(velocity _bullet select 0) + (random 14) - 7, (velocity _bullet select 1) + (random 14) - 7, 	(velocity _bullet select 2) + (random 10) - 5];};twc_gpmglastfired = time;";
		};
	};
	
	class UK3CB_BAF_CannonM230: UK3CB_gatling_30mm_base
	{
		class Burst20:Burst10
		{
			dispersion=0.012;
		};
	};
	
	class CUP_Vacannon_M230_veh: CannonCore
	{
		class manual: CannonCore
		{
			dispersion=0.012;
		};
		class EventHandlers: EventHandlers {
			fired = "if (isnil 'twc_gpmglastfired') then {twc_gpmglastfired = 0}; if (time > twc_gpmglastfired + 0.6) then {_bullet = _this select 6; _bullet setvelocity [(velocity _bullet select 0) + (random 14) - 7, (velocity _bullet select 1) + (random 14) - 7, 	(velocity _bullet select 2) + (random 10) - 5];};twc_gpmglastfired = time;";
		};
	};
	
	class twc_L7A2: UK3CB_BAF_L7A2 {};

	class UK3CB_BAF_L110_Base:Rifle_Long_Base_F
	{
		ace_overheating_allowSwapBarrel = 1;
		ace_overheating_mrbs = 2900;
		ace_overheating_dispersion = 1.1;
		ace_overheating_slowdownFactor = 1.2;
		class eventhandlers;
		twc_openbolt = 1;
	};
	class UK3CB_BAF_L110_556_Base: UK3CB_BAF_L110_Base
	{
		recoil = "twc_mg_556";
		recoilProne = "twc_mg_556_prone";
		class FullAuto;
		class EventHandlers: EventHandlers {
			fired = "if (isnil 'twc_minimilastfired') then {twc_minimilastfired = 0}; if (time > twc_minimilastfired + 0.3) then {_bullet = _this select 6; _bullet setvelocity [(velocity _bullet select 0) + (random 24) - 12, (velocity _bullet select 1) + (random 24) - 12, 	(velocity _bullet select 2) + (random 4) - 2];};twc_minimilastfired = time;";
		};
	};

	class missiles_titan;
	class UK3CB_BAF_Milan_Launcher: missiles_titan {
		ace_overpressure_angle = 90;
		ace_overpressure_range = 40;
		ace_overpressure_damage = 0.7;
	};

	//Dual Muzzle Setups for OPFOR vehicles to make them fire HE.
	class cannon_125mm;
	class CUP_Vacannon_D10: cannon_125mm
	{
		muzzles[] = {"TWC_Muzzle_AP","TWC_Muzzle_HE"};
		class TWC_Muzzle_AP: cannon_125mm
		{
			displayName = "D-10T 100mm AP";
			descriptionShort = "AP";
			magazines[] = {CUP_20Rnd_100mmHEAT_D10};
			
			nameSound="cannon";
			cursor = "EmptyCursor";
			cursorAim = "cannon";
			cursorSize = 1;
			class StandardSound
			{
				soundSetShot[] = {"CUP_autocannon_Shot_SoundSet","CUP_autocannon_Tail_SoundSet"};
			};
			minRange=10;minRangeProbab=0.7;
			midRange=1800;midRangeProbab=0.7;
			maxRange=3000;maxRangeProbab=0.1;
			reloadTime = 8;
			magazineReloadTime = 8;
			autoReload = 1;
			canLock = 0;
			ballisticsComputer = 2;
		};
		class TWC_Muzzle_HE: cannon_125mm
		{
			displayName = "D-10T 100mm HE";
			descriptionShort = "HE";
			magazines[] = {CUP_15Rnd_100mmHEFRAG_D10};

			nameSound="cannon";
			cursor = "EmptyCursor";
			cursorAim = "cannon";
			cursorSize = 1;
			class StandardSound
			{
				soundSetShot[] = {"CUP_autocannon_Shot_SoundSet","CUP_autocannon_Tail_SoundSet"};
			};
			minRange=10;minRangeProbab=0.7;
			midRange=1800;midRangeProbab=0.7;
			maxRange=3000;maxRangeProbab=0.1;
			reloadTime = 8;
			magazineReloadTime = 8;
			autoReload = 1;
			canLock = 0;
			ballisticsComputer = 2;
		};
	};
	class CUP_Vacannon_2A28: CUP_Vacannon_D10
	{
		muzzles[] = {"TWC_Muzzle_AP","TWC_Muzzle_HE"};
		class TWC_Muzzle_AP: CUP_Vacannon_D10
		{
			scope = 1;
			canLock=1;
			author = "$STR_CUP_AUTHOR_STRING";
			displayName = "2A28 Grom";
			magazines[] = {CUP_PG15V};
			reloadTime = 5;
			magazineReloadTime = 7;
			autoReload = 0;
			ballisticsComputer = 2;
			weaponLockSystem = 0;
			showaimcursorinternal = 0;
			cursor = "EmptyCursor";
			cursoraim = "EmptyCursor";
			cursoraimon = "EmptyCursor";
			minRange=5;
			minRangeProbab=0.89999998;
			midRange=700;
			midRangeProbab=1;
			maxRange=1300;
			maxRangeProbab=0.40000001;
			class player;
		};
		class TWC_Muzzle_HE: CUP_Vacannon_D10
		{
			scope = 1;
			canLock=1;
			author = "$STR_CUP_AUTHOR_STRING";
			displayName = "2A28 Grom";
			magazines[] = {CUP_OG15V};
			reloadTime = 5;
			magazineReloadTime = 7;
			autoReload = 0;
			ballisticsComputer = 2;
			weaponLockSystem = 0;
			showaimcursorinternal = 0;
			cursor = "EmptyCursor";
			cursoraim = "EmptyCursor";
			cursoraimon = "EmptyCursor";
			minRange=5;
			minRangeProbab=0.89999998;
			midRange=700;
			midRangeProbab=1;
			maxRange=1300;
			maxRangeProbab=0.40000001;
			class player;
		};
		class player;
	};
	class CUP_Vacannon_SPG9_veh: CUP_Vacannon_2A28
	{
		muzzles[] = {"TWC_Muzzle_AP","TWC_Muzzle_HE"};
		class TWC_Muzzle_AP: CUP_Vacannon_2A28
		{
			author = "$STR_CUP_AUTHOR_STRING";
			displayName = "SPG-9";
			magazines[] = {"CUP_16Rnd_PG9_AT_M"};
			reloadTime = 8;
			magazineReloadTime = 8;
			showaimcursorinternal = 1;
			reloadSound[] = {"\CUP\Weapons\CUP_Weapons_SMAW\data\sfx\reload.wss",10,1,20};
			reloadMagazineSound[] = {"\CUP\Weapons\CUP_Weapons_SMAW\data\sfx\reload.wss",10,1,20};
			class player: player
			{
				class StandardSound
				{
					weaponSoundEffect = "DefaultRifle";
					begin1[] = {"\CUP\Weapons\CUP_Weapons_StaticWeapons\Sounds\spg9_1.wss","db20",1,1200};
					soundBegin[] = {"begin1",1};
				};
			};
			class GunParticles {
				class FirstEffect {
					effectName = "RocketBackEffectsRPGNT";
					positionName = "Usti hlavne";
					directionName = "Konec hlavne";
				};
			};
		};
		class TWC_Muzzle_HE: CUP_Vacannon_2A28
		{
			author = "$STR_CUP_AUTHOR_STRING";
			displayName = "SPG-9";
			magazines[] = {"CUP_16Rnd_OG9_HE_M"};
			reloadTime = 8;
			magazineReloadTime = 8;
			showaimcursorinternal = 1;
			reloadSound[] = {"\CUP\Weapons\CUP_Weapons_SMAW\data\sfx\reload.wss",10,1,20};
			reloadMagazineSound[] = {"\CUP\Weapons\CUP_Weapons_SMAW\data\sfx\reload.wss",10,1,20};
			class player: player
			{
				class StandardSound
				{
					weaponSoundEffect = "DefaultRifle";
					begin1[] = {"\CUP\Weapons\CUP_Weapons_StaticWeapons\Sounds\spg9_1.wss","db20",1,1200};
					soundBegin[] = {"begin1",1};
				};
			};
			class GunParticles {
				class FirstEffect {
					effectName = "RocketBackEffectsRPGNT";
					positionName = "Usti hlavne";
					directionName = "Konec hlavne";
				};
			};
		};
	};
	class CUP_Vacannon_D5_T34: cannon_125mm
	{
		muzzles[] = {"TWC_Muzzle_AP","TWC_Muzzle_HE"};
		class TWC_Muzzle_AP: cannon_125mm
		{
			displayName = "D-5T 85mm AP";
			nameSound="cannon";
			cursor = "EmptyCursor";
			cursorAim = "cannon";
			cursorSize = 1;
			class StandardSound
			{
				soundSetShot[] = {"CUP_autocannon_Shot_SoundSet","CUP_autocannon_Tail_SoundSet"};
			};
			magazines[] = {CUP_40Rnd_85mmHEAT_D5};
			minRange=10;minRangeProbab=0.7;
			midRange=1800;midRangeProbab=0.7;
			maxRange=3000;maxRangeProbab=0.1;
			reloadTime = 6;
			magazineReloadTime = 6;
			autoReload = 1;
			canLock = 0;
			ballisticsComputer = 2;
		};
		class TWC_Muzzle_HE: cannon_125mm
		{
			displayName = "D-5T 85mm AP";
			nameSound="cannon";
			cursor = "EmptyCursor";
			cursorAim = "cannon";
			cursorSize = 1;
			class StandardSound
			{
				soundSetShot[] = {"CUP_autocannon_Shot_SoundSet","CUP_autocannon_Tail_SoundSet"};
			};
			magazines[] = {CUP_20Rnd_85mmHEFRAG_D5};
			minRange=10;minRangeProbab=0.7;
			midRange=1800;midRangeProbab=0.7;
			maxRange=3000;maxRangeProbab=0.1;
			reloadTime = 6;
			magazineReloadTime = 6;
			autoReload = 1;
			canLock = 0;
			ballisticsComputer = 2;
		};
	};
	class CUP_Vcannon_2A46_Txx: cannon_125mm
	{
		muzzles[] = {"TWC_Muzzle_APFSDS","TWC_Muzzle_HE","TWC_Muzzle_AT"};
		class TWC_Muzzle_APFSDS: cannon_125mm
		{
			displayName = "2A46 Cannon 125mm APFSDS";
			magazines[] = {"CUP_22Rnd_2A46_APFSDS_T_M"};
			canLock=0;
			reloadTime = 8;
			magazineReloadTime = 8;
			autoReload = 0;
			ballisticsComputer = 16;
			weaponLockSystem = 0;
			showaimcursorinternal = 0;
			cursor = "EmptyCursor";
			cursoraim = "EmptyCursor";
			cursoraimon = "EmptyCursor";
			reloadsound[] = {"CUP\Weapons\CUP_Weapons_VehicleWeapons\2A46\data\sound\Reload_Cannon", 13.16228, 1, 10};
		};
		class TWC_Muzzle_HE: cannon_125mm
		{
			displayName = "2A46 Cannon 125mm HE";
			magazines[] = {"CUP_12Rnd_2A46_HE_T_M","CUP_17Rnd_2A46_HE_T_M"};
			canLock=0;
			reloadTime = 8;
			magazineReloadTime = 8;
			autoReload = 0;
			ballisticsComputer = 16;
			weaponLockSystem = 0;
			showaimcursorinternal = 0;
			cursor = "EmptyCursor";
			cursoraim = "EmptyCursor";
			cursoraimon = "EmptyCursor";
			reloadsound[] = {"CUP\Weapons\CUP_Weapons_VehicleWeapons\2A46\data\sound\Reload_Cannon", 13.16228, 1, 10};
		};
		class TWC_Muzzle_AT: cannon_125mm
		{
			displayName = "2A46 Cannon 125mm AT";
			magazines[] = {"CUP_5Rnd_AT11_M"};
			canLock=0;
			reloadTime = 8;
			magazineReloadTime = 8;
			autoReload = 0;
			ballisticsComputer = 16;
			weaponLockSystem = 0;
			showaimcursorinternal = 0;
			cursor = "EmptyCursor";
			cursoraim = "EmptyCursor";
			cursoraimon = "EmptyCursor";
			reloadsound[] = {"CUP\Weapons\CUP_Weapons_VehicleWeapons\2A46\data\sound\Reload_Cannon", 13.16228, 1, 10};
		};
	};

	//Configuring various plane weapons for use with the Ambient Attack Plane module.
	class RocketPods;
	class Mk82BombLauncher;
	class CUP_Vblauncher_Mk82_veh: RocketPods
	{
		cursorAim = "bomb";
	};
	class CUP_Vblauncher_KAB250_veh: RocketPods
	{
		cursorAim = "bomb";
	};
	class CUP_Vblauncher_GBU12_veh: RocketPods
	{
		cursorAim = "bomb";
	};

	class CUP_Vmlauncher_CRV7_veh: RocketPods
	{
		cursorAim = "missile";
	};
	class CUP_Vmlauncher_FFAR_veh: RocketPods
	{
		cursorAim = "missile";
	};
};

class cfgRecoils
{
	class twc_rifle_556
	{
		muzzleOuter[]	= { 0.1,  0.2,  0.02,  0.1 }; //horizontal size, vertical size, horizontal jitter, vertical jitter
		kickBack[]	= { 0.02, 0.04 }; //min/max force
		permanent	= 0.3; //muzzle climb post-recoil, means nothing when on bipod
		temporary	= 0.1; //muzzle jump
	};
	class twc_rifle_556_prone
	{
		muzzleOuter[]	= { 0.06,  0.2,  0.02,  0.1 };
		kickBack[]	= { 0.02, 0.04 };
		permanent	= 0.3;
		temporary	= 0.1;
	};
	class twc_rifle_556_short
	{
		muzzleOuter[]	= { 0.07,  0.25,  0.015,  0.1 }; //horizontal size, vertical size, horizontal jitter, vertical jitter
		kickBack[]	= { 0.04, 0.06 }; //min/max force
		permanent	= 0.3; //muzzle climb post-recoil, means nothing when on bipod
		temporary	= 0.12; //muzzle jump
	};
	class twc_rifle_556_short_prone
	{
		muzzleOuter[]	= { 0.05,  0.3,  0.1,  0.3 };
		kickBack[]	= { 0.04, 0.06 };
		permanent	= 1;
		temporary	= 0.1;
	};
	
	class twc_rifle_556_long
	{
		muzzleOuter[]	= { 0.07,  0.15,  0.02,  0.1 }; //horizontal size, vertical size, horizontal jitter, vertical jitter
		kickBack[]	= { 0.02, 0.04 }; //min/max force
		permanent	= 0.25; //muzzle climb post-recoil, means nothing when on bipod
		temporary	= 0.1; //muzzle jump
	};
	class twc_rifle_556_long_prone
	{
		muzzleOuter[]	= { 0.05,  0.1,  0.02,  0.1 };
		kickBack[]	= { 0.04, 0.06 };
		permanent	= 0.25;
		temporary	= 0.1;
	};
	
	class twc_mg_556
	{
		muzzleOuter[]	= { 0.07,  0.15,  0.02,  0.1 }; //horizontal size, vertical size, horizontal jitter, vertical jitter
		kickBack[]	= { 0.03, 0.05 }; //min/max force
		permanent	= 0.1; //muzzle climb post-recoil, means nothing when on bipod
		temporary	= 0.04; //muzzle jump
	};
	class twc_mg_556_prone
	{
		muzzleOuter[]	= { 0.05,  0.1,  0.02,  0.02 };
		kickBack[]	= { 0.04, 0.06 };
		permanent	= 0.1;
		temporary	= 0.3;
	};
	
	class twc_rifle_762
	{
		muzzleOuter[]	= { 0.1,  0.5,  0.02,  0.1 }; //horizontal size, vertical size, horizontal jitter, vertical jitter
		kickBack[]	= { 0.05, 0.06 }; //min/max force
		permanent	= 0.4; //muzzle climb post-recoil, means nothing when on bipod
		temporary	= 0.05; //muzzle jump
	};
	class twc_rifle_762_prone
	{
		muzzleOuter[]	= { 0.05,  0.2,  0.02,  0.1 };
		kickBack[]	= { 0.05, 0.07 };
		permanent	= 0.4;
		temporary	= 0.05;
	};
	
 class twc_mg_762
	{
		muzzleOuter[]	= { 0.1,  0.15,  0.03,  0.1 };
		kickBack[]	= { 0.03, 0.04 };
		permanent	= 0.4;
		temporary	= 0.07;
	};
	
 class twc_mg_prone
	{
		muzzleOuter[]	= { 1.5,  1.5,  0.5,  0.45 };
		kickBack[]	= { 0.02, 0.03 };
		permanent	= 0.1;
		temporary	= 0.1;
	};
	
	class twc_shotgun_1
	{
		muzzleOuter[]	= { 0.1,  0.5,  0.1,  0.1 }; //horizontal size, vertical size, horizontal jitter, vertical jitter
		kickBack[]	= { 0.09, 0.12 }; //min/max force
		permanent	= 1.1; //muzzle climb post-recoil, means nothing when on bipod
		temporary	= 0.2; //muzzle jump
	};
};
class Extended_FiredBIS_EventHandlers {
	class Car {
		class twc_gunwalk {
			FiredBIS = "[_this select 1, _this select 4, _this select 6, _this select 7] call twc_fnc_gunwalk;";
		};
	};
	class Helicopter {
		class twc_gunwalk {
			FiredBIS = "[_this select 1, _this select 4, _this select 6, _this select 7] call twc_fnc_gunwalk;";
		};
	};
	class Tank {
		class twc_gunwalk {
			FiredBIS = "[_this select 1, _this select 4, _this select 6, _this select 7, 2] call twc_fnc_gunwalk;";
		};
	};
	class CAManBase {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {addCamShake [2.8, 0.4, 15]};";
		};
	};
	class Helicopter_Base_F {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 0.6; addCamShake [_rec, 0.5, 15]};";
		};
	};
	class Plane {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 2; addCamShake [_rec, 0.5, 15]};";
		};
	};
	class Car_F {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_time = 0.3;_rec = 2; _freq = 15; if (((_this select 1) isKindOf ['HMG_127', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['GMG_F', configFile >> 'CfgWeapons'])) then {_rec = 3} else {if ((_this select 4) isKindOf ['missilebase', configFile >> 'CfgAmmo']) then {_rec = 4; _time = 2; _freq = 15;};};if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 2)};addCamShake [_rec, _time, _freq]};";
		};
	};
	class StaticMGWeapon {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 2; if (((_this select 1) isKindOf ['HMG_127', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['GMG_F', configFile >> 'CfgWeapons'])) then {_rec = 3};if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};addCamShake [_rec, 0.3, 15]};";
			FiredBIS = "[_this select 1, _this select 4, _this select 6, _this select 7] call twc_fnc_gunwalk;";
		};
	};
	class StaticGrenadeLauncher {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 3; addCamShake [_rec, 0.5, 15]};";
			FiredBIS = "[_this select 1, _this select 4, _this select 6, _this select 7] call twc_fnc_gunwalk;";
		};
	};
	class StaticATWeapon {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 3; addCamShake [_rec, 0.5, 15]};";
			FiredBIS = "[_this select 1, _this select 4, _this select 6, _this select 7] call twc_fnc_gunwalk;";
		};
	};
	class StaticMortar {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 3; addCamShake [_rec, 0.8, 15]};";
			FiredBIS = "[_this select 6, _this select 4, _this select 7] call twc_fnc_mortarwalk;";
		};
	};
	class StaticCannon {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 9; addCamShake [_rec, 1, 15]};";
			FiredBIS = "[_this select 6, _this select 4, _this select 7] call twc_fnc_mortarwalk;";
		};
	};
	class CUP_MCV80_Base {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 2;_time = 0.5; if ((_this select 1) == 'CUP_Vlmg_L94A1_Coax') then {_rec = 0.1;_time = 0.3};if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 2)};addCamShake [_rec, _time, 15]};";
		};
	};
	class ukcw_Chieftain_Base {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 0.1;_time = 0.3; if ((_this select 1) == 'UKCW_Chieftain_L11A5') then {_rec = 4;_time = 1};if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 2)};addCamShake [_rec, _time, 15]};";
		};
	};
	class ukcw_cvrt_Scim_base {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 2;_time = 0.5; if ((_this select 1) == 'ukcw_l37a1_coax') then {_rec = 0.1;_time = 0.3};if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};addCamShake [_rec, _time, 15]};";
		};
	};
	class ukcw_fv432_gpmg {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 2;_time = 0.5; if ((_this select 1) == 'ukcw_l37a1_coax') then {_rec = 0.1;_time = 0.3};if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};addCamShake [_rec, _time, 15]};";
		};
	};
	class APC_Tracked_01_base_F {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 0.1;_time = 0.3; if ((_this select 1) isKindOf ['cannoncore', configFile >> 'CfgWeapons']) then {_rec = 1;_time = 0.7};if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 2)};addCamShake [_rec, _time, 15]};";
		};
	};
	class APC_Tracked_02_base_F {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 0.1;_time = 0.3; if ((_this select 1) isKindOf ['cannoncore', configFile >> 'CfgWeapons']) then {_rec = 1;_time = 0.7};if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 2)};addCamShake [_rec, _time, 15]};";
		};
	};
	class APC_Tracked_03_base_F {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 0.1;_time = 0.3; if ((_this select 1) isKindOf ['cannoncore', configFile >> 'CfgWeapons']) then {_rec = 1;_time = 0.7};if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 2)};addCamShake [_rec, _time, 15]};";
		};
	};
	class UK3CB_BAF_FV432_Mk3_Base {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 2; if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 2)};addCamShake [_rec, 0.3, 15]};";
		};
	};
	class MBT_01_base_F {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 0.1;_time = 0.3; if ((_this select 1) isKindOf ['cannoncore', configFile >> 'CfgWeapons']) then {_rec = 9;_time = 1;if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 2)};addCamShake [_rec * 0.1, _time * 3, 9]};if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};addCamShake [_rec, _time, 15];};";
		};
	};
	class MBT_02_base_F {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 0.1;_time = 0.3; if ((_this select 1) isKindOf ['cannoncore', configFile >> 'CfgWeapons']) then {_rec = 9;_time = 1;if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 2)};addCamShake [_rec * 0.1, _time * 3, 9]};if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};addCamShake [_rec, _time, 15];};";
		};
	};
	class MBT_03_base_F {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 0.1;_time = 0.3; if ((_this select 1) isKindOf ['cannoncore', configFile >> 'CfgWeapons']) then {_rec = 9;_time = 1;if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 2)};addCamShake [_rec * 0.1, _time * 3, 9]};if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};addCamShake [_rec, _time, 15];};";
		};
	};
	class MBT_04_base_F {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 0.1;_time = 0.3; if ((_this select 1) isKindOf ['cannoncore', configFile >> 'CfgWeapons']) then {_rec = 9;_time = 1;if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 2)};addCamShake [_rec * 0.1, _time * 3, 9]};if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};addCamShake [_rec, _time, 15];};";
		};
	};
	class rhs_tank_base {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 0.1;_time = 0.3; if ((_this select 1) isKindOf ['cannoncore', configFile >> 'CfgWeapons']) then {_rec = 9;_time = 1;if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 2)};addCamShake [_rec * 0.1, _time * 3, 9]};if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};addCamShake [_rec, _time, 15];};";
		};
	};
	class rhs_a3t72tank_base {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 0.1;_time = 0.3; if ((_this select 1) isKindOf ['cannoncore', configFile >> 'CfgWeapons']) then {_rec = 9;_time = 1;if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 2)};addCamShake [_rec * 0.1, _time * 3, 9]};if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};addCamShake [_rec, _time, 15];};";
		};
	};
	//ww2 tanks, not as much recoil management or optic magnification so a bit more shake
	class LIB_Tank_base {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 0.2;_time = 0.3; if ((_this select 1) isKindOf ['cannoncore', configFile >> 'CfgWeapons']) then {_rec = 15;_time = 1;if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 1.5)};addCamShake [_rec * 0.1, _time * 3, 9]} else {if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 4)};};if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};addCamShake [_rec, _time, 15];};";
		};
	};
	class fow_v_cromwell {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 0.3;_time = 0.3; if ((_this select 1) isKindOf ['cannoncore', configFile >> 'CfgWeapons']) then {_rec = 15;_time = 1;if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 1.5)};addCamShake [_rec * 0.1, _time * 3, 9]} else {if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 4)};};if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};addCamShake [_rec, _time, 15];};";
		};
	};
	class csa38_tank_base {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 0.3;_time = 0.3; if ((_this select 1) isKindOf ['cannoncore', configFile >> 'CfgWeapons']) then {_rec = 15;_time = 1;if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 1.5)};addCamShake [_rec * 0.1, _time * 3, 9]} else {if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 4)};};if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};addCamShake [_rec, _time, 15];};";
		};
	};
	class churchill_base_F {
		class twc_gunshake {
			clientFiredBIS = "if (isnull (_this select 6)) exitwith {}; if ((vehicle ((getShotParents (_this select 6)) select 1)) == (vehicle player)) then {_rec = 0.2;_time = 0.3; if ((_this select 1) isKindOf ['cannoncore', configFile >> 'CfgWeapons']) then {_rec = 15;_time = 1;if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 1.5)};addCamShake [_rec * 0.1, _time * 3, 9]} else {if (!(((getShotParents (_this select 6)) select 1) == player)) then {_rec = (_rec / 4)};};if (((_this select 1) isKindOf ['PistolCore', configFile >> 'CfgWeapons']) || ((_this select 1) isKindOf ['RifleCore', configFile >> 'CfgWeapons'])) then {_rec = 0.2};addCamShake [_rec, _time, 15];};";
		};
	};
};

class Extended_Init_EventHandlers
{
	class CBA_B_InvisibleTarget
	{
		class baseobject
		{
			serverinit = "params ['_entity']; [_entity] spawn {params ['_entity']; waituntil {!isnil 'twc_fnc_baseobject'};[_entity] spawn twc_fnc_baseobject}";
		};
	};
	class Tank
	{
		class aihearing
		{
			serverinit = "params ['_entity'];_entity setUnitTrait ['camouflageCoef' ,10];";
		};
	};
	
	class CUP_Ural_BaseTurret
	{
		class cog
		{
			serverinit = "params ['_car']; _car setCenterOfMass [-0.00687825,-0.001,-0.65]";
		};
	};
	
	class CUP_UAZ_Base
	{
		class cog
		{
			serverinit = "params ['_car']; _car setCenterOfMass [-0.00687825,-0.01,0.65]";
		};
	};
	
	
	class Helicopter
	{
		class aihearing
		{
			serverinit = "params ['_entity'];_entity setUnitTrait ['camouflageCoef' ,1300];";
		};
	};
	class Plane
	{
		class aihearing
		{
			serverinit = "params ['_entity'];_entity setUnitTrait ['camouflageCoef' ,1500];";
		};
	};
};
class CfgVehicles {
	/*class B_TargetSoldier ;
	class CBA_B_InvisibleTarget : B_TargetSoldier 
	{
		class EventHandlers {
			init = " systemchat 'normal';if (!isServer) exitWith {};params ['_entity'];[_entity] spawn twc_fnc_baseobject";
		};
	};
	*/
	class UK3CB_BAF_B_Bergen_MTP_Rifleman_XL_A;
	class TWC_BAF_B_Bergen_OLI_Rifleman_XL_A: UK3CB_BAF_B_Bergen_MTP_Rifleman_XL_A
	{
		displayname = "Bergen XL (Olive)";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_oli_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_us.rvmat"};
	};
	

	class MRAP_01_base_F;
	class UK3CB_BAF_Panther_Base: MRAP_01_base_F {
		class Wheels {
			class LF {
				boneName = "wheel_1_1";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				frictionVsSlipGraph[] = {{ 0.0, 0.8 }, { 0.3, 0.6 }, { 1.0, 0.5 }};
				latStiffX = 25;
				latStiffY = 180;
				longitudinalStiffnessPerUnitGravity = 5000;
				mass = 30;
				maxBrakeTorque = 4500;
				maxCompression = 0.3;
				maxDroop = 0.05;
				maxHandBrakeTorque = 0;
				moi = 40.5;
				side = "left";
				springDamperRate = 4500;
				springStrength = 36000;
				sprungMass = 2625;
				steering = 1;
				suspForceAppPointOffset = "wheel_1_1_axis";
				suspTravelDirection[] = {0,-1,0};
				tireForceAppPointOffset = "wheel_1_1_axis";
				width = "0.2";
			};
		};
	};
	
	class Truck_F;
	class Truck_01_base_F: Truck_F
	{
		class wheels;
		class complexgearbox;
	};
	class CUP_Ural_BaseTurret: Truck_F
	{
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				frictionVsSlipGraph[] = { { 0.0, 0.8 }, { 0.5, 0.5 }, { 1.0, 0.4 } };
				latStiffX = 3.5;
				latStiffY = 18;
				longitudinalStiffnessPerUnitGravity = 4582;
				mass = 90;
				maxBrakeTorque = 12500;
				maxCompression = 0.4;
				MaxDroop = 0.15;
				maxHandBrakeTorque = 2000;
				mMaxDroop = 0.15;
				MOI = 70;
				side = "left";
				springDamperRate = 6000;
				springStrength = 85000;
				sprungMass = 2750;
				steering = 1;
				suspForceAppPointOffset = "wheel_1_1_axis";
				suspTravelDirection[] = {0,-0.8,0};
				tireForceAppPointOffset = "wheel_1_1_axis";
				width = "0.2";
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				boundary = "wheel_1_2_bound";
				center = "wheel_1_2_axis";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
			};
			class LR2: LR
			{
				boneName = "wheel_1_3_damper";
				boundary = "wheel_1_3_bound";
				center = "wheel_1_3_axis";
				suspForceAppPointOffset = "wheel_1_3_axis";
				tireForceAppPointOffset = "wheel_1_3_axis";
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				boundary = "wheel_2_1_bound";
				center = "wheel_2_1_axis";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				side = "right";
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				boundary = "wheel_2_2_bound";
				center = "wheel_2_2_axis";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
			};
			class RR2: RR
			{
				boneName = "wheel_2_3_damper";
				boundary = "wheel_2_3_bound";
				center = "wheel_2_3_axis";
				suspForceAppPointOffset = "wheel_2_3_axis";
				tireForceAppPointOffset = "wheel_2_3_axis";
			};
		};
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.01; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 1.0; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 1.0; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 0.9; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.2; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.0; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.4; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	};
	
	class Van_01_base_F: Truck_F
	{
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				frictionVsSlipGraph[] = { { 0.0, 0.8 }, { 0.5, 0.5 }, { 1.0, 0.4 } };
				latStiffX = 3.5;
				latStiffY = 18;
				longitudinalStiffnessPerUnitGravity = 4582;
				mass = 90;
				maxBrakeTorque = 9000;
				maxCompression = 0.4;
				MaxDroop = 0.15;
				maxHandBrakeTorque = 1500;
				mMaxDroop = 0.15;
				MOI = 40;
				side = "left";
				springDamperRate = 4500;
				springStrength = 36000;
				sprungMass = 525;
				steering = 1;
				suspForceAppPointOffset = "wheel_1_1_axis";
				suspTravelDirection[] = {0,-0.8,0};
				tireForceAppPointOffset = "wheel_1_1_axis";
				width = "0.2";
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				boundary = "wheel_1_2_bound";
				center = "wheel_1_2_axis";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				boundary = "wheel_2_1_bound";
				center = "wheel_2_1_axis";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				side = "right";
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				boundary = "wheel_2_2_bound";
				center = "wheel_2_2_axis";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
			};
		};
	};
	class UK3CB_BAF_MAN_HX60_Base: Truck_01_base_F
	{
		antiRollbarForceCoef = 60;
		antiRollbarForceLimit = 5;
		antiRollbarSpeedMin = 5;
		antiRollbarSpeedMax = 100;
		torqueCurve[] = {{0,0.1},{0.278,0.2},{0.35,0.35},{0.461,0.5},{0.7,0.45},{0.75,0.35},{0.8,0.3},{1,0.2}};
		class complexgearbox: complexgearbox
		{
			GearboxRatios[] = {"R1",-13.094,"N",0,"D1",3.562,"D2",2.856,"D3",2.223,"D4",1.678,"D5",1.078};
		};
		class wheels: wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 2000;
				frictionVsSlipGraph[] = { { 0.0, 0.8 }, { 0.5, 0.5 }, { 1.0, 0.4 } };
				latStiffX = 25;
				latStiffY = 180;
				longitudinalStiffnessPerUnitGravity = 10000;
				mass = 100;
				maxBrakeTorque = 4500;
				maxCompression = 0.4;
				maxDroop = 0.1;
				maxHandBrakeTorque = 0;
				moi = 60;
				side = "left";
				springDamperRate = 7000;
				springStrength = 40000;
				sprungMass = 2750;
				steering = 1;
				suspForceAppPointOffset = "wheel_1_1_axis";
				suspTravelDirection[] = {0,-1,0};
				tireForceAppPointOffset = "wheel_1_1_axis";
				width = 0.35;
			};
			class RF: LF
			{
				springDamperRate = 7000;
				springStrength = 40000;
				sprungMass = 2750;
				maxBrakeTorque = 4500;
			};
			class RF2: RF
			{
				springDamperRate = 7000;
				maxCompression = 0.2;
				springStrength = 40000;
				sprungMass = 2750;
				maxBrakeTorque = 4500;
			};
			class LF2: LF
			{
				springDamperRate = 7000;
				maxCompression = 0.2;
				springStrength = 40000;
				sprungMass = 2750;
				maxBrakeTorque = 4500;
			};
		};
		
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.015; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 1.0; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 1.0; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 0.9; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.2; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.0; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.4; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	};
	
	class UK3CB_BAF_MAN_HX58_Base: UK3CB_BAF_MAN_HX60_Base
	{
		antiRollbarForceCoef = 60;
		antiRollbarForceLimit = 5;
		antiRollbarSpeedMin = 5;
		antiRollbarSpeedMax = 100;
		class wheels: wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 2000;
				frictionVsSlipGraph[] = { { 0.0, 0.8 }, { 0.5, 0.5 }, { 1.0, 0.4 } };
				latStiffX = 25;
				latStiffY = 180;
				longitudinalStiffnessPerUnitGravity = 10000;
				mass = 100;
				maxBrakeTorque = 4500;
				maxCompression = 0.4;
				maxDroop = 0.1;
				maxHandBrakeTorque = 0;
				moi = 60;
				side = "left";
				springDamperRate = 7000;
				springStrength = 40000;
				sprungMass = 2750;
				steering = 1;
				suspForceAppPointOffset = "wheel_1_1_axis";
				suspTravelDirection[] = {0,-1,0};
				tireForceAppPointOffset = "wheel_1_1_axis";
				width = 0.35;
			};
			class RF: LF
			{
				springDamperRate = 7000;
				springStrength = 40000;
				sprungMass = 2750;
				maxBrakeTorque = 4500;
			};
			class RF2: RF
			{
				springDamperRate = 7000;
				maxCompression = 0.4;
				springStrength = 40000;
				sprungMass = 2750;
				maxBrakeTorque = 4500;
			};
			class LF2: LF
			{
				springDamperRate = 7000;
				maxCompression = 0.4;
				springStrength = 40000;
				sprungMass = 2750;
				maxBrakeTorque = 4500;
			};
		};
	};
	
	class APC_Tracked_02_base_F;
	class rhs_zsutank_base:APC_Tracked_02_base_F
	{
		armor = 150;
		armorstructural = 450;
	};
	
	class Tank;
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class rhs_a3t72tank_base: Tank_F
	{
		armor = 250;
	};
	
	class CUP_MCV80_Base : Tank_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				magazines[] = {"ukcw_3rd_L21A1_APDS","ukcw_3rd_L21A1_APDS","ukcw_3rd_L21A1_APDS","ukcw_3rd_L21A1_APDS","ukcw_3rd_L21A1_APDS","ukcw_3rd_L21A1_APDS","ukcw_3rd_L21A1_APDS","ukcw_3rd_L21A1_APDS","ukcw_3rd_L21A1_APDS","ukcw_3rd_L21A1_APDS","ukcw_3rd_L21A1_APDS","ukcw_3rd_L21A1_APDS","ukcw_3rd_L21A1_APDS","ukcw_3rd_L21A1_APDS","ukcw_3rd_L21A1_APDS","ukcw_3rd_L21A1_APDS","ukcw_3rd_L21A1_APDS","ukcw_3rd_L21A1_APDS","ukcw_3rd_L21A1_APDS","ukcw_3rd_L21A1_APDS","ukcw_3rd_L21A1_APDS","ukcw_3rd_L21A1_APDS","ukcw_3rd_L21A1_APDS","ukcw_3rd_L21A1_APDS","ukcw_3rd_L21A1_APDS","ukcw_3rd_L21A1_APDS","ukcw_3rd_L21A1_APDS","ukcw_3rd_L21A1_APDS","ukcw_3rd_L21A1_APDS","ukcw_3rd_L21A1_HE","ukcw_3rd_L21A1_HE","ukcw_3rd_L21A1_HE","ukcw_3rd_L21A1_HE","ukcw_3rd_L21A1_HE","ukcw_3rd_L21A1_HE","ukcw_3rd_L21A1_HE","ukcw_3rd_L21A1_HE","ukcw_3rd_L21A1_HE","ukcw_3rd_L21A1_HE","ukcw_3rd_L21A1_HE","ukcw_3rd_L21A1_HE","ukcw_3rd_L21A1_HE","ukcw_3rd_L21A1_HE","ukcw_3rd_L21A1_HE","ukcw_3rd_L21A1_HE","ukcw_3rd_L21A1_HE","ukcw_3rd_L21A1_HE","ukcw_3rd_L21A1_HE","ukcw_3rd_L21A1_HE","ukcw_3rd_L21A1_HE","ukcw_3rd_L21A1_HE","CUP_1200Rnd_TE4_Red_Tracer_762x51_M240_M","CUP_1200Rnd_TE4_Red_Tracer_762x51_M240_M"};
				stabilizedInAxes = 0;
			};
		};
	};
	
	#include "Helicopters.hpp"
	
//handling modifications
	class Car;
	class Car_F: Car{
		class turrets;
		class Wheels {
			class LF {};
		};
	};
	
	class CUP_C_Golf4_Base: Car_F
	{
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				frictionVsSlipGraph[] = { { 0.0, 0.8 }, { 0.5, 0.5 }, { 1.0, 0.4 } };
				latStiffX = 3.5;
				latStiffY = 18;
				longitudinalStiffnessPerUnitGravity = 4582;
				mass = 90;
				maxBrakeTorque = 9000;
				maxCompression = 0.4;
				MaxDroop = 0.15;
				maxHandBrakeTorque = 1500;
				mMaxDroop = 0.15;
				MOI = 40;
				side = "left";
				springDamperRate = 4500;
				springStrength = 36000;
				sprungMass = 525;
				steering = 1;
				suspForceAppPointOffset = "wheel_1_1_axis";
				suspTravelDirection[] = {0,-0.8,0};
				tireForceAppPointOffset = "wheel_1_1_axis";
				width = "0.2";
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				boundary = "wheel_1_2_bound";
				center = "wheel_1_2_axis";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				steering = 0;
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				boundary = "wheel_2_1_bound";
				center = "wheel_2_1_axis";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				side = "right";
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				boundary = "wheel_2_2_bound";
				center = "wheel_2_2_axis";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				steering = 0;
			};
		};
	};
	
	class CUP_C_Golf4_Civ_Base: CUP_C_Golf4_Base
	{
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				frictionVsSlipGraph[] = { { 0.0, 0.8 }, { 0.5, 0.5 }, { 1.0, 0.4 } };
				latStiffX = 3.5;
				latStiffY = 18;
				longitudinalStiffnessPerUnitGravity = 4582;
				mass = 90;
				maxBrakeTorque = 9000;
				maxCompression = 0.4;
				MaxDroop = 0.15;
				maxHandBrakeTorque = 1500;
				mMaxDroop = 0.15;
				MOI = 40;
				side = "left";
				springDamperRate = 4500;
				springStrength = 36000;
				sprungMass = 525;
				steering = 1;
				suspForceAppPointOffset = "wheel_1_1_axis";
				suspTravelDirection[] = {0,-0.8,0};
				tireForceAppPointOffset = "wheel_1_1_axis";
				width = "0.2";
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				boundary = "wheel_1_2_bound";
				center = "wheel_1_2_axis";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				steering = 0;
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				boundary = "wheel_2_1_bound";
				center = "wheel_2_1_axis";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				side = "right";
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				boundary = "wheel_2_2_bound";
				center = "wheel_2_2_axis";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				steering = 0;
			};
		};
	};
	
	class CUP_C_Golf4_Civ_sport_Base: CUP_C_Golf4_Civ_Base
	{
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				frictionVsSlipGraph[] = { { 0.0, 0.8 }, { 0.5, 0.5 }, { 1.0, 0.4 } };
				latStiffX = 3.5;
				latStiffY = 18;
				longitudinalStiffnessPerUnitGravity = 4582;
				mass = 90;
				maxBrakeTorque = 9000;
				maxCompression = 0.4;
				MaxDroop = 0.15;
				maxHandBrakeTorque = 1500;
				mMaxDroop = 0.15;
				MOI = 40;
				side = "left";
				springDamperRate = 4500;
				springStrength = 36000;
				sprungMass = 525;
				steering = 1;
				suspForceAppPointOffset = "wheel_1_1_axis";
				suspTravelDirection[] = {0,-0.8,0};
				tireForceAppPointOffset = "wheel_1_1_axis";
				width = "0.2";
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				boundary = "wheel_1_2_bound";
				center = "wheel_1_2_axis";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				steering = 0;
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				boundary = "wheel_2_1_bound";
				center = "wheel_2_1_axis";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				side = "right";
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				boundary = "wheel_2_2_bound";
				center = "wheel_2_2_axis";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				steering = 0;
			};
		};
	};
	
	class CUP_SUV_Base: Car_F
	{
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				frictionVsSlipGraph[] = { { 0.0, 0.8 }, { 0.5, 0.5 }, { 1.0, 0.4 } };
				latStiffX = 3.5;
				latStiffY = 18;
				longitudinalStiffnessPerUnitGravity = 4582;
				mass = 90;
				maxBrakeTorque = 9000;
				maxCompression = 0.4;
				MaxDroop = 0.05;
				maxHandBrakeTorque = 1500;
				mMaxDroop = 0.05;
				MOI = 40;
				side = "left";
				springDamperRate = 1300;
				springStrength = 13000;
				sprungMass = 925;
				steering = 1;
				suspForceAppPointOffset = "wheel_1_1_axis";
				suspTravelDirection[] = {0,-0.8,0};
				tireForceAppPointOffset = "wheel_1_1_axis";
				width = "0.2";
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				boundary = "wheel_1_2_bound";
				center = "wheel_1_2_axis";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				steering = 0;
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				boundary = "wheel_2_1_bound";
				center = "wheel_2_1_axis";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				side = "right";
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				boundary = "wheel_2_2_bound";
				center = "wheel_2_2_axis";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				steering = 0;
			};
		};
	};
	
	class CUP_SUV_Unarmed_Base: CUP_SUV_Base
	{
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				frictionVsSlipGraph[] = { { 0.0, 0.8 }, { 0.5, 0.5 }, { 1.0, 0.4 } };
				latStiffX = 3.5;
				latStiffY = 18;
				longitudinalStiffnessPerUnitGravity = 4582;
				mass = 90;
				maxBrakeTorque = 9000;
				maxCompression = 0.4;
				MaxDroop = 0.15;
				maxHandBrakeTorque = 1500;
				mMaxDroop = 0.15;
				MOI = 40;
				side = "left";
				springDamperRate = 1300;
				springStrength = 13000;
				sprungMass = 925;
				steering = 1;
				suspForceAppPointOffset = "wheel_1_1_axis";
				suspTravelDirection[] = {0,-0.8,0};
				tireForceAppPointOffset = "wheel_1_1_axis";
				width = "0.2";
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				boundary = "wheel_1_2_bound";
				center = "wheel_1_2_axis";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				steering = 0;
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				boundary = "wheel_2_1_bound";
				center = "wheel_2_1_axis";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				side = "right";
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				boundary = "wheel_2_2_bound";
				center = "wheel_2_2_axis";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				steering = 0;
			};
		};
	};
	
	class CUP_Datsun_Base: Car_F
	{
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				frictionVsSlipGraph[] = { { 0.0, 0.8 }, { 0.5, 0.5 }, { 1.0, 0.4 } };
				latStiffX = 3.5;
				latStiffY = 18;
				longitudinalStiffnessPerUnitGravity = 4582;
				mass = 90;
				maxBrakeTorque = 9000;
				maxCompression = 0.4;
				MaxDroop = 0.15;
				mMaxDroop = 0.15;
				maxHandBrakeTorque = 1500;
				MOI = 40;
				side = "left";
				springDamperRate = 1000;
				springStrength = 13000;
				sprungMass = 900;
				steering = 1;
				suspForceAppPointOffset = "wheel_1_1_axis";
				suspTravelDirection[] = {0,-0.8,0};
				tireForceAppPointOffset = "wheel_1_1_axis";
				width = "0.2";
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				boundary = "wheel_1_2_bound";
				center = "wheel_1_2_axis";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				steering = 0;
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				boundary = "wheel_2_1_bound";
				center = "wheel_2_1_axis";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				side = "right";
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				boundary = "wheel_2_2_bound";
				center = "wheel_2_2_axis";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				steering = 0;
			};
		};
	};
	
	
	class CUP_Lada_Base: Car_F
	{
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				frictionVsSlipGraph[] = { { 0.0, 0.8 }, { 0.5, 0.5 }, { 1.0, 0.4 } };
				latStiffX = 3.5;
				latStiffY = 18;
				longitudinalStiffnessPerUnitGravity = 4582;
				mass = 90;
				maxBrakeTorque = 9000;
				maxCompression = 0.3;
				MaxDroop = 0.05;
				mMaxDroop = 0.05;
				maxHandBrakeTorque = 1500;
				MOI = 40;
				side = "left";
				springDamperRate = 1100;
				springStrength = 15000;
				sprungMass = 1200;
				steering = 1;
				suspForceAppPointOffset = "wheel_1_1_axis";
				suspTravelDirection[] = {0,-0.8,0};
				tireForceAppPointOffset = "wheel_1_1_axis";
				width = "0.2";
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				boundary = "wheel_1_2_bound";
				center = "wheel_1_2_axis";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				steering = 0;
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				boundary = "wheel_2_1_bound";
				center = "wheel_2_1_axis";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				side = "right";
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				boundary = "wheel_2_2_bound";
				center = "wheel_2_2_axis";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				steering = 0;
			};
		};
	};
	
	class CUP_Volha_Base: Car_F
	{
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				frictionVsSlipGraph[] = { { 0.0, 0.8 }, { 0.5, 0.5 }, { 1.0, 0.4 } };
				latStiffX = 3.5;
				latStiffY = 18;
				longitudinalStiffnessPerUnitGravity = 4582;
				mass = 90;
				maxBrakeTorque = 9000;
				maxCompression = 0.3;
				MaxDroop = 0.05;
				mMaxDroop = 0.05;
				maxHandBrakeTorque = 1500;
				MOI = 40;
				side = "left";
				springDamperRate = 1100;
				springStrength = 15000;
				sprungMass = 1200;
				steering = 1;
				suspForceAppPointOffset = "wheel_1_1_axis";
				suspTravelDirection[] = {0,-0.8,0};
				tireForceAppPointOffset = "wheel_1_1_axis";
				width = "0.2";
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				boundary = "wheel_1_2_bound";
				center = "wheel_1_2_axis";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				steering = 0;
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				boundary = "wheel_2_1_bound";
				center = "wheel_2_1_axis";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				side = "right";
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				boundary = "wheel_2_2_bound";
				center = "wheel_2_2_axis";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				steering = 0;
			};
		};
	};
	
	class CUP_Skoda_Base: Car_F
	{
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				frictionVsSlipGraph[] = { { 0.0, 0.8 }, { 0.5, 0.5 }, { 1.0, 0.4 } };
				latStiffX = 3.5;
				latStiffY = 18;
				longitudinalStiffnessPerUnitGravity = 4582;
				mass = 90;
				maxBrakeTorque = 9000;
				maxCompression = 0.3;
				MaxDroop = 0.05;
				mMaxDroop = 0.05;
				maxHandBrakeTorque = 1500;
				MOI = 40;
				side = "left";
				springDamperRate = 1100;
				springStrength = 15000;
				sprungMass = 1200;
				steering = 1;
				suspForceAppPointOffset = "wheel_1_1_axis";
				suspTravelDirection[] = {0,-0.8,0};
				tireForceAppPointOffset = "wheel_1_1_axis";
				width = "0.2";
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				boundary = "wheel_1_2_bound";
				center = "wheel_1_2_axis";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				steering = 0;
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				boundary = "wheel_2_1_bound";
				center = "wheel_2_1_axis";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				side = "right";
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				boundary = "wheel_2_2_bound";
				center = "wheel_2_2_axis";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				steering = 0;
			};
		};
	};
	
	class CUP_UAZ_Base: Car_F
	{
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				frictionVsSlipGraph[] = { { 0.0, 0.8 }, { 0.5, 0.5 }, { 1.0, 0.4 } };
				latStiffX = 3.5;
				latStiffY = 18;
				longitudinalStiffnessPerUnitGravity = 4582;
				mass = 90;
				maxBrakeTorque = 9000;
				maxCompression = 0.4;
				MaxDroop = 0.0;
				maxHandBrakeTorque = 1500;
				mMaxDroop = 0.0;
				MOI = 40;
				side = "left";
				springDamperRate = 1100;
				springStrength = 14000;
				sprungMass = 725;
				steering = 1;
				suspForceAppPointOffset = "wheel_1_1_axis";
				suspTravelDirection[] = {0,-0.8,0};
				tireForceAppPointOffset = "wheel_1_1_axis";
				width = "0.2";
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				boundary = "wheel_1_2_bound";
				center = "wheel_1_2_axis";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				boundary = "wheel_2_1_bound";
				center = "wheel_2_1_axis";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				side = "right";
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				boundary = "wheel_2_2_bound";
				center = "wheel_2_2_axis";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
			};
		};
	};
	
	class Quadbike_01_base_F: Car_F {
		antiRollbarForceCoef = 30;
		antiRollbarForceLimit = 5;
		antiRollbarSpeedMin = 5;
		antiRollbarSpeedMax = 100;
		ace_cargo_size = 10;
		ace_cargo_canLoad = 1;	
		//torqueCurve[] = {{0,0.3},{0.278,0.35},{0.35,0.35},{0.461,0.4},{0.7,0.3},{0.75,0.3},{0.8,0.25},{1,0.2}};
		torqueCurve[] = {{0,0.6},{0.2,0.65},{0.3,0.8},{0.7,0.95},{0.8,1},{0.9,0.95},{1,0.5}};
		peakTorque = 220;
		enginepower = 10;
		ace_cargo_hasCargo = 1;
		ace_cargo_space = 2;
		clutchStrength = 10;
		differentialType = "all_limited";
		frontRearSplit = 0.1;
		frontBias = 1.1;
		rearBias = 2.5;
		centreBias = 1.8;
		maxOmega = 200;
		maxSpeed = 100;
		turnCoef = 2.5;
			class Wheels {
				class LF {
				boneName = "wheel_1_1_damper";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 0.5;
				dampingRateDamaged = 5;
				dampingRateDestroyed = 5000;
				frictionVsSlipGraph[] = {[0,0.8],[0.5,0.9],[1,0.7]};
				latStiffX = 25;
				latStiffY = 120;
				longitudinalStiffnessPerUnitGravity = 5000;
				mass = 30;
				maxBrakeTorque = 700;
				maxCompression = 0.4;
				maxDroop = 0.25;
				maxHandBrakeTorque = 0;
				MOI = 20;
				side = "left";
				springDamperRate = 1000;
				springStrength = 50;
				sprungMass = 100;
				steering = 1;
				suspForceAppPointOffset = "wheel_1_1_axis";
				suspTravelDirection[] = {-0.125,-1,0};
				tireForceAppPointOffset = "wheel_1_1_axis";
				width = "0.2";
				};
				class LR: LF {
				boneName = "wheel_1_2_damper";
				boundary = "wheel_1_2_bound";
				center = "wheel_1_2_axis";
				maxHandBrakeTorque = 800;
				frictionVsSlipGraph[] = {[0,0.8],[0.5,0.9],[1,0.5]};
				latStiffX = 25;
				springDamperRate = 1500;
				steering = 0;
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				};
				class RF: LF {
				boneName = "wheel_2_1_damper";
				boundary = "wheel_2_1_bound";
				center = "wheel_2_1_axis";
				side = "right";
				suspForceAppPointOffset = "wheel_2_1_axis";
				suspTravelDirection[] = {0.125,-1,0};
				tireForceAppPointOffset = "wheel_2_1_axis";
				};
				class RR: RF {
				boneName = "wheel_2_2_damper";
				boundary = "wheel_2_2_bound";
				center = "wheel_2_2_axis";
				maxHandBrakeTorque = 800;
				frictionVsSlipGraph[] = {[0,0.8],[0.5,0.9],[1,0.5]};
				latStiffX = 25;
				springDamperRate = 1500;
				steering = 0;
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				};
			};
		
		
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
			maxTurnHundred = 0.5;
			turnDecreaseConst = 9;
			turnDecreaseLinear = 1;
			turnDecreaseTime = 0;
			turnIncreaseConst = 0.1;
			turnIncreaseLinear = 1;
			turnIncreaseTime = 1;
       };
	};
	
	
	class UK3CB_BAF_Jackal_Base_D : Car_F {
		class turrets: turrets
		{
			class mainturret;
		};
		antiRollbarForceCoef = 20;
		antiRollbarForceLimit = 17;
		antiRollbarSpeedMin = 5;
		antiRollbarSpeedMax = 100;
		turnCoef = 1.8;
		frontBias = 0.8;
		rearBias = 0.8;
		centreBias = 0.8;
		maxSpeed = 150;
		enginePower = 185;
		armor = 310;
		class Wheels:Wheels {
			class LF:LF {
				springDamperRate = 22000;
				springStrength = 80000;
				maxCompression = 0.3;
				maxBrakeTorque = 6000;
				maxHandBrakeTorque = 5000;
				frictionVsSlipGraph[] = {{ 0.0, 0.6 }, { 0.3, 0.5 }, { 1.0, 0.4 }};
			};
		};
		
	};
	class UK3CB_BAF_Coyote_L111A1_Base_D: UK3CB_BAF_Jackal_Base_D
	{
		class Turrets: Turrets
		{
			class L111A1_MainTurret: MainTurret {
				class viewoptics
				{
					initAngleX = 0;
					initAngleY = 0;
					initElev = 0;
					initFov = 0.1;
					maxAngleX = 30;
					maxAngleY = 100;
					maxElev = 40;
					maxFov = 0.1;
					minAngleX = -30;
					minAngleY = -100;
					minElev = -25;
					minFov = 0.1;
					visionMode[] = {"Normal"};
				};
			};
		};
	};
	class UK3CB_BAF_Jackal2_L111A1_Base_D: UK3CB_BAF_Coyote_L111A1_Base_D {
		
		antiRollbarForceCoef = 20;
		antiRollbarForceLimit = 17;
		turnCoef = 1.8;
		ace_cargo_size = 40;
		ace_cargo_canLoad = 1;
	};
	
	
	class UK3CB_BAF_Coyote_Passenger_L111A1_D: UK3CB_BAF_Coyote_L111A1_Base_D {
		
		antiRollbarForceCoef = 20;
		antiRollbarForceLimit = 17;
		turnCoef = 1.8;
	};
	class UK3CB_BAF_Coyote_L134A1_Base_D;
	class UK3CB_BAF_Jackal2_L134A1_Base_D: UK3CB_BAF_Coyote_L134A1_Base_D {
		
		antiRollbarForceCoef = 20;
		antiRollbarForceLimit = 17;
		turnCoef = 1.8;
		ace_cargo_size = 40;
		ace_cargo_canLoad = 1;
	};
		
	class UK3CB_BAF_Coyote_Passenger_L134A1_D: UK3CB_BAF_Coyote_L134A1_Base_D {
		
		antiRollbarForceCoef = 20;
		antiRollbarForceLimit = 17;
		turnCoef = 1.8;
	};
	
			
	
	class UK3CB_BAF_LandRover_Base: Car_F {
		
		ace_cargo_size = 35;
		ace_cargo_canLoad = 1;	
		antiRollbarForceCoef = 4.0;
		antiRollbarForceLimit = 3;
		differentialType = "all_limited";
		frontRearSplit = 0.9;
		frontBias = 1.5;
		rearBias = 1.5;
		centreBias = 1.5;
		class Turrets;
		class Wheels:Wheels {
			class LF:LF {
				boneName = "wheel_1_1_damper";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 1;
				dampingRateDamaged = 5;
				dampingRateDestroyed = 5000;
				dampingRateInAir = 0.8;
				frictionVsSlipGraph[] = {{ 0.0, 0.8 }, { 0.3, 0.6 }, { 1.0, 0.5 }};
				latStiffX = 15;
				latStiffY = 20;
				longitudinalStiffnessPerUnitGravity = 10000;
				mass = 30;
				maxBrakeTorque = 3250;
				maxCompression = 0.25;
				maxDroop = 0.3;
				maxHandBrakeTorque = 0;
				moi = 6;
				side = "left";
				springDamperRate = 4500;
				springStrength = 36000;
				sprungMass = 525;
				steering = 1;
				suspForceAppPointOffset = "wheel_1_1_axis";
				suspTravelDirection[] = {0,-1,0};
				tireForceAppPointOffset = "wheel_1_1_axis";
				width = 0.285;
				};
				class LR: LF {
				boneName = "wheel_1_2_damper";
				boundary = "wheel_1_2_bound";
				center = "wheel_1_2_axis";
				dampingRate = 1;
				dampingRateDamaged = 5;
				dampingRateDestroyed = 5000;
				dampingRateInAir = 0.8;
				frictionVsSlipGraph[] = {{ 0.0, 1.2 }, { 0.5, 1 }, { 1.0, 0.6 }};
				longitudinalStiffnessPerUnitGravity = 10000;
				mass = 30;
				maxBrakeTorque = 2950;
				maxDroop = 0.3;
				maxHandBrakeTorque = 9000;
				moi = 6;
				side = "left";
				sprungMass = 525;
				steering = 0;
				suspForceAppPointOffset = "wheel_1_2_axis";
				suspTravelDirection[] = {0,-1,0};
				tireForceAppPointOffset = "wheel_1_2_axis";
				width = 0.285;
				};
				class RF: LF {
				boneName = "wheel_2_1_damper";
				boundary = "wheel_2_1_bound";
				center = "wheel_2_1_axis";
				dampingRate = 1;
				dampingRateDamaged = 5;
				dampingRateDestroyed = 5000;
				dampingRateInAir = 0.8;
				longitudinalStiffnessPerUnitGravity = 10000;
				mass = 30;
				maxBrakeTorque = 3250;
				maxDroop = 0.3;
				maxHandBrakeTorque = 0;
				moi = 6;
				side = "right";
				steering = 1;
				suspForceAppPointOffset = "wheel_2_1_axis";
				suspTravelDirection[] = {0,-1,0};
				tireForceAppPointOffset = "wheel_2_1_axis";
				width = 0.285;
				};
				class RR: LR {
				boneName = "wheel_2_2_damper";
				boundary = "wheel_2_2_bound";
				center = "wheel_2_2_axis";
				dampingRate = 1;
				dampingRateDamaged = 5;
				dampingRateDestroyed = 5000;
				dampingRateInAir = 0.8;
				longitudinalStiffnessPerUnitGravity = 10000;
				mass = 30;
				maxBrakeTorque = 2950;
				maxDroop = 0.3;
				maxHandBrakeTorque = 9000;
				moi = 6;
				side = "right";
				steering = 0;
				suspForceAppPointOffset = "wheel_2_2_axis";
				suspTravelDirection[] = {0,-1,0};
				tireForceAppPointOffset = "wheel_2_2_axis";
				width = 0.285;
				};
			};
		
	};
	class Wheeled_APC_F : Car_F
	{
		class eventhandlers;
		class Wheels {
			class LF {};
		};
	};
	class CUP_Mastiff_Base : Wheeled_APC_F
	{
		antiRollbarForceCoef = 60;
		antiRollbarForceLimit = 40;
		antiRollbarSpeedMin = 5;
		antiRollbarSpeedMax = 100;
		terrainCoef = 2.0;
		turncoef = 2.0;
		armor = 700;
		clutchStrength = 150;
		differentialType = "all_open";


		class Wheels:wheels {
			class LF:LF {
				boneName = "wheel_1_1";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.2";
				mass = 80;
				MOI = 85;
				dampingRate = 0.1;
				dampingRateInAir = 2;
				dampingRateDamaged = 2;
				dampingRateDestroyed = 800;
				maxBrakeTorque = 4500;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.4;
				//MaxDroop = 0.2;
				sprungMass = 4250;
				springStrength = 75000;
				springDamperRate = 8000;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = { { 0.0, 0.8 }, { 0.5, 0.5 }, { 1.0, 0.4 } };
			};
		};
		
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.4; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 2.0; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 2.0; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
             
           turnDecreaseConst  = 2.0; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.2; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.0; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.1; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	   
		class EventHandlers: EventHandlers {
			init = "_car = (_this select 0); _car setCenterOfMass [-0.00687825,-0.814309,1.7]";
			
		};
	};
	
	class CUP_Wolfhound_Base : Wheeled_APC_F
	{
		antiRollbarForceCoef = 60;
		antiRollbarForceLimit = 40;
		antiRollbarSpeedMin = 30;
		antiRollbarSpeedMax = 100;
		terrainCoef = 2.0;
		turncoef = 2.0;
		armor = 700;
		clutchStrength = 150;
		differentialType = "all_open";


		class Wheels:wheels {
			class LF:LF {
				boneName = "wheel_1_1";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.2";
				mass = 80;
				MOI = 85;
				dampingRate = 0.1;
				dampingRateInAir = 2;
				dampingRateDamaged = 2;
				dampingRateDestroyed = 800;
				maxBrakeTorque = 4500;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.4;
				//MaxDroop = 0.2;
				sprungMass = 4250;
				springStrength = 25000;
				springDamperRate = 8000;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = { { 0.0, 0.8 }, { 0.5, 0.5 }, { 1.0, 0.4 } };
			};
		};
		
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.4; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 2.0; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 2.0; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
             
           turnDecreaseConst  = 2.0; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.2; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.0; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.1; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	   
		class EventHandlers: EventHandlers {
			init = "_car = (_this select 0); _car setCenterOfMass [-0.00687825,-0.814309,1.5]";
			
		};
	};
	
	
	class UK3CB_BAF_LandRover_WMIK_Base:UK3CB_BAF_LandRover_Base
	{
		class Turrets: Turrets
		{
			class mainturret;
		};
	};
	
	class UK3CB_BAF_LandRover_WMIK_HMG_Base: UK3CB_BAF_LandRover_WMIK_Base
	{
		class Turrets: Turrets
		{
			class HMG_Turret: MainTurret {
				class viewoptics
				{
					initAngleX = 0;
					initAngleY = 0;
					initElev = 0;
					initFov = 0.1;
					maxAngleX = 30;
					maxAngleY = 100;
					maxElev = 40;
					maxFov = 0.1;
					minAngleX = -30;
					minAngleY = -100;
					minElev = -25;
					minFov = 0.1;
					visionMode[] = {"Normal"};
				};
			};
		};
	};
	
	#include "acre_apcs.hpp"
	#include "acre_boats.hpp"
	#include "acre_cars.hpp"
	#include "acre_helicopters.hpp"
	#include "acre_planes.hpp"
	#include "acre_tanks.hpp"
};

class cfgMagazines
{
	class CA_Magazine;
	
	class 10Rnd_RHS_50BMG_Box: CA_Magazine
	{};
	class rhsusf_mag_10Rnd_STD_50BMG_M33: 10Rnd_RHS_50BMG_Box
	{
		ammo = "ACE_127x99_Ball_AMAX";
		initSpeed = 860;
		displayName = "12.7x99mm 10Rnd (AMAX)";
		descriptionShort = "Caliber: 12.7x99mm (AMAX)<br />Rounds: 10";
	};
	class rhsusf_mag_10Rnd_STD_50BMG_mk211: 10Rnd_RHS_50BMG_Box
	{
		initSpeed = 880;
		displayName = "12.7x99mm 10Rnd (HEIAP)";
		descriptionShort = "Caliber: 12.7x99mm (HEIAP)<br />High Explosive Incendiary Armour Piercing<br />Rounds: 10";
	};
	class 10Rnd_338_Mag;
	class ACE_10Rnd_338_API526_Mag: 10Rnd_338_Mag
	{
		displayNameShort = ".338 API";
		descriptionShort = "Caliber: .338LM (API526)<br />Armour Piercing Incendiary (526 Grain)<br />Rounds: 10";
	};
	class ACE_10Rnd_338_300gr_HPBT_Mag: 10Rnd_338_Mag
	{
		displayNameShort = ".338 HPBT";
		descriptionShort = "Caliber: .338LM (HPBT)<br />Hollow Point Boat-Tail (300 Grain)<br />Rounds: 10";
	};
		
	
};

class twc_APIbullet_effect
{
	class incendiary
	{
       simulation = "light";   //type of simulation - particles or light
       type = "CmeasuresLight";           //name of PE's class defined in CfgCloudlets or light's class defined in CfgLights
       position[] = {0, 0, 0};     //position related to the default position or memorypoint
       lifeTime = 0.08;            //life time of emitter
       qualityLevel = -1;          // effect is only used when the the particle quality option particlesQuality in user settings matches this qualityLevel. -1 play everytime, 0 play only on low, 1 play only on normal, 2 play only on high. Default: -1
       start = 1;                  //is used only if the lifeTime parameter is defined, if value is changed from negative to positive then the effect is triggered
       enabled = 1;                //1 effect is enabled, -1 effect is disabled
	   intensity = 0.001;
	   interval = 1;
   };
	class smoke2
	{
       simulation = "particles";   //type of simulation - particles or light
       //type = "AutoCannonFired";           //name of PE's class defined in CfgCloudlets or light's class defined in CfgLights
       type = "Cmeasures2";           //name of PE's class defined in CfgCloudlets or light's class defined in CfgLights
       position[] = {0, 0, 0};     //position related to the default position or memorypoint
       lifeTime = 0.2;            //life time of emitter
       qualityLevel = -1;          // effect is only used when the the particle quality option particlesQuality in user settings matches this qualityLevel. -1 play everytime, 0 play only on low, 1 play only on normal, 2 play only on high. Default: -1
       start = 1;                  //is used only if the lifeTime parameter is defined, if value is changed from negative to positive then the effect is triggered
       enabled = 1;                //1 effect is enabled, -1 effect is disabled
	   intensity = 1;
   };
	class smoke
	{
       simulation = "particles";   //type of simulation - particles or light
       type = "AutoCannonFired";           //name of PE's class defined in CfgCloudlets or light's class defined in CfgLights
       position[] = {0, 0, 0};     //position related to the default position or memorypoint
       lifeTime = 0.2;            //life time of emitter
       qualityLevel = -1;          // effect is only used when the the particle quality option particlesQuality in user settings matches this qualityLevel. -1 play everytime, 0 play only on low, 1 play only on normal, 2 play only on high. Default: -1
       start = 1;                  //is used only if the lifeTime parameter is defined, if value is changed from negative to positive then the effect is triggered
       enabled = 1;                //1 effect is enabled, -1 effect is disabled
	   intensity = 1;
   };
};

class twc_APIbullet_effect_ground
{
	class hit_target
	{
       simulation = "particles";   //type of simulation - particles or light
       type = "ImpactDust2";           //name of PE's class defined in CfgCloudlets or light's class defined in CfgLights
       position[] = {0, 0, 0};     //position related to the default position or memorypoint
       lifeTime = 0.2;            //life time of emitter
       qualityLevel = -1;          // effect is only used when the the particle quality option particlesQuality in user settings matches this qualityLevel. -1 play everytime, 0 play only on low, 1 play only on normal, 2 play only on high. Default: -1
       start = 1;                  //is used only if the lifeTime parameter is defined, if value is changed from negative to positive then the effect is triggered
       enabled = 1;                //1 effect is enabled, -1 effect is disabled
	   intensity = 1;
   };
};

class twc_APIbullet_effect_man:twc_APIbullet_effect
{
	class hit_target
	{
       simulation = "particles";   //type of simulation - particles or light
       type = "BloodMist";           //name of PE's class defined in CfgCloudlets or light's class defined in CfgLights
       position[] = {0, 0, 0};     //position related to the default position or memorypoint
       lifeTime = 0.9;            //life time of emitter
       qualityLevel = -1;          // effect is only used when the the particle quality option particlesQuality in user settings matches this qualityLevel. -1 play everytime, 0 play only on low, 1 play only on normal, 2 play only on high. Default: -1
       start = 1;                  //is used only if the lifeTime parameter is defined, if value is changed from negative to positive then the effect is triggered
       enabled = 1;                //1 effect is enabled, -1 effect is disabled
	   intensity = 1;
   };
};

class twc_127_hiteffect_grey
{
	class smoke
	{
       simulation = "particles";   //type of simulation - particles or light
       type = "AutoCannonFired";           //name of PE's class defined in CfgCloudlets or light's class defined in CfgLights
       position[] = {0, 0, 0};     //position related to the default position or memorypoint
       lifeTime = 0.3;            //life time of emitter
       qualityLevel = -1;          // effect is only used when the the particle quality option particlesQuality in user settings matches this qualityLevel. -1 play everytime, 0 play only on low, 1 play only on normal, 2 play only on high. Default: -1
       start = 1;                  //is used only if the lifeTime parameter is defined, if value is changed from negative to positive then the effect is triggered
       enabled = 1;                //1 effect is enabled, -1 effect is disabled
	   intensity = 1;
   };
};

class GrenadeExplosion
{
	class GrenadeExp1
	{
       simulation = "particles";   //type of simulation - particles or light
       type = "GrenadeBubbles1";           //name of PE's class defined in CfgCloudlets or light's class defined in CfgLights
       position[] = {0, 0, 0};     //position related to the default position or memorypoint
       lifeTime = 0.2;            //life time of emitter
       qualityLevel = -1;          // effect is only used when the the particle quality option particlesQuality in user settings matches this qualityLevel. -1 play everytime, 0 play only on low, 1 play only on normal, 2 play only on high. Default: -1
       start = 1;                  //is used only if the lifeTime parameter is defined, if value is changed from negative to positive then the effect is triggered
       enabled = -1;                //1 effect is enabled, -1 effect is disabled
	   //Hobbs note, disabled intentionally
	   intensity = 1;
	};
	class GrenadeBubbles
	{
       simulation = "particles";   //type of simulation - particles or light
       type = "GrenadeBubbles1";           //name of PE's class defined in CfgCloudlets or light's class defined in CfgLights
       position[] = {0, 0, 0};     //position related to the default position or memorypoint
       lifeTime = 0.1;            //life time of emitter
       qualityLevel = -1;          // effect is only used when the the particle quality option particlesQuality in user settings matches this qualityLevel. -1 play everytime, 0 play only on low, 1 play only on normal, 2 play only on high. Default: -1
       start = 1;                  //is used only if the lifeTime parameter is defined, if value is changed from negative to positive then the effect is triggered
       enabled = 1;                //1 effect is enabled, -1 effect is disabled
	   intensity = 1;
	};
	class GrenadeSmoke1
	{
       simulation = "particles";   //type of simulation - particles or light
       type = "GrenadeSmoke1";           //name of PE's class defined in CfgCloudlets or light's class defined in CfgLights
       position[] = {0, 0, 0};     //position related to the default position or memorypoint
       lifeTime = 1;            //life time of emitter
       qualityLevel = -1;          // effect is only used when the the particle quality option particlesQuality in user settings matches this qualityLevel. -1 play everytime, 0 play only on low, 1 play only on normal, 2 play only on high. Default: -1
       start = 1;                  //is used only if the lifeTime parameter is defined, if value is changed from negative to positive then the effect is triggered
       enabled = 1;                //1 effect is enabled, -1 effect is disabled
	   intensity = 1;
	};
	class Light1
	{
       simulation = "light";   //type of simulation - particles or light
       type = "GrenadeExploLight";         //name of PE's class defined in CfgCloudlets or light's class defined in CfgLights
       position[] = {0, 0, 0};     //position related to the default position or memorypoint
       lifeTime = 0.2;            //life time of emitter
       qualityLevel = -1;          // effect is only used when the the particle quality option particlesQuality in user settings matches this qualityLevel. -1 play everytime, 0 play only on low, 1 play only on normal, 2 play only on high. Default: -1
       start = 1;                  //is used only if the lifeTime parameter is defined, if value is changed from negative to positive then the effect is triggered
       enabled = 1;                //1 effect is enabled, -1 effect is disabled
	   intensity = 0.01;
	};
};