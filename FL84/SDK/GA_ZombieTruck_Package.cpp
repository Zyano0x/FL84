/**
 * Name: FL84
 * Version: 15.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x02D64C70
	 * 		Name   -> Function GA_ZombieTruck.GA_ZombieTruck_C.K2_OnEndAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasCancelled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_ZombieTruck_C::K2_OnEndAbility(bool bWasCancelled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function GA_ZombieTruck.GA_ZombieTruck_C.K2_OnEndAbility"));
		
		UGA_ZombieTruck_C_K2_OnEndAbility_Params params {};
		params.bWasCancelled = bWasCancelled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64C70
	 * 		Name   -> Function GA_ZombieTruck.GA_ZombieTruck_C.K2_CommitExecute
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UGA_ZombieTruck_C::K2_CommitExecute()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function GA_ZombieTruck.GA_ZombieTruck_C.K2_CommitExecute"));
		
		UGA_ZombieTruck_C_K2_CommitExecute_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64C70
	 * 		Name   -> Function GA_ZombieTruck.GA_ZombieTruck_C.ExecuteUbergraph_GA_ZombieTruck
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_ZombieTruck_C::ExecuteUbergraph_GA_ZombieTruck(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function GA_ZombieTruck.GA_ZombieTruck_C.ExecuteUbergraph_GA_ZombieTruck"));
		
		UGA_ZombieTruck_C_ExecuteUbergraph_GA_ZombieTruck_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_ZombieTruck_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_ZombieTruck_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass GA_ZombieTruck.GA_ZombieTruck_C"));
		return ptr;
	}

}


