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
	 * BlueprintGeneratedClass BP_BTS_ParameterSet_ResetWarmType.BP_BTS_ParameterSet_ResetWarmType_C
	 * Size -> 0x0044 (FullSize[0x00DC] - InheritedSize[0x0098])
	 */
	class UBP_BTS_ParameterSet_ResetWarmType_C : public UBTService_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0098(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ASolarBotAIController*                               SelfController;                                          // 0x00A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASolarCharacter*                                     ControlledPawn;                                          // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FBlackboardKeySelector                              WarmType;                                                // 0x00B0(0x0028) Edit, BlueprintVisible
		float                                                      DistanceReset;                                           // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
		void ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ExecuteUbergraph_BP_BTS_ParameterSet_ResetWarmType(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
