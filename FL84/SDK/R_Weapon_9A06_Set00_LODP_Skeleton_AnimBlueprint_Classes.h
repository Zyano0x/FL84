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
	 * DynamicClass R_Weapon_9A06_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_9A06_Set00_LODP_Skeleton_AnimBlueprint_C
	 * Size -> 0x0710 (FullSize[0x09E0] - InheritedSize[0x02D0])
	 */
	class UR_Weapon_9A06_Set00_LODP_Skeleton_AnimBlueprint_C : public UWeaponAnimInstance
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
		unsigned char                                              UnknownData_WY05[0x8];                                   // 0x09D8(0x0008) MISSED OFFSET (PADDING)

	public:
		void TestAPI();
		void InterruptAnim();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A06_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_F1D9DDBB413911FB9DAB608900412973();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A06_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_ED21629F443C13EB618022956A31D19A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A06_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_DF0EDC2A4C9FD52DDBFB5AB16F296F1F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A06_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_C56C131748626A9573F10282DB5E5052();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A06_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_C03C50F94DB6AE0D2D3E5C9ED0973F8F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A06_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_AAD002E1429649E2A71240AC589B09B4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A06_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_AA031CB74743982BEE3C5797368DAA52();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A06_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_A5160CCA42B37A4C3B4188B28169B213();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A06_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_A2FAECDE4FDF2B0F0058E592F914226B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A06_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_94B2047B4C3C85D5F4207DBB55087639();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A06_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_75627B5046C82AA9436B29B4F5249E44();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A06_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_57810D744E7C3FBDD015CAA7F41F4FC9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A06_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_3B7C19954B39C84A940DAAA2F33497FF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A06_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_3894EEFF4AF65DB06E1EF6B3E50D61C8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A06_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_22B64B724989FED60A22A891E13B0124();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A06_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_157669F74CFD34995FC79C884849B3AC();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A06_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_12DD48B84B001C059F7A2AB37F97FCFB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A06_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_0C1E6158487EAC02C7B875B4515A137E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A06_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_096C1B414C4EC717A873538B7A500073();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A06_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_B88F52044BA7D36ADD40709403A148A7();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A06_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_9521C87845A62B5E05A2FC98EEAE4394();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A06_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_6E0892AF47D14DE4DBFCD6A9DD05BF1F();
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
