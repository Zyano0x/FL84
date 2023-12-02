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
	 * 		Name   -> Function UI_CreateRoom_HUD_Prize.UI_CreateRoom_HUD_Prize_C.GetModuleName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString UUI_CreateRoom_HUD_Prize_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_HUD_Prize.UI_CreateRoom_HUD_Prize_C.GetModuleName"));
		
		UUI_CreateRoom_HUD_Prize_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_HUD_Prize.UI_CreateRoom_HUD_Prize_C.SetPrizeType
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PrizeType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_HUD_Prize_C::SetPrizeType(int32_t PrizeType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_HUD_Prize.UI_CreateRoom_HUD_Prize_C.SetPrizeType"));
		
		UUI_CreateRoom_HUD_Prize_C_SetPrizeType_Params params {};
		params.PrizeType = PrizeType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_HUD_Prize.UI_CreateRoom_HUD_Prize_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CreateRoom_HUD_Prize_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_HUD_Prize.UI_CreateRoom_HUD_Prize_C.PreConstruct"));
		
		UUI_CreateRoom_HUD_Prize_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_HUD_Prize.UI_CreateRoom_HUD_Prize_C.ExecuteUbergraph_UI_CreateRoom_HUD_Prize
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_HUD_Prize_C::ExecuteUbergraph_UI_CreateRoom_HUD_Prize(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_HUD_Prize.UI_CreateRoom_HUD_Prize_C.ExecuteUbergraph_UI_CreateRoom_HUD_Prize"));
		
		UUI_CreateRoom_HUD_Prize_C_ExecuteUbergraph_UI_CreateRoom_HUD_Prize_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CreateRoom_HUD_Prize_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CreateRoom_HUD_Prize_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_CreateRoom_HUD_Prize.UI_CreateRoom_HUD_Prize_C"));
		return ptr;
	}

}


