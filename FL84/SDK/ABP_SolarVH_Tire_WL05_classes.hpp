#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB98 (0xFC0 - 0x428)
// DynamicClass ABP_SolarVH_Tire_WL05.ABP_SolarVH_Tire_WL05_C
class UABP_SolarVH_Tire_WL05_C : public USolarWheeledVehicleAnimInstance
{
public:
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x428(0x30)(NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_6;                        // 0x458(0x108)(NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x560(0x20)(NativeAccessSpecifierPublic)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x580(0x20)(NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_5;                        // 0x5A0(0x108)(NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0x6A8(0x108)(NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x7B0(0x108)(NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x8B8(0x108)(NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x9C0(0x108)(NativeAccessSpecifierPublic)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0xAC8(0x108)(NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0xBD0(0x28)(NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0xBF8(0x28)(NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0xC20(0x28)(NativeAccessSpecifierPublic)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0xC48(0x28)(NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0xC70(0x78)(NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0xCE8(0x30)(NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0xD18(0x78)(NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0xD90(0x30)(NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0xDC0(0x78)(NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0xE38(0x30)(NativeAccessSpecifierPublic)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0xE68(0x78)(NativeAccessSpecifierPublic)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0xEE0(0x30)(NativeAccessSpecifierPublic)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0xF10(0xB0)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UABP_SolarVH_Tire_WL05_C* GetDefaultObj();

	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SolarVH_Tire_WL05_AnimGraphNode_TransitionResult_D9619A634AAD8DB769E6C486910A4AEC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SolarVH_Tire_WL05_AnimGraphNode_TransitionResult_A1474A784251D25C3F739A8C791E84B4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SolarVH_Tire_WL05_AnimGraphNode_TransitionResult_28E1D2AC482887FD7DA591AEEFFC31CC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SolarVH_Tire_WL05_AnimGraphNode_TransitionResult_27F4F2DC40E4D1D86E6250892CAB537A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SolarVH_Tire_WL05_AnimGraphNode_ModifyBone_C950156C43F7B088A8016C8F582FCEB3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SolarVH_Tire_WL05_AnimGraphNode_ModifyBone_BCADF15E4AE6EF4321AAE2A6F4731292();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SolarVH_Tire_WL05_AnimGraphNode_ModifyBone_A051B28444826443E8361E95451D8F44();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SolarVH_Tire_WL05_AnimGraphNode_ModifyBone_8218313A413605969748A5BB40069558();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SolarVH_Tire_WL05_AnimGraphNode_ModifyBone_4A2DA54D4E4DDB786989789C4F994B71();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SolarVH_Tire_WL05_AnimGraphNode_ModifyBone_3D0F295B4CF182C67B4467BD9D573EAA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SolarVH_Tire_WL05_AnimGraphNode_ModifyBone_2AAD323344A4C4A19E79D48DCADAAAD6();
	void AnimGraph(struct FPoseLink* bpp__AnimGraph__pf);
};

}


