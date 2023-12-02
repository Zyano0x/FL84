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
	 * 		Name   -> Function UI_HUD_Notice_CutIn_Normal.UI_HUD_Notice_CutIn_Normal_C.Close
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_HUD_Notice_CutIn_Normal_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_HUD_Notice_CutIn_Normal.UI_HUD_Notice_CutIn_Normal_C.Close"));
		
		UUI_HUD_Notice_CutIn_Normal_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_HUD_Notice_CutIn_Normal.UI_HUD_Notice_CutIn_Normal_C.Show
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                                                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_Notice_CutIn_Normal_C::Show(const class FString& )
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_HUD_Notice_CutIn_Normal.UI_HUD_Notice_CutIn_Normal_C.Show"));
		
		UUI_HUD_Notice_CutIn_Normal_C_Show_Params params {};
		params. = ;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_HUD_Notice_CutIn_Normal.UI_HUD_Notice_CutIn_Normal_C.ExecuteUbergraph_UI_HUD_Notice_CutIn_Normal
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_Notice_CutIn_Normal_C::ExecuteUbergraph_UI_HUD_Notice_CutIn_Normal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_HUD_Notice_CutIn_Normal.UI_HUD_Notice_CutIn_Normal_C.ExecuteUbergraph_UI_HUD_Notice_CutIn_Normal"));
		
		UUI_HUD_Notice_CutIn_Normal_C_ExecuteUbergraph_UI_HUD_Notice_CutIn_Normal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_HUD_Notice_CutIn_Normal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HUD_Notice_CutIn_Normal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_HUD_Notice_CutIn_Normal.UI_HUD_Notice_CutIn_Normal_C"));
		return ptr;
	}

}


