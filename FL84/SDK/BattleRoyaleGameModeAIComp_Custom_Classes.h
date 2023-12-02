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
	 * BlueprintGeneratedClass BattleRoyaleGameModeAIComp_Custom.BattleRoyaleGameModeAIComp_Custom_C
	 * Size -> 0x0040 (FullSize[0x01F8] - InheritedSize[0x01B8])
	 */
	class UBattleRoyaleGameModeAIComp_Custom_C : public USBattleRoyaleGameModeAIComp
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    AllBOT_Num;                                              // 0x01C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_R0C9[0x4];                                   // 0x01C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ABP_SolarCharacterPlayer_C*>                  AllBOT_Falling;                                          // 0x01C8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		class ABP_SolarCharacterPlayer_C*                          Player;                                                  // 0x01D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsCustomMod;                                             // 0x01E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AQ5W[0x7];                                   // 0x01E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ASCMPlayerState*>                             AllRealPlayers;                                          // 0x01E8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void GetAllBotCharacterandSetBtTree(class UBehaviorTree* BTAsset);
		void OnGameModeHandleMatchHasStarted(bool* bOutSuccess, TArray<class UGameModeCompBase*> ComponentCollection);
		void OnGameModeStartPlay(bool* bOutSuccess, TArray<class UGameModeCompBase*> ComponentCollection);
		void Event_AIBeginPlay();
		void MainTick();
		void ExecuteUbergraph_BattleRoyaleGameModeAIComp_Custom(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
