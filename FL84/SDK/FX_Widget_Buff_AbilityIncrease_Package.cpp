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
	 * 		Name   -> Function FX_Widget_Buff_AbilityIncrease.FX_Widget_Buff_AbilityIncrease_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UFX_Widget_Buff_AbilityIncrease_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FX_Widget_Buff_AbilityIncrease.FX_Widget_Buff_AbilityIncrease_C.Construct"));
		
		UFX_Widget_Buff_AbilityIncrease_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64C70
	 * 		Name   -> Function FX_Widget_Buff_AbilityIncrease.FX_Widget_Buff_AbilityIncrease_C.ExecuteUbergraph_FX_Widget_Buff_AbilityIncrease
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFX_Widget_Buff_AbilityIncrease_C::ExecuteUbergraph_FX_Widget_Buff_AbilityIncrease(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FX_Widget_Buff_AbilityIncrease.FX_Widget_Buff_AbilityIncrease_C.ExecuteUbergraph_FX_Widget_Buff_AbilityIncrease"));
		
		UFX_Widget_Buff_AbilityIncrease_C_ExecuteUbergraph_FX_Widget_Buff_AbilityIncrease_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFX_Widget_Buff_AbilityIncrease_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFX_Widget_Buff_AbilityIncrease_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass FX_Widget_Buff_AbilityIncrease.FX_Widget_Buff_AbilityIncrease_C"));
		return ptr;
	}

}


