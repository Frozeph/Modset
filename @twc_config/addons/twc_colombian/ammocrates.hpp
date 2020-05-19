class TWC_AmmoBox_Portable;
class TWC_AmmoBox_Colombia_Portable: TWC_AmmoBox_Portable {
	scope = 2;
	scopeCurator = 2;
	displayName = "Colombia Squad Resupply (Portable)";
	editorSubcategory = "TWC_Crates_Other";
	
	class TransportItems {
		ADD_ITEM(ACE_fieldDressing, 20);
		ADD_ITEM(ACE_elasticBandage, 20);
		ADD_ITEM(ACE_quikclot, 20);
		ADD_ITEM(ACE_packingBandage, 20);
		
		ADD_ITEM(ACE_morphine, 16);
		ADD_ITEM(ACE_epinephrine, 16);
		ADD_ITEM(ACE_tourniquet, 10);
	};
	
	class TransportMagazines {
		// Galil Stanag
		ADD_MAGA(CUP_35Rnd_556x45_Galil_Mag, 19);
		ADD_MAGA(CUP_35Rnd_556x45_Red_Tracer_Galil_Mag, 6);
		
		// M16 Stanag
		ADD_MAGA(CUP_30Rnd_556x45_Stanag, 10);
		
		// M60
		ADD_MAGA(CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M, 16);
		
		// M203 40mm
		ADD_MAGA(CUP_1Rnd_HE_M203, 16);
		ADD_MAGA(UGL_FlareWhite_F, 4);
		ADD_MAGA(1Rnd_Smoke_Grenade_shell, 4);
		ADD_MAGA(1Rnd_SmokeGreen_Grenade_shell, 4);
		ADD_MAGA(1Rnd_SmokeRed_Grenade_shell, 4);
		ADD_MAGA(1Rnd_SmokeBlue_Grenade_shell, 4);

		// Smoke Grenades
		ADD_MAGA(SmokeShell, 14);
		ADD_MAGA(SmokeShellRed, 4);
		ADD_MAGA(SmokeShellGreen, 4);
		ADD_MAGA(SmokeShellBlue, 4);
		ADD_MAGA(SmokeShellYellow, 4);
		
		// Hand Grenade HE
		ADD_MAGA(CUP_HandGrenade_M67, 10);
	};
};