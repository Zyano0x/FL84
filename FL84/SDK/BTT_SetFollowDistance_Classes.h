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
	 * BlueprintGeneratedClass BTT_SetFollowDistance.BTT_SetFollowDistance_C
	 * Size -> 0x0068 (FullSize[0x0110] - InheritedSize[0x00A8])
	 */
	class UBTT_SetFollowDistance_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              Distance;                                                // 0x00B0(0x0028) Edit, BlueprintVisible
		class ASolarCharacter*                                     SelfActor;                                               // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<int32_t>                                            Close;                                                   // 0x00E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		TArray<int32_t>                                            Middle;                                                  // 0x00F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		TArray<int32_t>                                            Far;                                                     // 0x0100(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ExecuteUbergraph_BTT_SetFollowDistance(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
