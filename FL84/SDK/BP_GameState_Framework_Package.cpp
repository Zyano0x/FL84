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
	 * 		Name   -> Function BP_GameState_Framework.BP_GameState_Framework_C.OnRep_GameState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GameState_Framework_C::OnRep_GameState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_GameState_Framework.BP_GameState_Framework_C.OnRep_GameState"));
		
		ABP_GameState_Framework_C_OnRep_GameState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_GameState_Framework.BP_GameState_Framework_C.SetGameState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESCMInGameState                                    NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameState_Framework_C::SetGameState(ESCMInGameState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_GameState_Framework.BP_GameState_Framework_C.SetGameState"));
		
		ABP_GameState_Framework_C_SetGameState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_GameState_Framework.BP_GameState_Framework_C.OnDataManagerPrepare
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void ABP_GameState_Framework_C::OnDataManagerPrepare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_GameState_Framework.BP_GameState_Framework_C.OnDataManagerPrepare"));
		
		ABP_GameState_Framework_C_OnDataManagerPrepare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_GameState_Framework.BP_GameState_Framework_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_GameState_Framework_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_GameState_Framework.BP_GameState_Framework_C.ReceiveBeginPlay"));
		
		ABP_GameState_Framework_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_GameState_Framework.BP_GameState_Framework_C.OnOBPlayerListChange
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_GameState_Framework_C::OnOBPlayerListChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_GameState_Framework.BP_GameState_Framework_C.OnOBPlayerListChange"));
		
		ABP_GameState_Framework_C_OnOBPlayerListChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_GameState_Framework.BP_GameState_Framework_C.OnCustomRoomDataChange
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FCustomRoomData                             InCustomRoomData                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_GameState_Framework_C::OnCustomRoomDataChange(const struct FCustomRoomData& InCustomRoomData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_GameState_Framework.BP_GameState_Framework_C.OnCustomRoomDataChange"));
		
		ABP_GameState_Framework_C_OnCustomRoomDataChange_Params params {};
		params.InCustomRoomData = InCustomRoomData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_GameState_Framework.BP_GameState_Framework_C.OnPlayerBattleStateChange
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ASCMPlayerState*                             PlayerState                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameState_Framework_C::OnPlayerBattleStateChange(class ASCMPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_GameState_Framework.BP_GameState_Framework_C.OnPlayerBattleStateChange"));
		
		ABP_GameState_Framework_C_OnPlayerBattleStateChange_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_GameState_Framework.BP_GameState_Framework_C.ExecuteUbergraph_BP_GameState_Framework
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameState_Framework_C::ExecuteUbergraph_BP_GameState_Framework(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_GameState_Framework.BP_GameState_Framework_C.ExecuteUbergraph_BP_GameState_Framework"));
		
		ABP_GameState_Framework_C_ExecuteUbergraph_BP_GameState_Framework_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_GameState_Framework.BP_GameState_Framework_C.OnGameStateChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESCMInGameState                                    NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameState_Framework_C::OnGameStateChanged__DelegateSignature(ESCMInGameState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_GameState_Framework.BP_GameState_Framework_C.OnGameStateChanged__DelegateSignature"));
		
		ABP_GameState_Framework_C_OnGameStateChanged__DelegateSignature_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_GameState_Framework.BP_GameState_Framework_C.OnPlayerBattleStateChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASCMPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameState_Framework_C::OnPlayerBattleStateChanged__DelegateSignature(class ASCMPlayerState* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_GameState_Framework.BP_GameState_Framework_C.OnPlayerBattleStateChanged__DelegateSignature"));
		
		ABP_GameState_Framework_C_OnPlayerBattleStateChanged__DelegateSignature_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_GameState_Framework.BP_GameState_Framework_C.OnRoomDataChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCustomRoomData                             RoomData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_GameState_Framework_C::OnRoomDataChanged__DelegateSignature(const struct FCustomRoomData& RoomData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_GameState_Framework.BP_GameState_Framework_C.OnRoomDataChanged__DelegateSignature"));
		
		ABP_GameState_Framework_C_OnRoomDataChanged__DelegateSignature_Params params {};
		params.RoomData = RoomData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_GameState_Framework.BP_GameState_Framework_C.OnOBPlayerListChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GameState_Framework_C::OnOBPlayerListChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_GameState_Framework.BP_GameState_Framework_C.OnOBPlayerListChanged__DelegateSignature"));
		
		ABP_GameState_Framework_C_OnOBPlayerListChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_GameState_Framework.BP_GameState_Framework_C.OnBasicSystemReady_0__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GameState_Framework_C::OnBasicSystemReady_0__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_GameState_Framework.BP_GameState_Framework_C.OnBasicSystemReady_0__DelegateSignature"));
		
		ABP_GameState_Framework_C_OnBasicSystemReady_0__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_GameState_Framework_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_GameState_Framework_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_GameState_Framework.BP_GameState_Framework_C"));
		return ptr;
	}

}


