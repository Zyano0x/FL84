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
	 * BlueprintGeneratedClass BP_BTS_ParameterSet_BR.BP_BTS_ParameterSet_BR_C
	 * Size -> 0x0078 (FullSize[0x0110] - InheritedSize[0x0098])
	 */
	class UBP_BTS_ParameterSet_BR_C : public UBTService_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0098(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              EnemyActor;                                              // 0x00A0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              PoisonResponseLevel;                                     // 0x00C8(0x0028) Edit, BlueprintVisible
		class ASolarBotAIController*                               SelfController;                                          // 0x00F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASolarCharacter*                                     ControlledPawn;                                          // 0x00F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASolarCharacter*                                     Enemy;                                                   // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasPlayerNearby;                                         // 0x0108(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A1N4[0x3];                                   // 0x0109(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlayerNearDisToHenceDamage;                              // 0x010C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
		void ExecuteUbergraph_BP_BTS_ParameterSet_BR(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
