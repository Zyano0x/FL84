#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x360 - 0x2D0)
// DynamicClass R_Weapon_B9A03_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_B9A03_Set00_LODP_Skeleton_AnimBlueprint_C
class UR_Weapon_B9A03_Set00_LODP_Skeleton_AnimBlueprint_C : public UWeaponAnimInstance
{
public:
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2D0(0x30)(NativeAccessSpecifierPublic)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose;                        // 0x300(0x18)(NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x318(0x48)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UR_Weapon_B9A03_Set00_LODP_Skeleton_AnimBlueprint_C* GetDefaultObj();

	void ExecuteUbergraph_R_Weapon_B9A03_Set00_LODP_Skeleton_AnimBlueprint(int32 bpp__EntryPoint__pf);
	void AnimGraph(struct FPoseLink* bpp__AnimGraph__pf);
};

}


