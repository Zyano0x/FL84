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
	 * DynamicClass SpecABP_Skill_KeepFiring.SpecABP_Skill_KeepFiring_C
	 * Size -> 0x03A0 (FullSize[0x0660] - InheritedSize[0x02C0])
	 */
	class USpecABP_Skill_KeepFiring_C : public USolarSpecABP_Skill
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_2;                                    // 0x02C0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose;                           // 0x02F0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0368(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace;                  // 0x03E0(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x0568(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0628(0x0030) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EVBL[0x8];                                   // 0x0658(0x0008) MISSED OFFSET (PADDING)

	public:
		void SkillAnimationLayer(const struct FPoseLink& bpp__BasePose__pf, struct FPoseLink* bpp__SkillAnimationLayer__pf);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Skill_KeepFiring_AnimGraphNode_RotationOffsetBlendSpace_519BC4914BD91B5DA5A3F58792D43A5B();
		void AnimGraph(struct FPoseLink* bpp__AnimGraph__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
