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
	 * Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.IsPreJobInThePos
	 */
	struct UUI_CreateRoom_Management_Team_C_IsPreJobInThePos_Params
	{
	public:
		TArray<class ASCMPlayerState*>                             PreJob;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		int32_t                                                    Pos;                                                     // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       _Have;                                                   // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_22DK[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.IsPlayerInThePos
	 */
	struct UUI_CreateRoom_Management_Team_C_IsPlayerInThePos_Params
	{
	public:
		TArray<class ASCMPlayerState*>                             ps;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		int32_t                                                    Pos;                                                     // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       _Have;                                                   // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XFG4[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ASCMPlayerState*                                     _OutPS;                                                  // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.CanBeSelected
	 */
	struct UUI_CreateRoom_Management_Team_C_CanBeSelected_Params
	{
	public:
		class FString                                              SelectedPlayer;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bResult;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KTT4[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.Get UI Refs from Panel
	 */
	struct UUI_CreateRoom_Management_Team_C_GetUIRefsfromPanel_Params
	{
	public:
		class UWidget*                                             HorizontalBoxRef;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidgetSwitcher*                                     WidgetSwitcher_IsOwner;                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.InitOBCount
	 */
	struct UUI_CreateRoom_Management_Team_C_InitOBCount_Params
	{
	public:
		int32_t                                                    count;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ERoomModeType                                              RoomMode;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H9TP[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.Try Update Team Widget
	 */
	struct UUI_CreateRoom_Management_Team_C_TryUpdateTeamWidget_Params
	{
	public:
		TArray<class ASCMPlayerState*>                             UpdatedPlayerList;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		TArray<class UUI_CreateRoom_Management_Player_Info_C*>     PlayerInfoWidgetList;                                    // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.Get SideText by Panel
	 */
	struct UUI_CreateRoom_Management_Team_C_GetSideTextbyPanel_Params
	{
	public:
		class USolarTextBlock*                                     TargetPanel;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.Init Data
	 */
	struct UUI_CreateRoom_Management_Team_C_InitData_Params
	{
	public:
		class FString                                              TeamName;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ENUM_RoomSlotType                                          InitState;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.Set State
	 */
	struct UUI_CreateRoom_Management_Team_C_SetState_Params
	{
	public:
		bool                                                       TeamOwner;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Locked;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V9O3[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.BP_OnEntryReleased
	 */
	struct UUI_CreateRoom_Management_Team_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.BP_OnItemExpansionChanged
	 */
	struct UUI_CreateRoom_Management_Team_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.BP_OnItemSelectionChanged
	 */
	struct UUI_CreateRoom_Management_Team_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.OnListItemObjectSet
	 */
	struct UUI_CreateRoom_Management_Team_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.PreConstruct
	 */
	struct UUI_CreateRoom_Management_Team_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.Construct
	 */
	struct UUI_CreateRoom_Management_Team_C_Construct_Params
	{	};

	/**
	 * Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.Update Team UI
	 */
	struct UUI_CreateRoom_Management_Team_C_UpdateTeamUI_Params
	{
	public:
		TArray<class ASCMPlayerState*>                             TeamPlayers;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.Do Deselection
	 */
	struct UUI_CreateRoom_Management_Team_C_DoDeselection_Params
	{	};

	/**
	 * Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.Portrait Clicked
	 */
	struct UUI_CreateRoom_Management_Team_C_PortraitClicked_Params
	{
	public:
		class FString                                              SolarPlayerID;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    PosIndex;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LJZ5[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_CreateRoom_Management_Player_Info_C*             InfoWidget;                                              // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.Delete Clicked
	 */
	struct UUI_CreateRoom_Management_Team_C_DeleteClicked_Params
	{
	public:
		class FString                                              SolarPlayerID;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.Do Selection
	 */
	struct UUI_CreateRoom_Management_Team_C_DoSelection_Params
	{
	public:
		bool                                                       SelectedOB;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VD3M[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_CreateRoom_Management_Player_Info_C*             SelectedInfoWidget;                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              SelectedSide;                                            // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.Init OB UI
	 */
	struct UUI_CreateRoom_Management_Team_C_InitOBUI_Params
	{	};

	/**
	 * Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.ExecuteUbergraph_UI_CreateRoom_Management_Team
	 */
	struct UUI_CreateRoom_Management_Team_C_ExecuteUbergraph_UI_CreateRoom_Management_Team_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.OnTeamUpdated__DelegateSignature
	 */
	struct UUI_CreateRoom_Management_Team_C_OnTeamUpdated__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.OnDeleteClicked__DelegateSignature
	 */
	struct UUI_CreateRoom_Management_Team_C_OnDeleteClicked__DelegateSignature_Params
	{
	public:
		class FString                                              ClickedPlayer;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ClickedSide;                                             // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.OnSlotClicked__DelegateSignature
	 */
	struct UUI_CreateRoom_Management_Team_C_OnSlotClicked__DelegateSignature_Params
	{
	public:
		class FString                                              ClickedPlayer;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ClickedSide;                                             // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       IsOB;                                                    // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3MZV[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    PosIndex;                                                // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUI_CreateRoom_Management_Team_C*                    TeamWidget;                                              // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUI_CreateRoom_Management_Player_Info_C*             InfoWidget;                                              // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
