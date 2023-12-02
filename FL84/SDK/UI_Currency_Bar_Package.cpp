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
	 * 		RVA    -> 0x00B59400
	 * 		Name   -> DelegateFunction UI_Currency_Bar.UI_Currency_Bar_C.OnClicked_1995FCE24DB86075CFE03E8BF59E135E
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UUI_Currency_Bar_C::OnClicked_1995FCE24DB86075CFE03E8BF59E135E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction UI_Currency_Bar.UI_Currency_Bar_C.OnClicked_1995FCE24DB86075CFE03E8BF59E135E"));
		
		UUI_Currency_Bar_C_OnClicked_1995FCE24DB86075CFE03E8BF59E135E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B59400
	 * 		Name   -> DelegateFunction UI_Currency_Bar.UI_Currency_Bar_C.OnClicked_1213894448A672B09A411FBEF5C124F9
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UUI_Currency_Bar_C::OnClicked_1213894448A672B09A411FBEF5C124F9()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction UI_Currency_Bar.UI_Currency_Bar_C.OnClicked_1213894448A672B09A411FBEF5C124F9"));
		
		UUI_Currency_Bar_C_OnClicked_1213894448A672B09A411FBEF5C124F9_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B59400
	 * 		Name   -> DelegateFunction UI_Currency_Bar.UI_Currency_Bar_C.OnClicked_0BB85F7D46852D3CBF9C05BC39C99B32
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UUI_Currency_Bar_C::OnClicked_0BB85F7D46852D3CBF9C05BC39C99B32()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction UI_Currency_Bar.UI_Currency_Bar_C.OnClicked_0BB85F7D46852D3CBF9C05BC39C99B32"));
		
		UUI_Currency_Bar_C_OnClicked_0BB85F7D46852D3CBF9C05BC39C99B32_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B59400
	 * 		Name   -> DelegateFunction UI_Currency_Bar.UI_Currency_Bar_C.OnClicked_4214716E40832847915E3199654DED87
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UUI_Currency_Bar_C::OnClicked_4214716E40832847915E3199654DED87()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction UI_Currency_Bar.UI_Currency_Bar_C.OnClicked_4214716E40832847915E3199654DED87"));
		
		UUI_Currency_Bar_C_OnClicked_4214716E40832847915E3199654DED87_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_Currency_Bar.UI_Currency_Bar_C.OnSolarUIOpened
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void UUI_Currency_Bar_C::OnSolarUIOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Currency_Bar.UI_Currency_Bar_C.OnSolarUIOpened"));
		
		UUI_Currency_Bar_C_OnSolarUIOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_Currency_Bar.UI_Currency_Bar_C.OnSolarUIClosed
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void UUI_Currency_Bar_C::OnSolarUIClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Currency_Bar.UI_Currency_Bar_C.OnSolarUIClosed"));
		
		UUI_Currency_Bar_C_OnSolarUIClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_Currency_Bar.UI_Currency_Bar_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Currency_Bar_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Currency_Bar.UI_Currency_Bar_C.Construct"));
		
		UUI_Currency_Bar_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Currency_Bar.UI_Currency_Bar_C.GetModuleName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString UUI_Currency_Bar_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Currency_Bar.UI_Currency_Bar_C.GetModuleName"));
		
		UUI_Currency_Bar_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Currency_Bar.UI_Currency_Bar_C.SetStateDesktop
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_Type_State_Desktop                               StateDesktopDiamond                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_Type_State_Desktop                               StateDesktopVip                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Currency_Bar_C::SetStateDesktop(E_Type_State_Desktop StateDesktopDiamond, E_Type_State_Desktop StateDesktopVip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Currency_Bar.UI_Currency_Bar_C.SetStateDesktop"));
		
		UUI_Currency_Bar_C_SetStateDesktop_Params params {};
		params.StateDesktopDiamond = StateDesktopDiamond;
		params.StateDesktopVip = StateDesktopVip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Currency_Bar.UI_Currency_Bar_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Currency_Bar_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Currency_Bar.UI_Currency_Bar_C.PreConstruct"));
		
		UUI_Currency_Bar_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Currency_Bar.UI_Currency_Bar_C.ExecuteUbergraph_UI_Currency_Bar
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Currency_Bar_C::ExecuteUbergraph_UI_Currency_Bar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Currency_Bar.UI_Currency_Bar_C.ExecuteUbergraph_UI_Currency_Bar"));
		
		UUI_Currency_Bar_C_ExecuteUbergraph_UI_Currency_Bar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Currency_Bar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Currency_Bar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_Currency_Bar.UI_Currency_Bar_C"));
		return ptr;
	}

}


