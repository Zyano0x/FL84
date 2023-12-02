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
	 * BlueprintGeneratedClass BTDecorators_ActorDistanceCompare_Bigger.BTDecorators_ActorDistanceCompare_Bigger_C
	 * Size -> 0x00A4 (FullSize[0x0144] - InheritedSize[0x00A0])
	 */
	class UBTDecorators_ActorDistanceCompare_Bigger_C : public UBTDecorator_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              _1_1;                                                    // 0x00A0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              _1_2;                                                    // 0x00C8(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              _2_1;                                                    // 0x00F0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              _2_2;                                                    // 0x0118(0x0028) Edit, BlueprintVisible
		float                                                      DistanceToCompare;                                       // 0x0140(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
