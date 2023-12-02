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
	 * 		Name   -> Function BattleRoyaleGameModeAIComp_Custom.BattleRoyaleGameModeAIComp_Custom_C.Get All Bot Character and Set Bt Tree
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBehaviorTree*                               BTAsset                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleRoyaleGameModeAIComp_Custom_C::GetAllBotCharacterandSetBtTree(class UBehaviorTree* BTAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BattleRoyaleGameModeAIComp_Custom.BattleRoyaleGameModeAIComp_Custom_C.Get All Bot Character and Set Bt Tree"));
		
		UBattleRoyaleGameModeAIComp_Custom_C_GetAllBotCharacterandSetBtTree_Params params {};
		params.BTAsset = BTAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BattleRoyaleGameModeAIComp_Custom.BattleRoyaleGameModeAIComp_Custom_C.OnGameModeHandleMatchHasStarted
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bOutSuccess                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UGameModeCompBase*>                   ComponentCollection                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	void UBattleRoyaleGameModeAIComp_Custom_C::OnGameModeHandleMatchHasStarted(bool* bOutSuccess, TArray<class UGameModeCompBase*> ComponentCollection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BattleRoyaleGameModeAIComp_Custom.BattleRoyaleGameModeAIComp_Custom_C.OnGameModeHandleMatchHasStarted"));
		
		UBattleRoyaleGameModeAIComp_Custom_C_OnGameModeHandleMatchHasStarted_Params params {};
		params.ComponentCollection = ComponentCollection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutSuccess != nullptr)
			*bOutSuccess = params.bOutSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BattleRoyaleGameModeAIComp_Custom.BattleRoyaleGameModeAIComp_Custom_C.OnGameModeStartPlay
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bOutSuccess                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UGameModeCompBase*>                   ComponentCollection                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	void UBattleRoyaleGameModeAIComp_Custom_C::OnGameModeStartPlay(bool* bOutSuccess, TArray<class UGameModeCompBase*> ComponentCollection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BattleRoyaleGameModeAIComp_Custom.BattleRoyaleGameModeAIComp_Custom_C.OnGameModeStartPlay"));
		
		UBattleRoyaleGameModeAIComp_Custom_C_OnGameModeStartPlay_Params params {};
		params.ComponentCollection = ComponentCollection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutSuccess != nullptr)
			*bOutSuccess = params.bOutSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BattleRoyaleGameModeAIComp_Custom.BattleRoyaleGameModeAIComp_Custom_C.Event_AIBeginPlay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBattleRoyaleGameModeAIComp_Custom_C::Event_AIBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BattleRoyaleGameModeAIComp_Custom.BattleRoyaleGameModeAIComp_Custom_C.Event_AIBeginPlay"));
		
		UBattleRoyaleGameModeAIComp_Custom_C_Event_AIBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BattleRoyaleGameModeAIComp_Custom.BattleRoyaleGameModeAIComp_Custom_C.MainTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBattleRoyaleGameModeAIComp_Custom_C::MainTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BattleRoyaleGameModeAIComp_Custom.BattleRoyaleGameModeAIComp_Custom_C.MainTick"));
		
		UBattleRoyaleGameModeAIComp_Custom_C_MainTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BattleRoyaleGameModeAIComp_Custom.BattleRoyaleGameModeAIComp_Custom_C.ExecuteUbergraph_BattleRoyaleGameModeAIComp_Custom
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleRoyaleGameModeAIComp_Custom_C::ExecuteUbergraph_BattleRoyaleGameModeAIComp_Custom(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BattleRoyaleGameModeAIComp_Custom.BattleRoyaleGameModeAIComp_Custom_C.ExecuteUbergraph_BattleRoyaleGameModeAIComp_Custom"));
		
		UBattleRoyaleGameModeAIComp_Custom_C_ExecuteUbergraph_BattleRoyaleGameModeAIComp_Custom_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBattleRoyaleGameModeAIComp_Custom_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBattleRoyaleGameModeAIComp_Custom_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BattleRoyaleGameModeAIComp_Custom.BattleRoyaleGameModeAIComp_Custom_C"));
		return ptr;
	}

}


