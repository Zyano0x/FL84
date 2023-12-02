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
	 * 		Name   -> Function BPC_PlayerManager.BPC_PlayerManager_C.GetPlayerList
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_PlayerListType                                   Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	TArray<class ABP_PlayerState_Framework_C*> UBPC_PlayerManager_C::GetPlayerList(E_PlayerListType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_PlayerManager.BPC_PlayerManager_C.GetPlayerList"));
		
		UBPC_PlayerManager_C_GetPlayerList_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_PlayerManager.BPC_PlayerManager_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPC_PlayerManager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_PlayerManager.BPC_PlayerManager_C.ReceiveBeginPlay"));
		
		UBPC_PlayerManager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_PlayerManager.BPC_PlayerManager_C.OnPlayerDie
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_PlayerState_Framework_C*                 Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_PlayerManager_C::OnPlayerDie(class ABP_PlayerState_Framework_C* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_PlayerManager.BPC_PlayerManager_C.OnPlayerDie"));
		
		UBPC_PlayerManager_C_OnPlayerDie_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_PlayerManager.BPC_PlayerManager_C.OnPlayerResurrect
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_PlayerState_Framework_C*                 Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_PlayerManager_C::OnPlayerResurrect(class ABP_PlayerState_Framework_C* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_PlayerManager.BPC_PlayerManager_C.OnPlayerResurrect"));
		
		UBPC_PlayerManager_C_OnPlayerResurrect_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_PlayerManager.BPC_PlayerManager_C.BattleStart
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_PlayerManager_C::BattleStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_PlayerManager.BPC_PlayerManager_C.BattleStart"));
		
		UBPC_PlayerManager_C_BattleStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_PlayerManager.BPC_PlayerManager_C.PlayerOut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASCMPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_PlayerManager_C::PlayerOut(class ASCMPlayerState* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_PlayerManager.BPC_PlayerManager_C.PlayerOut"));
		
		UBPC_PlayerManager_C_PlayerOut_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_PlayerManager.BPC_PlayerManager_C.OnPlayerJoin
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASCMPlayerState*                             NewPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsAi                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_PlayerManager_C::OnPlayerJoin(class ASCMPlayerState* NewPlayer, bool bIsAi)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_PlayerManager.BPC_PlayerManager_C.OnPlayerJoin"));
		
		UBPC_PlayerManager_C_OnPlayerJoin_Params params {};
		params.NewPlayer = NewPlayer;
		params.bIsAi = bIsAi;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_PlayerManager.BPC_PlayerManager_C.ExecuteUbergraph_BPC_PlayerManager
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_PlayerManager_C::ExecuteUbergraph_BPC_PlayerManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_PlayerManager.BPC_PlayerManager_C.ExecuteUbergraph_BPC_PlayerManager"));
		
		UBPC_PlayerManager_C_ExecuteUbergraph_BPC_PlayerManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_PlayerManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_PlayerManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BPC_PlayerManager.BPC_PlayerManager_C"));
		return ptr;
	}

}


