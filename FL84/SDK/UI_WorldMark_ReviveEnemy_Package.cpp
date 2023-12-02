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
	 * 		Name   -> Function UI_WorldMark_ReviveEnemy.UI_WorldMark_ReviveEnemy_C.GetVisibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UUI_WorldMark_ReviveEnemy_C::GetVisibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_WorldMark_ReviveEnemy.UI_WorldMark_ReviveEnemy_C.GetVisibility_1"));
		
		UUI_WorldMark_ReviveEnemy_C_GetVisibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_WorldMark_ReviveEnemy.UI_WorldMark_ReviveEnemy_C.Get_Distance_Text
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UUI_WorldMark_ReviveEnemy_C::Get_Distance_Text()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_WorldMark_ReviveEnemy.UI_WorldMark_ReviveEnemy_C.Get_Distance_Text"));
		
		UUI_WorldMark_ReviveEnemy_C_Get_Distance_Text_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_WorldMark_ReviveEnemy.UI_WorldMark_ReviveEnemy_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_WorldMark_ReviveEnemy_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_WorldMark_ReviveEnemy.UI_WorldMark_ReviveEnemy_C.PreConstruct"));
		
		UUI_WorldMark_ReviveEnemy_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_WorldMark_ReviveEnemy.UI_WorldMark_ReviveEnemy_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_WorldMark_ReviveEnemy_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_WorldMark_ReviveEnemy.UI_WorldMark_ReviveEnemy_C.OnInitialized"));
		
		UUI_WorldMark_ReviveEnemy_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_WorldMark_ReviveEnemy.UI_WorldMark_ReviveEnemy_C.ExecuteUbergraph_UI_WorldMark_ReviveEnemy
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_WorldMark_ReviveEnemy_C::ExecuteUbergraph_UI_WorldMark_ReviveEnemy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_WorldMark_ReviveEnemy.UI_WorldMark_ReviveEnemy_C.ExecuteUbergraph_UI_WorldMark_ReviveEnemy"));
		
		UUI_WorldMark_ReviveEnemy_C_ExecuteUbergraph_UI_WorldMark_ReviveEnemy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_WorldMark_ReviveEnemy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_WorldMark_ReviveEnemy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_WorldMark_ReviveEnemy.UI_WorldMark_ReviveEnemy_C"));
		return ptr;
	}

}


