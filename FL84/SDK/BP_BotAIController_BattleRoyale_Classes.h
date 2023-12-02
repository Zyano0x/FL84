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
	 * BlueprintGeneratedClass BP_BotAIController_BattleRoyale.BP_BotAIController_BattleRoyale_C
	 * Size -> 0x0010 (FullSize[0x08A0] - InheritedSize[0x0890])
	 */
	class ABP_BotAIController_BattleRoyale_C : public ABP_BotAIController_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0890(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UNgaiAIControllerComponent*                          NgaiAIController;                                        // 0x0898(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		class FString GetModuleName();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void CallAIBegin();
		void _1();
		void ExecuteUbergraph_BP_BotAIController_BattleRoyale(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
