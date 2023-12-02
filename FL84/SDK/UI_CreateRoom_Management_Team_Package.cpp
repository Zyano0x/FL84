/**
 * Name: FL84
 * Version: 1.15.1.6
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.IsPreJobInThePos
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<class ASCMPlayerState*>                     PreJob                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		int32_t                                            Pos                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               _Have                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CreateRoom_Management_Team_C::IsPreJobInThePos(TArray<class ASCMPlayerState*>* PreJob, int32_t Pos, bool* _Have)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.IsPreJobInThePos"));
		
		UUI_CreateRoom_Management_Team_C_IsPreJobInThePos_Params params {};
		params.Pos = Pos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PreJob != nullptr)
			*PreJob = params.PreJob;
		if (_Have != nullptr)
			*_Have = params._Have;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.IsPlayerInThePos
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<class ASCMPlayerState*>                     ps                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		int32_t                                            Pos                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               _Have                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ASCMPlayerState*                             _OutPS                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_Team_C::IsPlayerInThePos(TArray<class ASCMPlayerState*>* ps, int32_t Pos, bool* _Have, class ASCMPlayerState** _OutPS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.IsPlayerInThePos"));
		
		UUI_CreateRoom_Management_Team_C_IsPlayerInThePos_Params params {};
		params.Pos = Pos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ps != nullptr)
			*ps = params.ps;
		if (_Have != nullptr)
			*_Have = params._Have;
		if (_OutPS != nullptr)
			*_OutPS = params._OutPS;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.CanBeSelected
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      SelectedPlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CreateRoom_Management_Team_C::CanBeSelected(const class FString& SelectedPlayer, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.CanBeSelected"));
		
		UUI_CreateRoom_Management_Team_C_CanBeSelected_Params params {};
		params.SelectedPlayer = SelectedPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.Get UI Refs from Panel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UWidget*                                     HorizontalBoxRef                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidgetSwitcher*                             WidgetSwitcher_IsOwner                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_Team_C::GetUIRefsfromPanel(class UWidget** HorizontalBoxRef, class UWidgetSwitcher** WidgetSwitcher_IsOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.Get UI Refs from Panel"));
		
		UUI_CreateRoom_Management_Team_C_GetUIRefsfromPanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HorizontalBoxRef != nullptr)
			*HorizontalBoxRef = params.HorizontalBoxRef;
		if (WidgetSwitcher_IsOwner != nullptr)
			*WidgetSwitcher_IsOwner = params.WidgetSwitcher_IsOwner;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.InitOBCount
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ERoomModeType                                      RoomMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_Team_C::InitOBCount(int32_t count, ERoomModeType RoomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.InitOBCount"));
		
		UUI_CreateRoom_Management_Team_C_InitOBCount_Params params {};
		params.count = count;
		params.RoomMode = RoomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.Try Update Team Widget
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class ASCMPlayerState*>                     UpdatedPlayerList                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		TArray<class UUI_CreateRoom_Management_Player_Info_C*> PlayerInfoWidgetList                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_Team_C::TryUpdateTeamWidget(TArray<class ASCMPlayerState*>* UpdatedPlayerList, TArray<class UUI_CreateRoom_Management_Player_Info_C*>* PlayerInfoWidgetList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.Try Update Team Widget"));
		
		UUI_CreateRoom_Management_Team_C_TryUpdateTeamWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UpdatedPlayerList != nullptr)
			*UpdatedPlayerList = params.UpdatedPlayerList;
		if (PlayerInfoWidgetList != nullptr)
			*PlayerInfoWidgetList = params.PlayerInfoWidgetList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.Get SideText by Panel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class USolarTextBlock*                             TargetPanel                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_Team_C::GetSideTextbyPanel(class USolarTextBlock** TargetPanel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.Get SideText by Panel"));
		
		UUI_CreateRoom_Management_Team_C_GetSideTextbyPanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetPanel != nullptr)
			*TargetPanel = params.TargetPanel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.Init Data
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      TeamName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ENUM_RoomSlotType                                  InitState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_Team_C::InitData(const class FString& TeamName, ENUM_RoomSlotType InitState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.Init Data"));
		
		UUI_CreateRoom_Management_Team_C_InitData_Params params {};
		params.TeamName = TeamName;
		params.InitState = InitState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.Set State
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               TeamOwner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Locked                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CreateRoom_Management_Team_C::SetState(bool TeamOwner, bool Locked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.Set State"));
		
		UUI_CreateRoom_Management_Team_C_SetState_Params params {};
		params.TeamOwner = TeamOwner;
		params.Locked = Locked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.BP_OnEntryReleased
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUI_CreateRoom_Management_Team_C::BP_OnEntryReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.BP_OnEntryReleased"));
		
		UUI_CreateRoom_Management_Team_C_BP_OnEntryReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.BP_OnItemExpansionChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsExpanded                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CreateRoom_Management_Team_C::BP_OnItemExpansionChanged(bool bIsExpanded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.BP_OnItemExpansionChanged"));
		
		UUI_CreateRoom_Management_Team_C_BP_OnItemExpansionChanged_Params params {};
		params.bIsExpanded = bIsExpanded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.BP_OnItemSelectionChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CreateRoom_Management_Team_C::BP_OnItemSelectionChanged(bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.BP_OnItemSelectionChanged"));
		
		UUI_CreateRoom_Management_Team_C_BP_OnItemSelectionChanged_Params params {};
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.OnListItemObjectSet
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     ListItemObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_Team_C::OnListItemObjectSet(class UObject* ListItemObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.OnListItemObjectSet"));
		
		UUI_CreateRoom_Management_Team_C_OnListItemObjectSet_Params params {};
		params.ListItemObject = ListItemObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CreateRoom_Management_Team_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.PreConstruct"));
		
		UUI_CreateRoom_Management_Team_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_CreateRoom_Management_Team_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.Construct"));
		
		UUI_CreateRoom_Management_Team_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.Update Team UI
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class ASCMPlayerState*>                     TeamPlayers                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_Team_C::UpdateTeamUI(TArray<class ASCMPlayerState*> TeamPlayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.Update Team UI"));
		
		UUI_CreateRoom_Management_Team_C_UpdateTeamUI_Params params {};
		params.TeamPlayers = TeamPlayers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.Do Deselection
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CreateRoom_Management_Team_C::DoDeselection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.Do Deselection"));
		
		UUI_CreateRoom_Management_Team_C_DoDeselection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.Portrait Clicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SolarPlayerID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            PosIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_CreateRoom_Management_Player_Info_C*     InfoWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_Team_C::PortraitClicked(const class FString& SolarPlayerID, int32_t PosIndex, class UUI_CreateRoom_Management_Player_Info_C* InfoWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.Portrait Clicked"));
		
		UUI_CreateRoom_Management_Team_C_PortraitClicked_Params params {};
		params.SolarPlayerID = SolarPlayerID;
		params.PosIndex = PosIndex;
		params.InfoWidget = InfoWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.Delete Clicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SolarPlayerID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_Team_C::DeleteClicked(const class FString& SolarPlayerID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.Delete Clicked"));
		
		UUI_CreateRoom_Management_Team_C_DeleteClicked_Params params {};
		params.SolarPlayerID = SolarPlayerID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.Do Selection
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               SelectedOB                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUI_CreateRoom_Management_Player_Info_C*     SelectedInfoWidget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      SelectedSide                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_Team_C::DoSelection(bool SelectedOB, class UUI_CreateRoom_Management_Player_Info_C* SelectedInfoWidget, const class FString& SelectedSide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.Do Selection"));
		
		UUI_CreateRoom_Management_Team_C_DoSelection_Params params {};
		params.SelectedOB = SelectedOB;
		params.SelectedInfoWidget = SelectedInfoWidget;
		params.SelectedSide = SelectedSide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.Init OB UI
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CreateRoom_Management_Team_C::InitOBUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.Init OB UI"));
		
		UUI_CreateRoom_Management_Team_C_InitOBUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.ExecuteUbergraph_UI_CreateRoom_Management_Team
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_Team_C::ExecuteUbergraph_UI_CreateRoom_Management_Team(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.ExecuteUbergraph_UI_CreateRoom_Management_Team"));
		
		UUI_CreateRoom_Management_Team_C_ExecuteUbergraph_UI_CreateRoom_Management_Team_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.OnTeamUpdated__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CreateRoom_Management_Team_C::OnTeamUpdated__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.OnTeamUpdated__DelegateSignature"));
		
		UUI_CreateRoom_Management_Team_C_OnTeamUpdated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.OnDeleteClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      ClickedPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      ClickedSide                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_Team_C::OnDeleteClicked__DelegateSignature(const class FString& ClickedPlayer, const class FString& ClickedSide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.OnDeleteClicked__DelegateSignature"));
		
		UUI_CreateRoom_Management_Team_C_OnDeleteClicked__DelegateSignature_Params params {};
		params.ClickedPlayer = ClickedPlayer;
		params.ClickedSide = ClickedSide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.OnSlotClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      ClickedPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      ClickedSide                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               IsOB                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            PosIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_CreateRoom_Management_Team_C*            TeamWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_CreateRoom_Management_Player_Info_C*     InfoWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_Team_C::OnSlotClicked__DelegateSignature(const class FString& ClickedPlayer, const class FString& ClickedSide, bool IsOB, int32_t PosIndex, class UUI_CreateRoom_Management_Team_C* TeamWidget, class UUI_CreateRoom_Management_Player_Info_C* InfoWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C.OnSlotClicked__DelegateSignature"));
		
		UUI_CreateRoom_Management_Team_C_OnSlotClicked__DelegateSignature_Params params {};
		params.ClickedPlayer = ClickedPlayer;
		params.ClickedSide = ClickedSide;
		params.IsOB = IsOB;
		params.PosIndex = PosIndex;
		params.TeamWidget = TeamWidget;
		params.InfoWidget = InfoWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CreateRoom_Management_Team_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CreateRoom_Management_Team_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_CreateRoom_Management_Team.UI_CreateRoom_Management_Team_C"));
		return ptr;
	}

}


