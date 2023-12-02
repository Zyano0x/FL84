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
	 * BlueprintGeneratedClass BP_BTS_AngleToEnemy_Bigger.BP_BTS_AngleToEnemy_Bigger_C
	 * Size -> 0x0090 (FullSize[0x0128] - InheritedSize[0x0098])
	 */
	class UBP_BTS_AngleToEnemy_Bigger_C : public UBTService_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0098(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ASolarBotAIController*                               SelfController;                                          // 0x00A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APawn*                                               ControlledPawn;                                          // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FBlackboardKeySelector                              Angle;                                                   // 0x00B0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              Guest;                                                   // 0x00D8(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              Host;                                                    // 0x0100(0x0028) Edit, BlueprintVisible

	public:
		void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
		void ExecuteUbergraph_BP_BTS_AngleToEnemy_Bigger(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
