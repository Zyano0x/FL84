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
	 * DynamicClass ABP_MCP_Skill_DuckRollingMesh.ABP_MCP_Skill_DuckRollingMesh_C
	 * Size -> 0x0088 (FullSize[0x02F0] - InheritedSize[0x0268])
	 */
	class UABP_MCP_Skill_DuckRollingMesh_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0268(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0298(0x0048) NativeAccessSpecifierPublic
		int32_t                                                    PoseIndex;                                               // 0x02E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_94IK[0xC];                                   // 0x02E4(0x000C) MISSED OFFSET (PADDING)

	public:
		void ExecuteUbergraph_ABP_MCP_Skill_DuckRollingMesh(int32_t bpp__EntryPoint__pf);
		void AnimGraph(struct FPoseLink* bpp__AnimGraph__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
