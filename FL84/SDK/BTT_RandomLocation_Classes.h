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
	 * BlueprintGeneratedClass BTT_RandomLocation.BTT_RandomLocation_C
	 * Size -> 0x0088 (FullSize[0x0130] - InheritedSize[0x00A8])
	 */
	class UBTT_RandomLocation_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              In;                                                      // 0x00B0(0x0028) Edit, BlueprintVisible
		unsigned char                                              UnknownData_FKK7[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              Out;                                                     // 0x00E0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              NewVar_1;                                                // 0x0108(0x0028) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ExecuteUbergraph_BTT_RandomLocation(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
