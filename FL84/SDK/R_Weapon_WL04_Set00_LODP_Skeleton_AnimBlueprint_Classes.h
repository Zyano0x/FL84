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
	// # Classes
	// --------------------------------------------------
	/**
	 * DynamicClass R_Weapon_WL04_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_WL04_Set00_LODP_Skeleton_AnimBlueprint_C
	 * Size -> 0x00B0 (FullSize[0x0380] - InheritedSize[0x02D0])
	 */
	class UR_Weapon_WL04_Set00_LODP_Skeleton_AnimBlueprint_C : public UWeaponAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02D0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose;                              // 0x0300(0x0018) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0318(0x0048) NativeAccessSpecifierPublic
		struct FAnimMsgData                                        K2Node_MakeStruct_AnimMsgData;                           // 0x0360(0x0008) Transient, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FAnimMsgData>                                K2Node_MakeArray_Array;                                  // 0x0368(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A9ZO[0x8];                                   // 0x0378(0x0008) MISSED OFFSET (PADDING)

	public:
		void TestAPI();
		void InterruptAnim();
		void AnimNotify_QuitIdle();
		void AnimNotify_QuitFire();
		void AnimNotify_EnterIdle();
		void AnimNotify_EnterFire();
		void AnimGraph(struct FPoseLink* bpp__AnimGraph__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
