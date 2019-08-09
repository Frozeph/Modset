class CfgFunctions {
	class TWC {
		class functions {
			file = "twc_framework\functions";
			class AirAssault {};
			class Airborne {};
			class AmbientAA {};
			class ambientCivDepopulate {};
			class ambientCivPopulate {};
			class Artillery{};
			class AttackHelicopter{};
			class AttackPlane {};
			class banzaiSounds {};
			class BattlefieldSounds {};
			class briefingLoadout {};
			class charge {};
			class CommandMessage{};
			class crateParadrop {};
			class crateSlingload {};
			class createMarker{};
			class CreateTask{};
			class daisyCutter{};
			class Defend {};
			class dummyBullets {};
			class Flagchange {};
			class HideMarkers {};
			class intelHint{};
			class intelHintWithVariable{};
			class LightsSwitch{};
			class Patrol {};
			class patrolRoads{};
			class placedIED{};
			class putWeaponOnBack{};
			class reconnected{};
			class Retreat{};
			class spawnGroup{};
			class spawnIed{};
			class setUniform{};
			class stationaryUnits{};
			class movableUnits{};
			class UpdateTask{};
			class virtualMortar{};
			class toggleSpectator {};
			class grabComposition {};
			class sendCTabMessage {};
			class GliderTakeOff {};
			class confiscateBadItems {};
			class silentSafety {};
			class gunwalk {};
			class mortarwalk {};
			class init{};
			class addACEInteraction {};
			class aiscramblenew {};
			class aiscramble {};
			class aisuppresscqb {};
			class aisuppress {};
			
			/** AMBIENT AIRCRAFT **/
			class ambientFlyBy {};
			class ambientFormationFlyBy {};
		};
		
		class modules {
			file = "twc_framework\modules";
			class era{};
			class rollShirt{};
			class boatSafety{};
			class civilianEquipment{};
			class deadBodies{};
			class disconnectGear{};
			class missionModuleInit{};
			class moduleDebug{};
			class run{};
			class safeZone{};
			class zeus{};
			class moduleAmbientCiv {};
			class moduleCreateTask;
			class moduleCrateParadrop {};
			class moduleCrateSlingload {};
			class moduleStationaryUnits{};
			class moduleMovableUnits{};
			class moduleVirtualArtillery{};
			class moduleArtillery{};
			class moduleUpdateTask{};
			class moduleDefend{};
			class moduleDummyBullets {};
			class moduleAirAssault{};
			class moduleAirborne {};
			class moduleAttackPlane{};
			class moduleAmbientAA;
			class moduleCommandMessage{};
			class moduleCharge {};
			class moduleLightsSwitch{};
			class moduleHideMarkers{};
			class moduleIntelHint{};
			class moduleIntelHintWithVariable{};
			class moduleDaisyCutter{};
			class moduleDisableCaching {};
			class moduleGrabComposition {};
			class moduleIgnoreForwardBase {};
			class moduleGliderTakeOff {};
			class moduleTriggerUncache {};
			class moduleUrbanUnitsCache {};
			class modulegunwalk {};
			class modulemortarwalk {};
			class moduleACEInteract {};
			class moduleAmbientSound {};
			class moduleAmbientSoundSimp {};
		};
		
		class cache {
			file = "twc_framework\cache";
			class aiCaching {};
			class cacheGroup {};
			class cacheModuleInit {};
			class cacheVehicle {};
			class initAICache {};
			class initVehicleCache {};
			class unCacheGroup {};
			class unCacheVehicle {};
			class vehicleCaching {};
		};
		
		class headlessClient {
			file = "twc_framework\headlessClient";
			class handleSpawn {};
			class hcModuleInit {};
			class rebalance {};
			class transferGroups {};
		};

		class curator {
			file = "twc_framework\curator";
			class setSpectator {};
			// medical moved to twc_medical
		};

		class artillery {
			file = "twc_framework\artillery";
			class moduleArtillerySpotter {};
			class moduleArtilleryPieces {};
		};
	};
};