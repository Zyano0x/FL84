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
	 * DynamicClass SpecABP_Skill_DuckRolling.SpecABP_Skill_DuckRolling_C
	 * Size -> 0x0740 (FullSize[0x0A00] - InheritedSize[0x02C0])
	 */
	class USpecABP_Skill_DuckRolling_C : public USolarSpecABP_Skill
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_2;                                    // 0x02C0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose_2;                         // 0x02F0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x0368(0x00B8) NativeAccessSpecifierPublic
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose;                           // 0x0420(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x0498(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x04C0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x04E8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0510(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0538(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0560(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0588(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x05B0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x0628(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0658(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x06D0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x0700(0x00E0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x07E0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0810(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0840(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x08B8(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x08E8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0910(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x09C0(0x0030) NativeAccessSpecifierPublic
		float                                                      GenderSpeedScale;                                        // 0x09F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_85R9[0xC];                                   // 0x09F4(0x000C) MISSED OFFSET (PADDING)

	public:
		void SkillAnimationLayer(const struct FPoseLink& bpp__BasePose__pf, struct FPoseLink* bpp__SkillAnimationLayer__pf);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Skill_DuckRolling_AnimGraphNode_TransitionResult_FF208C6E45D6EF58A2170793D868D7F6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Skill_DuckRolling_AnimGraphNode_TransitionResult_E3863C5B4EEF760666D2C09BC8FABD28();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Skill_DuckRolling_AnimGraphNode_TransitionResult_DF9C726A46619D9F6336ED8C76B85A28();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Skill_DuckRolling_AnimGraphNode_TransitionResult_C4A03A7C427E91A12468F180AE12DDDC();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Skill_DuckRolling_AnimGraphNode_TransitionResult_C1B0DD464C5E6E75F0B17A979FA04050();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Skill_DuckRolling_AnimGraphNode_BlendSpacePlayer_655CF91F4A7FCF89A3A02BA1C0AB1F81();
		void AnimNotify_SixDirRunF();
		void AnimNotify_SixDirRunB();
		void AnimGraph(struct FPoseLink* bpp__AnimGraph__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
