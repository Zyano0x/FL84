#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x2F0 - 0x268)
// DynamicClass ABP_MCP_Skill_DuckRollingMesh.ABP_MCP_Skill_DuckRollingMesh_C
class UABP_MCP_Skill_DuckRollingMesh_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x268(0x30)(NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x298(0x48)(NativeAccessSpecifierPublic)
	int32                                        PoseIndex;                                         // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23D9[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UABP_MCP_Skill_DuckRollingMesh_C* GetDefaultObj();

	void ExecuteUbergraph_ABP_MCP_Skill_DuckRollingMesh(int32 bpp__EntryPoint__pf);
	void AnimGraph(struct FPoseLink* bpp__AnimGraph__pf);
};

}


