/**
 * Name: FL84
 * Version: 1.14.4.6.511026
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.GetModuleName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString UUI_Rank_Icon_Small_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.GetModuleName");
		
		UUI_Rank_Icon_Small_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B2C110
	 * 		Name   -> Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.FormatViewJustIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            LevelID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Rank_Icon_Small_C::FormatViewJustIcon(int32_t LevelID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.FormatViewJustIcon");
		
		UUI_Rank_Icon_Small_C_FormatViewJustIcon_Params params {};
		params.LevelID = LevelID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.SetStar
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               STAR                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Rank_Icon_Small_C::SetStar(bool STAR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.SetStar");
		
		UUI_Rank_Icon_Small_C_SetStar_Params params {};
		params.STAR = STAR;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B2C110
	 * 		Name   -> Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.FormatView
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            LevelID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Rank_Icon_Small_C::FormatView(int32_t LevelID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.FormatView");
		
		UUI_Rank_Icon_Small_C_FormatView_Params params {};
		params.LevelID = LevelID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Rank_Icon_Small_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.PreConstruct");
		
		UUI_Rank_Icon_Small_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.SetRankIconView
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Rank_Icon_Small_C::SetRankIconView(int32_t Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.SetRankIconView");
		
		UUI_Rank_Icon_Small_C_SetRankIconView_Params params {};
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.ExecuteUbergraph_UI_Rank_Icon_Small
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Rank_Icon_Small_C::ExecuteUbergraph_UI_Rank_Icon_Small(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.ExecuteUbergraph_UI_Rank_Icon_Small");
		
		UUI_Rank_Icon_Small_C_ExecuteUbergraph_UI_Rank_Icon_Small_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Rank_Icon_Small_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Rank_Icon_Small_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Rank_Icon_Small.UI_Rank_Icon_Small_C");
		return ptr;
	}

}


