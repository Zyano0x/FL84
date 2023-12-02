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
	 * 		Name   -> Function UI_HUD_Notice_Lv2.UI_HUD_Notice_Lv2_C.GetExitAnimation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UWidgetAnimation* UUI_HUD_Notice_Lv2_C::GetExitAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_HUD_Notice_Lv2.UI_HUD_Notice_Lv2_C.GetExitAnimation"));
		
		UUI_HUD_Notice_Lv2_C_GetExitAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_HUD_Notice_Lv2.UI_HUD_Notice_Lv2_C.GetEnterAnimation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UWidgetAnimation* UUI_HUD_Notice_Lv2_C::GetEnterAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_HUD_Notice_Lv2.UI_HUD_Notice_Lv2_C.GetEnterAnimation"));
		
		UUI_HUD_Notice_Lv2_C_GetEnterAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_HUD_Notice_Lv2.UI_HUD_Notice_Lv2_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_HUD_Notice_Lv2_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_HUD_Notice_Lv2.UI_HUD_Notice_Lv2_C.Construct"));
		
		UUI_HUD_Notice_Lv2_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_HUD_Notice_Lv2.UI_HUD_Notice_Lv2_C.ExecuteUbergraph_UI_HUD_Notice_Lv2
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_Notice_Lv2_C::ExecuteUbergraph_UI_HUD_Notice_Lv2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_HUD_Notice_Lv2.UI_HUD_Notice_Lv2_C.ExecuteUbergraph_UI_HUD_Notice_Lv2"));
		
		UUI_HUD_Notice_Lv2_C_ExecuteUbergraph_UI_HUD_Notice_Lv2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_HUD_Notice_Lv2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HUD_Notice_Lv2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_HUD_Notice_Lv2.UI_HUD_Notice_Lv2_C"));
		return ptr;
	}

}


