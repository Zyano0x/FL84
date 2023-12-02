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
	 * BlueprintGeneratedClass BPC_Death_BattleRoyale.BPC_Death_BattleRoyale_C
	 * Size -> 0x0136 (FullSize[0x0248] - InheritedSize[0x0112])
	 */
	class UBPC_Death_BattleRoyale_C : public UBPC_Death_Framework_C
	{
	public:
		unsigned char                                              UnknownData_TQ6T[0x6];                                   // 0x0112(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0118(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ABP_ReviveItemManger_BattleRoyale_C*                 ReviveItemManger;                                        // 0x0120(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASCMPlayerState*                                     Killer;                                                  // 0x0128(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASCMPlayerState*                                     Killed;                                                  // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSolarPointDamageEvent                              DeathDamageEvent;                                        // 0x0138(0x0110) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void OutPutKillLog(bool InBool);
		void TryRevivePlayerbyCoin(class ABP_PlayerState_BattleRoyale_C* Player, bool* Succeed);
		bool CanPlayerBattle(class ASCMPlayerState* Player);
		class UBP_Logic_BattleRoyale_C* GetMainLogic();
		void GetConiReviveManager(class ABP_ReviveItemManger_BattleRoyale_C** Output_Get);
		void ReceiveBeginPlay();
		void ReceivePlayerKill(class ASCMPlayerState* Killer, class ASCMPlayerState* Killed, TArray<class ASCMPlayerState*> Assists, const struct FSolarPointDamageEvent& InDamageEvent, class AActor* InDamageCauser);
		void OnBattleStateChanged(ESCMDataChangeType ChangeType, unsigned char OldValue, unsigned char NewValue);
		void ReceivePlayerDeathVerge(class ASCMPlayerState* InAttacker, class ASCMPlayerState* InDeathVergePlayer, const struct FSolarPointDamageEvent& InDamageEvent, class AActor* InDamageCauser);
		void ReceivePlayerResurrect(class ASolarCharacter* ResurrectCharacter, class ASCMPlayerState* ResurrectPlayer);
		void ExecuteUbergraph_BPC_Death_BattleRoyale(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
