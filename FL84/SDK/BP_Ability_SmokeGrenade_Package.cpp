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
	 * 		Name   -> Function BP_Ability_SmokeGrenade.BP_Ability_SmokeGrenade_C.SmokeFadeIn__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Ability_SmokeGrenade_C::SmokeFadeIn__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Ability_SmokeGrenade.BP_Ability_SmokeGrenade_C.SmokeFadeIn__FinishedFunc"));
		
		ABP_Ability_SmokeGrenade_C_SmokeFadeIn__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Ability_SmokeGrenade.BP_Ability_SmokeGrenade_C.SmokeFadeIn__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Ability_SmokeGrenade_C::SmokeFadeIn__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Ability_SmokeGrenade.BP_Ability_SmokeGrenade_C.SmokeFadeIn__UpdateFunc"));
		
		ABP_Ability_SmokeGrenade_C_SmokeFadeIn__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Ability_SmokeGrenade.BP_Ability_SmokeGrenade_C.SmokeFadeOut__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Ability_SmokeGrenade_C::SmokeFadeOut__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Ability_SmokeGrenade.BP_Ability_SmokeGrenade_C.SmokeFadeOut__FinishedFunc"));
		
		ABP_Ability_SmokeGrenade_C_SmokeFadeOut__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Ability_SmokeGrenade.BP_Ability_SmokeGrenade_C.SmokeFadeOut__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Ability_SmokeGrenade_C::SmokeFadeOut__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Ability_SmokeGrenade.BP_Ability_SmokeGrenade_C.SmokeFadeOut__UpdateFunc"));
		
		ABP_Ability_SmokeGrenade_C_SmokeFadeOut__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Ability_SmokeGrenade.BP_Ability_SmokeGrenade_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Ability_SmokeGrenade_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Ability_SmokeGrenade.BP_Ability_SmokeGrenade_C.ReceiveBeginPlay"));
		
		ABP_Ability_SmokeGrenade_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Ability_SmokeGrenade.BP_Ability_SmokeGrenade_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Ability_SmokeGrenade_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Ability_SmokeGrenade.BP_Ability_SmokeGrenade_C.ReceiveEndPlay"));
		
		ABP_Ability_SmokeGrenade_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Ability_SmokeGrenade.BP_Ability_SmokeGrenade_C.ExecuteUbergraph_BP_Ability_SmokeGrenade
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Ability_SmokeGrenade_C::ExecuteUbergraph_BP_Ability_SmokeGrenade(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Ability_SmokeGrenade.BP_Ability_SmokeGrenade_C.ExecuteUbergraph_BP_Ability_SmokeGrenade"));
		
		ABP_Ability_SmokeGrenade_C_ExecuteUbergraph_BP_Ability_SmokeGrenade_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Ability_SmokeGrenade_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Ability_SmokeGrenade_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_Ability_SmokeGrenade.BP_Ability_SmokeGrenade_C"));
		return ptr;
	}

}


