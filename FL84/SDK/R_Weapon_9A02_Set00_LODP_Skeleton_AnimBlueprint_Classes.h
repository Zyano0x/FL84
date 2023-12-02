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
	 * DynamicClass R_Weapon_9A02_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_9A02_Set00_LODP_Skeleton_AnimBlueprint_C
	 * Size -> 0x0710 (FullSize[0x09E0] - InheritedSize[0x02D0])
	 */
	class UR_Weapon_9A02_Set00_LODP_Skeleton_AnimBlueprint_C : public UWeaponAnimInstance
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
		unsigned char                                              UnknownData_DIP0[0x8];                                   // 0x09D8(0x0008) MISSED OFFSET (PADDING)

	public:
		void TestAPI();
		void InterruptAnim();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A02_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_F9B9D1D1429B89723237BCB24B54862E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A02_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_E81BBECC4F2539FBCC25DFBE34448455();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A02_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_E790E6FA43FF01001DC00EBAE7DEA73A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A02_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_DC9EA4E74865E73956415D9AF6AF0FFB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A02_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_C56C131748626A9573F10282DB5E5052();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A02_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_A975C81F48BDBB724FEA16A32DFE52AD();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A02_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_A83B21F44232771E157063B19FE49DAE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A02_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_A5A85ECA4384FEB312E5EC9FAEEBC8EF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A02_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_A22C0EEB41705474E28772B94C0CC5EB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A02_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_907282E34D2CAA9D3A150695E8520162();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A02_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_4E1475084D2538539DC6B7B5FE4829E3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A02_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_306B18E0410A5BCBF024F5BE0FAB5E62();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A02_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_25994E49470CDA5E127ECA9658B84C2C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A02_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_241F2F034EA4B16FD25A7FA8376C1262();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A02_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_13E18D2B4DDE406CA9E094A97AAB8CB2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A02_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_125A882A42DD03542B5F35AA4CA5C649();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A02_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_0D0306C84CEAEC5B427587847A0781A8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A02_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_0AA3044A40FAC11D469367A4DF67F175();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A02_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_00A6E5CC469B38D9B7CBF9B11D9E2044();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A02_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_F51C3A6B44503A03F1755DBDE8B8461F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A02_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_D259476E46AC7C2E329C7A9BFA6A26D1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_9A02_Set00_LODP_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_5AE0E49E4A554133EEF277A411847096();
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
