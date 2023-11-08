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
	 * 		RVA    -> 0x00B5D930
	 * 		Name   -> DelegateFunction UI_Settings_Basic_New.UI_Settings_Basic_New_C.OnStateChangedEvent_119AF17D4A8674F705F468A4F4AAA439
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		int32_t                                            InLastButtonIndex                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_Settings_Basic_New_C::OnStateChangedEvent_119AF17D4A8674F705F468A4F4AAA439(int32_t InLastButtonIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction UI_Settings_Basic_New.UI_Settings_Basic_New_C.OnStateChangedEvent_119AF17D4A8674F705F468A4F4AAA439"));
		
		UUI_Settings_Basic_New_C_OnStateChangedEvent_119AF17D4A8674F705F468A4F4AAA439_Params params {};
		params.InLastButtonIndex = InLastButtonIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B5D930
	 * 		Name   -> Function UI_Settings_Basic_New.UI_Settings_Basic_New_C.OnClicked_E5F7D7E84AF8D3D91192A5A33F0CCDF2
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Settings_Basic_New_C::OnClicked_E5F7D7E84AF8D3D91192A5A33F0CCDF2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Settings_Basic_New.UI_Settings_Basic_New_C.OnClicked_E5F7D7E84AF8D3D91192A5A33F0CCDF2"));
		
		UUI_Settings_Basic_New_C_OnClicked_E5F7D7E84AF8D3D91192A5A33F0CCDF2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B5D930
	 * 		Name   -> Function UI_Settings_Basic_New.UI_Settings_Basic_New_C.OnClicked_CA806DAB4124CC921723B8BDA6DEBC37
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Settings_Basic_New_C::OnClicked_CA806DAB4124CC921723B8BDA6DEBC37()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Settings_Basic_New.UI_Settings_Basic_New_C.OnClicked_CA806DAB4124CC921723B8BDA6DEBC37"));
		
		UUI_Settings_Basic_New_C_OnClicked_CA806DAB4124CC921723B8BDA6DEBC37_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B5D930
	 * 		Name   -> Function UI_Settings_Basic_New.UI_Settings_Basic_New_C.OnClicked_BA99E39F417A40A5BAA8759930536F6E
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Settings_Basic_New_C::OnClicked_BA99E39F417A40A5BAA8759930536F6E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Settings_Basic_New.UI_Settings_Basic_New_C.OnClicked_BA99E39F417A40A5BAA8759930536F6E"));
		
		UUI_Settings_Basic_New_C_OnClicked_BA99E39F417A40A5BAA8759930536F6E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6BB90
	 * 		Name   -> Function UI_Settings_Basic_New.UI_Settings_Basic_New_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Settings_Basic_New_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Settings_Basic_New.UI_Settings_Basic_New_C.OnInitialized"));
		
		UUI_Settings_Basic_New_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6BB90
	 * 		Name   -> Function UI_Settings_Basic_New.UI_Settings_Basic_New_C.OnSolarUIOpened
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void UUI_Settings_Basic_New_C::OnSolarUIOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Settings_Basic_New.UI_Settings_Basic_New_C.OnSolarUIOpened"));
		
		UUI_Settings_Basic_New_C_OnSolarUIOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6BB90
	 * 		Name   -> Function UI_Settings_Basic_New.UI_Settings_Basic_New_C.OnSolarUIClosed
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void UUI_Settings_Basic_New_C::OnSolarUIClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Settings_Basic_New.UI_Settings_Basic_New_C.OnSolarUIClosed"));
		
		UUI_Settings_Basic_New_C_OnSolarUIClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D63E80
	 * 		Name   -> Function UI_Settings_Basic_New.UI_Settings_Basic_New_C.GetModuleName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString UUI_Settings_Basic_New_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Settings_Basic_New.UI_Settings_Basic_New_C.GetModuleName"));
		
		UUI_Settings_Basic_New_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Settings_Basic_New_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Settings_Basic_New_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_Settings_Basic_New.UI_Settings_Basic_New_C"));
		return ptr;
	}

}


