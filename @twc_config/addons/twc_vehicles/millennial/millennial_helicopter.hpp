#undef CURRENT_VEHICLE
#define CURRENT_VEHICLE MILLENNIAL_WILDCAT_MOD
class TWC_Vehicle_Millennial_Wildcat_RAF: TWC_BaseClass_Wildcat_F {
	scope = 2;
	scopeCurator = 2;
	side = 1;
	ADD_FACTION;
	
	displayname = "Wildcat CAS (RAF)";
	editorSubcategory = "TWC_ForceType_AirMobility";
	
	class TransportItems {
		ADD_ITEM(ACE_fieldDressing, ADD_QNTY(SECTION_FIELDDRESSING));
		ADD_ITEM(ACE_elasticBandage, ADD_QNTY(SECTION_ELASTICBANDAGE));
		ADD_ITEM(ACE_quikclot, ADD_QNTY(SECTION_QUIKCLOT));
		ADD_ITEM(ACE_packingBandage, ADD_QNTY(SECTION_PACKINGBANDAGE));
		ADD_ITEM(ACE_tourniquet, ADD_QNTY(SECTION_TOURNIQUET));
		ADD_ITEM(ACE_morphine, ADD_QNTY(SECTION_MORPHINE));
		ADD_ITEM(ACE_epinephrine, ADD_QNTY(SECTION_EPINEPHRINE));
	};
	
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_30Rnd, ADD_QNTY(MILLENNIAL_SECTION_EARLY_RIFLE));
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T, ADD_QNTY(MILLENNIAL_SECTION_EARLY_RIFLE_T));
		
		ADD_MAGA(SmokeShell, ADD_QNTY(SECTION_SMOKE));
	};
	
	class TransportWeapons { };
	class TransportBackpacks { };
};

// class TWC_Vehicle_Millennial_Puma_RAF: {