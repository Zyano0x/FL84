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
	 * BlueprintGeneratedClass BTT_RandomLocationFromEffectArea.BTT_RandomLocationFromEffectArea_C
	 * Size -> 0x00B1 (FullSize[0x0159] - InheritedSize[0x00A8])
	 */
	class UBTT_RandomLocationFromEffectArea_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              In;                                                      // 0x00B0(0x0028) Edit, BlueprintVisible
		unsigned char                                              UnknownData_4XNZ[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              Out;                                                     // 0x00E0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              NewVar_1;                                                // 0x0108(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FBlackboardKeySelector                              Radius;                                                  // 0x0130(0x0028) Edit, BlueprintVisible
		bool                                                       _;                                                       // 0x0158(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ExecuteUbergraph_BTT_RandomLocationFromEffectArea(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
