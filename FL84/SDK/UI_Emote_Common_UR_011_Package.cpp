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
	 * 		Name   -> Function UI_Emote_Common_UR_011.UI_Emote_Common_UR_011_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Emote_Common_UR_011_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Emote_Common_UR_011.UI_Emote_Common_UR_011_C.PreConstruct"));
		
		UUI_Emote_Common_UR_011_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Emote_Common_UR_011.UI_Emote_Common_UR_011_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Emote_Common_UR_011_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Emote_Common_UR_011.UI_Emote_Common_UR_011_C.Construct"));
		
		UUI_Emote_Common_UR_011_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Emote_Common_UR_011.UI_Emote_Common_UR_011_C.ExecuteUbergraph_UI_Emote_Common_UR_011
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Emote_Common_UR_011_C::ExecuteUbergraph_UI_Emote_Common_UR_011(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Emote_Common_UR_011.UI_Emote_Common_UR_011_C.ExecuteUbergraph_UI_Emote_Common_UR_011"));
		
		UUI_Emote_Common_UR_011_C_ExecuteUbergraph_UI_Emote_Common_UR_011_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Emote_Common_UR_011_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Emote_Common_UR_011_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_Emote_Common_UR_011.UI_Emote_Common_UR_011_C"));
		return ptr;
	}

}


