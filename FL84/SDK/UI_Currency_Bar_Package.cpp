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
	 * 		RVA    -> 0x00B5BE00
	 * 		Name   -> DelegateFunction UI_Currency_Bar.UI_Currency_Bar_C.OnClicked_020FD53143CD4391E11F6285F2B34C91
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UUI_Currency_Bar_C::OnClicked_020FD53143CD4391E11F6285F2B34C91()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction UI_Currency_Bar.UI_Currency_Bar_C.OnClicked_020FD53143CD4391E11F6285F2B34C91"));
		
		UUI_Currency_Bar_C_OnClicked_020FD53143CD4391E11F6285F2B34C91_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B5BE00
	 * 		Name   -> DelegateFunction UI_Currency_Bar.UI_Currency_Bar_C.OnClicked_CD382D804422C5C489C50AB004661BFA
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UUI_Currency_Bar_C::OnClicked_CD382D804422C5C489C50AB004661BFA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction UI_Currency_Bar.UI_Currency_Bar_C.OnClicked_CD382D804422C5C489C50AB004661BFA"));
		
		UUI_Currency_Bar_C_OnClicked_CD382D804422C5C489C50AB004661BFA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B5BE00
	 * 		Name   -> DelegateFunction UI_Currency_Bar.UI_Currency_Bar_C.OnClicked_73CE979448CBEE6FA7AD25BEC10C2293
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UUI_Currency_Bar_C::OnClicked_73CE979448CBEE6FA7AD25BEC10C2293()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction UI_Currency_Bar.UI_Currency_Bar_C.OnClicked_73CE979448CBEE6FA7AD25BEC10C2293"));
		
		UUI_Currency_Bar_C_OnClicked_73CE979448CBEE6FA7AD25BEC10C2293_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B5BE00
	 * 		Name   -> DelegateFunction UI_Currency_Bar.UI_Currency_Bar_C.OnClicked_77281A174AEFFA05C63D7E9045775082
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UUI_Currency_Bar_C::OnClicked_77281A174AEFFA05C63D7E9045775082()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction UI_Currency_Bar.UI_Currency_Bar_C.OnClicked_77281A174AEFFA05C63D7E9045775082"));
		
		UUI_Currency_Bar_C_OnClicked_77281A174AEFFA05C63D7E9045775082_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6A060
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
	 * 		RVA    -> 0x00B6A060
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
	 * 		RVA    -> 0x00B6A060
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
	 * 		RVA    -> 0x02D64A40
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
	 * 		RVA    -> 0x02D64A40
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
	 * 		RVA    -> 0x02D64A40
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
	 * 		RVA    -> 0x02D64A40
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


