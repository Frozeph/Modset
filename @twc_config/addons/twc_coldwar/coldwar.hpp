	class ColdWar_Base: B_Soldier_base_F
	{
		scope=1;
		displayName="Base";
		faction="TWC_ColdWar";
		editorSubcategory = "Men_ColdWar_Mounted";
		vehicleClass="Men_ColdWar_Mounted";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="ukcw_p60_uniform";
		backpack="";
		linkedItems[]=
		{
			"ukcw_1958_webbing",
			"ukcw_helmet_mk3",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ukcw_1958_webbing",
			"ukcw_helmet_mk3",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		Items[]=
		{
			"ACE_EarPlugs",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_morphine",
			"ACE_epinephrine",
			"ACE_tourniquet",
			"ACE_tourniquet"
		};
		respawntems[]=
		{
			"ACE_EarPlugs",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_morphine",
			"ACE_epinephrine",
			"ACE_tourniquet",
			"ACE_tourniquet"
		};
	};
	class ColdWar_Rifleman: ColdWar_Base
	{
		scope=2;
		displayName="Rifleman";
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L1A1_Wood",
			"ukcw_L1A1_law"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L1A1_Wood",
			"ukcw_L1A1_law"	
		};
		magazines[]=
		{
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell"
		};
	};
	class ColdWar_Rifleman_SUIT: ColdWar_Rifleman
	{
		displayName="Rifleman SUIT";
		weapons[]=
		{
			"Throw",
			"Put",	
			"twc_L1A1_SUIT",
			"ukcw_L1A1_law"		
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"twc_L1A1_SUIT",
			"ukcw_L1A1_law"	
		};
	};
	class ColdWar_AT: ColdWar_Rifleman
	{
		scope=2;
		displayName="AT Rifleman";
		icon="iconManAT";
		backpack="";
		linkedItems[]=
		{
			"ukcw_1958_webbing",
			"ukcw_helmet_mk3",
			"CUP_optic_MAAWS_Scope",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ukcw_1958_webbing",
			"ukcw_helmet_mk3",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"ukcw_sterling_sub",
			"twc_l14A1_scoped"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"ukcw_sterling_sub",
			"twc_l14A1_scoped"
		};
		magazines[]=
		{
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_l14a1_HEAT",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_l14a1_HEAT",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell"
		};
	};
	class ColdWar_AT_Ass: ColdWar_Rifleman
	{
		displayName="AT Assistant Rifleman";
		backpack="TWC_Backpack_Cold_War_AT_Ass";
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L1A1_Wood"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L1A1_Wood"
		};
	};
	class ColdWar_2IC: ColdWar_Rifleman
	{
		displayName="2IC";
		backpack="TWC_Backpack_Cold_War_2IC";
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L1A1_Wood"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L1A1_Wood"
		};
	};
	class ColdWar_MG: ColdWar_Base
	{
		scope=2;
		displayName="Machine Gunner";
		icon="iconManMG";
		backpack="";
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L7A2"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L7A2"
		};
		magazines[]=
		{
			"UK3CB_BAF_762_100Rnd",	
			"UK3CB_BAF_762_100Rnd",
			"UK3CB_BAF_762_100Rnd_T",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_762_100Rnd",	
			"UK3CB_BAF_762_100Rnd",
			"UK3CB_BAF_762_100Rnd",
			"SmokeShell"
		};		
	};
	class ColdWar_MG_AS: ColdWar_Rifleman
	{
		displayName="Machine Gunner Assistant";
		backpack="TWC_Backpack_Cold_War_MG";
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L1A1_Wood"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L1A1_Wood"
		};
	};
	class ColdWar_Section_Leader: ColdWar_Rifleman
	{
		displayName="Section Leader";
		icon="iconManLeader";
		backpack="TWC_Backpack_Cold_War_Section";
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
		linkedItems[]=
		{
			"Binocular",
			"ukcw_1958_webbing",
			"ukcw_helmet_mk3",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ACE_MapTools"
		};
		respawnLinkedItems[]=
		{
			"Binocular",
			"ukcw_1958_webbing",
			"ukcw_helmet_mk3",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ACE_MapTools"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"Binocular",
			"UK3CB_BAF_L1A1_Wood"			
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"Binocular",
			"UK3CB_BAF_L1A1_Wood"			
		};
		magazines[]=
		{
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd_T",
			"UK3CB_BAF_762_20Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellRed",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShellBlue"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd_T",
			"UK3CB_BAF_762_20Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellRed",
			"SmokeShellRed",
			"SmokeShellBlue",
			"SmokeShellBlue"
		};
		Items[]=
		{
			"ACE_EarPlugs",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_morphine",
			"ACE_epinephrine",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_MapTools"
		};
		respawntems[]=
		{
			"ACE_EarPlugs",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_morphine",
			"ACE_epinephrine",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_MapTools"
		};
	};
	class ColdWar_Platoon_Commander: ColdWar_Section_Leader
	{
		displayName="Platoon Commander";
		backpack = "TWC_Backpack_Cold_War_Platoon_Commander";
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"Binocular",
			"ukcw_sterling_sub"		
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"Binocular",
			"ukcw_sterling_sub"			
		};
		magazines[]=
		{
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag"
		};
		Respawnmagazines[]=
		{
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag"
		};
	};
	class ColdWar_Sergeant: ColdWar_Platoon_Commander
	{
		displayName="Platoon Sergeant";
		backpack="TWC_Backpack_Cold_War_Platoon_Sergeant";
	};
	class ColdWar_CSM: ColdWar_Platoon_Commander
	{
		displayName="Company Sergeant Major";
	};
	class ColdWar_Medic: ColdWar_Base
	{
		scope=2;
		displayName="Platoon Medic";
		icon="iconManMedic";
		backpack="TWC_Backpack_Cold_Medic";
		attendant = 1;
		weapons[]=
		{
			"Throw",
			"Put",
			"ukcw_sterling_sub"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"ukcw_sterling_sub"
		};
		magazines[]=
		{
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
	};
	class ColdWar_FAC: ColdWar_Section_Leader
	{
		displayName="Platoon FAC";
		backpack="TWC_Backpack_Cold_War_FAC";
	};
	class ColdWar_HeliPilot: ColdWar_Base
	{
		scope=2;
		displayName="Helicopter Pilot";
		uniformClass="ukcw_p60_uniform";
		backpack="TWC_Backpack_Cold_War_Tank";
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
		linkedItems[]=
		{
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"UK3CB_BAF_V_Pilot_DPMW",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ACE_Flashlight_MX991"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"UK3CB_BAF_V_Pilot_DPMW",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ACE_Flashlight_MX991"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"ukcw_sterling_sub"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"ukcw_sterling_sub"
		};
		magazines[]=
		{
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"SmokeShell",
			"SmokeShell"
		};
	};
	class ColdWar_JetPilot: ColdWar_HeliPilot
	{
		displayName="Jet Pilot";
		uniformClass="UK3CB_BAF_U_HeliPilotCoveralls_RAF";
		backpack="TWC_Backpack_Cold_War_Tank";
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
		linkedItems[]=
		{
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"CUP_V_B_PilotVest",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ACE_Flashlight_MX991"
		};
		respawnLinkedItems[]=
		{
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"CUP_V_B_PilotVest",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ACE_Flashlight_MX991"
		};
		weapons[]=
		{
			"Throw",
			"Put"		
		};
		respawnweapons[]=
		{
			"Throw",
			"Put"		
		};
		magazines[]=
		{
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"SmokeShell",
			"SmokeShell"
		};
	};
	class ColdWar_AA_Gunner: ColdWar_Base
	{
		displayName="AA Gunner";
		faction="TWC_ColdWar";
		editorSubcategory = "Men_ColdWar_Dismounted";
		vehicleClass="Men_ColdWar_Dismounted";
		icon="iconManExplosive";
		weapons[]=
		{
			"Throw",
			"Put",	
			"ukcw_sterling_sub",
			"ukcw_blowpipe"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"ukcw_sterling_sub",
			"ukcw_blowpipe"
		};
		magazines[]=
		{
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"SmokeShell",
			"ukcw_blowpipe_missile"
		};
		Respawnmagazines[]=
		{
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"SmokeShell",
			"ukcw_blowpipe_missile"
		};
	};
	class ColdWar_AA_Assistant: ColdWar_AA_Gunner
	{
		displayName="AA Assistant";
		backpack = "TWC_Backpack_Cold_War_AA";
		weapons[]=
		{
			"Throw",
			"Put",	
			"ukcw_sterling_sub"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"ukcw_sterling_sub"
		};
		magazines[]=
		{
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"SmokeShell"
		};
	};
	class ColdWar_MilanGunner: ColdWar_AT
	{
		displayName="Milan Gunner";
		editorSubcategory = "Men_ColdWar_Dismounted";
		vehicleClass="Men_ColdWar_Dismounted";
		backpack="ukcw_milan_gun_bag";
		weapons[]=
		{
			"Throw",
			"Put",	
			"ukcw_sterling_sub"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"ukcw_sterling_sub"
		};
	};
	class ColdWar_MilanAssistant: ColdWar_MilanGunner
	{
		displayName="Milan Assistant";
		backpack="TWC_Backpack_Cold_War_Milan";
		weapons[]=
		{
			"Throw",
			"Put",	
			"ukcw_sterling_sub"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"ukcw_sterling_sub"
		};
	};
	class ColdWar_Tank_Commander: ColdWar_Base
	{
		scope=2;
		displayName="Tank Commander";
		icon="iconManLeader";
		uniformClass="UK3CB_BAF_U_CrewmanCoveralls_RTR";
		backpack="TWC_Backpack_Cold_War_Tank";
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
		linkedItems[]=
		{
			"CUP_V_C_Police_Holster",
			"UK3CB_BAF_H_Beret_RTR_PRR_Over",
			"ItemCompass",
			"itemMap",
			"ItemWatch",
			"Binocular",
			"ACE_Flashlight_MX991"
		};
		respawnLinkedItems[]=
		{
       		"CUP_V_C_Police_Holster",
			"UK3CB_BAF_H_Beret_RTR_PRR_Over",
			"ItemCompass",
			"itemMap",
			"ItemWatch",
			"Binocular",
			"ACE_Flashlight_MX991"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"ukcw_sterling_sub"	
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"ukcw_sterling_sub"
		};
		magazines[]=
		{
		"ukcw_34_rnd_sterling_mag",
		"ukcw_34_rnd_sterling_mag",
		"ukcw_34_rnd_sterling_mag",
		"ukcw_34_rnd_sterling_mag",
		"SmokeShell",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{
		"ukcw_34_rnd_sterling_mag",
		"ukcw_34_rnd_sterling_mag",
		"ukcw_34_rnd_sterling_mag",
		"ukcw_34_rnd_sterling_mag",
		"SmokeShell",
		"SmokeShell"
		};
	};
	class ColdWar_Tank_Crewman: ColdWar_Tank_Commander
	{
		displayName="Tank Crew";
		icon="iconMan";
		backpack="";
		linkedItems[]=
		{
			"CUP_V_C_Police_Holster",
			"UK3CB_BAF_H_Beret_RTR",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_C_Police_Holster",
			"UK3CB_BAF_H_Beret_RTR_PRR_Over",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
	};
	class ColdWar_Vehicle_Commander: ColdWar_Tank_Commander
	{
		displayName="Vehicle Commander";
		uniformClass="ukcw_p60_uniform";
		linkedItems[]=
		{
			"CUP_V_C_Police_Holster",
			"UK3CB_BAF_H_Beret_PWRR_PRR_Over",
			"ItemCompass",
			"itemMap",
			"ItemWatch",
			"Binocular",
			"ACE_Flashlight_MX991"
		};
		respawnLinkedItems[]=
		{
       		"CUP_V_C_Police_Holster",
			"UK3CB_BAF_H_Beret_PWRR_PRR_Over",
			"ItemCompass",
			"itemMap",
			"ItemWatch",
			"Binocular",
			"ACE_Flashlight_MX991"
		};
	};
	class ColdWar_Vehicle_Crewman: ColdWar_Vehicle_Commander
	{
		displayName="Vehicle Crew";
		icon="iconMan";
		backpack="TWC_Backpack_Cold_War_Section";
		linkedItems[]=
		{
			"CUP_V_C_Police_Holster",
			"UK3CB_BAF_H_Beret_PWRR_PRR_Over",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_C_Police_Holster",
			"UK3CB_BAF_H_Beret_PWRR_PRR_Over",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
	};
	class ColdWar_Sniper: ColdWar_Base
	{
		scope = 2;
		displayname = "Sniper";
		weapons[]=
		{
			"Throw",
			"Put",	
			"ukcw_l42"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"ukcw_l42"
		};
		Items[]=
		{
			"ACE_EarPlugs",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_morphine",
			"ACE_epinephrine",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_Tripod"
		};
		respawntems[]=
		{
			"ACE_EarPlugs",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_morphine",
			"ACE_epinephrine",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_Tripod"			
		};		
		magazines[]=
		{
			"ukcw_l42_10rnd_mag",
			"ukcw_l42_10rnd_mag",
			"ukcw_l42_10rnd_mag",
			"ukcw_l42_10rnd_mag",
			"ukcw_l42_10rnd_mag",
			"ukcw_l42_10rnd_mag",
			"ukcw_l42_10rnd_mag",
			"ukcw_l42_10rnd_mag",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellGreen"
		};
		Respawnmagazines[]=
		{
			"ukcw_l42_10rnd_mag",
			"ukcw_l42_10rnd_mag",
			"ukcw_l42_10rnd_mag",
			"ukcw_l42_10rnd_mag",
			"ukcw_l42_10rnd_mag",
			"ukcw_l42_10rnd_mag",
			"ukcw_l42_10rnd_mag",
			"ukcw_l42_10rnd_mag",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellGreen"
		};
	};
	class ColdWar_Spotter: ColdWar_Sniper
	{
		displayname = "Spotter";
		backpack = "TWC_Backpack_Cold_War_Section";
		weapons[]=
		{
			"Throw",
			"Put",	
			"Binocular",
			"twc_L1A1_SUIT"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"Binocular",
			"twc_L1A1_SUIT"
		};
		Items[]=
		{
			"ACE_EarPlugs",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_morphine",
			"ACE_epinephrine",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_RangeCard",
			"ACE_Clacker"
		};
		respawntems[]=
		{
			"ACE_EarPlugs",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_morphine",
			"ACE_epinephrine",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_RangeCard",
			"ACE_Clacker"
		};		
		magazines[]=
		{
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell",
			"ClaymoreDirectionalMine_Remote_Mag",
			"ClaymoreDirectionalMine_Remote_Mag"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellGreen",
			"ClaymoreDirectionalMine_Remote_Mag",
			"ClaymoreDirectionalMine_Remote_Mag"
		};
	};
	////////////////////// DISMOUNTED ////////////////////
	class ColdWar_Rifleman_Dismounted: ColdWar_Rifleman
	{
		displayName="Rifleman (Dismounted)";
		editorSubcategory = "Men_ColdWar_Dismounted";
		vehicleClass="Men_ColdWar_Dismounted";
		backpack="TWC_Backpack_Cold_War_Rifleman";
	};
	class ColdWar_Rifleman_SUIT_Dismounted: ColdWar_Rifleman_SUIT
	{
		displayName="Rifleman (Dismounted)";
		editorSubcategory = "Men_ColdWar_Dismounted";
		vehicleClass="Men_ColdWar_Dismounted";
		backpack="TWC_Backpack_Cold_War_Rifleman";
	};
	class ColdWar_AT_Dismounted: ColdWar_AT
	{
		displayName="AT Rifleman (Dismounted)";
		editorSubcategory = "Men_ColdWar_Dismounted";
		vehicleClass="Men_ColdWar_Dismounted";
		backpack="TWC_Backpack_Cold_War_AT";
	};
	class ColdWar_AT_Ass_Dismounted: ColdWar_AT_Ass
	{
		displayName="AT Assistant (Dismounted)";
		editorSubcategory = "Men_ColdWar_Dismounted";
		vehicleClass="Men_ColdWar_Dismounted";
		backpack="TWC_Backpack_Cold_War_AT_Ass_Dismounted";
	};
	class ColdWar_2IC_Dismounted: ColdWar_2IC
	{
		displayName="2IC (Dismounted)";
		editorSubcategory = "Men_ColdWar_Dismounted";
		vehicleClass="Men_ColdWar_Dismounted";
		backpack="TWC_Backpack_Cold_War_2IC_Dismounted";
	};
	class ColdWar_MG_Dismounted: ColdWar_MG
	{
		displayName="Machine Gunner (Dismounted)";
		editorSubcategory = "Men_ColdWar_Dismounted";
		vehicleClass="Men_ColdWar_Dismounted";
		backpack="TWC_Backpack_Cold_War_MG";
	};
	class ColdWar_MG_Ass_Dismounted: ColdWar_MG_AS
	{
		displayName="MG Assistant (Dismounted)";
		editorSubcategory = "Men_ColdWar_Dismounted";
		vehicleClass="Men_ColdWar_Dismounted";
		backpack="TWC_Backpack_Cold_War_MGAss";
	};
	////////////////////// AIRBORNE ////////////////////
	class ColdWar_Rifleman_Para: ColdWar_Rifleman
	{
		editorSubcategory = "Men_ColdWar_Airborne";
		linkedItems[]=
		{
			"ukcw_1958_webbing",
			"ukcw_helmet_para",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ukcw_1958_webbing",
			"ukcw_helmet_para",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
	};
	class ColdWar_Rifleman_SUIT_Para: ColdWar_Rifleman_SUIT
	{
		editorSubcategory = "Men_ColdWar_Airborne";
		linkedItems[]=
		{
			"ukcw_1958_webbing",
			"ukcw_helmet_para",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ukcw_1958_webbing",
			"ukcw_helmet_para",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};		
	};
	class ColdWar_AT_Para: ColdWar_AT
	{
		editorSubcategory = "Men_ColdWar_Airborne";
		linkedItems[]=
		{
			"ukcw_1958_webbing",
			"ukcw_helmet_para",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ukcw_1958_webbing",
			"ukcw_helmet_para",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
	};
	class ColdWar_AT_Ass_Para: ColdWar_AT_Ass
	{
		editorSubcategory = "Men_ColdWar_Airborne";
		linkedItems[]=
		{
			"ukcw_1958_webbing",
			"ukcw_helmet_para",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ukcw_1958_webbing",
			"ukcw_helmet_para",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};		
	};
	class ColdWar_2IC_Para: ColdWar_2IC
	{
		editorSubcategory = "Men_ColdWar_Airborne";
		linkedItems[]=
		{
			"ukcw_1958_webbing",
			"ukcw_helmet_para",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ukcw_1958_webbing",
			"ukcw_helmet_para",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};		
	};
	class ColdWar_MG_Para: ColdWar_MG
	{
		editorSubcategory = "Men_ColdWar_Airborne";
		linkedItems[]=
		{
			"ukcw_1958_webbing",
			"ukcw_helmet_para",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ukcw_1958_webbing",
			"ukcw_helmet_para",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};	
	};
	class ColdWar_MG_AS_Para: ColdWar_MG_AS
	{
		editorSubcategory = "Men_ColdWar_Airborne";
		linkedItems[]=
		{
			"ukcw_1958_webbing",
			"ukcw_helmet_para",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ukcw_1958_webbing",
			"ukcw_helmet_para",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};		
	};
	class ColdWar_Section_Leader_Para: ColdWar_Section_Leader
	{
		editorSubcategory = "Men_ColdWar_Airborne";
		linkedItems[]=
		{
			"Binocular",
			"ukcw_1958_webbing",
			"ukcw_helmet_para",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ACE_MapTools",
			"ACE_Flashlight_MX991"
		};
		respawnLinkedItems[]=
		{
			"Binocular",
			"ukcw_1958_webbing",
			"ukcw_helmet_para",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ACE_MapTools",
			"ACE_Flashlight_MX991"
		};	
	};
	class ColdWar_Platoon_Commander_Para: ColdWar_Platoon_Commander
	{
		editorSubcategory = "Men_ColdWar_Airborne";
		linkedItems[]=
		{
			"Binocular",
			"ukcw_1958_webbing",
			"ukcw_helmet_para",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ACE_MapTools",
			"ACE_Flashlight_MX991"
		};
		respawnLinkedItems[]=
		{
			"Binocular",
			"ukcw_1958_webbing",
			"ukcw_helmet_para",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ACE_MapTools",
			"ACE_Flashlight_MX991"
		};	
	};
	class ColdWar_Sergeant_Para: ColdWar_Sergeant
	{
		editorSubcategory = "Men_ColdWar_Airborne";
		linkedItems[]=
		{
			"Binocular",
			"ukcw_1958_webbing",
			"ukcw_helmet_para",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ACE_MapTools",
			"ACE_Flashlight_MX991"
		};
		respawnLinkedItems[]=
		{
			"Binocular",
			"ukcw_1958_webbing",
			"ukcw_helmet_para",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ACE_MapTools",
			"ACE_Flashlight_MX991"
		};	
	};
	class ColdWar_CSM_Para: ColdWar_CSM
	{
		editorSubcategory = "Men_ColdWar_Airborne";
		linkedItems[]=
		{
			"Binocular",
			"ukcw_1958_webbing",
			"ukcw_helmet_para",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ACE_MapTools",
			"ACE_Flashlight_MX991"
		};
		respawnLinkedItems[]=
		{
			"Binocular",
			"ukcw_1958_webbing",
			"ukcw_helmet_para",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ACE_MapTools",
			"ACE_Flashlight_MX991"
		};		
	};
	class ColdWar_Medic_Para: ColdWar_Medic
	{
		editorSubcategory = "Men_ColdWar_Airborne";
		linkedItems[]=
		{
			"ukcw_1958_webbing",
			"ukcw_helmet_para",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"ukcw_1958_webbing",
			"ukcw_helmet_para",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
	};
	class ColdWar_FAC_Para: ColdWar_FAC
	{
		editorSubcategory = "Men_ColdWar_Airborne";
		linkedItems[]=
		{
			"Binocular",
			"ukcw_1958_webbing",
			"ukcw_helmet_para",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ACE_MapTools",
			"ACE_Flashlight_MX991"
		};
		respawnLinkedItems[]=
		{
			"Binocular",
			"ukcw_1958_webbing",
			"ukcw_helmet_para",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ACE_MapTools",
			"ACE_Flashlight_MX991"
		};
	};
	////////////////////// TROUBLES ////////////////////
	class ColdWar_Rifleman_Troubles: ColdWar_Rifleman
	{
		displayName="Rifleman (Troubles)";
		uniformClass="UK3CB_BAF_U_JumperUniform_Plain";
		backpack="";
		linkedItems[]=
		{
			"CUP_V_CDF_6B3_1_Green",
			"UK3CB_BAF_H_Beret_Rifles",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_CDF_6B3_1_Green",
			"UK3CB_BAF_H_Beret_Rifles",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L1A1_Wood"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L1A1_Wood"
		};
	};
	class ColdWar_Rifleman_SUIT_Troubles: ColdWar_Rifleman_Troubles
	{
		displayName="Rifleman SUIT (Troubles)";
		weapons[]=
		{
			"Throw",
			"Put",	
			"twc_L1A1_SUIT"		
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"twc_L1A1_SUIT"
		};
	};
	class ColdWar_2IC_Troubles: ColdWar_Rifleman_Troubles
	{
		displayName="2IC (Troubles)";
		backpack="TWC_Backpack_Cold_War_2IC_Dismounted_Troubles";
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L1A1_Wood"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L1A1_Wood"
		};
	};
	class ColdWar_MG_Troubles: ColdWar_MG
	{
		scope=2;
		displayName="Machine Gunner (Troubles)";
		uniformClass="UK3CB_BAF_U_JumperUniform_Plain";
		backpack="";
		linkedItems[]=
		{
			"CUP_V_CDF_6B3_1_Green",
			"UK3CB_BAF_H_Beret_Rifles",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_CDF_6B3_1_Green",
			"UK3CB_BAF_H_Beret_Rifles",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",	
			"ukcw_L4"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"ukcw_L4"
		};
		magazines[]=
		{
			"ukcw_30Rnd_762x51_STANAG",	
			"ukcw_30Rnd_762x51_STANAG",
			"ukcw_30Rnd_762x51_STANAG",
			"ukcw_30Rnd_762x51_STANAG",
			"ukcw_30Rnd_762x51_STANAG",
			"ukcw_30Rnd_762x51_STANAG",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"ukcw_30Rnd_762x51_STANAG",	
			"ukcw_30Rnd_762x51_STANAG",
			"ukcw_30Rnd_762x51_STANAG",
			"ukcw_30Rnd_762x51_STANAG",
			"ukcw_30Rnd_762x51_STANAG",
			"ukcw_30Rnd_762x51_STANAG",
			"SmokeShell",
			"SmokeShell"
		};	
	};
	class ColdWar_MG_AS_Troubles: ColdWar_Rifleman_Troubles
	{
		displayName="Machine Gunner Assistant (Troubles)";
		backpack="TWC_Backpack_Cold_War_Bren";
		weapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L1A1_Wood"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"UK3CB_BAF_L1A1_Wood"
		};
	};
	class ColdWar_Section_Leader_Troubles: ColdWar_Rifleman_Troubles
	{
		displayName="Section Leader (Troubles)";
		icon="iconManLeader";
		backpack="TWC_Backpack_Cold_War_Section";
		class EventHandlers: EventHandlers
		{
			init = "if(local (_this select 0)) then{(_this select 0) setVariable [""twc_keepMap"",true]};";
		};
		linkedItems[]=
		{
			"Binocular",		
			"CUP_V_CDF_6B3_1_Green",
			"UK3CB_BAF_H_Beret_Rifles",
			"ItemCompass",
			"itemMap",
			"ItemWatch",
			"ACE_Flashlight_MX991"
		};
		respawnLinkedItems[]=
		{
			"Binocular",		
			"CUP_V_CDF_6B3_1_Green",
			"UK3CB_BAF_H_Beret_Rifles",
			"ItemCompass",
			"itemMap",
			"ItemWatch",
			"ACE_Flashlight_MX991"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"Binocular",
			"UK3CB_BAF_L1A1_Wood"			
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"Binocular",
			"UK3CB_BAF_L1A1_Wood"			
		};
		magazines[]=
		{
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd_T",
			"UK3CB_BAF_762_20Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE"
		};
		Respawnmagazines[]=
		{
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd",
			"UK3CB_BAF_762_20Rnd_T",
			"UK3CB_BAF_762_20Rnd_T",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE"
		};	
	};
	class ColdWar_Platoon_Commander_Troubles: ColdWar_Section_Leader_Troubles
	{
		displayName="Platoon Commander (Troubles)";
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"Binocular",
			"ukcw_sterling_sub"		
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"Binocular",
			"ukcw_sterling_sub"			
		};
		magazines[]=
		{
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE"
		};
		Respawnmagazines[]=
		{
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"CUP_HandGrenade_L109A2_HE",
			"CUP_HandGrenade_L109A2_HE"
		};
	};
	class ColdWar_Sergeant_Troubles: ColdWar_Platoon_Commander_Troubles
	{
		displayName="Platoon Sergeant (Troubles)";
		backpack="TWC_Backpack_Cold_War_Platoon_Sergeant";
	};
	class ColdWar_Medic_Troubles: ColdWar_Base
	{
		scope=2;
		displayName="Platoon Medic (Troubles)";
		icon="iconManMedic";
		uniformClass="UK3CB_BAF_U_JumperUniform_Plain";
		backpack="TWC_Backpack_Cold_Medic";
		attendant = 1;
		linkedItems[]=
		{
			"CUP_V_CDF_6B3_1_Green",
			"UK3CB_BAF_H_Beret_RAMC",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_CDF_6B3_1_Green",
			"UK3CB_BAF_H_Beret_RAMC",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"ukcw_sterling_sub"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",	
			"ukcw_sterling_sub"
		};
		magazines[]=
		{
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"ukcw_34_rnd_sterling_mag",
			"ukcw_34_rnd_sterling_mag",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
	};