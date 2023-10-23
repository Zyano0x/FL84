#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x380 (0x650 - 0x2D0)
// DynamicClass R_Weapon_Summon_Set01_LODP_Skeleton_AnimBlueprint.R_Weapon_Summon_Set01_LODP_Skeleton_AnimBlueprint_C
class UR_Weapon_Summon_Set01_LODP_Skeleton_AnimBlueprint_C : public UWeaponAnimInstance
{
public:
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2D0(0x30)(NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x300(0x28)(NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x328(0x28)(NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x350(0x28)(NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x378(0x28)(NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x3A0(0x78)(NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x418(0x30)(NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x448(0x78)(NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x4C0(0x30)(NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x4F0(0x78)(NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x568(0x30)(NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x598(0xB0)(NativeAccessSpecifierPublic)
	uint8                                        Pad_21D2[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UR_Weapon_Summon_Set01_LODP_Skeleton_AnimBlueprint_C* GetDefaultObj();

	void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Summon_Set01_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_F2855A6E43032126BE9962A2F5370D30();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Summon_Set01_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_DDAC6AEB489D5E9CB3D09A9B9AA278F3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Summon_Set01_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_A3D9D1AF449F798FCECE89AEF2D7661C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Summon_Set01_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_35F7023940C49D3FCC85AD9F57FAFFCB();
	void AnimGraph(struct FPoseLink* bpp__AnimGraph__pf);
};

}


