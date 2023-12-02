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
	 * DynamicClass ABP_SolarCharacter_FPP.ABP_SolarCharacter_FPP_C
	 * Size -> 0x0468 (FullSize[0x06D0] - InheritedSize[0x0268])
	 */
	class UABP_SolarCharacter_FPP_C : public UAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0268(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0298(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x02C0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x02E8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0360(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0390(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0408(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0438(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x04E8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0530(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x05A8(0x00A8) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0650(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0670(0x0020) NativeAccessSpecifierPublic
		class ASolarCharacter*                                     SolarCharacter;                                          // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsScopeAim;                                              // 0x0698(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1O1X[0x3];                                   // 0x0699(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ScopeFadeTime;                                           // 0x069C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsWalking;                                               // 0x06A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsShooting;                                              // 0x06A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShootDouble;                                             // 0x06A2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WNNT[0x1];                                   // 0x06A3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Horizontal;                                              // 0x06A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Vertical;                                                // 0x06A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAnim;                                                // 0x06AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7O3N[0x3];                                   // 0x06AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x06B0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CKHQ[0x4];                                   // 0x06B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASolarCharacter*                                     K2Node_DynamicCast_AsSolar_Character;                    // 0x06B8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess;                             // 0x06C0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_62M8[0xF];                                   // 0x06C1(0x000F) MISSED OFFSET (PADDING)

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SolarCharacter_FPP_AnimGraphNode_TransitionResult_768665AB4918F96C9C3C8F92EF926EE4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SolarCharacter_FPP_AnimGraphNode_TransitionResult_01B670704C4A0F8E519CD8A192C5E1D6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SolarCharacter_FPP_AnimGraphNode_BlendListByBool_F136F87A4DDCD2678555C9B592100DA7();
		void BlueprintUpdateAnimation(float bpp__DeltaTimeX__pf);
		void BlueprintInitializeAnimation();
		void BlueprintBeginPlay();
		void AnimGraph(struct FPoseLink* bpp__AnimGraph__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
