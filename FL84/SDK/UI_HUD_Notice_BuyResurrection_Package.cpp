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
	 * 		Name   -> Function UI_HUD_Notice_BuyResurrection.UI_HUD_Notice_BuyResurrection_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_HUD_Notice_BuyResurrection_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_HUD_Notice_BuyResurrection.UI_HUD_Notice_BuyResurrection_C.Construct"));
		
		UUI_HUD_Notice_BuyResurrection_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_HUD_Notice_BuyResurrection.UI_HUD_Notice_BuyResurrection_C.ShowNotice
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_Notice_BuyResurrection_C::ShowNotice(const class FString& Text, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_HUD_Notice_BuyResurrection.UI_HUD_Notice_BuyResurrection_C.ShowNotice"));
		
		UUI_HUD_Notice_BuyResurrection_C_ShowNotice_Params params {};
		params.Text = Text;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_HUD_Notice_BuyResurrection.UI_HUD_Notice_BuyResurrection_C.ExecuteUbergraph_UI_HUD_Notice_BuyResurrection
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_Notice_BuyResurrection_C::ExecuteUbergraph_UI_HUD_Notice_BuyResurrection(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_HUD_Notice_BuyResurrection.UI_HUD_Notice_BuyResurrection_C.ExecuteUbergraph_UI_HUD_Notice_BuyResurrection"));
		
		UUI_HUD_Notice_BuyResurrection_C_ExecuteUbergraph_UI_HUD_Notice_BuyResurrection_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_HUD_Notice_BuyResurrection_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HUD_Notice_BuyResurrection_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_HUD_Notice_BuyResurrection.UI_HUD_Notice_BuyResurrection_C"));
		return ptr;
	}

}


