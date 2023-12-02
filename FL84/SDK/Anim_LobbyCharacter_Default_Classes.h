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
	 * DynamicClass Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C
	 * Size -> 0x0450 (FullSize[0x06C0] - InheritedSize[0x0270])
	 */
	class UAnim_LobbyCharacter_Default_C : public USolarLobbyAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0270(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x02A0(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x02E8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0310(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0338(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x03B0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x03E0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0458(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0488(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0538(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend;                               // 0x05B0(0x00C8) NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   IdleAnim;                                                // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequenceBase*                                   CurIdleShow;                                             // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAnimSequenceBase*>                           IdleShowList;                                            // 0x0688(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShouldPlayShow;                                          // 0x0698(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E7NX[0x3];                                   // 0x0699(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ShowCDTime;                                              // 0x069C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTimerHandle                                        IdleShowCD;                                              // 0x06A0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxNum;                                                  // 0x06A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CharacterCanBeLooked;                                    // 0x06AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6RI5[0x3];                                   // 0x06AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x06B0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_IsVisible;                                  // 0x06B4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UB44[0xB];                                   // 0x06B5(0x000B) MISSED OFFSET (PADDING)

	public:
		void SetCharacterCanBeLooked(bool bpp__IsVisible__pf);
		void RandIdleShowBP();
		void RandIdleShow();
		void PlayIdleShow();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_TwoWayBlend_1324C6B947749553DBAB488CF6FFAA1D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_TransitionResult_EFF864F2415FFE7C85667C9B1A0CC213();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_TransitionResult_91AB0B2E43FDD2622D11D4823EEDD73C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_SequencePlayer_D129D66148A76FE8404F6BB53C41B2F5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_SequencePlayer_9F92E37E45D0DB25B7813584454F8BDC();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_SequencePlayer_8F8046714AA0A8276EC35FB1CD0F037A();
		void BlueprintUpdateAnimation(float bpp__DeltaTimeX__pf);
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
