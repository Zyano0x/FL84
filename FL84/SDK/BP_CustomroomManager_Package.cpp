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
	 * 		Name   -> Function BP_CustomroomManager.BP_CustomroomManager_C.GetSpawnList
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<int32_t>                                    ID                                                         (Parm, OutParm, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    ID2                                                        (Parm, OutParm, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    ID3                                                        (Parm, OutParm, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    ID4                                                        (Parm, OutParm, HasGetValueTypeHash)
	 */
	void ABP_CustomroomManager_C::GetSpawnList(TArray<int32_t>* ID, TArray<int32_t>* ID2, TArray<int32_t>* ID3, TArray<int32_t>* ID4)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_CustomroomManager.BP_CustomroomManager_C.GetSpawnList"));
		
		ABP_CustomroomManager_C_GetSpawnList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ID != nullptr)
			*ID = params.ID;
		if (ID2 != nullptr)
			*ID2 = params.ID2;
		if (ID3 != nullptr)
			*ID3 = params.ID3;
		if (ID4 != nullptr)
			*ID4 = params.ID4;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_CustomroomManager.BP_CustomroomManager_C.GetModeRoomUIType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		EModeRoomUIType                                    NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CustomroomManager_C::GetModeRoomUIType(EModeRoomUIType* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_CustomroomManager.BP_CustomroomManager_C.GetModeRoomUIType"));
		
		ABP_CustomroomManager_C_GetModeRoomUIType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_CustomroomManager.BP_CustomroomManager_C.GetRoomInfo
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FCustomRoomData ABP_CustomroomManager_C::GetRoomInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_CustomroomManager.BP_CustomroomManager_C.GetRoomInfo"));
		
		ABP_CustomroomManager_C_GetRoomInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_CustomroomManager.BP_CustomroomManager_C.IsPlayerLocalPendingKill
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ASCMPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CustomroomManager_C::IsPlayerLocalPendingKill(class ASCMPlayerState* Player, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_CustomroomManager.BP_CustomroomManager_C.IsPlayerLocalPendingKill"));
		
		ABP_CustomroomManager_C_IsPlayerLocalPendingKill_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_CustomroomManager.BP_CustomroomManager_C.IsRoomOwner
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ASCMPlayerState*                             Player                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_CustomroomManager_C::IsRoomOwner(class ASCMPlayerState* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_CustomroomManager.BP_CustomroomManager_C.IsRoomOwner"));
		
		ABP_CustomroomManager_C_IsRoomOwner_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_CustomroomManager.BP_CustomroomManager_C.Switch Mgmt UI Display
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CustomroomManager_C::SwitchMgmtUIDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_CustomroomManager.BP_CustomroomManager_C.Switch Mgmt UI Display"));
		
		ABP_CustomroomManager_C_SwitchMgmtUIDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_CustomroomManager.BP_CustomroomManager_C.RemoveRoomUI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CustomroomManager_C::RemoveRoomUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_CustomroomManager.BP_CustomroomManager_C.RemoveRoomUI"));
		
		ABP_CustomroomManager_C_RemoveRoomUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_CustomroomManager.BP_CustomroomManager_C.Get Team Member Count
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CustomroomManager_C::GetTeamMemberCount(int32_t* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_CustomroomManager.BP_CustomroomManager_C.Get Team Member Count"));
		
		ABP_CustomroomManager_C_GetTeamMemberCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_CustomroomManager.BP_CustomroomManager_C.TEMP Delayed Flag Update
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CustomroomManager_C::TEMPDelayedFlagUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_CustomroomManager.BP_CustomroomManager_C.TEMP Delayed Flag Update"));
		
		ABP_CustomroomManager_C_TEMPDelayedFlagUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_CustomroomManager.BP_CustomroomManager_C.PreUpdateOB
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CustomroomManager_C::PreUpdateOB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_CustomroomManager.BP_CustomroomManager_C.PreUpdateOB"));
		
		ABP_CustomroomManager_C_PreUpdateOB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_CustomroomManager.BP_CustomroomManager_C.Refresh All Teams on UI
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CustomroomManager_C::RefreshAllTeamsonUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_CustomroomManager.BP_CustomroomManager_C.Refresh All Teams on UI"));
		
		ABP_CustomroomManager_C_RefreshAllTeamsonUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_CustomroomManager.BP_CustomroomManager_C.Init CustomRoom Info
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CustomroomManager_C::InitCustomRoomInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_CustomroomManager.BP_CustomroomManager_C.Init CustomRoom Info"));
		
		ABP_CustomroomManager_C_InitCustomRoomInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_CustomroomManager.BP_CustomroomManager_C.Get Custom Room Mode
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		ERoomModeType                                      RoomMode                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CustomroomManager_C::GetCustomRoomMode(ERoomModeType* RoomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_CustomroomManager.BP_CustomroomManager_C.Get Custom Room Mode"));
		
		ABP_CustomroomManager_C_GetCustomRoomMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RoomMode != nullptr)
			*RoomMode = params.RoomMode;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_CustomroomManager.BP_CustomroomManager_C.Get Mode Name Localization
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            ModeLocalID                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            GroupLocalID                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CustomroomManager_C::GetModeNameLocalization(int32_t* ModeLocalID, int32_t* GroupLocalID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_CustomroomManager.BP_CustomroomManager_C.Get Mode Name Localization"));
		
		ABP_CustomroomManager_C_GetModeNameLocalization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModeLocalID != nullptr)
			*ModeLocalID = params.ModeLocalID;
		if (GroupLocalID != nullptr)
			*GroupLocalID = params.GroupLocalID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_CustomroomManager.BP_CustomroomManager_C.Refresh START in Top HUD
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CustomroomManager_C::RefreshSTARTinTopHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_CustomroomManager.BP_CustomroomManager_C.Refresh START in Top HUD"));
		
		ABP_CustomroomManager_C_RefreshSTARTinTopHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_CustomroomManager.BP_CustomroomManager_C.Create Room Manager Operate UI
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CustomroomManager_C::CreateRoomManagerOperateUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_CustomroomManager.BP_CustomroomManager_C.Create Room Manager Operate UI"));
		
		ABP_CustomroomManager_C_CreateRoomManagerOperateUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_CustomroomManager.BP_CustomroomManager_C.Create Room Manager HUD
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CustomroomManager_C::CreateRoomManagerHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_CustomroomManager.BP_CustomroomManager_C.Create Room Manager HUD"));
		
		ABP_CustomroomManager_C_CreateRoomManagerHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_CustomroomManager.BP_CustomroomManager_C.OnGameStart
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABP_CustomroomManager_C::OnGameStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_CustomroomManager.BP_CustomroomManager_C.OnGameStart"));
		
		ABP_CustomroomManager_C_OnGameStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_CustomroomManager.BP_CustomroomManager_C.OnTournamentDealy
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void ABP_CustomroomManager_C::OnTournamentDealy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_CustomroomManager.BP_CustomroomManager_C.OnTournamentDealy"));
		
		ABP_CustomroomManager_C_OnTournamentDealy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_CustomroomManager.BP_CustomroomManager_C.Manual Trigger Refresh
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      DEBUGReason                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_CustomroomManager_C::ManualTriggerRefresh(const class FString& DEBUGReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_CustomroomManager.BP_CustomroomManager_C.Manual Trigger Refresh"));
		
		ABP_CustomroomManager_C_ManualTriggerRefresh_Params params {};
		params.DEBUGReason = DEBUGReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_CustomroomManager.BP_CustomroomManager_C.RefreshOB
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CustomroomManager_C::RefreshOB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_CustomroomManager.BP_CustomroomManager_C.RefreshOB"));
		
		ABP_CustomroomManager_C_RefreshOB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_CustomroomManager.BP_CustomroomManager_C.RefreshRoomData
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCustomRoomData                             RoomData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_CustomroomManager_C::RefreshRoomData(const struct FCustomRoomData& RoomData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_CustomroomManager.BP_CustomroomManager_C.RefreshRoomData"));
		
		ABP_CustomroomManager_C_RefreshRoomData_Params params {};
		params.RoomData = RoomData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_CustomroomManager.BP_CustomroomManager_C.UnbaindAllEvents
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CustomroomManager_C::UnbaindAllEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_CustomroomManager.BP_CustomroomManager_C.UnbaindAllEvents"));
		
		ABP_CustomroomManager_C_UnbaindAllEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_CustomroomManager.BP_CustomroomManager_C.RefreshTeamPlayers
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASCMPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CustomroomManager_C::RefreshTeamPlayers(class ASCMPlayerState* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_CustomroomManager.BP_CustomroomManager_C.RefreshTeamPlayers"));
		
		ABP_CustomroomManager_C_RefreshTeamPlayers_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_CustomroomManager.BP_CustomroomManager_C.OnClientRoomDataReady
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void ABP_CustomroomManager_C::OnClientRoomDataReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_CustomroomManager.BP_CustomroomManager_C.OnClientRoomDataReady"));
		
		ABP_CustomroomManager_C_OnClientRoomDataReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_CustomroomManager.BP_CustomroomManager_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_CustomroomManager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_CustomroomManager.BP_CustomroomManager_C.ReceiveBeginPlay"));
		
		ABP_CustomroomManager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_CustomroomManager.BP_CustomroomManager_C.OnTeamsInfoPostChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_CustomroomManager_C::OnTeamsInfoPostChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_CustomroomManager.BP_CustomroomManager_C.OnTeamsInfoPostChanged"));
		
		ABP_CustomroomManager_C_OnTeamsInfoPostChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_CustomroomManager.BP_CustomroomManager_C.ExecuteUbergraph_BP_CustomroomManager
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CustomroomManager_C::ExecuteUbergraph_BP_CustomroomManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_CustomroomManager.BP_CustomroomManager_C.ExecuteUbergraph_BP_CustomroomManager"));
		
		ABP_CustomroomManager_C_ExecuteUbergraph_BP_CustomroomManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_CustomroomManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CustomroomManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_CustomroomManager.BP_CustomroomManager_C"));
		return ptr;
	}

}


