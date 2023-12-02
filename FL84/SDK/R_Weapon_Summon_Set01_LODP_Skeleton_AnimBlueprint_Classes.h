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
	 * DynamicClass R_Weapon_Summon_Set01_LODP_Skeleton_AnimBlueprint.R_Weapon_Summon_Set01_LODP_Skeleton_AnimBlueprint_C
	 * Size -> 0x0380 (FullSize[0x0650] - InheritedSize[0x02D0])
	 */
	class UR_Weapon_Summon_Set01_LODP_Skeleton_AnimBlueprint_C : public UWeaponAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02D0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0300(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0328(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0350(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0378(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x03A0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0418(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0448(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x04C0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x04F0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0568(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0598(0x00B0) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GM2N[0x8];                                   // 0x0648(0x0008) MISSED OFFSET (PADDING)

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Summon_Set01_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_F2855A6E43032126BE9962A2F5370D30();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Summon_Set01_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_DDAC6AEB489D5E9CB3D09A9B9AA278F3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Summon_Set01_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_A3D9D1AF449F798FCECE89AEF2D7661C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Summon_Set01_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_35F7023940C49D3FCC85AD9F57FAFFCB();
		void AnimGraph(struct FPoseLink* bpp__AnimGraph__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
