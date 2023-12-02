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
	 * BlueprintGeneratedClass BP_BTS_AngleCal.BP_BTS_AngleCal_C
	 * Size -> 0x0090 (FullSize[0x0128] - InheritedSize[0x0098])
	 */
	class UBP_BTS_AngleCal_C : public UBTService_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0098(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              TheOtherOne;                                             // 0x00A0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              DotAngle;                                                // 0x00C8(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              LeftOrRight;                                             // 0x00F0(0x0028) Edit, BlueprintVisible
		class ASolarBotAIController*                               SelfController;                                          // 0x0118(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APawn*                                               ControlledPawn;                                          // 0x0120(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
		void ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ExecuteUbergraph_BP_BTS_AngleCal(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
