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
	 * 		Name   -> Function BPC_AiManagerBase.BPC_AiManagerBase_C.GetMatchTeammateCount
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	int32_t UBPC_AiManagerBase_C::GetMatchTeammateCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_AiManagerBase.BPC_AiManagerBase_C.GetMatchTeammateCount"));
		
		UBPC_AiManagerBase_C_GetMatchTeammateCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_AiManagerBase.BPC_AiManagerBase_C.GetRandomDifficulty
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Difficulty                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AiManagerBase_C::GetRandomDifficulty(int32_t* Difficulty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_AiManagerBase.BPC_AiManagerBase_C.GetRandomDifficulty"));
		
		UBPC_AiManagerBase_C_GetRandomDifficulty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Difficulty != nullptr)
			*Difficulty = params.Difficulty;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_AiManagerBase.BPC_AiManagerBase_C.GetMemberAIOrder
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TMap<class FString, int32_t>                       TeamCount                                                  (Parm, OutParm)
	 */
	void UBPC_AiManagerBase_C::GetMemberAIOrder(TMap<class FString, int32_t>* TeamCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_AiManagerBase.BPC_AiManagerBase_C.GetMemberAIOrder"));
		
		UBPC_AiManagerBase_C_GetMemberAIOrder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TeamCount != nullptr)
			*TeamCount = params.TeamCount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_AiManagerBase.BPC_AiManagerBase_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPC_AiManagerBase_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_AiManagerBase.BPC_AiManagerBase_C.ReceiveBeginPlay"));
		
		UBPC_AiManagerBase_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_AiManagerBase.BPC_AiManagerBase_C.OnPlayerJoin
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASCMPlayerState*                             NewPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsAi                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_AiManagerBase_C::OnPlayerJoin(class ASCMPlayerState* NewPlayer, bool bIsAi)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_AiManagerBase.BPC_AiManagerBase_C.OnPlayerJoin"));
		
		UBPC_AiManagerBase_C_OnPlayerJoin_Params params {};
		params.NewPlayer = NewPlayer;
		params.bIsAi = bIsAi;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_AiManagerBase.BPC_AiManagerBase_C.CustomEvent_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_AiManagerBase_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_AiManagerBase.BPC_AiManagerBase_C.CustomEvent_1"));
		
		UBPC_AiManagerBase_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_AiManagerBase.BPC_AiManagerBase_C.ExecuteUbergraph_BPC_AiManagerBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AiManagerBase_C::ExecuteUbergraph_BPC_AiManagerBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_AiManagerBase.BPC_AiManagerBase_C.ExecuteUbergraph_BPC_AiManagerBase"));
		
		UBPC_AiManagerBase_C_ExecuteUbergraph_BPC_AiManagerBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_AiManagerBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_AiManagerBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BPC_AiManagerBase.BPC_AiManagerBase_C"));
		return ptr;
	}

}


