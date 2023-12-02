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
	 * 		Name   -> DelegateFunction UI_Lobby_Tips_Container.UI_Lobby_Tips_Container_C.OnClicked_BB6355F14823DB75561F199B74613B59
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UUI_Lobby_Tips_Container_C::OnClicked_BB6355F14823DB75561F199B74613B59()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction UI_Lobby_Tips_Container.UI_Lobby_Tips_Container_C.OnClicked_BB6355F14823DB75561F199B74613B59"));
		
		UUI_Lobby_Tips_Container_C_OnClicked_BB6355F14823DB75561F199B74613B59_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B59400
	 * 		Name   -> DelegateFunction UI_Lobby_Tips_Container.UI_Lobby_Tips_Container_C.OnPressed_A3E3E36C400F24F57EC207B82F8F933A
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UUI_Lobby_Tips_Container_C::OnPressed_A3E3E36C400F24F57EC207B82F8F933A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction UI_Lobby_Tips_Container.UI_Lobby_Tips_Container_C.OnPressed_A3E3E36C400F24F57EC207B82F8F933A"));
		
		UUI_Lobby_Tips_Container_C_OnPressed_A3E3E36C400F24F57EC207B82F8F933A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_Lobby_Tips_Container.UI_Lobby_Tips_Container_C.OnHide
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void UUI_Lobby_Tips_Container_C::OnHide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Lobby_Tips_Container.UI_Lobby_Tips_Container_C.OnHide"));
		
		UUI_Lobby_Tips_Container_C_OnHide_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_Lobby_Tips_Container.UI_Lobby_Tips_Container_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Lobby_Tips_Container_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Lobby_Tips_Container.UI_Lobby_Tips_Container_C.Construct"));
		
		UUI_Lobby_Tips_Container_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_Lobby_Tips_Container.UI_Lobby_Tips_Container_C.OnShow
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void UUI_Lobby_Tips_Container_C::OnShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Lobby_Tips_Container.UI_Lobby_Tips_Container_C.OnShow"));
		
		UUI_Lobby_Tips_Container_C_OnShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_Lobby_Tips_Container.UI_Lobby_Tips_Container_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Lobby_Tips_Container_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Lobby_Tips_Container.UI_Lobby_Tips_Container_C.Destruct"));
		
		UUI_Lobby_Tips_Container_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Lobby_Tips_Container.UI_Lobby_Tips_Container_C.GetModuleName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString UUI_Lobby_Tips_Container_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Lobby_Tips_Container.UI_Lobby_Tips_Container_C.GetModuleName"));
		
		UUI_Lobby_Tips_Container_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Lobby_Tips_Container_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Lobby_Tips_Container_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_Lobby_Tips_Container.UI_Lobby_Tips_Container_C"));
		return ptr;
	}

}


