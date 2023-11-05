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
	 * DynamicClass R_Weapon_WL05_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_WL05_Set00_LODP_Skeleton_AnimBlueprint_C
	 * Size -> 0x0710 (FullSize[0x09E0] - InheritedSize[0x02D0])
	 */
	class UR_Weapon_WL05_Set00_LODP_Skeleton_AnimBlueprint_C : public UWeaponAnimInstance
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
		unsigned char                                              UnknownData_GXYE[0x8];                                   // 0x09D8(0x0008) MISSED OFFSET (PADDING)

	public:
		void TestAPI();
		void InterruptAnim();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL05_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_F864A8404805F7EACEFC909E832043EE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL05_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_EF1003244660F4F16818ACB549FE30A2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL05_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_C9FED2714733C7A7136C3B853D25E8AF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL05_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_C75E784B46BBB88DCA0310ACB0D26B5C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL05_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_C56C131748626A9573F10282DB5E5052();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL05_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_B0F67D2C42C3309858AB33AC10288A84();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL05_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_A9D4CFA64B088023BC866EB7258D24DB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL05_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_A09B0CDA42727AF610670C94DE73F3FB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL05_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_6DD2D4034F92A9BD828C65B8BFBA2293();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL05_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_648093B0430A4941FAABC299AD2FE963();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL05_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_52925DBD4E136234F3ECC881874BD63D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL05_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_5253111046BC8B08009AD3A86A2A6A92();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL05_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_4891E8A74C85C9FAA5F481BF49F3C328();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL05_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_3F59DA0B453648FCA8849BB4F06C4CAD();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL05_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_3648865447AFE466BAF6F1AA55855DBA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL05_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_2B2B494947D256B2462E0C8D47029D4D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL05_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_1A41016A4CC12032E6B0F3B5B6DDF69A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL05_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_1210DDEB4E4988C12C9E2E8BBF476289();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL05_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_06660E20471885C3FDEA209298977A13();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL05_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_B900DE27498B8EBDD9C81293F7BB1ED6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL05_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_AEDD1FCA452DB89BD307AAA8B18B310C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL05_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_611D453D494879EE90A0FE84805C41A1();
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
