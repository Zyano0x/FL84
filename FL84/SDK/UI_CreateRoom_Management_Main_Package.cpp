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
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.GetModuleName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString UUI_CreateRoom_Management_Main_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.GetModuleName"));
		
		UUI_CreateRoom_Management_Main_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.SetModeRoomUI
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EModeRoomUIType                                    ModeRoomUIType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_Main_C::SetModeRoomUI(EModeRoomUIType ModeRoomUIType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.SetModeRoomUI"));
		
		UUI_CreateRoom_Management_Main_C_SetModeRoomUI_Params params {};
		params.ModeRoomUIType = ModeRoomUIType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.OnConfirmKickPlayerOut
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASCMPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_Main_C::OnConfirmKickPlayerOut(class ASCMPlayerState* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.OnConfirmKickPlayerOut"));
		
		UUI_CreateRoom_Management_Main_C_OnConfirmKickPlayerOut_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.RestoreSelectedWidgets
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CreateRoom_Management_Main_C::RestoreSelectedWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.RestoreSelectedWidgets"));
		
		UUI_CreateRoom_Management_Main_C_RestoreSelectedWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.RestoreSelectedParams
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CreateRoom_Management_Main_C::RestoreSelectedParams()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.RestoreSelectedParams"));
		
		UUI_CreateRoom_Management_Main_C_RestoreSelectedParams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.CallLuaShowKickConfirmWindow
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASCMPlayerState*                             ps                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_Main_C::CallLuaShowKickConfirmWindow(class ASCMPlayerState* ps)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.CallLuaShowKickConfirmWindow"));
		
		UUI_CreateRoom_Management_Main_C_CallLuaShowKickConfirmWindow_Params params {};
		params.ps = ps;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.IsGuestSwapOpen
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bIsOpen                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CreateRoom_Management_Main_C::IsGuestSwapOpen(bool* bIsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.IsGuestSwapOpen"));
		
		UUI_CreateRoom_Management_Main_C_IsGuestSwapOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsOpen != nullptr)
			*bIsOpen = params.bIsOpen;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.CallLuaOnGuestInviteChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CreateRoom_Management_Main_C::CallLuaOnGuestInviteChanged(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.CallLuaOnGuestInviteChanged"));
		
		UUI_CreateRoom_Management_Main_C_CallLuaOnGuestInviteChanged_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.RefreshGuestData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bEnableSwap                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bEnableInvite                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CreateRoom_Management_Main_C::RefreshGuestData(bool bEnableSwap, bool bEnableInvite)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.RefreshGuestData"));
		
		UUI_CreateRoom_Management_Main_C_RefreshGuestData_Params params {};
		params.bEnableSwap = bEnableSwap;
		params.bEnableInvite = bEnableInvite;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.Get Active TileView
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UTileView*                                   Result                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_Main_C::GetActiveTileView(class UTileView** Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.Get Active TileView"));
		
		UUI_CreateRoom_Management_Main_C_GetActiveTileView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.Trim Pending Removal Players
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<class ASCMPlayerState*>                     PlayerList                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		TArray<class ASCMPlayerState*>                     TrimmedPlayerList                                          (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_Main_C::TrimPendingRemovalPlayers(TArray<class ASCMPlayerState*>* PlayerList, TArray<class ASCMPlayerState*>* TrimmedPlayerList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.Trim Pending Removal Players"));
		
		UUI_CreateRoom_Management_Main_C_TrimPendingRemovalPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerList != nullptr)
			*PlayerList = params.PlayerList;
		if (TrimmedPlayerList != nullptr)
			*TrimmedPlayerList = params.TrimmedPlayerList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.PlayEnter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CreateRoom_Management_Main_C::PlayEnter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.PlayEnter"));
		
		UUI_CreateRoom_Management_Main_C_PlayEnter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.Set Room Mode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ERoomModeType                                      RoomMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_Main_C::SetRoomMode(ERoomModeType RoomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.Set Room Mode"));
		
		UUI_CreateRoom_Management_Main_C_SetRoomMode_Params params {};
		params.RoomMode = RoomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.GetPlayerByIDAndOB
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      PlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bIsOB                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ASCMPlayerState*                             Player                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_Main_C::GetPlayerByIDAndOB(const class FString& PlayerId, bool bIsOB, class ASCMPlayerState** Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.GetPlayerByIDAndOB"));
		
		UUI_CreateRoom_Management_Main_C_GetPlayerByIDAndOB_Params params {};
		params.PlayerId = PlayerId;
		params.bIsOB = bIsOB;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Player != nullptr)
			*Player = params.Player;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.RefreshOB
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CreateRoom_Management_Main_C::RefreshOB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.RefreshOB"));
		
		UUI_CreateRoom_Management_Main_C_RefreshOB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.Init OB
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            OBPlayerCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_Main_C::InitOB(int32_t OBPlayerCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.Init OB"));
		
		UUI_CreateRoom_Management_Main_C_InitOB_Params params {};
		params.OBPlayerCount = OBPlayerCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.Update Button State
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanStart                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CreateRoom_Management_Main_C::UpdateButtonState(bool CanStart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.Update Button State"));
		
		UUI_CreateRoom_Management_Main_C_UpdateButtonState_Params params {};
		params.CanStart = CanStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.State Team
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CreateRoom_Management_Main_C::StateTeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.State Team"));
		
		UUI_CreateRoom_Management_Main_C_StateTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.Init Room Mgmt UI
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_Type_Team_Member                                 TeamType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      MasterName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      RoomPW                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      RoomID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            ModeNameLocalID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ModeGroupLocalID                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaxOBPlayerCount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ERoomModeType                                      RoomMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EModeRoomUIType                                    ModeRoomUIType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_Main_C::InitRoomMgmtUI(E_Type_Team_Member TeamType, const class FString& MasterName, const class FString& RoomPW, const class FString& RoomID, int32_t ModeNameLocalID, int32_t ModeGroupLocalID, int32_t MaxOBPlayerCount, ERoomModeType RoomMode, EModeRoomUIType ModeRoomUIType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.Init Room Mgmt UI"));
		
		UUI_CreateRoom_Management_Main_C_InitRoomMgmtUI_Params params {};
		params.TeamType = TeamType;
		params.MasterName = MasterName;
		params.RoomPW = RoomPW;
		params.RoomID = RoomID;
		params.ModeNameLocalID = ModeNameLocalID;
		params.ModeGroupLocalID = ModeGroupLocalID;
		params.MaxOBPlayerCount = MaxOBPlayerCount;
		params.RoomMode = RoomMode;
		params.ModeRoomUIType = ModeRoomUIType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CreateRoom_Management_Main_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.PreConstruct"));
		
		UUI_CreateRoom_Management_Main_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.Start Ticking
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CreateRoom_Management_Main_C::StartTicking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.Start Ticking"));
		
		UUI_CreateRoom_Management_Main_C_StartTicking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.TikTok
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CreateRoom_Management_Main_C::TikTok()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.TikTok"));
		
		UUI_CreateRoom_Management_Main_C_TikTok_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.OnMemberCountChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NowCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaxCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanStart                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CreateRoom_Management_Main_C::OnMemberCountChanged(int32_t NowCount, int32_t MaxCount, bool CanStart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.OnMemberCountChanged"));
		
		UUI_CreateRoom_Management_Main_C_OnMemberCountChanged_Params params {};
		params.NowCount = NowCount;
		params.MaxCount = MaxCount;
		params.CanStart = CanStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BndEvt__Btn_StartGame_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_CreateRoom_Management_Main_C::BndEvt__Btn_StartGame_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BndEvt__Btn_StartGame_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature"));
		
		UUI_CreateRoom_Management_Main_C_BndEvt__Btn_StartGame_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BndEvt__TileView_Player_Info_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_Main_C::BndEvt__TileView_Player_Info_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BndEvt__TileView_Player_Info_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature"));
		
		UUI_CreateRoom_Management_Main_C_BndEvt__TileView_Player_Info_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature_Params params {};
		params.Item = Item;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BndEvt__TileView_Player_Info_K2Node_ComponentBoundEvent_4_OnListEntryGeneratedDynamic__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_Main_C::BndEvt__TileView_Player_Info_K2Node_ComponentBoundEvent_4_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BndEvt__TileView_Player_Info_K2Node_ComponentBoundEvent_4_OnListEntryGeneratedDynamic__DelegateSignature"));
		
		UUI_CreateRoom_Management_Main_C_BndEvt__TileView_Player_Info_K2Node_ComponentBoundEvent_4_OnListEntryGeneratedDynamic__DelegateSignature_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.InitDeletePanel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CreateRoom_Management_Main_C::InitDeletePanel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.InitDeletePanel"));
		
		UUI_CreateRoom_Management_Main_C_InitDeletePanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.ALL_WIDGET Selection
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               SelectionisOB                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUI_CreateRoom_Management_Player_Info_C*     SelectedInfoWidget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_Main_C::ALL_WIDGETSelection(bool SelectionisOB, class UUI_CreateRoom_Management_Player_Info_C* SelectedInfoWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.ALL_WIDGET Selection"));
		
		UUI_CreateRoom_Management_Main_C_ALL_WIDGETSelection_Params params {};
		params.SelectionisOB = SelectionisOB;
		params.SelectedInfoWidget = SelectedInfoWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.ALL_WIDGET Deselection
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CreateRoom_Management_Main_C::ALL_WIDGETDeselection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.ALL_WIDGET Deselection"));
		
		UUI_CreateRoom_Management_Main_C_ALL_WIDGETDeselection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.ALL_WIDGET Update
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CreateRoom_Management_Main_C::ALL_WIDGETUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.ALL_WIDGET Update"));
		
		UUI_CreateRoom_Management_Main_C_ALL_WIDGETUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BndEvt__TileView_Player_Info_2M_K2Node_ComponentBoundEvent_5_OnListEntryInitializedDynamic__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_Main_C::BndEvt__TileView_Player_Info_2M_K2Node_ComponentBoundEvent_5_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BndEvt__TileView_Player_Info_2M_K2Node_ComponentBoundEvent_5_OnListEntryInitializedDynamic__DelegateSignature"));
		
		UUI_CreateRoom_Management_Main_C_BndEvt__TileView_Player_Info_2M_K2Node_ComponentBoundEvent_5_OnListEntryInitializedDynamic__DelegateSignature_Params params {};
		params.Item = Item;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BndEvt__TileView_Player_Info_4M_K2Node_ComponentBoundEvent_6_OnListEntryInitializedDynamic__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_Main_C::BndEvt__TileView_Player_Info_4M_K2Node_ComponentBoundEvent_6_OnListEntryInitializedDynamic__DelegateSignature(class UObject* Item, class UUserWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BndEvt__TileView_Player_Info_4M_K2Node_ComponentBoundEvent_6_OnListEntryInitializedDynamic__DelegateSignature"));
		
		UUI_CreateRoom_Management_Main_C_BndEvt__TileView_Player_Info_4M_K2Node_ComponentBoundEvent_6_OnListEntryInitializedDynamic__DelegateSignature_Params params {};
		params.Item = Item;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BndEvt__TileView_Player_Info_2M_K2Node_ComponentBoundEvent_7_OnListEntryGeneratedDynamic__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_Main_C::BndEvt__TileView_Player_Info_2M_K2Node_ComponentBoundEvent_7_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BndEvt__TileView_Player_Info_2M_K2Node_ComponentBoundEvent_7_OnListEntryGeneratedDynamic__DelegateSignature"));
		
		UUI_CreateRoom_Management_Main_C_BndEvt__TileView_Player_Info_2M_K2Node_ComponentBoundEvent_7_OnListEntryGeneratedDynamic__DelegateSignature_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BndEvt__TileView_Player_Info_4M_K2Node_ComponentBoundEvent_8_OnListEntryGeneratedDynamic__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_Main_C::BndEvt__TileView_Player_Info_4M_K2Node_ComponentBoundEvent_8_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BndEvt__TileView_Player_Info_4M_K2Node_ComponentBoundEvent_8_OnListEntryGeneratedDynamic__DelegateSignature"));
		
		UUI_CreateRoom_Management_Main_C_BndEvt__TileView_Player_Info_4M_K2Node_ComponentBoundEvent_8_OnListEntryGeneratedDynamic__DelegateSignature_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BndEvt__Option_Swap_K2Node_ComponentBoundEvent_12_OnOptionCheckStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CreateRoom_Management_Main_C::BndEvt__Option_Swap_K2Node_ComponentBoundEvent_12_OnOptionCheckStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BndEvt__Option_Swap_K2Node_ComponentBoundEvent_12_OnOptionCheckStateChanged__DelegateSignature"));
		
		UUI_CreateRoom_Management_Main_C_BndEvt__Option_Swap_K2Node_ComponentBoundEvent_12_OnOptionCheckStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BndEvt__Option_Invite_K2Node_ComponentBoundEvent_13_OnOptionCheckStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CreateRoom_Management_Main_C::BndEvt__Option_Invite_K2Node_ComponentBoundEvent_13_OnOptionCheckStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BndEvt__Option_Invite_K2Node_ComponentBoundEvent_13_OnOptionCheckStateChanged__DelegateSignature"));
		
		UUI_CreateRoom_Management_Main_C_BndEvt__Option_Invite_K2Node_ComponentBoundEvent_13_OnOptionCheckStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BndEvt__Button_BanSwap_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_CreateRoom_Management_Main_C::BndEvt__Button_BanSwap_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BndEvt__Button_BanSwap_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature"));
		
		UUI_CreateRoom_Management_Main_C_BndEvt__Button_BanSwap_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BndEvt__Guest_Invite_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CreateRoom_Management_Main_C::BndEvt__Guest_Invite_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BndEvt__Guest_Invite_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature"));
		
		UUI_CreateRoom_Management_Main_C_BndEvt__Guest_Invite_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.Side_WIDGET Update
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Side                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_Main_C::Side_WIDGETUpdate(const class FString& Side)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.Side_WIDGET Update"));
		
		UUI_CreateRoom_Management_Main_C_Side_WIDGETUpdate_Params params {};
		params.Side = Side;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BndEvt__UI_Component_ReturnBtn_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_CreateRoom_Management_Main_C::BndEvt__UI_Component_ReturnBtn_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BndEvt__UI_Component_ReturnBtn_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature"));
		
		UUI_CreateRoom_Management_Main_C_BndEvt__UI_Component_ReturnBtn_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.OnShow
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUI_CreateRoom_Management_Main_C::OnShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.OnShow"));
		
		UUI_CreateRoom_Management_Main_C_OnShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.OnEvnetCloseAction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CreateRoom_Management_Main_C::OnEvnetCloseAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.OnEvnetCloseAction"));
		
		UUI_CreateRoom_Management_Main_C_OnEvnetCloseAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.ReceiveHide
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUI_CreateRoom_Management_Main_C::ReceiveHide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.ReceiveHide"));
		
		UUI_CreateRoom_Management_Main_C_ReceiveHide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BindTeams
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UUI_CreateRoom_Management_Team_C*>    Teams                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_Main_C::BindTeams(TArray<class UUI_CreateRoom_Management_Team_C*> Teams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BindTeams"));
		
		UUI_CreateRoom_Management_Main_C_BindTeams_Params params {};
		params.Teams = Teams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BindSimpleTeam
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_CreateRoom_Management_Team_C*            Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_Main_C::BindSimpleTeam(class UUI_CreateRoom_Management_Team_C* Team)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.BindSimpleTeam"));
		
		UUI_CreateRoom_Management_Main_C_BindSimpleTeam_Params params {};
		params.Team = Team;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.OB UI EventBinding
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CreateRoom_Management_Main_C::OBUIEventBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.OB UI EventBinding"));
		
		UUI_CreateRoom_Management_Main_C_OBUIEventBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.Trigger Flag Update
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CreateRoom_Management_Main_C::TriggerFlagUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.Trigger Flag Update"));
		
		UUI_CreateRoom_Management_Main_C_TriggerFlagUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.OnDeleteClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      ClickedPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      ClickedSide                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_Main_C::OnDeleteClicked(const class FString& ClickedPlayer, const class FString& ClickedSide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.OnDeleteClicked"));
		
		UUI_CreateRoom_Management_Main_C_OnDeleteClicked_Params params {};
		params.ClickedPlayer = ClickedPlayer;
		params.ClickedSide = ClickedSide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.OnSlotClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      ClickedPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      ClickedSide                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               IsOB                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            PosIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_CreateRoom_Management_Team_C*            TeamWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_CreateRoom_Management_Player_Info_C*     InfoWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_Main_C::OnSlotClicked(const class FString& ClickedPlayer, const class FString& ClickedSide, bool IsOB, int32_t PosIndex, class UUI_CreateRoom_Management_Team_C* TeamWidget, class UUI_CreateRoom_Management_Player_Info_C* InfoWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.OnSlotClicked"));
		
		UUI_CreateRoom_Management_Main_C_OnSlotClicked_Params params {};
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
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.ExecuteUbergraph_UI_CreateRoom_Management_Main
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_Main_C::ExecuteUbergraph_UI_CreateRoom_Management_Main(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.ExecuteUbergraph_UI_CreateRoom_Management_Main"));
		
		UUI_CreateRoom_Management_Main_C_ExecuteUbergraph_UI_CreateRoom_Management_Main_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.OnEnableInviteChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CreateRoom_Management_Main_C::OnEnableInviteChanged__DelegateSignature(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C.OnEnableInviteChanged__DelegateSignature"));
		
		UUI_CreateRoom_Management_Main_C_OnEnableInviteChanged__DelegateSignature_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CreateRoom_Management_Main_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CreateRoom_Management_Main_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_CreateRoom_Management_Main.UI_CreateRoom_Management_Main_C"));
		return ptr;
	}

}


