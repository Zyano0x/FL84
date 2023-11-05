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
	 * 		RVA    -> 0x00B5E720
	 * 		Name   -> DelegateFunction UI_Currency_Bar.UI_Currency_Bar_C.OnClicked_6E78FC9E46B098A1927284AAA21E3D66
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UUI_Currency_Bar_C::OnClicked_6E78FC9E46B098A1927284AAA21E3D66()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction UI_Currency_Bar.UI_Currency_Bar_C.OnClicked_6E78FC9E46B098A1927284AAA21E3D66"));
		
		UUI_Currency_Bar_C_OnClicked_6E78FC9E46B098A1927284AAA21E3D66_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B5E720
	 * 		Name   -> DelegateFunction UI_Currency_Bar.UI_Currency_Bar_C.OnClicked_400DD5ED40EAE2E734166B9DC44B2B56
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UUI_Currency_Bar_C::OnClicked_400DD5ED40EAE2E734166B9DC44B2B56()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction UI_Currency_Bar.UI_Currency_Bar_C.OnClicked_400DD5ED40EAE2E734166B9DC44B2B56"));
		
		UUI_Currency_Bar_C_OnClicked_400DD5ED40EAE2E734166B9DC44B2B56_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B5E720
	 * 		Name   -> DelegateFunction UI_Currency_Bar.UI_Currency_Bar_C.OnClicked_4910C97048176A6F1C12D1B35CA71427
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UUI_Currency_Bar_C::OnClicked_4910C97048176A6F1C12D1B35CA71427()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction UI_Currency_Bar.UI_Currency_Bar_C.OnClicked_4910C97048176A6F1C12D1B35CA71427"));
		
		UUI_Currency_Bar_C_OnClicked_4910C97048176A6F1C12D1B35CA71427_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B5E720
	 * 		Name   -> DelegateFunction UI_Currency_Bar.UI_Currency_Bar_C.OnClicked_CC9BE56D485D0C97063C3A838B18AEDA
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UUI_Currency_Bar_C::OnClicked_CC9BE56D485D0C97063C3A838B18AEDA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction UI_Currency_Bar.UI_Currency_Bar_C.OnClicked_CC9BE56D485D0C97063C3A838B18AEDA"));
		
		UUI_Currency_Bar_C_OnClicked_CC9BE56D485D0C97063C3A838B18AEDA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6C980
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
	 * 		RVA    -> 0x00B6C980
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
	 * 		RVA    -> 0x00B6C980
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
	 * 		RVA    -> 0x02D64C70
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
	 * 		RVA    -> 0x02D64C70
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
	 * 		RVA    -> 0x02D64C70
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
	 * 		RVA    -> 0x02D64C70
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


