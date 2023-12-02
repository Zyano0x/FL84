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
	 * BlueprintGeneratedClass BTDecorators_VehicleSkillReady.BTDecorators_VehicleSkillReady_C
	 * Size -> 0x0008 (FullSize[0x00A8] - InheritedSize[0x00A0])
	 */
	class UBTDecorators_VehicleSkillReady_C : public UBTDecorator_BlueprintBase
	{
	public:
		int32_t                                                    SeatIndex;                                               // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AbilityIndex;                                            // 0x00A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
