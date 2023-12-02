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
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_TeamInvite_Container.UI_TeamInvite_Container_C.OnSolarUIOpened
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void UUI_TeamInvite_Container_C::OnSolarUIOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_TeamInvite_Container.UI_TeamInvite_Container_C.OnSolarUIOpened"));
		
		UUI_TeamInvite_Container_C_OnSolarUIOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_TeamInvite_Container.UI_TeamInvite_Container_C.OnShow
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void UUI_TeamInvite_Container_C::OnShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_TeamInvite_Container.UI_TeamInvite_Container_C.OnShow"));
		
		UUI_TeamInvite_Container_C_OnShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_TeamInvite_Container.UI_TeamInvite_Container_C.OnHide
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void UUI_TeamInvite_Container_C::OnHide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_TeamInvite_Container.UI_TeamInvite_Container_C.OnHide"));
		
		UUI_TeamInvite_Container_C_OnHide_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_TeamInvite_Container.UI_TeamInvite_Container_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_TeamInvite_Container_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_TeamInvite_Container.UI_TeamInvite_Container_C.OnInitialized"));
		
		UUI_TeamInvite_Container_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_TeamInvite_Container.UI_TeamInvite_Container_C.OnSolarUIClosed
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void UUI_TeamInvite_Container_C::OnSolarUIClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_TeamInvite_Container.UI_TeamInvite_Container_C.OnSolarUIClosed"));
		
		UUI_TeamInvite_Container_C_OnSolarUIClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_TeamInvite_Container.UI_TeamInvite_Container_C.GetModuleName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString UUI_TeamInvite_Container_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_TeamInvite_Container.UI_TeamInvite_Container_C.GetModuleName"));
		
		UUI_TeamInvite_Container_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_TeamInvite_Container_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_TeamInvite_Container_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_TeamInvite_Container.UI_TeamInvite_Container_C"));
		return ptr;
	}

}


