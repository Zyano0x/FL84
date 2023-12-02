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
	 * BlueprintGeneratedClass BP_DefenderManager.BP_DefenderManager_C
	 * Size -> 0x0031 (FullSize[0x02E9] - InheritedSize[0x02B8])
	 */
	class ABP_DefenderManager_C : public ADefenderManager
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUI_OpeningShow_C*                                   DefenderUI;                                              // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ShowTimeDefender;                                        // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ShowTimeSelf;                                            // 0x02CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_State_DefenderManager                                    UiState;                                                 // 0x02D0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_055U[0x3];                                   // 0x02D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TerminatorReward;                                        // 0x02D4(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DataReady;                                               // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U167[0x7];                                   // 0x02D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUI_Common_Transition_Anim_C*                        Anim;                                                    // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bBattleStarted;                                          // 0x02E8(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor

	public:
		void OnRep_BattleStarted();
		void DataTraceDefender(class ASolarPlayerState* Target, class FString* Name, class FString* Data);
		void GetExtraReward(int32_t* Reward);
		void SetShowTime(float ShowTimeSelf, float ShowTimeDefender);
		void GetTotalTime(float* TotalTime);
		void GetUI(class UUI_OpeningShow_C** Output_Get);
		void OnRep_UIState();
		void ReceiveBeginPlay();
		void SShowDefenderUI();
		void OnUIStateChanged(E_State_DefenderManager UiState);
		void OnDefenderDataReady();
		void ShowDefenderUIForReplay();
		void OnSideHeroPickEnd_Event_1(const class FString& Side);
		void CustomEvent_1(ESCMInGameState NewState);
		void ExecuteUbergraph_BP_DefenderManager(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
