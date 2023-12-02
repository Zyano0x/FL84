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
	 * 		Name   -> Function UI_Lobby_Activity_All_Desktop.UI_Lobby_Activity_All_Desktop_C.SetStateDesktop
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_TabLobbyItemState                                StateHD                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Lobby_Activity_All_Desktop_C::SetStateDesktop(E_TabLobbyItemState StateHD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Lobby_Activity_All_Desktop.UI_Lobby_Activity_All_Desktop_C.SetStateDesktop"));
		
		UUI_Lobby_Activity_All_Desktop_C_SetStateDesktop_Params params {};
		params.StateHD = StateHD;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Lobby_Activity_All_Desktop.UI_Lobby_Activity_All_Desktop_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Lobby_Activity_All_Desktop_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Lobby_Activity_All_Desktop.UI_Lobby_Activity_All_Desktop_C.PreConstruct"));
		
		UUI_Lobby_Activity_All_Desktop_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Lobby_Activity_All_Desktop.UI_Lobby_Activity_All_Desktop_C.ExecuteUbergraph_UI_Lobby_Activity_All_Desktop
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Lobby_Activity_All_Desktop_C::ExecuteUbergraph_UI_Lobby_Activity_All_Desktop(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Lobby_Activity_All_Desktop.UI_Lobby_Activity_All_Desktop_C.ExecuteUbergraph_UI_Lobby_Activity_All_Desktop"));
		
		UUI_Lobby_Activity_All_Desktop_C_ExecuteUbergraph_UI_Lobby_Activity_All_Desktop_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Lobby_Activity_All_Desktop_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Lobby_Activity_All_Desktop_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_Lobby_Activity_All_Desktop.UI_Lobby_Activity_All_Desktop_C"));
		return ptr;
	}

}


