#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.5.503427
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * BoneSkeletalMesh Avatar_MphyEAF_Normal_LodP_New.Avatar_MphyEAF_Normal_LodP_New
	 */
	enum class EBone_Avatar_MphyEAF_Normal_LodP_New : uint8_t
	{
		Root                  = 0,
		Bip001                = 1,
		pelvis                = 2,
		spine_01              = 3,
		spine_02              = 4,
		spine_03              = 5,
		clavicle_l            = 6,
		upperarm_l            = 7,
		lowerarm_l            = 8,
		hand_l                = 9,
		thumb_01_l            = 10,
		thumb_02_l            = 11,
		thumb_03_l            = 12,
		index_01_l            = 13,
		index_02_l            = 14,
		index_03_l            = 15,
		middle_01_l           = 16,
		middle_02_l           = 17,
		middle_03_l           = 18,
		ring_01_l             = 19,
		ring_02_l             = 20,
		ring_03_l             = 21,
		pinky_01_l            = 22,
		pinky_02_l            = 23,
		pinky_03_l            = 24,
		lowerarm_twist_l_01   = 25,
		lowerarm_twist_l_02   = 26,
		upperarm_twist_l_01   = 27,
		upperarm_twist_l_02   = 28,
		jianjia               = 29,
		piaodai_2             = 30,
		piaodai_3             = 31,
		piaodai_4             = 32,
		piaodai_5             = 33,
		piaodai_6             = 34,
		piaodai_7             = 35,
		piaodai_8             = 36,
		piaodai_9             = 37,
		piaodai_10            = 38,
		Bone001               = 39,
		clavicle_R            = 40,
		upperarm_r            = 41,
		lowerarm_r            = 42,
		hand_r                = 43,
		thumb_01_r            = 44,
		thumb_02_r            = 45,
		thumb_03_r            = 46,
		index_01_r            = 47,
		index_02_r            = 48,
		index_03_r            = 49,
		middle_01_r           = 50,
		middle_02_r           = 51,
		middle_03_r           = 52,
		ring_01_r             = 53,
		ring_02_r             = 54,
		ring_03_r             = 55,
		pinky_01_r            = 56,
		pinky_02_r            = 57,
		pinky_03_r            = 58,
		RightHandWeaponAttach = 59,
		lowerarm_twist_r_01   = 60,
		lowerarm_twist_r_02   = 61,
		upperarm_twist_r_01   = 62,
		upperarm_twist_r_02   = 63,
		Neck_01               = 64,
		head                  = 65,
		Hair_2                = 66,
		Hair_3                = 67,
		Hair_4                = 68,
		Hair_5                = 69,
		Hair_6                = 70,
		Hair_7                = 71,
		Hair_8                = 72,
		Hair_9                = 73,
		Hair_10               = 74,
		Hair_11               = 75,
		Hair_12               = 76,
		Hair_13               = 77,
		Hair_14               = 78,
		Hair_15               = 79,
		Hair_16               = 80,
		Hair_17               = 81,
		Hair_18               = 82,
		Hair_19               = 83,
		Hair_20               = 84,
		Head_Root_Loc         = 85,
		M_Lip_Upper_Loc       = 86,
		R_Lip_Upper_Loc       = 87,
		R_Lip_Corner_Loc      = 88,
		R_LipCornerLower_Loc  = 89,
		R_Lip_Lower_Loc       = 90,
		M_Lip_Lower_Loc       = 91,
		M_JawMouse_Loc        = 92,
		M_Jaw_Loc             = 93,
		M_NoseMouse_Loc       = 94,
		R_Nose_Loc            = 95,
		M_NoseLow_Loc         = 96,
		R_Cheek_Raiser_Loc    = 97,
		R_Cheekr_Loc          = 98,
		R_CheekMouse_Loc      = 99,
		R_MouseJaw_Loc        = 100,
		R_Jaw_Loc             = 101,
		R_Cheek_Loc           = 102,
		R_Eyeball_Loc         = 103,
		R_Eyelid_Upper_Loc    = 104,
		R_Eyelid_Outer_Loc    = 105,
		R_Eyelid_Lower_Loc    = 106,
		R_Eyelid_Inner_Loc    = 107,
		R_Brow_Inner_Loc      = 108,
		R_Brow_Middle_Loc     = 109,
		R_Brow_Outer_Loc      = 110,
		L_Brow_Inner_Loc      = 111,
		L_Brow_Middle_Loc     = 112,
		L_Brow_Outer_Loc      = 113,
		L_Cheek_Raiser_Loc    = 114,
		L_Cheek_Loc           = 115,
		L_Nose_Loc            = 116,
		L_Lip_Corner_Loc      = 117,
		L_Lip_Upper_Loc       = 118,
		L_Lip_Lower_Loc       = 119,
		L_Cheekl_Loc          = 120,
		L_CheekMouse_Loc      = 121,
		L_MouseJaw_Loc        = 122,
		L_LipCornerLower_Loc  = 123,
		L_Jaw_Loc             = 124,
		M_NoseMiddle_Loc      = 125,
		M_NoseUpper_Loc       = 126,
		L_Eyelid_Upper_Loc    = 127,
		L_Eyelid_Lower_Loc    = 128,
		L_Eyelid_Inner_Loc    = 129,
		L_Eyelid_Outer_Loc    = 130,
		L_Eyeball_Loc         = 131,
		BackpackAttach        = 132,
		breast_l_01           = 133,
		breast_l_02           = 134,
		breast_l_03           = 135,
		breast_r_01           = 136,
		breast_r_02           = 137,
		breast_r_03           = 138,
		thigh_l               = 139,
		calf_l                = 140,
		foot_l                = 141,
		ball_l                = 142,
		thigh_r               = 143,
		calf_r                = 144,
		foot_r                = 145,
		ball_r                = 146
	};

	/**
	 * BoneSkeletalMesh R_VH_Hover_Soroll03_Set01_LODP.R_VH_Hover_Soroll03_Set01_LODP
	 */
	enum class EBone_R_VH_Hover_Soroll03_Set01_LODP : uint8_t
	{
		VH_Root           = 0,
		VH_Body           = 1,
		Shockabsorption   = 2,
		Rudder            = 3,
		Rudder_Hand_L     = 4,
		Rudder_Hand_R     = 5,
		Seat0             = 6,
		Turret_A1         = 7,
		Turret_H          = 8,
		Turret_HV         = 9,
		Turret_V          = 10,
		Turret_R          = 11,
		ShellCaseSocket04 = 12,
		MuzzleSocket04    = 13,
		OverloadSocket02  = 14,
		ShellCaseSocket02 = 15,
		MuzzleSocket02    = 16,
		OverloadSocket04  = 17,
		Turret_L          = 18,
		Turret_F          = 19,
		OverloadSocket01  = 20,
		OverloadSocket03  = 21,
		ShellCaseSocket01 = 22,
		ShellCaseSocket03 = 23,
		MuzzleSocket01    = 24,
		MuzzleSocket03    = 25
	};

	/**
	 * BoneSkeletalMesh R_Weapon_WL02_Set00_LOD0.R_Weapon_WL02_Set00_LOD0
	 */
	enum class EBone_R_Weapon_WL02_Set00_LOD0 : uint8_t
	{
		Weapon_root = 0,
		Weapon_body = 1,
		Weapon01    = 2,
		Bullet      = 3,
		Handler     = 4
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
