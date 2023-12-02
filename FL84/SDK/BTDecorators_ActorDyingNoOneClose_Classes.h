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
	 * BlueprintGeneratedClass BTDecorators_ActorDyingNoOneClose.BTDecorators_ActorDyingNoOneClose_C
	 * Size -> 0x0029 (FullSize[0x00C9] - InheritedSize[0x00A0])
	 */
	class UBTDecorators_ActorDyingNoOneClose_C : public UBTDecorator_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              In;                                                      // 0x00A0(0x0028) Edit, BlueprintVisible
		bool                                                       HasCloseTeammates;                                       // 0x00C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
