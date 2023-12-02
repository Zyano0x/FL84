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
	 * 		Name   -> Function UI_HUD_Notice_VICTORY_Desktop.UI_HUD_Notice_VICTORY_Desktop_C.GetModuleName
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString UUI_HUD_Notice_VICTORY_Desktop_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_HUD_Notice_VICTORY_Desktop.UI_HUD_Notice_VICTORY_Desktop_C.GetModuleName"));
		
		UUI_HUD_Notice_VICTORY_Desktop_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_HUD_Notice_VICTORY_Desktop.UI_HUD_Notice_VICTORY_Desktop_C.CloseSelf
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_HUD_Notice_VICTORY_Desktop_C::CloseSelf()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_HUD_Notice_VICTORY_Desktop.UI_HUD_Notice_VICTORY_Desktop_C.CloseSelf"));
		
		UUI_HUD_Notice_VICTORY_Desktop_C_CloseSelf_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_HUD_Notice_VICTORY_Desktop.UI_HUD_Notice_VICTORY_Desktop_C.OnEndAnimFinish
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUI_HUD_Notice_VICTORY_Desktop_C::OnEndAnimFinish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_HUD_Notice_VICTORY_Desktop.UI_HUD_Notice_VICTORY_Desktop_C.OnEndAnimFinish"));
		
		UUI_HUD_Notice_VICTORY_Desktop_C_OnEndAnimFinish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_HUD_Notice_VICTORY_Desktop.UI_HUD_Notice_VICTORY_Desktop_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HUD_Notice_VICTORY_Desktop_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_HUD_Notice_VICTORY_Desktop.UI_HUD_Notice_VICTORY_Desktop_C.PreConstruct"));
		
		UUI_HUD_Notice_VICTORY_Desktop_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_HUD_Notice_VICTORY_Desktop.UI_HUD_Notice_VICTORY_Desktop_C.OnSolarUIClosed
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUI_HUD_Notice_VICTORY_Desktop_C::OnSolarUIClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_HUD_Notice_VICTORY_Desktop.UI_HUD_Notice_VICTORY_Desktop_C.OnSolarUIClosed"));
		
		UUI_HUD_Notice_VICTORY_Desktop_C_OnSolarUIClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_HUD_Notice_VICTORY_Desktop.UI_HUD_Notice_VICTORY_Desktop_C.ExecuteUbergraph_UI_HUD_Notice_VICTORY_Desktop
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_Notice_VICTORY_Desktop_C::ExecuteUbergraph_UI_HUD_Notice_VICTORY_Desktop(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_HUD_Notice_VICTORY_Desktop.UI_HUD_Notice_VICTORY_Desktop_C.ExecuteUbergraph_UI_HUD_Notice_VICTORY_Desktop"));
		
		UUI_HUD_Notice_VICTORY_Desktop_C_ExecuteUbergraph_UI_HUD_Notice_VICTORY_Desktop_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_HUD_Notice_VICTORY_Desktop_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HUD_Notice_VICTORY_Desktop_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_HUD_Notice_VICTORY_Desktop.UI_HUD_Notice_VICTORY_Desktop_C"));
		return ptr;
	}

}


