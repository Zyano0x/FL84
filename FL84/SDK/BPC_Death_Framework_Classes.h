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
	 * BlueprintGeneratedClass BPC_Death_Framework.BPC_Death_Framework_C
	 * Size -> 0x0042 (FullSize[0x0112] - InheritedSize[0x00D0])
	 */
	class UBPC_Death_Framework_C : public UCGMDeathComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FScriptMulticastDelegate                             OnPlayerDie;                                             // 0x00D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnPlayerResurrect;                                       // 0x00E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnPlayerKill;                                            // 0x00F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class ABP_DefenderManager_C*                               DefenderManager;                                         // 0x0108(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FS_SkillState                                       SkillStateAfterRevive;                                   // 0x0110(0x0002) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GMRevive(class ASCMPlayerState* InKilled, bool* AutoRevive);
		void TryBuyResurrect(class ASCMPlayerState* Player, const struct FSolarPointDamageEvent& DamageEvent, bool* Succeed);
		bool CheckTerminator(class ASCMPlayerState* InKiller, class ASCMPlayerState* InKilled);
		void GetDefenderManager(class ABP_DefenderManager_C** AsBPDefenderManager);
		void UpdateDataTrace(E_DeathType Type, class ASCMPlayerState* Killer, class ASCMPlayerState* Killed, const struct FSolarPointDamageEvent& DamageEvent, class AActor* DamageCauser, TMap<class FString, class FString> AdditionalData);
		void ReceivePlayerKill(class ASCMPlayerState* Killer, class ASCMPlayerState* Killed, TArray<class ASCMPlayerState*> Assists, const struct FSolarPointDamageEvent& InDamageEvent, class AActor* InDamageCauser);
		void ReceivePlayerDeathVerge(class ASCMPlayerState* InAttacker, class ASCMPlayerState* InDeathVergePlayer, const struct FSolarPointDamageEvent& InDamageEvent, class AActor* InDamageCauser);
		void ReceivePlayerResurrect(class ASolarCharacter* ResurrectCharacter, class ASCMPlayerState* ResurrectPlayer);
		void ExecuteUbergraph_BPC_Death_Framework(int32_t EntryPoint);
		void OnPlayerKill__DelegateSignature(class ABP_PlayerState_Framework_C* Player);
		void OnPlayerResurrect__DelegateSignature(class ABP_PlayerState_Framework_C* Player);
		void OnPlayerDie__DelegateSignature(class ABP_PlayerState_Framework_C* Player);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
