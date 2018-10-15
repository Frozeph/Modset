	class O_G_Soldier_F;
	
	class IRA_Squadleader: O_G_Soldier_F
	{
		_generalMacro="IRA_Squadleader";
		scope=2;
		displayName="Section Leader";
		faction="ira_units";
		editorSubcategory = "Men_IRA";
		vehicleClass="Men_IRA";
		icon="iconManLeader";
		nakedUniform="U_BasicBody";
		uniformClass="U_IG_Guerrilla_6_1";
		backpack="";
		linkedItems[]=
		{
        "V_BandollierB_oli",
		"G_Balaclava_blk",
		"ItemMap",
		"ItemCompass",
		"Binocular"
		};
		respawnLinkedItems[]=
		{
        "V_BandollierB_oli",
		"G_Balaclava_blk",
		"ItemMap",
		"ItemCompass",
		"Binocular"
		};
		weapons[]=
		{
		"Throw",
		"Put",
		"CUP_srifle_LeeEnfield"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",
		"CUP_srifle_LeeEnfield"
		};
		magazines[]=
		{
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"CUP_10x_303_M",
		"SmokeShell"
		};
		Items[]=
		{
		"ACE_fieldDressing",
		"ACE_morphine"
		};
		respawntems[]=
		{
		"ACE_fieldDressing",
		"ACE_morphine"
		};
	};
	
	class IRA_Rifleman_M16: IRA_Squadleader
	{
		_generalMacro="IRA_Rifleman_M16";
		displayName="Rifleman (M16 1)";
		icon="iconManLeader";
		uniformClass="rhsgref_uniform_dpm_olive";
		backpack="";
		linkedItems[]=
		{
        "UK3CB_BAF_V_PLCE_Webbing_OLI",
		"G_Balaclava_blk",
		"ItemMap",
		"ItemCompass"
		};
		respawnLinkedItems[]=
		{
        "UK3CB_BAF_V_PLCE_Webbing_OLI",
		"G_Balaclava_blk",
		"ItemMap",
		"ItemCompass"
		};
		weapons[]=
		{
		"Throw",
		"Put",
		"CUP_arifle_M16A2"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",
		"CUP_arifle_M16A2"
		};
		magazines[]=
		{
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag",
		"SmokeShell"
		};
	};
	
	class IRA_Rifleman_M16_2: IRA_Rifleman_M16
	{
		displayName="Rifleman (M16 2)";
		uniformClass="UK3CB_BAF_U_JumperUniform_DPMW";
	};
	
	class IRA_Rifleman_M16_3: IRA_Rifleman_M16
	{
		displayName="Rifleman (M16 3)";
		uniformClass="rhsgref_uniform_olive";
	};
	
	class IRA_Rifleman_M16_4: IRA_Rifleman_M16
	{
		displayName="Rifleman (M16 4)";
		uniformClass="UK3CB_BAF_U_Smock_DPMW_OLI";
	};
	
	class IRA_Rifleman_FAL: IRA_Rifleman_M16
	{
		displayName="Rifleman (M16 5)";
		uniformClass="rhsgref_uniform_woodland_olive";
	};
	class IRA_Rifleman_AKM: IRA_Squadleader
	{
		_generalMacro="IRA_Rifleman_AKM";
		displayName="Rifleman (AKM)";
		icon="iconManLeader";
		uniformClass="UK3CB_BAF_U_Smock_DPMW_OLI";
		backpack="";
		linkedItems[]=
		{
        "rhsgref_alice_webbing",
		"G_Balaclava_blk",
		"ItemMap",
		"ItemCompass"
		};
		respawnLinkedItems[]=
		{
        "rhsgref_alice_webbing",
		"G_Balaclava_blk",
		"ItemMap",
		"ItemCompass"
		};
		weapons[]=
		{
		"Throw",
		"Put",
		"CUP_arifle_AKM"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",
		"CUP_arifle_AKM"
		};
		magazines[]=
		{
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"SmokeShell"
		};
		Respawnmagazines[]=
		{
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"SmokeShell"
		};
	};
	
	class IRA_Rifleman_AT: IRA_Squadleader
	{
		_generalMacro="IRA_Rifleman_AT";
		scope=2;
		displayName="AT Rifleman";
		faction="ira_units";
		editorSubcategory = "Men_IRA";
		vehicleClass="Men_IRA";
		icon="iconManLeader";
		nakedUniform="U_BasicBody";
		uniformClass="U_BG_Guerrilla_6_1";
		backpack="Afr_Backpack_AT";
		linkedItems[]=
		{
        "V_BandollierB_oli",
		"G_Balaclava_oli",
		"ItemMap",
		"ItemCompass"
		};
		respawnLinkedItems[]=
		{
        "V_BandollierB_oli",
		"G_Balaclava_oli",
		"ItemMap",
		"ItemCompass"
		};
		weapons[]=
		{
		"Throw",
		"Put",
		"CUP_arifle_AKM",
		"CUP_launch_RPG7V"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",
		"CUP_arifle_AKM",
		"CUP_launch_RPG7V"
		};
		magazines[]=
		{
		"CUP_PG7V_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M"
		};
		Respawnmagazines[]=
		{
		"CUP_PG7V_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M"
		};
	};
	
	class IRA_Autorifleman: IRA_Squadleader
	{
		_generalMacro="IRA_Autorifleman";
		scope=2;
		displayName="Machinegunner GPMG";
		uniformClass="rhsgref_uniform_dpm";
		backpack="";
		linkedItems[]=
		{
        "V_BandollierB_oli",
		"G_Balaclava_blk",
		"ItemMap",
		"ItemCompass"
		};
		respawnLinkedItems[]=
		{
        "V_BandollierB_oli",
		"G_Balaclava_blk",
		"ItemMap",
		"ItemCompass"
		};
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
		"UK3CB_BAF_762_100Rnd",
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
	
	class IRA_Autorifleman_2: IRA_Squadleader
	{
		_generalMacro="IRA_Autorifleman_2";
		scope=2;
		displayName="Machinegunner PKM";
		uniformClass="rhsgref_uniform_olive";
		backpack="Afr_Backpack_MG";
		linkedItems[]=
		{
        "CUP_V_I_Guerilla_Jacket",
		"G_Balaclava_blk",
		"ItemMap",
		"ItemCompass"
		};
		respawnLinkedItems[]=
		{
        "CUP_V_I_Guerilla_Jacket",
		"G_Balaclava_blk",
		"ItemMap",
		"ItemCompass"
		};
		weapons[]=
		{
		"Throw",
		"Put",
		"CUP_lmg_PKM"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",
		"CUP_lmg_PKM"
		};
		magazines[]=
		{
		"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
		"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"
		};
		Respawnmagazines[]=
		{
		"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
		"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"
		};
	};
	
	class IRA_pistol_1: IRA_Squadleader
	{
		_generalMacro="IRA_pistol_1";
		scope=2;
		displayName="Pistol 1";
		uniformClass="rhsgref_uniform_olive";
		linkedItems[]=
		{
		"G_Balaclava_blk",
		"ItemMap",
		"ItemCompass"
		};
		respawnLinkedItems[]=
		{
		"G_Balaclava_blk",
		"ItemMap",
		"ItemCompass"
		};
		weapons[]=
		{
		"Throw",
		"Put",
		"UK3CB_BAF_L9A1"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",
		"UK3CB_BAF_L9A1"
		};
		magazines[]=
		{
		"UK3CB_BAF_9_13Rnd",
		"UK3CB_BAF_9_13Rnd",
		"UK3CB_BAF_9_13Rnd",
		"UK3CB_BAF_9_13Rnd",
		"UK3CB_BAF_9_13Rnd",
		"UK3CB_BAF_9_13Rnd"
		};
		Respawnmagazines[]=
		{
		"UK3CB_BAF_9_13Rnd",
		"UK3CB_BAF_9_13Rnd",
		"UK3CB_BAF_9_13Rnd",
		"UK3CB_BAF_9_13Rnd",
		"UK3CB_BAF_9_13Rnd",
		"UK3CB_BAF_9_13Rnd"
		};
	};
	
	class IRA_pistol_2: IRA_pistol_1
	{
		_generalMacro="IRA_pistol_2";
		scope=2;
		displayName="Pistol 2";
		uniformClass="rhsgref_uniform_dpm_olive";
		weapons[]=
		{
		"Throw",
		"Put",
		"rhs_weap_makarov_pm"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",
		"rhs_weap_makarov_pm"
		};
		magazines[]=
		{
		"rhs_mag_9x18_8_57N181S",
		"rhs_mag_9x18_8_57N181S",
		"rhs_mag_9x18_8_57N181S",
		"rhs_mag_9x18_8_57N181S",
		"rhs_mag_9x18_8_57N181S",
		"rhs_mag_9x18_8_57N181S",
		"rhs_mag_9x18_8_57N181S",
		"rhs_mag_9x18_8_57N181S"
		};
		Respawnmagazines[]=
		{
		"rhs_mag_9x18_8_57N181S",
		"rhs_mag_9x18_8_57N181S",
		"rhs_mag_9x18_8_57N181S",
		"rhs_mag_9x18_8_57N181S",
		"rhs_mag_9x18_8_57N181S",
		"rhs_mag_9x18_8_57N181S",
		"rhs_mag_9x18_8_57N181S",
		"rhs_mag_9x18_8_57N181S"
		};
	};
	
	class IRA_pistol_3: IRA_pistol_1
	{
		_generalMacro="IRA_pistol_3";
		scope=2;
		displayName="Pistol 3";
		uniformClass="U_BG_Guerrilla_6_1";
		weapons[]=
		{
		"Throw",
		"Put",
		"rhsusf_weap_m1911a1"
		};
		respawnweapons[]=
		{
		"Throw",
		"Put",
		"rhsusf_weap_m1911a1"
		};
		magazines[]=
		{
		"rhsusf_mag_7x45acp_MHP",
		"rhsusf_mag_7x45acp_MHP",
		"rhsusf_mag_7x45acp_MHP",
		"rhsusf_mag_7x45acp_MHP",
		"rhsusf_mag_7x45acp_MHP",
		"rhsusf_mag_7x45acp_MHP",
		"rhsusf_mag_7x45acp_MHP",
		"rhsusf_mag_7x45acp_MHP"
		};
		Respawnmagazines[]=
		{
		"rhsusf_mag_7x45acp_MHP",
		"rhsusf_mag_7x45acp_MHP",
		"rhsusf_mag_7x45acp_MHP",
		"rhsusf_mag_7x45acp_MHP",
		"rhsusf_mag_7x45acp_MHP",
		"rhsusf_mag_7x45acp_MHP",
		"rhsusf_mag_7x45acp_MHP",
		"rhsusf_mag_7x45acp_MHP"
		};
	};