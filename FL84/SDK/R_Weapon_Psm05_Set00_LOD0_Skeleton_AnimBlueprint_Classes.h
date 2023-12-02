#pragma once

/**
 * Name: FL84
 * Version: 1.15.1.6
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * DynamicClass R_Weapon_Psm05_Set00_LOD0_Skeleton_AnimBlueprint.R_Weapon_Psm05_Set00_LOD0_Skeleton_AnimBlueprint_C
	 * Size -> 0x0090 (FullSize[0x0360] - InheritedSize[0x02D0])
	 */
	class UR_Weapon_Psm05_Set00_LOD0_Skeleton_AnimBlueprint_C : public UWeaponAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02D0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose;                              // 0x0300(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0318(0x0048) NativeAccessSpecifierPublic

	public:
		void ExecuteUbergraph_R_Weapon_Psm05_Set00_LOD0_Skeleton_AnimBlueprint(int32_t bpp__EntryPoint__pf);
		void AnimGraph(struct FPoseLink* bpp__AnimGraph__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
