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
	 * BlueprintGeneratedClass BTDecorators_CoolDown.BTDecorators_CoolDown_C
	 * Size -> 0x0040 (FullSize[0x00E0] - InheritedSize[0x00A0])
	 */
	class UBTDecorators_CoolDown_C : public UBTDecorator_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      CDmin;                                                   // 0x00A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentTimeLeft;                                         // 0x00AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Pass;                                                    // 0x00B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YRY5[0x3];                                   // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CDmax;                                                   // 0x00B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FBlackboardKeySelector                              BlackboardKey;                                           // 0x00B8(0x0028) Edit, BlueprintVisible

	public:
		bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, EBTNodeResult NodeResult);
		void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
		void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ReceiveObserverDeactivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ReceiveObserverActivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ExecuteUbergraph_BTDecorators_CoolDown(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
