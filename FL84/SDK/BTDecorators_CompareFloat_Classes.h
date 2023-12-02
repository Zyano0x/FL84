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
	 * BlueprintGeneratedClass BTDecorators_CompareFloat.BTDecorators_CompareFloat_C
	 * Size -> 0x002C (FullSize[0x00CC] - InheritedSize[0x00A0])
	 */
	class UBTDecorators_CompareFloat_C : public UBTDecorator_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              CurrentFloat;                                            // 0x00A0(0x0028) Edit, BlueprintVisible
		float                                                      HighLimitFloat;                                          // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
