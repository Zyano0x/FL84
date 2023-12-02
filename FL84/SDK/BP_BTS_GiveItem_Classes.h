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
	 * BlueprintGeneratedClass BP_BTS_GiveItem.BP_BTS_GiveItem_C
	 * Size -> 0x002C (FullSize[0x00C4] - InheritedSize[0x0098])
	 */
	class UBP_BTS_GiveItem_C : public UBTService_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0098(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ASolarBotAIController*                               SelfController;                                          // 0x00A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APawn*                                               ControlledPawn;                                          // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<int32_t>                                            NewVar_1;                                                // 0x00B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		float                                                      TimePeriod;                                              // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GiveItem();
		void ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
		void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ExecuteUbergraph_BP_BTS_GiveItem(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
