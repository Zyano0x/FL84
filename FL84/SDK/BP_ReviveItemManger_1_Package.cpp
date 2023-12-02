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
	 * 		Name   -> Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.GetResurrectByItemUI
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_Resurrect_C*                             Output_Get                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ReviveItemManger_0_C::GetResurrectByItemUI(class UUI_Resurrect_C** Output_Get)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.GetResurrectByItemUI"));
		
		ABP_ReviveItemManger_0_C_GetResurrectByItemUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output_Get != nullptr)
			*Output_Get = params.Output_Get;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.SetPlayerReviveData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarPlayerState*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FF_ReviveItemData                           Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_ReviveItemManger_0_C::SetPlayerReviveData(class ASolarPlayerState* Player, const struct FF_ReviveItemData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.SetPlayerReviveData"));
		
		ABP_ReviveItemManger_0_C_SetPlayerReviveData_Params params {};
		params.Player = Player;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.GetPlayerReviveData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ASolarPlayerState*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FF_ReviveItemData                           Data                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bFind                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ReviveItemManger_0_C::GetPlayerReviveData(class ASolarPlayerState* Player, struct FF_ReviveItemData* Data, bool* bFind)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.GetPlayerReviveData"));
		
		ABP_ReviveItemManger_0_C_GetPlayerReviveData_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
		if (bFind != nullptr)
			*bFind = params.bFind;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.RemovePlayerFromRevivingPlayerArr
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarPlayerState*                           Player                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ReviveItemManger_0_C::RemovePlayerFromRevivingPlayerArr(class ASolarPlayerState* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.RemovePlayerFromRevivingPlayerArr"));
		
		ABP_ReviveItemManger_0_C_RemovePlayerFromRevivingPlayerArr_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.AddPlayerIntoRevivingPlayerArr
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarPlayerState*                           Player                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ReviveItemManger_0_C::AddPlayerIntoRevivingPlayerArr(class ASolarPlayerState* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.AddPlayerIntoRevivingPlayerArr"));
		
		ABP_ReviveItemManger_0_C_AddPlayerIntoRevivingPlayerArr_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.OnRep_AdvanceNotice
	 * 		Flags  -> (HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ReviveItemManger_0_C::OnRep_AdvanceNotice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.OnRep_AdvanceNotice"));
		
		ABP_ReviveItemManger_0_C_OnRep_AdvanceNotice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.OnRep_ClearItemNotice
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ReviveItemManger_0_C::OnRep_ClearItemNotice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.OnRep_ClearItemNotice"));
		
		ABP_ReviveItemManger_0_C_OnRep_ClearItemNotice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.[ S]Try to Revive Player with Item
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarPlayerState*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_ReviveItemManger_0_C::STrytoRevivePlayerwithItem(class ASolarPlayerState* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.[ S]Try to Revive Player with Item"));
		
		ABP_ReviveItemManger_0_C_STrytoRevivePlayerwithItem_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.Set Player Use Revive Item Times
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarPlayerState*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ReviveItemManger_0_C::SetPlayerUseReviveItemTimes(class ASolarPlayerState* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.Set Player Use Revive Item Times"));
		
		ABP_ReviveItemManger_0_C_SetPlayerUseReviveItemTimes_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.[ A]Get Player Use Revive Item Times
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ASolarPlayerState*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ReviveItemManger_0_C::AGetPlayerUseReviveItemTimes(class ASolarPlayerState* Player, int32_t* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.[ A]Get Player Use Revive Item Times"));
		
		ABP_ReviveItemManger_0_C_AGetPlayerUseReviveItemTimes_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.CanPlayerUseReviveItem
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarPlayerState*                           InPlayerState                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bCheckItemNum                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABP_ReviveItemManger_0_C::CanPlayerUseReviveItem(class ASolarPlayerState* InPlayerState, bool bCheckItemNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.CanPlayerUseReviveItem"));
		
		ABP_ReviveItemManger_0_C_CanPlayerUseReviveItem_Params params {};
		params.InPlayerState = InPlayerState;
		params.bCheckItemNum = bCheckItemNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.CanGlobalUseReviveItem
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABP_ReviveItemManger_0_C::CanGlobalUseReviveItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.CanGlobalUseReviveItem"));
		
		ABP_ReviveItemManger_0_C_CanGlobalUseReviveItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.RevivePlayer
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarCharacter*                                                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  2                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		bool                                               _bool_                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ReviveItemManger_0_C::RevivePlayer(class ASolarCharacter* , const struct FTransform& 2, bool* _bool_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.RevivePlayer"));
		
		ABP_ReviveItemManger_0_C_RevivePlayer_Params params {};
		params. = ;
		params.2 = 2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_bool_ != nullptr)
			*_bool_ = params._bool_;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_ReviveItemManger_0_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.ReceiveBeginPlay"));
		
		ABP_ReviveItemManger_0_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.Event_ClearRevive
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ReviveItemManger_0_C::Event_ClearRevive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.Event_ClearRevive"));
		
		ABP_ReviveItemManger_0_C_Event_ClearRevive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.OnPlayerResurrected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ResurrectType                                    ResurrectType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_PlayerState_Framework_C*                 TargetPlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ReviveItemManger_0_C::OnPlayerResurrected(E_ResurrectType ResurrectType, class ABP_PlayerState_Framework_C* TargetPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.OnPlayerResurrected"));
		
		ABP_ReviveItemManger_0_C_OnPlayerResurrected_Params params {};
		params.ResurrectType = ResurrectType;
		params.TargetPlayer = TargetPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.Event_ClearReviveNotifyInAdvance
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ReviveItemManger_0_C::Event_ClearReviveNotifyInAdvance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.Event_ClearReviveNotifyInAdvance"));
		
		ABP_ReviveItemManger_0_C_Event_ClearReviveNotifyInAdvance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.Event_InitReviveItem
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ReviveItemManger_0_C::Event_InitReviveItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.Event_InitReviveItem"));
		
		ABP_ReviveItemManger_0_C_Event_InitReviveItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.UpdateTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ReviveItemManger_0_C::UpdateTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.UpdateTime"));
		
		ABP_ReviveItemManger_0_C_UpdateTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.DownReviveImmediately
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarPlayerState*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ReviveItemManger_0_C::DownReviveImmediately(class ASolarPlayerState* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.DownReviveImmediately"));
		
		ABP_ReviveItemManger_0_C_DownReviveImmediately_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.OnPlayerHealthStateChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_PlayerState_Framework_C*                 InPlayerState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_CharacterHealthState                             NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ReviveItemManger_0_C::OnPlayerHealthStateChanged(class ABP_PlayerState_Framework_C* InPlayerState, E_CharacterHealthState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.OnPlayerHealthStateChanged"));
		
		ABP_ReviveItemManger_0_C_OnPlayerHealthStateChanged_Params params {};
		params.InPlayerState = InPlayerState;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.ReviveDisableNotice
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ReviveItemManger_0_C::ReviveDisableNotice(int32_t Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.ReviveDisableNotice"));
		
		ABP_ReviveItemManger_0_C_ReviveDisableNotice_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.Event_PlayerReconnect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASCMPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ReviveItemManger_0_C::Event_PlayerReconnect(class ASCMPlayerState* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.Event_PlayerReconnect"));
		
		ABP_ReviveItemManger_0_C_Event_PlayerReconnect_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.OnStartReviveItemRecycleCountDownDataRequested
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_ReviveItemManger_0_C::OnStartReviveItemRecycleCountDownDataRequested()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.OnStartReviveItemRecycleCountDownDataRequested"));
		
		ABP_ReviveItemManger_0_C_OnStartReviveItemRecycleCountDownDataRequested_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.OnSpecTargetChanged_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarPlayerState*                           OldTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASolarPlayerState*                           NewTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ReviveItemManger_0_C::OnSpecTargetChanged_Event_1(class ASolarPlayerState* OldTarget, class ASolarPlayerState* NewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.OnSpecTargetChanged_Event_1"));
		
		ABP_ReviveItemManger_0_C_OnSpecTargetChanged_Event_1_Params params {};
		params.OldTarget = OldTarget;
		params.NewTarget = NewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.ExecuteUbergraph_BP_ReviveItemManger_1
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ReviveItemManger_0_C::ExecuteUbergraph_BP_ReviveItemManger_1(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.ExecuteUbergraph_BP_ReviveItemManger_1"));
		
		ABP_ReviveItemManger_0_C_ExecuteUbergraph_BP_ReviveItemManger_1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ReviveItemManger_0_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ReviveItemManger_0_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_ReviveItemManger_1.BP_ReviveItemManger_0_C"));
		return ptr;
	}

}


