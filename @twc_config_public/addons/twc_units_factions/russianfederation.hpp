//post cup update, russian sf enemies for domination
	class TWC_Russian_SF_Base:O_Soldier_base_F
	{
		scope=2;
		displayName="Rifleman";
		faction="twc_faction";
		editorSubcategory = "Men_Russiansof";
		vehicleClass="Men_Russiansof";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="rhs_uniform_gorka_r_g";
		identityTypes[] = {"LanguageRUS","Head_Russian","Head_Asian"};
		//uniformClass="twc_cryeG3_russof_roll";
		backpack="";
		linkedItems[]=
		{
        "rhsusf_opscore_mar_fg_pelt",
        //"CUP_H_OpsCore_Covered_MCAM_SF",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"twc_oli_spc_squadleader"
		//"CUP_V_B_Armatus_BB_MCam"
		};
		respawnLinkedItems[]=
		{
        "rhsusf_opscore_mar_fg_pelt",
        //"CUP_H_OpsCore_Covered_MCAM_SF",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"twc_oli_spc_squadleader"
		//"CUP_V_B_Armatus_BB_MCam"
		};
		weapons[]=
		{
		"Throw",
		"Put",
		"rhs_weap_rpg26",
		"twc_ak74_sof",
		"rhsusf_weap_glock17g4"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",
		"rhs_weap_rpg26",
		"twc_ak74_sof",
		"rhsusf_weap_glock17g4"
		};
		magazines[]=
		{
		"rhsusf_mag_17Rnd_9x19_JHP",
		"rhsusf_mag_17Rnd_9x19_JHP",
		"rhs_30Rnd_545x39_7N22_desert_AK",
		"rhs_30Rnd_545x39_7N22_desert_AK",
		"rhs_30Rnd_545x39_7N22_desert_AK",
		"rhs_30Rnd_545x39_7N22_desert_AK",
		"rhs_30Rnd_545x39_7N22_desert_AK",
		"rhs_30Rnd_545x39_7N22_desert_AK",
		"rhs_30Rnd_545x39_7N22_desert_AK",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{
		"rhsusf_mag_17Rnd_9x19_JHP",
		"rhsusf_mag_17Rnd_9x19_JHP",
		"rhs_30Rnd_545x39_7N22_desert_AK",
		"rhs_30Rnd_545x39_7N22_desert_AK",
		"rhs_30Rnd_545x39_7N22_desert_AK",
		"rhs_30Rnd_545x39_7N22_desert_AK",
		"rhs_30Rnd_545x39_7N22_desert_AK",
		"rhs_30Rnd_545x39_7N22_desert_AK",
		"rhs_30Rnd_545x39_7N22_desert_AK",
		"SmokeShell"
		};
		Items[]=
		{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_EarPlugs"
		};
		respawntems[]=
		{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_EarPlugs"	
		};		
	};
	class TWC_Russian_SF_SL:TWC_Russian_SF_Base
	{
		displayName="Squadleader";
		backpack="twc_russof_SL_backpack";
		linkedItems[]=
		{
        //"CUP_H_OpsCore_Covered_MCAM_SF",
        "rhs_6b28_green_ess_bala",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_6b23_6sh116_od"
		//"CUP_V_B_LBT_LBV_MCam"
		};
		respawnLinkedItems[]=
		{
        //"CUP_H_OpsCore_Covered_MCAM_SF",
        "rhs_6b28_green_ess_bala",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_6b23_6sh116_od"
		//"CUP_V_B_LBT_LBV_MCam"
		};
		weapons[]=
		{
		"Throw",
		"Put",
		"twc_ak74_sof_afg_suppressed",
		"rhsusf_weap_glock17g4"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",
		"twc_ak74_sof_afg_suppressed",
		"rhsusf_weap_glock17g4"
		};
		magazines[]=
		{
		"rhsusf_mag_17Rnd_9x19_JHP",
		"rhsusf_mag_17Rnd_9x19_JHP",
		"rhs_30Rnd_545x39_7N22_desert_AK",
		"rhs_30Rnd_545x39_7N22_desert_AK",
		"rhs_30Rnd_545x39_7N22_desert_AK",
		"rhs_30Rnd_545x39_7N22_desert_AK",
		"rhs_30Rnd_545x39_7N22_desert_AK",
		"rhs_30Rnd_545x39_7N22_desert_AK",
		"rhs_30Rnd_545x39_7N22_desert_AK",
		"SmokeShell",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{
		"rhsusf_mag_17Rnd_9x19_JHP",
		"rhsusf_mag_17Rnd_9x19_JHP",
		"rhs_30Rnd_545x39_7N22_desert_AK",
		"rhs_30Rnd_545x39_7N22_desert_AK",
		"rhs_30Rnd_545x39_7N22_desert_AK",
		"rhs_30Rnd_545x39_7N22_desert_AK",
		"rhs_30Rnd_545x39_7N22_desert_AK",
		"rhs_30Rnd_545x39_7N22_desert_AK",
		"rhs_30Rnd_545x39_7N22_desert_AK",
		"SmokeShell",
		"SmokeShell"
		};	
	};
	class TWC_Russian_SF_SMG:TWC_Russian_SF_Base
	{
		displayName="Submachinegunner";
		linkedItems[]=
		{
        //"CUP_H_OpsCore_Covered_MCAM_SF",
        "rhs_6b7_1m_ess_bala",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_6b23_6sh116_od"
		//"CUP_V_B_LBT_LBV_MCam"
		};
		respawnLinkedItems[]=
		{
        //"CUP_H_OpsCore_Covered_MCAM_SF",
        "rhs_6b7_1m_ess_bala",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_6b23_6sh116_od"
		//"CUP_V_B_LBT_LBV_MCam"
		};
		weapons[]=
		{
		"Throw",
		"Put",
		"rhs_weap_rpg26",
		"CUP_smg_bizon_snds",
		"rhsusf_weap_glock17g4"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",
		"rhs_weap_rpg26",
		"CUP_smg_bizon_snds",
		"rhsusf_weap_glock17g4"
		};
		magazines[]=
		{
		"rhsusf_mag_17Rnd_9x19_JHP",
		"rhsusf_mag_17Rnd_9x19_JHP",
		"CUP_64Rnd_9x19_Bizon_M",
		"CUP_64Rnd_9x19_Bizon_M",
		"CUP_64Rnd_9x19_Bizon_M",
		"CUP_64Rnd_9x19_Bizon_M",
		"CUP_64Rnd_9x19_Bizon_M",
		"CUP_64Rnd_9x19_Bizon_M",
		"CUP_64Rnd_9x19_Bizon_M",
		"CUP_64Rnd_9x19_Bizon_M",
		"CUP_64Rnd_9x19_Bizon_M"
		};
		Respawnmagazines[]=
		{
		"rhsusf_mag_17Rnd_9x19_JHP",
		"rhsusf_mag_17Rnd_9x19_JHP",
		"CUP_64Rnd_9x19_Bizon_M",
		"CUP_64Rnd_9x19_Bizon_M",
		"CUP_64Rnd_9x19_Bizon_M",
		"CUP_64Rnd_9x19_Bizon_M",
		"CUP_64Rnd_9x19_Bizon_M",
		"CUP_64Rnd_9x19_Bizon_M",
		"CUP_64Rnd_9x19_Bizon_M",
		"CUP_64Rnd_9x19_Bizon_M",
		"CUP_64Rnd_9x19_Bizon_M"
		};	
	};
	class TWC_Russian_SF_MG:TWC_Russian_SF_Base
	{
		displayName="Machinegunner";
		backpack="twc_russof_MG_backpack";
		linkedItems[]=
		{
        //"CUP_H_OpsCore_Covered_MCAM_SF",
        "rhsusf_opscore_rg_cover",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_6b23_6sh116_od"
		};
		respawnLinkedItems[]=
		{
        //"CUP_H_OpsCore_Covered_MCAM_SF",
        "rhsusf_opscore_rg_cover",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_6b23_6sh116_od"
		};
		weapons[]=
		{
		"Throw",
		"Put",
		"twc_pkp_sof",
		"rhsusf_weap_glock17g4"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",
		"twc_pkp_sof",
		"rhsusf_weap_glock17g4"
		};
		magazines[]=
		{
		"rhsusf_mag_17Rnd_9x19_JHP",
		"rhsusf_mag_17Rnd_9x19_JHP",
		"rhs_100Rnd_762x54mmR_7N26",
		"rhs_100Rnd_762x54mmR_7N26",
		"rhs_100Rnd_762x54mmR_7N26",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{
		"rhsusf_mag_17Rnd_9x19_JHP",
		"rhsusf_mag_17Rnd_9x19_JHP",
		"rhs_100Rnd_762x54mmR_7N26",
		"rhs_100Rnd_762x54mmR_7N26",
		"rhs_100Rnd_762x54mmR_7N26",
		"SmokeShell"
		};	
	};

	class Russian_Squadleader:O_Soldier_base_F
	{
		_generalMacro="Russian_Squadleader";
		scope=2;
		displayName="Section Leader";
		faction="twc_faction";
		editorSubcategory = "Men_RussianFederation";
		vehicleClass="Men_RussianFederation";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="rhs_uniform_flora";
		backpack="TWC_Backpack_USSR_Sectionlead";
		linkedItems[]=
		{
        "rhs_6b23_6sh92_headset_mapcase",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_6b26_ess",
		"ACRE_PRC343"
		};
		respawnLinkedItems[]=
		{
        "rhs_6b23_6sh92_headset_mapcase",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_6b26_ess",
		"ACRE_PRC343"
		};
		weapons[]=
		{
		"Throw",
		"Put",
		"ACE_Vector",
		"rhs_weap_ak74m_dtk",
		"rhs_weap_makarov_pmm"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",
		"ACE_Vector",
		"rhs_weap_ak74m_dtk",
		"rhs_weap_makarov_pmm"
		};
		magazines[]=
		{
		"rhs_mag_9x18_12_57N181S",
		"rhs_mag_9x18_12_57N181S",
		"rhs_mag_9x18_12_57N181S",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_mag_rgd5",
		"rhs_mag_rgd5",
		"SmokeShell",
		"SmokeShell",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{
		"rhs_mag_9x18_12_57N181S",
		"rhs_mag_9x18_12_57N181S",
		"rhs_mag_9x18_12_57N181S",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_mag_rgd5",
		"rhs_mag_rgd5",
		"SmokeShell",
		"SmokeShell",
		"SmokeShell"
		};
		Items[]=
		{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_EarPlugs"
		};
		respawntems[]=
		{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_EarPlugs"	
		};		
	};
	class Russian_Rifleman:O_Soldier_base_F
	{
		_generalMacro="Russian_Rifleman";
		scope=2;
		displayName="Rifleman";
		faction="twc_faction";
		editorSubcategory = "Men_RussianFederation";
		vehicleClass="Men_RussianFederation";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="rhs_uniform_flora";
		backpack="TWC_Backpack_USSR_Rifleman";
		linkedItems[]=
		{
        "rhs_6b23_6sh92",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_6b26",
		"ACRE_PRC343"
		};
		respawnLinkedItems[]=
		{
        "rhs_6b23_6sh92_headset_mapcase",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_6b26",
		"ACRE_PRC343"
		};
		weapons[]=
		{
		"Throw",
		"Put",
		"rhs_weap_ak74m_dtk",
		"rhs_weap_makarov_pmm"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",	
		"rhs_weap_ak74m_dtk",
		"rhs_weap_makarov_pmm"
		};
		magazines[]=
		{
		"rhs_mag_9x18_12_57N181S",
		"rhs_mag_9x18_12_57N181S",
		"rhs_mag_9x18_12_57N181S",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_mag_rgd5",
		"rhs_mag_rgd5",
		"SmokeShell",
		"SmokeShell",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{
		"rhs_mag_9x18_12_57N181S",
		"rhs_mag_9x18_12_57N181S",
		"rhs_mag_9x18_12_57N181S",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_mag_rgd5",
		"rhs_mag_rgd5",
		"SmokeShell",
		"SmokeShell",
		"SmokeShell"
		};
		Items[]=
		{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_EarPlugs"
		};
		respawntems[]=
		{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_EarPlugs"	
		};		
	};
	class Russian_Grenadier:O_Soldier_base_F
	{
		_generalMacro="Russian_Grenadier";
		scope=2;
		displayName="Grenadier";
		faction="twc_faction";
		editorSubcategory = "Men_RussianFederation";
		vehicleClass="Men_RussianFederation";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="rhs_uniform_flora";
		backpack="TWC_Backpack_USSR_Grenadier";
		linkedItems[]=
		{
        "rhs_6b23_6sh92",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_6b26",
		"ACRE_PRC343"
		};
		respawnLinkedItems[]=
		{
        "rhs_6b23_6sh92_headset_mapcase",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_6b26",
		"ACRE_PRC343"
		};
		weapons[]=
		{
		"Throw",
		"Put",
		"rhs_weap_ak74m_dtk",
		"rhs_weap_rpg7",
		"rhs_weap_makarov_pmm"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",	
		"rhs_weap_ak74m_dtk",
		"rhs_weap_rpg7",
		"rhs_weap_makarov_pmm"
		};
		magazines[]=
		{
		"rhs_mag_9x18_12_57N181S",
		"rhs_mag_9x18_12_57N181S",
		"rhs_mag_9x18_12_57N181S",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_mag_rgd5",
		"rhs_mag_rgd5",
		"SmokeShell",
		"SmokeShell",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{
		"rhs_mag_9x18_12_57N181S",
		"rhs_mag_9x18_12_57N181S",
		"rhs_mag_9x18_12_57N181S",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_mag_rgd5",
		"rhs_mag_rgd5",
		"SmokeShell",
		"SmokeShell",
		"SmokeShell"
		};
		Items[]=
		{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_EarPlugs"
		};
		respawntems[]=
		{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_EarPlugs"	
		};		
	};
	class Russian_Seniorrifleman:O_Soldier_base_F
	{
		_generalMacro="Russian_Seniorrifleman";
		scope=2;
		displayName="Senior Rifleman";
		faction="twc_faction";
		editorSubcategory = "Men_RussianFederation";
		vehicleClass="Men_RussianFederation";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="rhs_uniform_flora";
		backpack="TWC_Backpack_USSR_Seniorrifleman";
		linkedItems[]=
		{
        "rhs_6b23_6sh92",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_6b26",
		"ACRE_PRC343"
		};
		respawnLinkedItems[]=
		{
        "rhs_6b23_6sh92_headset_mapcase",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_6b26",
		"ACRE_PRC343"
		};
		weapons[]=
		{
		"Throw",
		"Put",
		"ACE_Vector",
		"rhs_weap_ak74m_dtk",
		"rhs_weap_makarov_pmm"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",
		"ACE_Vector",
		"rhs_weap_ak74m_dtk",
		"rhs_weap_makarov_pmm"
		};
		magazines[]=
		{
		"rhs_mag_9x18_12_57N181S",
		"rhs_mag_9x18_12_57N181S",
		"rhs_mag_9x18_12_57N181S",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_mag_rgd5",
		"rhs_mag_rgd5",
		"SmokeShell",
		"SmokeShell",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{
		"rhs_mag_9x18_12_57N181S",
		"rhs_mag_9x18_12_57N181S",
		"rhs_mag_9x18_12_57N181S",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_mag_rgd5",
		"rhs_mag_rgd5",
		"SmokeShell",
		"SmokeShell",
		"SmokeShell"
		};
		Items[]=
		{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_EarPlugs"
		};
		respawntems[]=
		{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_EarPlugs"	
		};		
	};
	class Russian_Grenadierassistant:O_Soldier_base_F
	{
		_generalMacro="Russian_Grenadierassistant";
		scope=2;
		displayName="Grenadier Assistant";
		faction="twc_faction";
		editorSubcategory = "Men_RussianFederation";
		vehicleClass="Men_RussianFederation";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="rhs_uniform_flora";
		backpack="TWC_Backpack_USSR_Grenadierassistant";
		linkedItems[]=
		{
        "rhs_6b23_6sh92",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_6b26",
		"ACRE_PRC343"
		};
		respawnLinkedItems[]=
		{
        "rhs_6b23_6sh92_headset_mapcase",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_6b26",
		"ACRE_PRC343"
		};
		weapons[]=
		{
		"Throw",
		"Put",	
		"rhs_weap_ak74m_dtk",
		"rhs_weap_makarov_pmm"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",	
		"rhs_weap_ak74m_dtk",
		"rhs_weap_makarov_pmm"
		};
		magazines[]=
		{
		"rhs_mag_9x18_12_57N181S",
		"rhs_mag_9x18_12_57N181S",
		"rhs_mag_9x18_12_57N181S",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_mag_rgd5",
		"rhs_mag_rgd5",
		"SmokeShell",
		"SmokeShell",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{
		"rhs_mag_9x18_12_57N181S",
		"rhs_mag_9x18_12_57N181S",
		"rhs_mag_9x18_12_57N181S",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_mag_rgd5",
		"rhs_mag_rgd5",
		"SmokeShell",
		"SmokeShell",
		"SmokeShell"
		};
		Items[]=
		{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_EarPlugs"
		};
		respawntems[]=
		{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_EarPlugs"	
		};		
	};
	class Russian_Automaticrifleman:O_Soldier_base_F
	{
		_generalMacro="Russian_Automaticrifleman";
		scope=2;
		displayName="Automatic Rifleman";
		faction="twc_faction";
		editorSubcategory = "Men_RussianFederation";
		vehicleClass="Men_RussianFederation";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="rhs_uniform_flora";
		backpack="TWC_Backpack_USSR_Automaticrifleman";
		linkedItems[]=
		{
        "rhs_6b23_6sh92",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_6b26",
		"ACRE_PRC343"
		};
		respawnLinkedItems[]=
		{
        "rhs_6b23_6sh92_headset_mapcase",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_6b26",
		"ACRE_PRC343"
		};
		weapons[]=
		{
		"Throw",
		"Put",	
		"rhs_weap_pkm",
		"rhs_weap_makarov_pmm"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",	
		"rhs_weap_pkm",
		"rhs_weap_makarov_pmm"
		};
		magazines[]=
		{
		"rhs_mag_9x18_12_57N181S",
		"rhs_mag_9x18_12_57N181S",
		"rhs_mag_9x18_12_57N181S",
		"rhs_100Rnd_762X54mmR",
		"rhs_mag_rgd5",
		"rhs_mag_rgd5",
		"SmokeShell",
		"SmokeShell",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{
		"rhs_mag_9x18_12_57N181S",
		"rhs_mag_9x18_12_57N181S",
		"rhs_mag_9x18_12_57N181S",
		"rhs_100Rnd_762X54mmR",
		"rhs_mag_rgd5",
		"rhs_mag_rgd5",
		"SmokeShell",
		"SmokeShell",
		"SmokeShell"
		};
		Items[]=
		{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_EarPlugs"
		};
		respawntems[]=
		{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_EarPlugs"	
		};		
	};
	class Russian_Vehiclecommander:O_Soldier_base_F
	{
		_generalMacro="Russian_Vehiclecommander";
		scope=2;
		displayName="Vehicle Commander";
		faction="twc_faction";
		editorSubcategory = "Men_RussianFederation";
		vehicleClass="Men_RussianFederation";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="rhs_uniform_msv_emr";
		backpack="TWC_Backpack_USSR_Vehiclecommander";
		linkedItems[]=
		{
        "rhs_vest_commander",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_tsh4",
		"ACRE_PRC343"
		};
		respawnLinkedItems[]=
		{
        "rhs_vest_commander",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_tsh4",
		"ACRE_PRC343"
		};
		weapons[]=
		{
		"Throw",
		"Put",
		"Binocular",
		"rhs_weap_ak74m_folded_dtk",
		"rhs_weap_makarov_pmm"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",
		"Binocular",
		"rhs_weap_ak74m_folded_dtk",
		"rhs_weap_makarov_pmm"
		};
		magazines[]=
		{
		"rhs_mag_9x18_12_57N181S",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_mag_rgd5",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{
		"rhs_mag_9x18_12_57N181S",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_mag_rgd5",
		"SmokeShell"
		};
		Items[]=
		{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_EarPlugs"
		};
		respawntems[]=
		{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_EarPlugs"	
		};		
	};
	class Russian_Vehiclecrew:O_Soldier_base_F
	{
		_generalMacro="USSR_Vehiclecrew";
		scope=2;
		displayName="Vehicle Crew";
		faction="twc_faction";
		editorSubcategory = "Men_RussianFederation";
		vehicleClass="Men_RussianFederation";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="rhs_uniform_msv_emr";
		backpack="";
		linkedItems[]=
		{
        "rhs_vest_commander",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_tsh4",
		"ACRE_PRC343"
		};
		respawnLinkedItems[]=
		{
        "rhs_vest_commander",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"rhs_tsh4",
		"ACRE_PRC343"
		};
		weapons[]=
		{
		"Throw",
		"Put",	
		"rhs_weap_ak74m_folded_dtk",
		"rhs_weap_makarov_pmm"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",	
		"rhs_weap_ak74m_folded_dtk",
		"rhs_weap_makarov_pmm"
		};
		magazines[]=
		{
		"rhs_mag_9x18_12_57N181S",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_mag_rgd5",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{
		"rhs_mag_9x18_12_57N181S",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_30Rnd_545x39_7N10_AK",
		"rhs_mag_rgd5",
		"SmokeShell"
		};
		Items[]=
		{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_EarPlugs"
		};
		respawntems[]=
		{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_morphine",
		"ACE_morphine",
		"ACE_EarPlugs"	
		};		
	};