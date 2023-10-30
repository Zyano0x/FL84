#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x450 (0x6C0 - 0x270)
// DynamicClass Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C
class UAnim_LobbyCharacter_Default_C : public USolarLobbyAnimInstance
{
public:
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x270(0x30)(NativeAccessSpecifierPublic)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x2A0(0x48)(NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x2E8(0x28)(NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x310(0x28)(NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x338(0x78)(NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x3B0(0x30)(NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x3E0(0x78)(NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x458(0x30)(NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x488(0xB0)(NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x538(0x78)(NativeAccessSpecifierPublic)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend;                         // 0x5B0(0xC8)(NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                     IdleAnim;                                          // 0x678(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                     CurIdleShow;                                       // 0x680(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAnimSequenceBase*>             IdleShowList;                                      // 0x688(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldPlayShow;                                    // 0x698(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_339A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ShowCDTime;                                        // 0x69C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimerHandle                          IdleShowCD;                                        // 0x6A0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxNum;                                            // 0x6A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CharacterCanBeLooked;                              // 0x6AC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_339B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_DeltaTimeX;                           // 0x6B0(0x4)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         K2Node_Event_IsVisible;                            // 0x6B4(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_339C[0xB];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAnim_LobbyCharacter_Default_C* GetDefaultObj();

	void SetCharacterCanBeLooked(bool bpp__IsVisible__pf);
	void Rand_Idle_Show_BP();
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
};

}


