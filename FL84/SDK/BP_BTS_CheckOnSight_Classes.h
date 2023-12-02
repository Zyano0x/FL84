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
	 * BlueprintGeneratedClass BP_BTS_CheckOnSight.BP_BTS_CheckOnSight_C
	 * Size -> 0x005C (FullSize[0x00F4] - InheritedSize[0x0098])
	 */
	class UBP_BTS_CheckOnSight_C : public UBTService_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0098(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              CheckedPawnOrActor;                                      // 0x00A0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              SeenByPlayer;                                            // 0x00C8(0x0028) Edit, BlueprintVisible
		float                                                      Range;                                                   // 0x00F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
		void ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ExecuteUbergraph_BP_BTS_CheckOnSight(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
