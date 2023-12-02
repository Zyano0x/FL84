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
	 * 		Name   -> Function UI_OpeningShow.UI_OpeningShow_C.UpdateOpeningShow
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EDefenderTeamType                                  TeamType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_OpeningShow_C::UpdateOpeningShow(EDefenderTeamType TeamType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_OpeningShow.UI_OpeningShow_C.UpdateOpeningShow"));
		
		UUI_OpeningShow_C_UpdateOpeningShow_Params params {};
		params.TeamType = TeamType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_OpeningShow.UI_OpeningShow_C.OnSolarUIOpened
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUI_OpeningShow_C::OnSolarUIOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_OpeningShow.UI_OpeningShow_C.OnSolarUIOpened"));
		
		UUI_OpeningShow_C_OnSolarUIOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_OpeningShow.UI_OpeningShow_C.OnSolarUIClosed
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUI_OpeningShow_C::OnSolarUIClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_OpeningShow.UI_OpeningShow_C.OnSolarUIClosed"));
		
		UUI_OpeningShow_C_OnSolarUIClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_OpeningShow.UI_OpeningShow_C.ExecuteUbergraph_UI_OpeningShow
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_OpeningShow_C::ExecuteUbergraph_UI_OpeningShow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_OpeningShow.UI_OpeningShow_C.ExecuteUbergraph_UI_OpeningShow"));
		
		UUI_OpeningShow_C_ExecuteUbergraph_UI_OpeningShow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_OpeningShow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_OpeningShow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_OpeningShow.UI_OpeningShow_C"));
		return ptr;
	}

}


