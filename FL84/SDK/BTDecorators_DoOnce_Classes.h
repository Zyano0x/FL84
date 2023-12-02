﻿#pragma once

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
	 * BlueprintGeneratedClass BTDecorators_DoOnce.BTDecorators_DoOnce_C
	 * Size -> 0x0028 (FullSize[0x00C8] - InheritedSize[0x00A0])
	 */
	class UBTDecorators_DoOnce_C : public UBTDecorator_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              DoOnce;                                                  // 0x00A0(0x0028) Edit, BlueprintVisible

	public:
		bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif