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
	 * 		Name   -> Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Lobby_Sanctuary_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.Destruct"));
		
		UUI_Lobby_Sanctuary_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.ConstructCopy
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Lobby_Sanctuary_C::ConstructCopy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.ConstructCopy"));
		
		UUI_Lobby_Sanctuary_C_ConstructCopy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.OnSolarUIOpened
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void UUI_Lobby_Sanctuary_C::OnSolarUIOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.OnSolarUIOpened"));
		
		UUI_Lobby_Sanctuary_C_OnSolarUIOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.OnSolarUIClosed
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void UUI_Lobby_Sanctuary_C::OnSolarUIClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.OnSolarUIClosed"));
		
		UUI_Lobby_Sanctuary_C_OnSolarUIClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.GetModuleName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString UUI_Lobby_Sanctuary_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.GetModuleName"));
		
		UUI_Lobby_Sanctuary_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.BP_RefreshSanctuaryUI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bInLocked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInMatching                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Lobby_Sanctuary_C::BP_RefreshSanctuaryUI(bool bInLocked, bool bInMatching)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.BP_RefreshSanctuaryUI"));
		
		UUI_Lobby_Sanctuary_C_BP_RefreshSanctuaryUI_Params params {};
		params.bInLocked = bInLocked;
		params.bInMatching = bInMatching;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Lobby_Sanctuary_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.PreConstruct"));
		
		UUI_Lobby_Sanctuary_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Lobby_Sanctuary_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.Construct"));
		
		UUI_Lobby_Sanctuary_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.ExecuteUbergraph_UI_Lobby_Sanctuary
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Lobby_Sanctuary_C::ExecuteUbergraph_UI_Lobby_Sanctuary(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.ExecuteUbergraph_UI_Lobby_Sanctuary"));
		
		UUI_Lobby_Sanctuary_C_ExecuteUbergraph_UI_Lobby_Sanctuary_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Lobby_Sanctuary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Lobby_Sanctuary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C"));
		return ptr;
	}

}


