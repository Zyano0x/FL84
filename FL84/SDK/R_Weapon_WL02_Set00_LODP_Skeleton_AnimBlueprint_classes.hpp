#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x380 - 0x2D0)
// DynamicClass R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint_C
class UR_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint_C : public UWeaponAnimInstance
{
public:
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2D0(0x30)(NativeAccessSpecifierPublic)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose;                        // 0x300(0x18)(NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x318(0x48)(NativeAccessSpecifierPublic)
	struct FAnimMsgData                          K2Node_MakeStruct_AnimMsgData;                     // 0x360(0x8)(Transient, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FAnimMsgData>                  K2Node_MakeArray_Array;                            // 0x368(0x10)(ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_249D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UR_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint_C* GetDefaultObj();

	void TestAPI();
	void InterruptAnim();
	void AnimNotify_QuitReload();
	void AnimNotify_QuitIdle();
	void AnimNotify_QuitFire();
	void AnimNotify_EnterReload();
	void AnimNotify_EnterIdle();
	void AnimNotify_EnterFire();
	void AnimGraph(struct FPoseLink* bpp__AnimGraph__pf);
};

}


