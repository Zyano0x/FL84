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
	// # Classes
	// --------------------------------------------------
	/**
	 * DynamicClass Anim_LobbyCharacter_MphyEAF_NR_WithPhysics.Anim_LobbyCharacter_MphyEAF_NR_WithPhysics_C
	 * Size -> 0x2380 (FullSize[0x25F0] - InheritedSize[0x0270])
	 */
	class UAnim_LobbyCharacter_MphyEAF_NR_WithPhysics_C : public USolarLobbyAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_2;                                    // 0x0270(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose;                           // 0x02A0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0318(0x0020) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4J7Y[0x8];                                   // 0x0338(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_KawaiiPhysics                             AnimGraphNode_KawaiiPhysics_12;                          // 0x0340(0x0250) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0590(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_KawaiiPhysics                             AnimGraphNode_KawaiiPhysics_11;                          // 0x05B0(0x0250) NativeAccessSpecifierPublic
		struct FAnimNode_KawaiiPhysics                             AnimGraphNode_KawaiiPhysics_10;                          // 0x0800(0x0250) NativeAccessSpecifierPublic
		struct FAnimNode_KawaiiPhysics                             AnimGraphNode_KawaiiPhysics_9;                           // 0x0A50(0x0250) NativeAccessSpecifierPublic
		struct FAnimNode_KawaiiPhysics                             AnimGraphNode_KawaiiPhysics_8;                           // 0x0CA0(0x0250) NativeAccessSpecifierPublic
		struct FAnimNode_KawaiiPhysics                             AnimGraphNode_KawaiiPhysics_7;                           // 0x0EF0(0x0250) NativeAccessSpecifierPublic
		struct FAnimNode_KawaiiPhysics                             AnimGraphNode_KawaiiPhysics_6;                           // 0x1140(0x0250) NativeAccessSpecifierPublic
		struct FAnimNode_KawaiiPhysics                             AnimGraphNode_KawaiiPhysics_5;                           // 0x1390(0x0250) NativeAccessSpecifierPublic
		struct FAnimNode_KawaiiPhysics                             AnimGraphNode_KawaiiPhysics_4;                           // 0x15E0(0x0250) NativeAccessSpecifierPublic
		struct FAnimNode_KawaiiPhysics                             AnimGraphNode_KawaiiPhysics_3;                           // 0x1830(0x0250) NativeAccessSpecifierPublic
		struct FAnimNode_KawaiiPhysics                             AnimGraphNode_KawaiiPhysics_2;                           // 0x1A80(0x0250) NativeAccessSpecifierPublic
		struct FAnimNode_KawaiiPhysics                             AnimGraphNode_KawaiiPhysics;                             // 0x1CD0(0x0250) NativeAccessSpecifierPublic
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x1F20(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x1F50(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x1F78(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x1FA0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x2018(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x2048(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x20C0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x20F0(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_LinkedAnimLayer                           AnimGraphNode_LinkedAnimLayer;                           // 0x21A0(0x00B8) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend_2;                             // 0x2258(0x00C8) NativeAccessSpecifierPublic
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x2320(0x00B8) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x23D8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x2400(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x2428(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x2470(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend;                               // 0x24E8(0x00C8) NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   IdleAnim;                                                // 0x25B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   CurIdleShow;                                             // 0x25B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAnimSequenceBase*>                           IdleShowList;                                            // 0x25C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShouldPlayShow;                                          // 0x25D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QPB5[0x3];                                   // 0x25D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ShowCDTime;                                              // 0x25D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTimerHandle                                        IdleShowCD;                                              // 0x25D8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxNum;                                                  // 0x25E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnablePhysics;                                           // 0x25E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnablePhysicsForMVP;                                     // 0x25E5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IdleShowDisablePhysics;                                  // 0x25E6(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       InIdleShow;                                              // 0x25E7(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CharacterCanBeLooked;                                    // 0x25E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_IsVisible;                                  // 0x25E9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D921[0x6];                                   // 0x25EA(0x0006) MISSED OFFSET (PADDING)

	public:
		void UsingKawaiiPhysics(const struct FPoseLink& bpp__InPose__pf, struct FPoseLink* bpp__UsingKawaiiPhysics__pf);
		void SetCharacterCanBeLooked(bool bpp__IsVisible__pf);
		void RandIdleShowBP();
		void RandIdleShow();
		void PlayIdleShow();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_MphyEAF_NR_WithPhysics_AnimGraphNode_TwoWayBlend_A56779C3476F2904DE32CBB973B2CC27();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_MphyEAF_NR_WithPhysics_AnimGraphNode_TwoWayBlend_51FCD174467517BB1BF15CB529339E61();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_MphyEAF_NR_WithPhysics_AnimGraphNode_TransitionResult_79F4850442C260B6F3EE4F807DAE84F9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_MphyEAF_NR_WithPhysics_AnimGraphNode_TransitionResult_0EF251B64AD31B2EE0CC9FA0CD836B7E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_MphyEAF_NR_WithPhysics_AnimGraphNode_SequencePlayer_F195A2E748638734CC672785D350055B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_MphyEAF_NR_WithPhysics_AnimGraphNode_SequencePlayer_A13308DA45FF8066A8FABFB593835CE7();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_MphyEAF_NR_WithPhysics_AnimGraphNode_SequencePlayer_8FD8DE33443F218809EB8B96A2E371EC();
		void AnimNotify_IdleShowStart();
		void AnimNotify_IdleShowFinish();
		void AnimNotify_IdleAnimStart();
		void AnimGraph(struct FPoseLink* bpp__AnimGraph__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
