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
	 * WidgetBlueprintGeneratedClass UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C
	 * Size -> 0x01EA (FullSize[0x05EA] - InheritedSize[0x0400])
	 */
	class UUI_CreateRoom_Management_Main_C : public USolarUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0400(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Anim_OB_Exit;                                            // 0x0408(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Anim_OB_Enter;                                           // 0x0410(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Enter_Anim;                                              // 0x0418(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UUI_CreateRoom_Mangement_Btn_C*                      Btn_Fill;                                                // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarButton*                                        Btn_Fill1;                                               // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CreateRoom_Mangement_Btn_C*                      Btn_Invite;                                              // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarButton*                                        Btn_Invite1;                                             // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CreateRoom_Mangement_Btn_C*                      Btn_Invite2;                                             // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CreateRoom_Mangement_Btn_C*                      Btn_Random;                                              // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarButton*                                        Btn_Random1;                                             // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Component_Btn_C*                                 Btn_Setting;                                             // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarButton*                                        Btn_SpectateList;                                        // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Component_Btn_C*                                 Btn_StartGame;                                           // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_BanSwap;                                          // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarCheckBox*                                      Guest_Invite;                                            // 0x0478(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarCheckBox*                                      Guest_Swap;                                              // 0x0480(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HorizontalBox_SubGameModeInfo_2;                         // 0x0488(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            MessageBox;                                              // 0x0490(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Component_Option_C*                              Option_Invite;                                           // 0x0498(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Component_Option_C*                              Option_Swap;                                             // 0x04A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Panel_Guest;                                             // 0x04A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Panel_Homeowner;                                         // 0x04B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        panel_Spectate;                                          // 0x04B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UParticleSystemWidget*                               Par_Spark;                                               // 0x04C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarRichTextBlock*                                 RichText_Members;                                        // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CreateRoom_Management_Solo_C*                    Solo;                                                    // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     Switcher_Mode;                                           // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CreateRoom_Management_TDM_C*                     TDM;                                                     // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTileView*                                           TileView_Player_Info_1M;                                 // 0x04E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTileView*                                           TileView_Player_Info_2M;                                 // 0x04F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTileView*                                           TileView_Player_Info_4M;                                 // 0x04F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarTextBlock*                                     Txt_Countdown_2;                                         // 0x0500(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarTextBlock*                                     Txt_Map;                                                 // 0x0508(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarTextBlock*                                     Txt_Members;                                             // 0x0510(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarTextBlock*                                     Txt_Mode;                                                // 0x0518(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarTextBlock*                                     Txt_Password_3;                                          // 0x0520(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarTextBlock*                                     Txt_RankedMatch;                                         // 0x0528(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarTextBlock*                                     Txt_Room_ID_3;                                           // 0x0530(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarRichTextBlock*                                 Txt_Viewer_Num;                                          // 0x0538(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Component_ReturnBtn_C*                           UI_Component_ReturnBtn;                                  // 0x0540(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CreateRoom_SocialList_C*                         UI_CreateRoom_SocialList;                                // 0x0548(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CreateRoom_Management_Team_OB_C*                 UI_Management_OB;                                        // 0x0550(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_Down;                                     // 0x0558(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		E_Type_Team_Member                                         Team_Member_Count;                                       // 0x0560(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6RVC[0x3];                                   // 0x0561(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxMemberCount;                                          // 0x0564(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              SelectedPlayer;                                          // 0x0568(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    SelcetedPos;                                             // 0x0578(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3GB6[0x4];                                   // 0x057C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SelectedTeam;                                            // 0x0580(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class UUI_CreateRoom_Management_Player_Info_C*             SelectedInfoWidget;                                      // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              ToDeletePlayer;                                          // 0x0598(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    MaxOBPlayerCount;                                        // 0x05A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SelectedOB;                                              // 0x05AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GNM1[0x3];                                   // 0x05AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NowOBPlayerCount;                                        // 0x05B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QPNR[0x4];                                   // 0x05B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UUI_CreateRoom_Management_Team_C*>            AllTeamWidgets;                                          // 0x05B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		class UObject*                                             _TileViewInitItem;                                       // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             _TileViewInitWidget;                                     // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnEnableInviteChanged;                                   // 0x05D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		ERoomModeType                                              RoomMode;                                                // 0x05E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EModeRoomUIType                                            ModeRoomUIType;                                          // 0x05E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class FString GetModuleName();
		void SetModeRoomUI(EModeRoomUIType ModeRoomUIType);
		void OnConfirmKickPlayerOut(class ASCMPlayerState* Player);
		void RestoreSelectedWidgets();
		void RestoreSelectedParams();
		void CallLuaShowKickConfirmWindow(class ASCMPlayerState* ps);
		void IsGuestSwapOpen(bool* bIsOpen);
		void CallLuaOnGuestInviteChanged(bool bIsChecked);
		void RefreshGuestData(bool bEnableSwap, bool bEnableInvite);
		void GetActiveTileView(class UTileView** Result);
		void TrimPendingRemovalPlayers(TArray<class ASCMPlayerState*>* PlayerList, TArray<class ASCMPlayerState*>* TrimmedPlayerList);
		void PlayEnter();
		void SetRoomMode(ERoomModeType RoomMode);
		void GetPlayerByIDAndOB(const class FString& PlayerId, bool bIsOB, class ASCMPlayerState** Player);
		void RefreshOB();
		void InitOB(int32_t OBPlayerCount);
		void UpdateButtonState(bool CanStart);
		void StateTeam();
		void InitRoomMgmtUI(E_Type_Team_Member TeamType, const class FString& MasterName, const class FString& RoomPW, const class FString& RoomID, int32_t ModeNameLocalID, int32_t ModeGroupLocalID, int32_t MaxOBPlayerCount, ERoomModeType RoomMode, EModeRoomUIType ModeRoomUIType);
		void PreConstruct(bool IsDesignTime);
		void StartTicking();
		void TikTok();
		void OnMemberCountChanged(int32_t NowCount, int32_t MaxCount, bool CanStart);
		void BndEvt__Btn_StartGame_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
		void BndEvt__TileView_Player_Info_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
		void BndEvt__TileView_Player_Info_K2Node_ComponentBoundEvent_4_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget);
		void InitDeletePanel();
		void ALL_WIDGETSelection(bool SelectionisOB, class UUI_CreateRoom_Management_Player_Info_C* SelectedInfoWidget);
		void ALL_WIDGETDeselection();
		void ALL_WIDGETUpdate();
		void BndEvt__TileView_Player_Info_2M_K2Node_ComponentBoundEvent_5_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
		void BndEvt__TileView_Player_Info_4M_K2Node_ComponentBoundEvent_6_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
		void BndEvt__TileView_Player_Info_2M_K2Node_ComponentBoundEvent_7_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget);
		void BndEvt__TileView_Player_Info_4M_K2Node_ComponentBoundEvent_8_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget);
		void BndEvt__Option_Swap_K2Node_ComponentBoundEvent_12_OnOptionCheckStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__Option_Invite_K2Node_ComponentBoundEvent_13_OnOptionCheckStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__Button_BanSwap_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Guest_Invite_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void Side_WIDGETUpdate(const class FString& Side);
		void BndEvt__UI_Component_ReturnBtn_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature();
		void OnShow();
		void OnEvnetCloseAction();
		void ReceiveHide();
		void BindTeams(TArray<class UUI_CreateRoom_Management_Team_C*> Teams);
		void BindSimpleTeam(class UUI_CreateRoom_Management_Team_C* Team);
		void OBUIEventBinding();
		void TriggerFlagUpdate();
		void OnDeleteClicked(const class FString& ClickedPlayer, const class FString& ClickedSide);
		void OnSlotClicked(const class FString& ClickedPlayer, const class FString& ClickedSide, bool IsOB, int32_t PosIndex, class UUI_CreateRoom_Management_Team_C* TeamWidget, class UUI_CreateRoom_Management_Player_Info_C* InfoWidget);
		void ExecuteUbergraph_UI_CreateRoom_Management_Main(int32_t EntryPoint);
		void OnEnableInviteChanged__DelegateSignature(bool bEnable);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
