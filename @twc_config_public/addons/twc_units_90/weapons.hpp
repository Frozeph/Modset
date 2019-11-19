class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_MuzzleSlot_556_3CB;

class cfgWeapons
{
	class twc_BAF_L85A2_PUBLIC;
	class UK3CB_BAF_L86A2;
	class UK3CB_BAF_L86A2_public:UK3CB_BAF_L86A2
	{};
	class UK3CB_BAF_L85A2_UGL;
	
	class rhsgref_uniform_dpm;
	class twc_rhsgref_uniform_dpm: rhsgref_uniform_dpm
	{
		modelSides[] = {0,1,2,3};
	};
	class rhsgref_uniform_dpm_olive;
	class twc_rhsgref_uniform_dpm_olive: rhsgref_uniform_dpm_olive
	{
		modelSides[] = {0,1,2,3};
	};
	class rhsgref_uniform_olive;
	class twc_rhsgref_uniform_olive: rhsgref_uniform_olive
	{
		modelSides[] = {0,1,2,3};
	};
	
	class CUP_smg_MP5SD6;
	class TWC_CUP_smg_MP5SD6_clean:CUP_smg_MP5SD6
	{
		class WeaponSlotsInfo
		{
			allowedslots[] = {701,901};
			mass = 45;
		};
	};
		
	class uk3cb_baf_silencer_l85;
	class twc_L85_suppressor: uk3cb_baf_silencer_l85
	{
		displayName = "T8 Suppressor";
	};
	
