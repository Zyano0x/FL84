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
	 * DynamicClass R_Weapon_B9A04_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_B9A04_Set00_LODP_Skeleton_AnimBlueprint_C
	 * Size -> 0x0710 (FullSize[0x09E0] - InheritedSize[0x02D0])
	 */
	class UR_Weapon_B9A04_Set00_LODP_Skeleton_AnimBlueprint_C : public UWeaponAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02D0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_19;                       // 0x0300(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_18;                       // 0x0328(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_17;                       // 0x0350(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_16;                       // 0x0378(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15;                       // 0x03A0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_14;                       // 0x03C8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13;                       // 0x03F0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x0418(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x0440(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x0468(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x0490(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x04B8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x04E0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x0508(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0530(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0558(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0580(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x05A8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x05D0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0600(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x0678(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x06A8(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x06D8(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x0708(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0738(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0768(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x07E0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0810(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0888(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x08B8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x08E0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0910(0x00B0) NativeAccessSpecifierPublic
		struct FAnimMsgData                                        K2Node_MakeStruct_AnimMsgData;                           // 0x09C0(0x0008) Transient, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FAnimMsgData>                                K2Node_MakeArray_Array;                                  // 0x09C8(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_25CF[0x8];                                   // 0x09D8(0x0008) MISSED OFFSET (PADDING)

	public:
		void TestAPI();
		void InterruptAnim();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_B9A04_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_F24ACCD04F9816FE9D766B945C515A17();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_B9A04_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_EE537D0E40457B0C18FCAEBC0C3ED399();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_B9A04_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_E0229C914BA4E5771C33CCBDC40559C5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_B9A04_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_D066E4F445D8B9D17E881E99F7DDFDFC();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_B9A04_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_C56C131748626A9573F10282DB5E5052();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_B9A04_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_BC0CF4F64A6C98918E7513B5D9394953();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_B9A04_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_B4B62B9D47B0C1161E6CE19216D27AEA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_B9A04_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_AABE1C004ECF87A2034CCA88B05CDD38();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_B9A04_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_A863A2F74187E8118A2F6D8E60300523();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_B9A04_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_84EB688D49FE8D60181894BF737AC498();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_B9A04_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_7B529D21433A869664E2179B4C613BA5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_B9A04_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_77EDB4C1425DF2DF774DAEB1479B3048();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_B9A04_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_6CEE3A2D414CEB6E9949B3AE8B35E54E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_B9A04_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_68B6675247DA823995BD8A8473A86377();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_B9A04_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_50AE56FC480E668DE2BAE78A71FF5789();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_B9A04_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_47B480004460910C1D11029F8F7F5163();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_B9A04_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_37A891C448B1ADADFF382886CBBA43FF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_B9A04_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_13B1B2364014E8EE709B10992D43ECBF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_B9A04_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_0011171C434B57CADB4A22B6D1C6DEF5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_B9A04_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_FD9E62FB4BF9F8E65B55ABB0CCD5B28C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_B9A04_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_E4E641294B19BA48572E4BAAE5E32FA9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_B9A04_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_7208B17C4942AAB3573456B9468769AA();
		void AnimNotify_QuitIdle();
		void AnimNotify_QuitFire();
		void AnimNotify_EnterIdle();
		void AnimNotify_EnterFire();
		void AnimGraph(struct FPoseLink* bpp__AnimGraph__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
