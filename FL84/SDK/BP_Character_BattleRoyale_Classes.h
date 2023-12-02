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
	 * BlueprintGeneratedClass BP_Character_BattleRoyale.BP_Character_BattleRoyale_C
	 * Size -> 0x009C (FullSize[0x2458] - InheritedSize[0x23BC])
	 */
	class ABP_Character_BattleRoyale_C : public ABP_Character_Framework_C
	{
	public:
		unsigned char                                              UnknownData_ZMIU[0x4];                                   // 0x23BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x23C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FScriptMulticastDelegate                             OnPlayerRevive;                                          // 0x23C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UActorMarkBase*                                      DeathBoxMark;                                            // 0x23D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UMapMarkBase*>                                DeathBoxMiniMapMark;                                     // 0x23E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		int32_t                                                    Index;                                                   // 0x23F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    UI_Relive_StartTime;                                     // 0x23F4(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        LandedDetectionHandel;                                   // 0x23F8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class ABP_SI_RebornLine_C*                                 RebornLine;                                              // 0x2400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<int32_t, float>                                       LevelDamage;                                             // 0x2408(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void GetWeaponLevelDamageBonus(float* Result);
		void DeathCleanupUI();
		float TakeDamageResolve(float Damage, const struct FSolarPointDamageEvent& DamageEvent, class ASCMPlayerState* EventInstigator, class AActor* DamageCauser);
		bool OnShouldTakeDamage(float Damage, const struct FSolarPointDamageEvent& DamageEvent, class ASCMPlayerState* EventInstigator, class AActor* DamageCauser);
		void SetReviveCameraFade(float Time);
		void ReceiveBeginPlay();
		void DebugSetDayAndNightTime(float Time);
		void SetMapID(int32_t MapID);
		void Event_OnResBegin(int32_t Time, E_ResurrectType Type, const struct FVector& Location, const struct FS_ResurrectInfo& options);
		void BeginPlayBlueprint();
		void OnCharacterEjectStateChanged(E_CharacterEjectState State);
		void ExecuteUbergraph_BP_Character_BattleRoyale(int32_t EntryPoint);
		void OnPlayerRevive__DelegateSignature(class ASolarCharacter* TargetCharacter);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
