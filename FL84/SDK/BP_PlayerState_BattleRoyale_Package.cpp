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
	 * 		Name   -> Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.PlayerCanRebirthBlueprint
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABP_PlayerState_BattleRoyale_C::PlayerCanRebirthBlueprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.PlayerCanRebirthBlueprint"));
		
		ABP_PlayerState_BattleRoyale_C_PlayerCanRebirthBlueprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.PlayerIsResurrecting
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABP_PlayerState_BattleRoyale_C::PlayerIsResurrecting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.PlayerIsResurrecting"));
		
		ABP_PlayerState_BattleRoyale_C_PlayerIsResurrecting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.IsPlayerWaitingForTeammatesHelp
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABP_PlayerState_BattleRoyale_C::IsPlayerWaitingForTeammatesHelp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.IsPlayerWaitingForTeammatesHelp"));
		
		ABP_PlayerState_BattleRoyale_C_IsPlayerWaitingForTeammatesHelp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.GetItemData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            ItemID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ID                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Quality                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_BattleRoyale_C::GetItemData(int32_t ItemID, bool* Valid, int32_t* ID, int32_t* Quality)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.GetItemData"));
		
		ABP_PlayerState_BattleRoyale_C_GetItemData_Params params {};
		params.ItemID = ItemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
		if (ID != nullptr)
			*ID = params.ID;
		if (Quality != nullptr)
			*Quality = params.Quality;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.GetPlayerChestOpen
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Output                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_BattleRoyale_C::GetPlayerChestOpen(class FString* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.GetPlayerChestOpen"));
		
		ABP_PlayerState_BattleRoyale_C_GetPlayerChestOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.GetSinglePlayerItem
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            ItemID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasItem                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_BattleRoyale_C::GetSinglePlayerItem(int32_t ItemID, bool* HasItem, int32_t* count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.GetSinglePlayerItem"));
		
		ABP_PlayerState_BattleRoyale_C_GetSinglePlayerItem_Params params {};
		params.ItemID = ItemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasItem != nullptr)
			*HasItem = params.HasItem;
		if (count != nullptr)
			*count = params.count;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.GetWeaponPartData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            ItemID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ID                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Quality                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_BattleRoyale_C::GetWeaponPartData(int32_t ItemID, bool* Valid, int32_t* ID, int32_t* Quality)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.GetWeaponPartData"));
		
		ABP_PlayerState_BattleRoyale_C_GetWeaponPartData_Params params {};
		params.ItemID = ItemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
		if (ID != nullptr)
			*ID = params.ID;
		if (Quality != nullptr)
			*Quality = params.Quality;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.GetPlayerItems
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Output                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_BattleRoyale_C::GetPlayerItems(class FString* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.GetPlayerItems"));
		
		ABP_PlayerState_BattleRoyale_C_GetPlayerItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.Get Player Accessories
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Output                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_BattleRoyale_C::GetPlayerAccessories(class FString* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.Get Player Accessories"));
		
		ABP_PlayerState_BattleRoyale_C_GetPlayerAccessories_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.Set Intervened By AI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PlayerState_BattleRoyale_C::SetIntervenedByAI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.Set Intervened By AI"));
		
		ABP_PlayerState_BattleRoyale_C_SetIntervenedByAI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.GetNearestPos
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_GuidTargetType                                   Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_BattleRoyale_C::GetNearestPos(E_GuidTargetType Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.GetNearestPos"));
		
		ABP_PlayerState_BattleRoyale_C_GetNearestPos_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.OnRep_PlayerBattleState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PlayerState_BattleRoyale_C::OnRep_PlayerBattleState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.OnRep_PlayerBattleState"));
		
		ABP_PlayerState_BattleRoyale_C_OnRep_PlayerBattleState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.[s]SetPlayerState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_PlayerBattleState_BattleRoyale                   State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_BattleRoyale_C::sSetPlayerState(E_PlayerBattleState_BattleRoyale State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.[s]SetPlayerState"));
		
		ABP_PlayerState_BattleRoyale_C_sSetPlayerState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_PlayerState_BattleRoyale_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.ReceiveBeginPlay"));
		
		ABP_PlayerState_BattleRoyale_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.Event_RespondReconnection
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PlayerState_BattleRoyale_C::Event_RespondReconnection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.Event_RespondReconnection"));
		
		ABP_PlayerState_BattleRoyale_C_Event_RespondReconnection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.ResurrectionStateChange
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EResurrectionState                                 NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_BattleRoyale_C::ResurrectionStateChange(EResurrectionState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.ResurrectionStateChange"));
		
		ABP_PlayerState_BattleRoyale_C_ResurrectionStateChange_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.RequestNearestPos
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_GuidTargetType                                   Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_BattleRoyale_C::RequestNearestPos(E_GuidTargetType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.RequestNearestPos"));
		
		ABP_PlayerState_BattleRoyale_C_RequestNearestPos_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.OnNearestPosReceived
	 * 		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_GuidTargetType                                   Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Pos                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_BattleRoyale_C::OnNearestPosReceived(E_GuidTargetType Type, const struct FVector& Pos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.OnNearestPosReceived"));
		
		ABP_PlayerState_BattleRoyale_C_OnNearestPosReceived_Params params {};
		params.Type = Type;
		params.Pos = Pos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.OnPlayerGainExperience
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            GainedExp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CurrentExp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TotalExp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EExpBehaviorType                                   BehaviorType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_BattleRoyale_C::OnPlayerGainExperience(int32_t GainedExp, int32_t CurrentExp, int32_t TotalExp, EExpBehaviorType BehaviorType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.OnPlayerGainExperience"));
		
		ABP_PlayerState_BattleRoyale_C_OnPlayerGainExperience_Params params {};
		params.GainedExp = GainedExp;
		params.CurrentExp = CurrentExp;
		params.TotalExp = TotalExp;
		params.BehaviorType = BehaviorType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.DelayAndBeginSpectate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PlayerState_BattleRoyale_C::DelayAndBeginSpectate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.DelayAndBeginSpectate"));
		
		ABP_PlayerState_BattleRoyale_C_DelayAndBeginSpectate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.ExecuteUbergraph_BP_PlayerState_BattleRoyale
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_BattleRoyale_C::ExecuteUbergraph_BP_PlayerState_BattleRoyale(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.ExecuteUbergraph_BP_PlayerState_BattleRoyale"));
		
		ABP_PlayerState_BattleRoyale_C_ExecuteUbergraph_BP_PlayerState_BattleRoyale_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.OnRequestReplied__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_GuidTargetType                                   Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Pos                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_BattleRoyale_C::OnRequestReplied__DelegateSignature(E_GuidTargetType Type, const struct FVector& Pos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.OnRequestReplied__DelegateSignature"));
		
		ABP_PlayerState_BattleRoyale_C_OnRequestReplied__DelegateSignature_Params params {};
		params.Type = Type;
		params.Pos = Pos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PlayerState_BattleRoyale_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PlayerState_BattleRoyale_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C"));
		return ptr;
	}

}


