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
	 * 		Name   -> Function UI_Common_Transition_Anim.UI_Common_Transition_Anim_C.OnSolarUIOpened
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUI_Common_Transition_Anim_C::OnSolarUIOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Common_Transition_Anim.UI_Common_Transition_Anim_C.OnSolarUIOpened"));
		
		UUI_Common_Transition_Anim_C_OnSolarUIOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Common_Transition_Anim.UI_Common_Transition_Anim_C.ExecuteUbergraph_UI_Common_Transition_Anim
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Common_Transition_Anim_C::ExecuteUbergraph_UI_Common_Transition_Anim(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Common_Transition_Anim.UI_Common_Transition_Anim_C.ExecuteUbergraph_UI_Common_Transition_Anim"));
		
		UUI_Common_Transition_Anim_C_ExecuteUbergraph_UI_Common_Transition_Anim_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Common_Transition_Anim_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Common_Transition_Anim_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_Common_Transition_Anim.UI_Common_Transition_Anim_C"));
		return ptr;
	}

}


