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
	 * WidgetBlueprintGeneratedClass UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C
	 * Size -> 0x0091 (FullSize[0x0491] - InheritedSize[0x0400])
	 */
	class UUI_CreateRoom_Management_Team_C : public USolarUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0400(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       Team_Owner;                                              // 0x0408(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Locked;                                                  // 0x0409(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W4U8[0x6];                                   // 0x040A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TeamName;                                                // 0x0410(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<class FString>                                      SolarPlayerID;                                           // 0x0420(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		ENUM_RoomSlotType                                          InitialState;                                            // 0x0430(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       HUDInitialized;                                          // 0x0431(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsOB;                                                   // 0x0432(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CWUR[0x5];                                   // 0x0433(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UUI_CreateRoom_Management_Player_Info_C*>     PlayerInfoWidgetList;                                    // 0x0438(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		int32_t                                                    MaxOBCount;                                              // 0x0448(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HOCT[0x4];                                   // 0x044C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSlotClicked;                                           // 0x0450(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnDeleteClicked;                                         // 0x0460(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnTeamUpdated;                                           // 0x0470(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              RoomMasterPlayerID;                                      // 0x0480(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		ERoomModeType                                              RoomMode;                                                // 0x0490(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void IsPreJobInThePos(TArray<class ASCMPlayerState*>* PreJob, int32_t Pos, bool* _Have);
		void IsPlayerInThePos(TArray<class ASCMPlayerState*>* ps, int32_t Pos, bool* _Have, class ASCMPlayerState** _OutPS);
		void CanBeSelected(const class FString& SelectedPlayer, bool* bResult);
		void GetUIRefsfromPanel(class UWidget** HorizontalBoxRef, class UWidgetSwitcher** WidgetSwitcher_IsOwner);
		void InitOBCount(int32_t count, ERoomModeType RoomMode);
		void TryUpdateTeamWidget(TArray<class ASCMPlayerState*>* UpdatedPlayerList, TArray<class UUI_CreateRoom_Management_Player_Info_C*>* PlayerInfoWidgetList);
		void GetSideTextbyPanel(class USolarTextBlock** TargetPanel);
		void InitData(const class FString& TeamName, ENUM_RoomSlotType InitState);
		void SetState(bool TeamOwner, bool Locked);
		void BP_OnEntryReleased();
		void BP_OnItemExpansionChanged(bool bIsExpanded);
		void BP_OnItemSelectionChanged(bool bIsSelected);
		void OnListItemObjectSet(class UObject* ListItemObject);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void UpdateTeamUI(TArray<class ASCMPlayerState*> TeamPlayers);
		void DoDeselection();
		void PortraitClicked(const class FString& SolarPlayerID, int32_t PosIndex, class UUI_CreateRoom_Management_Player_Info_C* InfoWidget);
		void DeleteClicked(const class FString& SolarPlayerID);
		void DoSelection(bool SelectedOB, class UUI_CreateRoom_Management_Player_Info_C* SelectedInfoWidget, const class FString& SelectedSide);
		void InitOBUI();
		void ExecuteUbergraph_UI_CreateRoom_Management_Team(int32_t EntryPoint);
		void OnTeamUpdated__DelegateSignature();
		void OnDeleteClicked__DelegateSignature(const class FString& ClickedPlayer, const class FString& ClickedSide);
		void OnSlotClicked__DelegateSignature(const class FString& ClickedPlayer, const class FString& ClickedSide, bool IsOB, int32_t PosIndex, class UUI_CreateRoom_Management_Team_C* TeamWidget, class UUI_CreateRoom_Management_Player_Info_C* InfoWidget);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
