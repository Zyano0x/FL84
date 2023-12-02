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
	 * BlueprintGeneratedClass BP_BTS_AccompyBattleParameter.BP_BTS_AccompyBattleParameter_C
	 * Size -> 0x0080 (FullSize[0x0118] - InheritedSize[0x0098])
	 */
	class UBP_BTS_AccompyBattleParameter_C : public UBTService_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0098(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              EnemyActor;                                              // 0x00A0(0x0028) Edit, BlueprintVisible
		class ASolarBotAIController*                               SelfController;                                          // 0x00C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASolarCharacter*                                     ControlledPawn;                                          // 0x00D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASolarCharacter*                                     Enemy;                                                   // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FBlackboardKeySelector                              AccompyPlayer;                                           // 0x00E0(0x0028) Edit, BlueprintVisible
		class ASolarCharacter*                                     Accompy;                                                 // 0x0108(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WeaponDamageFactorMin;                                   // 0x0110(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WeaponDamageFactorMax;                                   // 0x0114(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
		void ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ExecuteUbergraph_BP_BTS_AccompyBattleParameter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
