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
	 * DynamicClass ABP_SolarVH_Tire_WL05.ABP_SolarVH_Tire_WL05_C
	 * Size -> 0x0B98 (FullSize[0x0FC0] - InheritedSize[0x0428])
	 */
	class UABP_SolarVH_Tire_WL05_C : public USolarWheeledVehicleAnimInstance
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0428(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_7;                              // 0x0458(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0560(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0580(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_6;                              // 0x05A0(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_5;                              // 0x06A8(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4;                              // 0x07B0(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x08B8(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x09C0(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x0AC8(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0BD0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0BF8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0C20(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0C48(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0C70(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0CE8(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0D18(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0D90(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0DC0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0E38(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0E68(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0EE0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0F10(0x00B0) NativeAccessSpecifierPublic

	public:
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
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
