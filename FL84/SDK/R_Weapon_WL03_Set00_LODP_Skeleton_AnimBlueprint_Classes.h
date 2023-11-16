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
	 * DynamicClass R_Weapon_WL03_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_WL03_Set00_LODP_Skeleton_AnimBlueprint_C
	 * Size -> 0x0710 (FullSize[0x09E0] - InheritedSize[0x02D0])
	 */
	class UR_Weapon_WL03_Set00_LODP_Skeleton_AnimBlueprint_C : public UWeaponAnimInstance
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
		unsigned char                                              UnknownData_AKSL[0x8];                                   // 0x09D8(0x0008) MISSED OFFSET (PADDING)

	public:
		void TestAPI();
		void InterruptAnim();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL03_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_FD3912374DA1042122EF4BA346AED47D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL03_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_F3E1CE4F4F52BDDF2C7C4392679371E6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL03_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_D5845B9E400B3D008BEF698B783B92A9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL03_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_D26EF958487058FA7FC43FAD41F4DEF7();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL03_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_C56C131748626A9573F10282DB5E5052();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL03_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_9F7EE7DF4EADB7412001EA80EB6DF9EE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL03_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_90C49DEF49A94759B5DF8D8AB0247252();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL03_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_7BF9F6B543647F4000354585CCDD9D8C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL03_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_69DC14EC4A779FA924FD3BAD514C71CA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL03_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_520B94684B85FF9018373286CEF79B9D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL03_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_512995A9441B7ABA6A1354A124B4947D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL03_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_48E7AFC2428503DF315D6DA5F2F053F5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL03_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_3FDD26624535716666823A85B4A0EA6B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL03_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_37CC4BD349701B7B6B2903932ADDE28C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL03_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_2DD7E36F4A2BD62B1A8519B45B2FBE75();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL03_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_2AFD33E54E0DB5EA1233039AC1CBEAAE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL03_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_272B77AE42671779C55883858592D62C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL03_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_075E1FBF4BB9C39350964A81FBF296DE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL03_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_0584AE8244C44B37DF07C28ADC078A60();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL03_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_31A4CD864812F3929F156E9AEE73754C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL03_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_306EF0F349340C3816672B840E67EAF3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_WL03_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_296D1E13442BD0646F8BEE8C73C07614();
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
