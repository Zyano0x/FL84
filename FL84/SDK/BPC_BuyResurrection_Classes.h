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
	 * BlueprintGeneratedClass BPC_BuyResurrection.BPC_BuyResurrection_C
	 * Size -> 0x0034 (FullSize[0x0184] - InheritedSize[0x0150])
	 */
	class UBPC_BuyResurrection_C : public USolarResurrectionComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0150(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUI_BuyResurrectionPanel_C*                          UI_BuyResurrectionPanel;                                 // 0x0158(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_ReviveItemManger_BattleRoyale_C*                 ReviveItemManger;                                        // 0x0160(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SuccessTime;                                             // 0x0168(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BuyResurrectionSwitch;                                   // 0x016C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q07Q[0x3];                                   // 0x016D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RemindTeammateEffectCooldown;                            // 0x0170(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BuyResurrectionInvincibleTime;                           // 0x0174(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             RebornLoc;                                               // 0x0178(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CheckAllTeammateDied(bool* IfAllDied);
		void RefreshUI();
		TArray<class ASCMPlayerState*> GetTeammatesArr();
		void OnAllTeammatesKilled();
		void GetAliveTeamPlayerNum(class ASCMPlayerState* OutPlayer, int32_t* Num);
		void ShowBuyResurrectionUI(bool Visible);
		void Event_LeaveWhileWaiting();
		void ClientDoCameraFade();
		void Event_OnRevivingComplete(const class FString& PlayerId);
		void Event_OnRevivedComplete();
		void Event_OnResurrectionStateChanged(EResurrectionState LastState);
		void SetCharacterResVis(bool Vis);
		void OnReviveSelf(bool bOverrideLocation, const struct FVector& ReviveLocation);
		void ExecuteUbergraph_BPC_BuyResurrection(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
