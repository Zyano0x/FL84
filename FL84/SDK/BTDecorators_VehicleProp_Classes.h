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
	 * BlueprintGeneratedClass BTDecorators_VehicleProp.BTDecorators_VehicleProp_C
	 * Size -> 0x0044 (FullSize[0x00E4] - InheritedSize[0x00A0])
	 */
	class UBTDecorators_VehicleProp_C : public UBTDecorator_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              Host;                                                    // 0x00A0(0x0028) Edit, BlueprintVisible
		int32_t                                                    PropPercent;                                             // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RR97[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             NewEventDispatcher_1;                                    // 0x00D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      CharacterHP;                                             // 0x00E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void NewEventDispatcher_0__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
