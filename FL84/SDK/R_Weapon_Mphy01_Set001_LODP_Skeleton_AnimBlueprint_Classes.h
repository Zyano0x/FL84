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
	 * DynamicClass R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint.R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_C
	 * Size -> 0x0710 (FullSize[0x09E0] - InheritedSize[0x02D0])
	 */
	class UR_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_C : public UWeaponAnimInstance
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
		unsigned char                                              UnknownData_DJN6[0x8];                                   // 0x09D8(0x0008) MISSED OFFSET (PADDING)

	public:
		void TestAPI();
		void InterruptAnim();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_FC0194B2401EA22381DBF39C55947FF9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_E401BBA149B0DABC77E320A5D26F161C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_C959CBB24B6E3FBB125D5386BA83BA89();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_C56C131748626A9573F10282DB5E5052();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_968E57334D0560E0D81E8F8CBF255866();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_90C97F4B4CBC8816A38216BE138E6F89();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_902489064567DB8F1C7F35A412FC55BD();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_8E281982451991810FB1CDBE5C7AB333();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_75414DB244FBB7A53F3CE18A9FB7157B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_73C2053F48EBA57AE80C7EB511A1ED8A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_666390444F55176B8452A3ADD88C04EC();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_57FE46434F01218D85EC4697425396E0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_57691DF54B9855E9DD506B9FCCB61EA7();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_4ADDE6E04C5F8810E1EEA58820D214AE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_43F44591410E60EB2C5CD2B43DEB8E8E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_2C342F604862980A804FF2996F90C087();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_28F31C444D5EA218BB1A38AACC8722F3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_20E8B10A4E9FF7BA091039BFD5B13AD8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_056EEB8B459D1AC625DFDB8AC5C35452();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_9CEFF7884F12CE6C82E80A8548619832();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_696B215C4C93CC06D553F2B7970E6146();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_0D0A1C5849872911C76BD99ABCFFA34E();
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