	class UK3CB_BAF_L1A1_Wood;
	class TWC_UK3CB_BAF_L1A1_Wood_SUIT: UK3CB_BAF_L1A1_Wood
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="UK3CB_BAF_SUIT";
			};
		};
	};
	
	class UK3CB_BAF_L119A1_CQB;
	class TWC_UK3CB_BAF_L119A1_CQB_ACOG: UK3CB_BAF_L119A1_CQB
	{
		recoil = "twc_rifle_556";
		recoilProne = "twc_rifle_556_prone";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L85";
				item="rhsusf_acc_acog2_usmc";
			};
		};
		class WeaponSlotsInfo
		{
			class asdg_OpticRail_UK3CB_BAF_L85: asdg_OpticRail1913 {
				class compatibleItems {
					rhsusf_acc_acog2_usmc = 1;
				};
			};
			class asdg_MuzzleSlot_UK3CB_BAF_L85: asdg_MuzzleSlot_556_3CB {
				class compatibleItems {
					twc_L85_suppressor = 1;
				};
			};
			allowedslots[] = {901};
			mass = 70;
		};
	};
	
	class Rifle_Base_F;
	class CUP_srifle_LeeEnfield: Rifle_Base_F
	{
		recoil = "twc_rifle_762";
		recoilProne = "twc_rifle_762_prone";
	};
	
	class UK3CB_BAF_L119A1_FG;
	class TWC_UK3CB_BAF_L119A1_FG_ACOG: UK3CB_BAF_L119A1_FG
	{
		recoil = "twc_rifle_556";
		recoilProne = "twc_rifle_556_prone";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L85";
				item="rhsusf_acc_ACOG";
			};
			class LinkedItemsMuzzleSlot
			{
				slot="asdg_MuzzleSlot_UK3CB_BAF_L85";
				item="uk3cb_baf_sffh";
			};
		};
		class WeaponSlotsInfo
		{
			class asdg_OpticRail_UK3CB_BAF_L85: asdg_OpticRail1913 {
				class compatibleItems {
					rhsusf_acc_ACOG = 1;
				};
			};
			class asdg_MuzzleSlot_UK3CB_BAF_L85: asdg_MuzzleSlot_556_3CB {
				class compatibleItems {
					twc_L85_suppressor = 1;
					uk3cb_baf_sffh = 1;
				};
			};
			allowedslots[] = {901};
			mass = 85;
		};
	};
	
	class UK3CB_BAF_L119A1_UKUGL;
	class TWC_UK3CB_BAF_L119A1_UKUGL_ACOG: UK3CB_BAF_L119A1_UKUGL
	{
		recoil = "twc_rifle_556";
		recoilProne = "twc_rifle_556_prone";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L85";
				item="rhsusf_acc_ACOG";
			};
			class LinkedItemsMuzzleSlot
			{
				slot="asdg_MuzzleSlot_UK3CB_BAF_L85";
				item="uk3cb_baf_sffh";
			};
		};
		class WeaponSlotsInfo
		{
			class asdg_OpticRail_UK3CB_BAF_L85: asdg_OpticRail1913 {
				class compatibleItems {
					rhsusf_acc_ACOG = 1;
				};
			};
			class asdg_MuzzleSlot_UK3CB_BAF_L85: asdg_MuzzleSlot_556_3CB {
				class compatibleItems {
					twc_L85_suppressor = 1;
					uk3cb_baf_sffh = 1;
				};
			};
			allowedslots[] = {901};
			mass = 105;
		};
	};
	
	class TWC_UK3CB_BAF_L119A1_CQB_EOTECH: UK3CB_BAF_L119A1_CQB
	{
		recoil = "twc_rifle_556";
		recoilProne = "twc_rifle_556_prone";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L85";
				item="rhsusf_acc_eotech_552";
			};
		};
		class WeaponSlotsInfo
		{
			class asdg_OpticRail_UK3CB_BAF_L85: asdg_OpticRail1913 {
				class compatibleItems {
					rhsusf_acc_eotech_552 = 1;
				};
			};
			class asdg_MuzzleSlot_UK3CB_BAF_L85: asdg_MuzzleSlot_556_3CB {
				class compatibleItems {
					twc_L85_suppressor = 1;
				};
			};
			allowedslots[] = {901};
			mass = 75;
		};
	};
	
	class CUP_V_B_PASGT_no_bags;
	class twc_interceptor_ddpm: CUP_V_B_PASGT_no_bags
	{
		displayname = "VestGuard (DDPM)";
		descriptionShort = "Flak Jacket";
		hiddenSelections[] = {"Camo"};
		//model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\CUP_NAVY_LHDVest.p3d";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_ddpm_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\US_PASGT_gear_CO.paa"};
	};
	class twc_interceptor_dpm: CUP_V_B_PASGT_no_bags
	{
		displayname = "VestGuard (DPM)";
		descriptionShort = "Flak Jacket";
		hiddenSelections[] = {"Camo"};
		//model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\CUP_NAVY_LHDVest.p3d";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_dpm_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\US_PASGT_gear_CO.paa"};
	};
	
	class CUP_V_B_PASGT_no_bags_OD;
	class twc_interceptor_od: CUP_V_B_PASGT_no_bags_OD
	{
		displayname = "VestGuard (OD)";
		descriptionShort = "Flak Jacket";
	};
	
	
	
	class CUP_V_B_PASGT;
	class twc_interceptor_ddpm1: CUP_V_B_PASGT
	{
		displayname = "VestGuard (DDPM With Bags)";
		descriptionShort = "Flak Jacket";
		hiddenSelections[] = {"camo1","camo2"};
		//model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\CUP_NAVY_LHDVest.p3d";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_ddpm_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_tan_co.paa"};
	};
	
	class CUP_V_B_Interceptor_Rifleman_DCU;
	class twc_interceptor_ddpm2: CUP_V_B_Interceptor_Rifleman_DCU
	{
		displayname = "VestGuard (DDPM2)";
		descriptionShort = "Flak Jacket";
		hiddenSelections[] = {"camo","camo1","camo2"};
		//model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\CUP_NAVY_LHDVest.p3d";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_ddpm_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\intcep\us_molle_webbings_brown_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\intcep\us_soldier_equip_brown_co.paa"};
	};
	
	class V_HarnessO_ghex_F;
	class twc_V_HarnessO_grn: V_HarnessO_ghex_F
	{
		displayName = "LBV Harness (Olive)";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_oli_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_oli_co.paa"};
	};
	
	
	class twc_V_HarnessO_tan: V_HarnessO_ghex_F
	{
		displayName = "LBV Harness (Tan)";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_tan_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_tan_co.paa"};
	};
		
	class twc_V_HarnessO_dpmt: V_HarnessO_ghex_F
	{
		displayName = "LBV Harness (DPMT)";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_small_oli_co.paa","rhsusf\addons\rhsusf_infantry\gear\backpacks\data\falconii_rgr_co.paa"};
	};
		
	class CUP_Vest_TK_Camo_Base;
	
	class CUP_V_O_TK_Vest_1: CUP_Vest_TK_Camo_Base
	{
		hiddenSelectionsMaterials[] = {"\A3\data_f\default.rvmat"};
	};
	class twc_lightcarrier_tan: CUP_V_O_TK_Vest_1
	{
		displayName = "MilTec Light Carrier (Tan)";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_tan_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_tan_co.paa"};
	};
	class twc_lightcarrier_ddpm: CUP_V_O_TK_Vest_1
	{
		displayName = "MilTec Light Carrier (DDPM)";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_ddpm_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_ddpm_co.paa"};
	};
	class twc_lightcarrier_dpm: CUP_V_O_TK_Vest_1
	{
		displayName = "MilTec Light Carrier (DPM)";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_dpm_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_dpm_co.paa"};
	};
	class twc_lightcarrier_oli: CUP_V_O_TK_Vest_1
	{
		displayName = "MilTec Light Carrier (Olive)";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_oli_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_oli_co.paa"};
	};
	
	class CUP_V_B_GER_Carrier_Rig_2;
	class twc_lightwebbing_ddpm: CUP_V_B_GER_Carrier_Rig_2
	{
		displayName = "MilTec Light Webbing (DDPM)";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_ddpm_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_ddpm_co.paa"};
	};
	class twc_lightwebbing_dpm: CUP_V_B_GER_Carrier_Rig_2
	{
		displayName = "MilTec Light Webbing (DPM)";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_dpm_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_dpm_co.paa"};
	};
	
	class rhs_6sh92;
	class twc_rhs_6sh92_tan: rhs_6sh92
	{
		displayName = "MilTec Assault Vest (Tan)";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_tan_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_tan_co.paa"};
	};
	class twc_rhs_6sh92_dpm: rhs_6sh92
	{
		displayName = "MilTec Assault Vest (DPM)";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_dpm_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_dpm_co.paa"};
	};
	class twc_rhs_6sh92_ddpm: rhs_6sh92
	{
		displayName = "MilTec Assault Vest (DDPM)";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_ddpm_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_ddpm_co.paa"};
	};
	
	class twc_rhs_6sh92_oli: rhs_6sh92
	{
		displayName = "MilTec Assault Vest (Olive)";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_oli_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_oli_co.paa"};
	};
	
	class rhs_6sh92_radio;
	class twc_rhs_6sh92_radio_tan: rhs_6sh92_radio
	{
		displayName = "MilTec Assault Vest (Tan w/Radio)";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_tan_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_tan_co.paa"};
	};
	class twc_rhs_6sh92_radio_dpm: rhs_6sh92_radio
	{
		displayName = "MilTec Assault Vest (DPM w/Radio)";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_fast_cs95_dpm_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_fast_cs95_dpm_co.paa"};
	};
	class twc_rhs_6sh92_radio_ddpm: rhs_6sh92_radio
	{
		displayName = "MilTec Assault Vest (DDPM w/Radio)";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_ddpm_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_ddpm_co.paa"};
	};
	
	class twc_rhs_6sh92_radio_oli: rhs_6sh92_radio
	{
		displayName = "MilTec Assault Vest (Olive w/Radio)";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_oli_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_oli_co.paa"};
	};
	
	class UK3CB_BAF_L86A1:UK3CB_BAF_L86A2_public
	{
		displayName = "L86A1";
		ACE_Overheating_JamChance[] = {0, 0.0012, 0.0018, 0.0033};
		author="Jayman";
	};
	class UK3CB_BAF_L86A1_SUSAT3D:UK3CB_BAF_L86A2_public
	{
		scope = 1;
		displayName = "L86A1";
		ACE_Overheating_JamChance[] = {0, 0.0012, 0.0018, 0.0033};
		author="Jayman";
		accessories[] = {"cup_optic_susat_pip"};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L85";
				item="cup_optic_susat_pip";
			};
		};
		class WeaponSlotsInfo
		{
			class asdg_OpticRail_UK3CB_BAF_L85: asdg_OpticRail1913 {
				class compatibleItems {
					cup_optic_susat_pip = 1;
				};
			};
			allowedslots[] = {901};
			mass = 84;
		};
	};
	class UK3CB_BAF_L110A2RIS_public;
		class TWC_UK3CB_BAF_L110A2_SUSAT: UK3CB_BAF_L110A2RIS_public
	{
		scope = 1;
		author="Hobbs";
		accessories[] = {"cup_optic_susat_pip"};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L110A2";
				item="cup_optic_susat_pip";
			};
		};
		class WeaponSlotsInfo
		{
			class asdg_OpticRail_UK3CB_BAF_L110A2: asdg_OpticRail1913 {
				class compatibleItems {
					cup_optic_susat_pip = 1;
				};
			};
			allowedslots[] = {901};
			mass = 176;
		};
	};
	
	class UK3CB_BAF_L85A1:twc_BAF_L85A2_PUBLIC
	{
		displayName = "L85A1";
		ACE_Overheating_JamChance[] = {0, 0.0012, 0.0018, 0.0033};
		author="Jayman";
	};
	class UK3CB_BAF_L85A1_SUSAT3D:UK3CB_BAF_L85A1
	{
		scope = 1;
		displayName = "L85A1";
		ACE_Overheating_JamChance[] = {0, 0.0012, 0.0018, 0.0033};
		author="Jayman";
		accessories[] = {"cup_optic_susat_pip"};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L85";
				item="cup_optic_susat_pip";
			};
		};
		
		class WeaponSlotsInfo
		{
			class asdg_OpticRail_UK3CB_BAF_L85: asdg_OpticRail1913 {
				class compatibleItems {
					cup_optic_susat_pip = 1;
				};
			};
			allowedslots[] = {901};
			mass = 84;
		};
	};

	class UK3CB_BAF_L85A1_SUSAT3D_Lazer:UK3CB_BAF_L85A1
	{
		scope = 1;
		displayName = "L85A1";
		ACE_Overheating_JamChance[] = {0, 0.0012, 0.0018, 0.0033};
		author="Jayman";
		accessories[] = {"cup_optic_susat_pip"};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L85";
				item="cup_optic_susat_pip";
			};
			class LinkedItemsFrontSideRail
			{
				slot="asdg_FrontSideRail_L85";
				item="UK3CB_BAF_LLM_Flashlight_Black";
			};
		};
		
		
		class WeaponSlotsInfo
		{
			class asdg_OpticRail_UK3CB_BAF_L85: asdg_OpticRail1913 {
				class compatibleItems {
					cup_optic_susat_pip = 1;
				};
			};
			allowedslots[] = {901};
			mass = 84;
		};
	};
	
		class UK3CB_BAF_L115A3;
	class UK3CB_BAF_L115A3_DE;
	class CUP_hgun_Colt1911;
	class twc_l96_w: UK3CB_BAF_L115A3
	{
		scope = 2;
		displayname = "L96A1";
		magazines[] = {"UK3CB_BAF_762_L42A1_10Rnd", "UK3CB_BAF_762_L42A1_10Rnd_T"};
		accessories[] = {"rhsusf_acc_M8541"};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L115";
				item="rhsusf_acc_M8541";
			};
		};
	};
	class twc_l96_d: UK3CB_BAF_L115A3_DE
	{
		scope = 2;
		displayname = "L96A1";
		magazines[] = {"UK3CB_BAF_762_L42A1_10Rnd", "UK3CB_BAF_762_L42A1_10Rnd_T"};
		accessories[] = {"rhsusf_acc_M8541"};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L115";
				item="rhsusf_acc_M8541";
			};
		};
	};
	

	
		class UK3CB_BAF_L85A2_SUSAT:twc_BAF_L85A2_PUBLIC
	{
		scope = 1;
		displayName = "L85A2";
		author="Hobbs";
		accessories[] = {"cup_optic_susat_pip", "UK3CB_BAF_TA31F", "UK3CB_BAF_TA31F_Hornbill"};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L85";
				item="cup_optic_susat_pip";
			};
		};
	};
	
		class UK3CB_BAF_L85A2_UGL_SUSAT:UK3CB_BAF_L85A2_UGL
	{
		scope = 1;
		displayName = "L85A2/L123UGL";
		author="Hobbs";
		accessories[] = {"cup_optic_susat_pip", "UK3CB_BAF_TA31F_Hornbill"};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L85";
				item="cup_optic_susat_pip";
			};
		};
	};
	
	class UK3CB_BAF_L85A2_UGL_HWS;
	
		class UK3CB_BAF_L85A2_UGL_ACOG:UK3CB_BAF_L85A2_UGL_HWS
	{
		scope = 1;
		displayName = "L85A2/L123UGL";
		author="Hobbs";
		accessories[] = {"cup_optic_susat_pip", "UK3CB_BAF_TA31F", "UK3CB_BAF_TA31F_Hornbill"};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L85";
				item="UK3CB_BAF_TA31F";
			};
		};
	};
	
	class UK3CB_BAF_L85A2_RIS;
	
		class UK3CB_BAF_L85A2_RIS_ACOG:UK3CB_BAF_L85A2_RIS
	{
		scope = 1;
		displayName = "L85A2";
		author="Hobbs";
		accessories[] = {"cup_optic_susat_pip", "UK3CB_BAF_TA31F_Hornbill"};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L85";
				item="UK3CB_BAF_TA31F_Hornbill";
			};
		};
	};
	
		class UK3CB_BAF_L85A2_RIS_SUSAT:UK3CB_BAF_L85A2_RIS
	{
		scope = 1;
		displayName = "L85A2";
		author="Hobbs";
		accessories[] = {"cup_optic_susat_pip", "UK3CB_BAF_TA31F", "UK3CB_BAF_TA31F_Hornbill"};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L85";
				item="cup_optic_susat_pip";
			};
		};
	};
	
	class UK3CB_BAF_U_Smock_DPMT;
	class UK3CB_BAF_U_Smock_DDPM;
	
	class UniformItem;
	
	class TWC_Smock_Temperate: UK3CB_BAF_U_Smock_DPMT
	{
		scope = 1;
		class ItemInfo: UniformItem
        {
			containerClass = Supply30;
            mass = 50;
			uniformClass = "UK3CB_BAF_Soldier_Smock_DPMT_Base";
			uniformModel = "-";
        };
	};
	class TWC_Smock_Desert: UK3CB_BAF_U_Smock_DDPM
	{
		scope = 1;
		class ItemInfo: UniformItem
        {
			containerClass = Supply30;
            mass = 50;
			uniformClass = "UK3CB_BAF_Soldier_Smock_DDPM_Base";
			uniformModel = "-";
        };
	};
};