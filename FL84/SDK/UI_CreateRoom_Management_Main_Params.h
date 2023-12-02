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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.GetModuleName
	 */
	struct UUI_CreateRoom_Management_Main_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.SetModeRoomUI
	 */
	struct UUI_CreateRoom_Management_Main_C_SetModeRoomUI_Params
	{
	public:
		EModeRoomUIType                                            ModeRoomUIType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.OnConfirmKickPlayerOut
	 */
	struct UUI_CreateRoom_Management_Main_C_OnConfirmKickPlayerOut_Params
	{
	public:
		class ASCMPlayerState*                                     Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.RestoreSelectedWidgets
	 */
	struct UUI_CreateRoom_Management_Main_C_RestoreSelectedWidgets_Params
	{	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.RestoreSelectedParams
	 */
	struct UUI_CreateRoom_Management_Main_C_RestoreSelectedParams_Params
	{	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.CallLuaShowKickConfirmWindow
	 */
	struct UUI_CreateRoom_Management_Main_C_CallLuaShowKickConfirmWindow_Params
	{
	public:
		class ASCMPlayerState*                                     ps;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.IsGuestSwapOpen
	 */
	struct UUI_CreateRoom_Management_Main_C_IsGuestSwapOpen_Params
	{
	public:
		bool                                                       bIsOpen;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.CallLuaOnGuestInviteChanged
	 */
	struct UUI_CreateRoom_Management_Main_C_CallLuaOnGuestInviteChanged_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.RefreshGuestData
	 */
	struct UUI_CreateRoom_Management_Main_C_RefreshGuestData_Params
	{
	public:
		bool                                                       bEnableSwap;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bEnableInvite;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YFFY[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.Get Active TileView
	 */
	struct UUI_CreateRoom_Management_Main_C_GetActiveTileView_Params
	{
	public:
		class UTileView*                                           Result;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.Trim Pending Removal Players
	 */
	struct UUI_CreateRoom_Management_Main_C_TrimPendingRemovalPlayers_Params
	{
	public:
		TArray<class ASCMPlayerState*>                             PlayerList;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		TArray<class ASCMPlayerState*>                             TrimmedPlayerList;                                       // 0x0010(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.PlayEnter
	 */
	struct UUI_CreateRoom_Management_Main_C_PlayEnter_Params
	{	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.Set Room Mode
	 */
	struct UUI_CreateRoom_Management_Main_C_SetRoomMode_Params
	{
	public:
		ERoomModeType                                              RoomMode;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.GetPlayerByIDAndOB
	 */
	struct UUI_CreateRoom_Management_Main_C_GetPlayerByIDAndOB_Params
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bIsOB;                                                   // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OY2O[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ASCMPlayerState*                                     Player;                                                  // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.RefreshOB
	 */
	struct UUI_CreateRoom_Management_Main_C_RefreshOB_Params
	{	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.Init OB
	 */
	struct UUI_CreateRoom_Management_Main_C_InitOB_Params
	{
	public:
		int32_t                                                    OBPlayerCount;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.Update Button State
	 */
	struct UUI_CreateRoom_Management_Main_C_UpdateButtonState_Params
	{
	public:
		bool                                                       CanStart;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.State Team
	 */
	struct UUI_CreateRoom_Management_Main_C_StateTeam_Params
	{	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.Init Room Mgmt UI
	 */
	struct UUI_CreateRoom_Management_Main_C_InitRoomMgmtUI_Params
	{
	public:
		E_Type_Team_Member                                         TeamType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X8FV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              MasterName;                                              // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              RoomPW;                                                  // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              RoomID;                                                  // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    ModeNameLocalID;                                         // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ModeGroupLocalID;                                        // 0x003C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MaxOBPlayerCount;                                        // 0x0040(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ERoomModeType                                              RoomMode;                                                // 0x0044(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EModeRoomUIType                                            ModeRoomUIType;                                          // 0x0045(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HDJH[0x2];                                   // 0x0046(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.PreConstruct
	 */
	struct UUI_CreateRoom_Management_Main_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.Start Ticking
	 */
	struct UUI_CreateRoom_Management_Main_C_StartTicking_Params
	{	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.TikTok
	 */
	struct UUI_CreateRoom_Management_Main_C_TikTok_Params
	{	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.OnMemberCountChanged
	 */
	struct UUI_CreateRoom_Management_Main_C_OnMemberCountChanged_Params
	{
	public:
		int32_t                                                    NowCount;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MaxCount;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanStart;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BndEvt__Btn_StartGame_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UUI_CreateRoom_Management_Main_C_BndEvt__Btn_StartGame_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BndEvt__TileView_Player_Info_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature
	 */
	struct UUI_CreateRoom_Management_Main_C_BndEvt__TileView_Player_Info_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUserWidget*                                         Widget;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BndEvt__TileView_Player_Info_K2Node_ComponentBoundEvent_4_OnListEntryGeneratedDynamic__DelegateSignature
	 */
	struct UUI_CreateRoom_Management_Main_C_BndEvt__TileView_Player_Info_K2Node_ComponentBoundEvent_4_OnListEntryGeneratedDynamic__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.InitDeletePanel
	 */
	struct UUI_CreateRoom_Management_Main_C_InitDeletePanel_Params
	{	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.ALL_WIDGET Selection
	 */
	struct UUI_CreateRoom_Management_Main_C_ALL_WIDGETSelection_Params
	{
	public:
		bool                                                       SelectionisOB;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PUJA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_CreateRoom_Management_Player_Info_C*             SelectedInfoWidget;                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.ALL_WIDGET Deselection
	 */
	struct UUI_CreateRoom_Management_Main_C_ALL_WIDGETDeselection_Params
	{	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.ALL_WIDGET Update
	 */
	struct UUI_CreateRoom_Management_Main_C_ALL_WIDGETUpdate_Params
	{	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BndEvt__TileView_Player_Info_2M_K2Node_ComponentBoundEvent_5_OnListEntryInitializedDynamic__DelegateSignature
	 */
	struct UUI_CreateRoom_Management_Main_C_BndEvt__TileView_Player_Info_2M_K2Node_ComponentBoundEvent_5_OnListEntryInitializedDynamic__DelegateSignature_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUserWidget*                                         Widget;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BndEvt__TileView_Player_Info_4M_K2Node_ComponentBoundEvent_6_OnListEntryInitializedDynamic__DelegateSignature
	 */
	struct UUI_CreateRoom_Management_Main_C_BndEvt__TileView_Player_Info_4M_K2Node_ComponentBoundEvent_6_OnListEntryInitializedDynamic__DelegateSignature_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUserWidget*                                         Widget;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BndEvt__TileView_Player_Info_2M_K2Node_ComponentBoundEvent_7_OnListEntryGeneratedDynamic__DelegateSignature
	 */
	struct UUI_CreateRoom_Management_Main_C_BndEvt__TileView_Player_Info_2M_K2Node_ComponentBoundEvent_7_OnListEntryGeneratedDynamic__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BndEvt__TileView_Player_Info_4M_K2Node_ComponentBoundEvent_8_OnListEntryGeneratedDynamic__DelegateSignature
	 */
	struct UUI_CreateRoom_Management_Main_C_BndEvt__TileView_Player_Info_4M_K2Node_ComponentBoundEvent_8_OnListEntryGeneratedDynamic__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BndEvt__Option_Swap_K2Node_ComponentBoundEvent_12_OnOptionCheckStateChanged__DelegateSignature
	 */
	struct UUI_CreateRoom_Management_Main_C_BndEvt__Option_Swap_K2Node_ComponentBoundEvent_12_OnOptionCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BndEvt__Option_Invite_K2Node_ComponentBoundEvent_13_OnOptionCheckStateChanged__DelegateSignature
	 */
	struct UUI_CreateRoom_Management_Main_C_BndEvt__Option_Invite_K2Node_ComponentBoundEvent_13_OnOptionCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BndEvt__Button_BanSwap_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_CreateRoom_Management_Main_C_BndEvt__Button_BanSwap_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BndEvt__Guest_Invite_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UUI_CreateRoom_Management_Main_C_BndEvt__Guest_Invite_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.Side_WIDGET Update
	 */
	struct UUI_CreateRoom_Management_Main_C_Side_WIDGETUpdate_Params
	{
	public:
		class FString                                              Side;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BndEvt__UI_Component_ReturnBtn_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
	 */
	struct UUI_CreateRoom_Management_Main_C_BndEvt__UI_Component_ReturnBtn_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.OnShow
	 */
	struct UUI_CreateRoom_Management_Main_C_OnShow_Params
	{	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.OnEvnetCloseAction
	 */
	struct UUI_CreateRoom_Management_Main_C_OnEvnetCloseAction_Params
	{	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.ReceiveHide
	 */
	struct UUI_CreateRoom_Management_Main_C_ReceiveHide_Params
	{	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BindTeams
	 */
	struct UUI_CreateRoom_Management_Main_C_BindTeams_Params
	{
	public:
		TArray<class UUI_CreateRoom_Management_Team_C*>            Teams;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BindSimpleTeam
	 */
	struct UUI_CreateRoom_Management_Main_C_BindSimpleTeam_Params
	{
	public:
		class UUI_CreateRoom_Management_Team_C*                    Team;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.OB UI EventBinding
	 */
	struct UUI_CreateRoom_Management_Main_C_OBUIEventBinding_Params
	{	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.Trigger Flag Update
	 */
	struct UUI_CreateRoom_Management_Main_C_TriggerFlagUpdate_Params
	{	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.OnDeleteClicked
	 */
	struct UUI_CreateRoom_Management_Main_C_OnDeleteClicked_Params
	{
	public:
		class FString                                              ClickedPlayer;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ClickedSide;                                             // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.OnSlotClicked
	 */
	struct UUI_CreateRoom_Management_Main_C_OnSlotClicked_Params
	{
	public:
		class FString                                              ClickedPlayer;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ClickedSide;                                             // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       IsOB;                                                    // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WURB[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    PosIndex;                                                // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUI_CreateRoom_Management_Team_C*                    TeamWidget;                                              // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUI_CreateRoom_Management_Player_Info_C*             InfoWidget;                                              // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.ExecuteUbergraph_UI_CreateRoom_Management_Main
	 */
	struct UUI_CreateRoom_Management_Main_C_ExecuteUbergraph_UI_CreateRoom_Management_Main_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E0K8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.OnEnableInviteChanged__DelegateSignature
	 */
	struct UUI_CreateRoom_Management_Main_C_OnEnableInviteChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
