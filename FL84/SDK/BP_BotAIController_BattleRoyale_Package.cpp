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
	 * 		Name   -> Function BP_BotAIController_BattleRoyale.BP_BotAIController_BattleRoyale_C.GetModuleName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString ABP_BotAIController_BattleRoyale_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_BotAIController_BattleRoyale.BP_BotAIController_BattleRoyale_C.GetModuleName"));
		
		ABP_BotAIController_BattleRoyale_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_BotAIController_BattleRoyale.BP_BotAIController_BattleRoyale_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_BotAIController_BattleRoyale_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_BotAIController_BattleRoyale.BP_BotAIController_BattleRoyale_C.ReceiveBeginPlay"));
		
		ABP_BotAIController_BattleRoyale_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_BotAIController_BattleRoyale.BP_BotAIController_BattleRoyale_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BotAIController_BattleRoyale_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_BotAIController_BattleRoyale.BP_BotAIController_BattleRoyale_C.ReceiveTick"));
		
		ABP_BotAIController_BattleRoyale_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_BotAIController_BattleRoyale.BP_BotAIController_BattleRoyale_C.CallAIBegin
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_BotAIController_BattleRoyale_C::CallAIBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_BotAIController_BattleRoyale.BP_BotAIController_BattleRoyale_C.CallAIBegin"));
		
		ABP_BotAIController_BattleRoyale_C_CallAIBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_BotAIController_BattleRoyale.BP_BotAIController_BattleRoyale_C.自定义事件_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_BotAIController_BattleRoyale_C::_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_BotAIController_BattleRoyale.BP_BotAIController_BattleRoyale_C.自定义事件_1"));
		
		ABP_BotAIController_BattleRoyale_C__1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_BotAIController_BattleRoyale.BP_BotAIController_BattleRoyale_C.ExecuteUbergraph_BP_BotAIController_BattleRoyale
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BotAIController_BattleRoyale_C::ExecuteUbergraph_BP_BotAIController_BattleRoyale(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_BotAIController_BattleRoyale.BP_BotAIController_BattleRoyale_C.ExecuteUbergraph_BP_BotAIController_BattleRoyale"));
		
		ABP_BotAIController_BattleRoyale_C_ExecuteUbergraph_BP_BotAIController_BattleRoyale_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BotAIController_BattleRoyale_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BotAIController_BattleRoyale_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_BotAIController_BattleRoyale.BP_BotAIController_BattleRoyale_C"));
		return ptr;
	}

}


