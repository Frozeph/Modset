class O_Soldier_base_F;
class EAF56_Base: O_Soldier_base_F
{
	scope=1;
	displayName="Base";
	faction="EAF56";
	nakedUniform="U_BasicBody";
	uniformClass="twc_u_eaf";
	linkedItems[]=
	{
		"fow_v_uk_base",
		"CUP_H_SLA_Helmet",
		"CUP_TK_NeckScarf",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[]=
	{
		"fow_v_uk_base",
		"CUP_H_SLA_Helmet",
		"CUP_TK_NeckScarf",
		"ItemCompass",
		"ItemWatch"
	};
	Items[]=
	{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_tourniquet"
	};
	respawntems[]=
	{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_tourniquet"
	};
};
class EAF56_Rifleman_AK: EAF56_Base
{
	scope=2;
	displayName="Rifleman (AK)";
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
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5"
	};
	Respawnmagazines[]=
	{
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_30Rnd_762x39_AK47_M",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5"
	};
};
class EAF56_Rifleman_LE: EAF56_Rifleman_AK
{
	displayName="Rifleman (Lee-Enfield)";
	weapons[]=
	{
		"Throw",
		"Put",
		"fow_w_leeenfield_no4mk1"
	};
	respawnweapons[]=
	{
		"Throw",
		"Put",
		"fow_w_leeenfield_no4mk1"
	};
	magazines[]=
	{
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5"
	};
	Respawnmagazines[]=
	{
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5"
	};
};
class EAF56_Rifleman_light: EAF56_Rifleman_LE
{
	displayName="Rifleman (Light)";
	linkedItems[]=
	{
		"fow_v_us_45",
		"H_Beret_blk",
		"CUP_TK_NeckScarf",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[]=
	{
		"fow_v_us_45",
		"H_Beret_blk",
		"CUP_TK_NeckScarf",
		"ItemCompass",
		"ItemWatch"
	};
	magazines[]=
	{
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"fow_10Rnd_303"
	};
	Respawnmagazines[]=
	{
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"fow_10Rnd_303"
	};
};
class EAF56_MachineGunner: EAF56_Base
{
	scope=2;
	displayName="Machine Gunner";
	icon="iconManMG";
	backpack="EAF56_backpack_MG";
	weapons[]=
	{
		"Throw",
		"Put",
		"TWC_RPD"
	};
	respawnweapons[]=
	{
		"Throw",
		"Put",
		"TWC_RPD"
	};
	magazines[]=
	{
		"twc_100Rnd_762x39_RPD",
		"twc_100Rnd_762x39_RPD",
		"twc_100Rnd_762x39_RPD",
		"twc_100Rnd_762x39_RPD",
		"CUP_HandGrenade_RGD5"
	};
	Respawnmagazines[]=
	{
		"twc_100Rnd_762x39_RPD",
		"twc_100Rnd_762x39_RPD",
		"twc_100Rnd_762x39_RPD",
		"twc_100Rnd_762x39_RPD",
		"CUP_HandGrenade_RGD5"
	};
};
class EAF56_AssistantMG: EAF56_Rifleman_LE
{
	displayName="Assistant MG";
	backpack="EAF56_backpack_MG";
};
class EAF56_AntiTank: EAF56_Base
{
	scope=2;
	displayName="Anti Tank";
	icon="iconManAT";
	backpack="EAF56_backpack_AT";
	linkedItems[]=
	{
		"fow_v_uk_officer",
		"CUP_H_SLA_Helmet",
		"CUP_TK_NeckScarf",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[]=
	{
		"fow_v_uk_officer",
		"CUP_H_SLA_Helmet",
		"CUP_TK_NeckScarf",
		"ItemCompass",
		"ItemWatch"
	};
	weapons[]=
	{
		"Throw",
		"Put",
		"fow_w_piat",
		"LIB_TT33"
	};
	respawnweapons[]=
	{
		"Throw",
		"Put",
		"fow_w_piat",
		"LIB_TT33"
	};
	magazines[]=
	{
		"LIB_8Rnd_762x25",
		"LIB_8Rnd_762x25",
		"LIB_8Rnd_762x25",
		"LIB_8Rnd_762x25",
		"LIB_8Rnd_762x25",
		"LIB_8Rnd_762x25",
		"LIB_8Rnd_762x25",
		"LIB_8Rnd_762x25",
		"LIB_8Rnd_762x25",
		"LIB_8Rnd_762x25",
		"fow_1Rnd_piat"
	};
	Respawnmagazines[]=
	{
		"LIB_8Rnd_762x25",
		"LIB_8Rnd_762x25",
		"LIB_8Rnd_762x25",
		"LIB_8Rnd_762x25",
		"LIB_8Rnd_762x25",
		"LIB_8Rnd_762x25",
		"LIB_8Rnd_762x25",
		"LIB_8Rnd_762x25",
		"LIB_8Rnd_762x25",
		"LIB_8Rnd_762x25",
		"fow_1Rnd_piat"
	};
};
class EAF56_AssistantAT: EAF56_Rifleman_LE
{
	displayName="Assistant Anti Tank";
	backpack="EAF56_backpack_AT";
};
class EAF56_NCO: EAF56_Rifleman_LE
{
	displayName="Squadleader";
	backpack="EAF56_backpack_NCO";
	linkedItems[]=
	{
		"fow_v_uk_base",
		"CUP_H_SLA_Helmet",
		"CUP_TK_NeckScarf",
		"ItemCompass",
		"ItemMap",
		"ItemWatch"
	};
	respawnLinkedItems[]=
	{
		"fow_v_uk_base",
		"CUP_H_SLA_Helmet",
		"CUP_TK_NeckScarf",
		"ItemCompass",
		"ItemMap",
		"ItemWatch"
	};
};
class EAF56_RTO: EAF56_Rifleman_LE
{
	displayName="Radio Technical Operator";
	backpack="EAF56_backpack_RTO";
};
class EAF56_Medic: EAF56_Rifleman_LE
{
	displayName="Medic";
	icon="iconManMedic";
	backpack="TWC_Backpack_WW2_Medic";
};
class EAF56_Officer: EAF56_NCO
{
	displayName="Officer";
	icon="iconManOfficer";
	linkedItems[]=
	{
		"fow_v_uk_officer",
		"H_Beret_blk",
		"CUP_TK_NeckScarf",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[]=
	{
		"fow_v_uk_officer",
		"H_Beret_blk",
		"CUP_TK_NeckScarf",
		"ItemCompass",
		"ItemWatch"
	};
	weapons[]=
	{
		"Throw",
		"Put",
		"fow_w_leeenfield_no4mk1",
		"LIB_TT33"
	};
	respawnweapons[]=
	{
		"Throw",
		"Put",
		"fow_w_leeenfield_no4mk1",
		"LIB_TT33"
	};
	magazines[]=
	{
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"LIB_8Rnd_762x25",
		"LIB_8Rnd_762x25",
		"LIB_8Rnd_762x25",
		"CUP_HandGrenade_RGD5"
	};
	Respawnmagazines[]=
	{
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"fow_10Rnd_303",
		"LIB_8Rnd_762x25",
		"LIB_8Rnd_762x25",
		"LIB_8Rnd_762x25",
		"CUP_HandGrenade_RGD5"
	};
};
class EAF56_Crewman: EAF56_Base
{
	scope=2;
	displayName="Crewman";
	linkedItems[]=
	{
		"fow_v_us_45",
		"CUP_H_TK_TankerHelmet",
		"CUP_TK_NeckScarf",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[]=
	{
		"fow_v_us_45",
		"CUP_H_TK_TankerHelmet",
		"CUP_TK_NeckScarf",
		"ItemCompass",
		"ItemWatch"
	};
	weapons[]=
	{
		"Throw",
		"Put",
		"LIB_TT33"
	};
	respawnweapons[]=
	{
		"Throw",
		"Put",
		"LIB_TT33"
	};
	magazines[]=
	{
		"LIB_8Rnd_762x25",
		"LIB_8Rnd_762x25",
		"LIB_8Rnd_762x25",
		"LIB_8Rnd_762x25",
		"LIB_8Rnd_762x25",
		"LIB_8Rnd_762x25",
		"LIB_8Rnd_762x25"
	};
	Respawnmagazines[]=
	{
		"LIB_8Rnd_762x25",
		"LIB_8Rnd_762x25",
		"LIB_8Rnd_762x25",
		"LIB_8Rnd_762x25",
		"LIB_8Rnd_762x25",
		"LIB_8Rnd_762x25",
		"LIB_8Rnd_762x25"
	};
};