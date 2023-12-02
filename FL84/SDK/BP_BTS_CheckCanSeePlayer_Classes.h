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
	 * BlueprintGeneratedClass BP_BTS_CheckCanSeePlayer.BP_BTS_CheckCanSeePlayer_C
	 * Size -> 0x0054 (FullSize[0x00EC] - InheritedSize[0x0098])
	 */
	class UBP_BTS_CheckCanSeePlayer_C : public UBTService_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0098(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ASolarBotAIController*                               SelfController;                                          // 0x00A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APawn*                                               ControlledPawn;                                          // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ABP_SolarCharacterPlayer_C*>                  Players;                                                 // 0x00B0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		struct FBlackboardKeySelector                              SeenByPlayer;                                            // 0x00C0(0x0028) Edit, BlueprintVisible
		float                                                      DistanceCheck;                                           // 0x00E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
		void ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ExecuteUbergraph_BP_BTS_CheckCanSeePlayer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
