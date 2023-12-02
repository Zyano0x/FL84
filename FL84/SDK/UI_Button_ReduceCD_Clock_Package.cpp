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
	 * 		Name   -> Function UI_Button_ReduceCD_Clock.UI_Button_ReduceCD_Clock_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Button_ReduceCD_Clock_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Button_ReduceCD_Clock.UI_Button_ReduceCD_Clock_C.PreConstruct"));
		
		UUI_Button_ReduceCD_Clock_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Button_ReduceCD_Clock.UI_Button_ReduceCD_Clock_C.ExecuteUbergraph_UI_Button_ReduceCD_Clock
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Button_ReduceCD_Clock_C::ExecuteUbergraph_UI_Button_ReduceCD_Clock(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Button_ReduceCD_Clock.UI_Button_ReduceCD_Clock_C.ExecuteUbergraph_UI_Button_ReduceCD_Clock"));
		
		UUI_Button_ReduceCD_Clock_C_ExecuteUbergraph_UI_Button_ReduceCD_Clock_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Button_ReduceCD_Clock_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Button_ReduceCD_Clock_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_Button_ReduceCD_Clock.UI_Button_ReduceCD_Clock_C"));
		return ptr;
	}

}


