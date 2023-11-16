#pragma once

/**
 * Name: FL84
 * Version: 15.1
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
	 * BoneSkeletalMesh Avatar_MCP_Normal_LodP.Avatar_MCP_Normal_LodP
	 */
	enum class EBone_Avatar_MCP_Normal_LodP : uint8_t
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
		lowerarm_twist_01_l   = 25,
		clavicle_R            = 26,
		upperarm_r            = 27,
		lowerarm_r            = 28,
		hand_r                = 29,
		thumb_01_r            = 30,
		thumb_02_r            = 31,
		thumb_03_r            = 32,
		index_01_r            = 33,
		index_02_r            = 34,
		index_03_r            = 35,
		middle_01_r           = 36,
		middle_02_r           = 37,
		middle_03_r           = 38,
		ring_01_r             = 39,
		ring_02_r             = 40,
		ring_03_r             = 41,
		pinky_01_r            = 42,
		pinky_02_r            = 43,
		pinky_03_r            = 44,
		RightHandWeaponAttach = 45,
		lowerarm_twist_01_r   = 46,
		armor_01              = 47,
		Neck_01               = 48,
		head                  = 49,
		eye_l                 = 50,
		eye_r                 = 51,
		eye_ball_l            = 52,
		eye_ball_r            = 53,
		Cap                   = 54,
		jiemao_l_01           = 55,
		jiemao_l_02           = 56,
		jiemao_l_03           = 57,
		jiemao_r_01           = 58,
		jiemao_r_02           = 59,
		jiemao_r_03           = 60,
		BackpackAttach        = 61,
		card_2                = 62,
		armor_02              = 63,
		thigh_l               = 64,
		calf_l                = 65,
		foot_l                = 66,
		ball_l                = 67,
		thigh_r               = 68,
		calf_r                = 69,
		foot_r                = 70,
		ball_r                = 71,
		Pendant_01            = 72,
		Pendant_02            = 73,
		LeftHandWeaponAttach  = 74,
		ShieldUAV             = 75,
		Pendant_end           = 76
	};

	/**
	 * BoneSkeletalMesh R_VH_Hover_Soroll04_Set01_LODP.R_VH_Hover_Soroll04_Set01_LODP
	 */
	enum class EBone_R_VH_Hover_Soroll04_Set01_LODP : uint8_t
	{
		Root          = 0,
		Dummy_HandL   = 1,
		Dummy_HandL_3 = 2,
		Dummy_HandL_2 = 3,
		Dummy_FootR   = 4,
		Dummy_FootR_2 = 5,
		Dummy_bag     = 6,
		Dummy_Wings_R = 7,
		Dummy_Fan     = 8,
		Dummy_Wings_L = 9,
		Dummy_FootL   = 10,
		Dummy_FootL_2 = 11,
		Dummy_HandR   = 12,
		Dummy_HandR_2 = 13,
		Dummy_HandR_3 = 14
	};

	/**
	 * BoneSkeletalMesh R_Weapon_Psm03_Set00_LOD0.R_Weapon_Psm03_Set00_LOD0
	 */
	enum class EBone_R_Weapon_Psm03_Set00_LOD0 : uint8_t
	{
		Weapon_root = 0,
		Weapon_body = 1,
		Weapon01    = 2,
		Mag         = 3
	};

	/**
	 * BoneSkeletalMesh R_BI_DuckDoll.R_BI_DuckDoll
	 */
	enum class EBone_R_BI_DuckDoll : uint8_t
	{
		Root                 = 0,
		Bone_Body_01         = 1,
		Bone_Spine_01        = 2,
		Bone_Head_01         = 3,
		Bone_Hat_01          = 4,
		Bone_Hat_02          = 5,
		Bone_Eye_R_01        = 6,
		Bone_Eye_R_02        = 7,
		Bone_Eye_L_01        = 8,
		Bone_Eye_L_02        = 9,
		Bone_Ctrl_01         = 10,
		Bone_Clavicle_R      = 11,
		Bone_UpperArm_R      = 12,
		Bone_LowerArm_R      = 13,
		Bone_Hand_R          = 14,
		Bone_Thamb_R_01      = 15,
		Bone_Thamb_R_02      = 16,
		Bone_Index_R_01      = 17,
		Bone_Index_R_02      = 18,
		Bone_Clavicle_L      = 19,
		Bone_UpperArm_L      = 20,
		Bone_LowerArm_L      = 21,
		Bone_Hand_L          = 22,
		Bone_Thamb_L_01      = 23,
		Bone_Thamb_L_02      = 24,
		Bone_Index_L_01      = 25,
		Bone_Index_L_02      = 26,
		Bone_Foot_L          = 27,
		Bone_Leg_L           = 28,
		Bone_Foot_R          = 29,
		Bone_Leg_R           = 30,
		Bone_Box_Root        = 31,
		Bone_Box_01_Cover    = 32,
		Bone_Box_03_Cover_03 = 33,
		Bone_Box_03_Cover_02 = 34
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
