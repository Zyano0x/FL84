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
	 * BlueprintGeneratedClass BP_Mode_BattleRoyale.BP_Mode_BattleRoyale_C
	 * Size -> 0x0038 (FullSize[0x07D0] - InheritedSize[0x0798])
	 */
	class ABP_Mode_BattleRoyale_C : public ABP_Mode_Framework_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0798(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPC_WarmGame_BattleRoyale_C*                        BPC_WarmGame_BattleRoyale;                               // 0x07A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_AiManagerBattleRoyale_C*                        BPC_AiManagerBattleRoyale;                               // 0x07A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNgaiGameModeComponent*                              NgaiGameMode;                                            // 0x07B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBattleRoyaleGameModeAIComp_Custom_C*                BattleRoyaleGameModeAIComp_Custom;                       // 0x07B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_AirlineCruise_C*                                BPC_AirlineCruise;                                       // 0x07C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_MapInfoComponent_C*                              BP_MapInfoComponent;                                     // 0x07C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		class UAirlineCruiseComponent* GetAirlineCruiseComponent();
		bool IsKillWhenPlayerOut(class ASolarPlayerState* PlayerState);
		void ReceiveBeginPlay();
		void UpdateDeserterTag(class ASolarPlayerState* PlayerState);
		void ExecuteUbergraph_BP_Mode_BattleRoyale(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
