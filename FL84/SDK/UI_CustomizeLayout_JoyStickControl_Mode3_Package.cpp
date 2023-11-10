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
	 * 		RVA    -> 0x02D64A40
	 * 		Name   -> Function UI_CustomizeLayout_JoyStickControl_Mode3.UI_CustomizeLayout_JoyStickControl_Mode3_C.GetModuleName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString UUI_CustomizeLayout_JoyStickControl_Mode3_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CustomizeLayout_JoyStickControl_Mode3.UI_CustomizeLayout_JoyStickControl_Mode3_C.GetModuleName"));
		
		UUI_CustomizeLayout_JoyStickControl_Mode3_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64A40
	 * 		Name   -> Function UI_CustomizeLayout_JoyStickControl_Mode3.UI_CustomizeLayout_JoyStickControl_Mode3_C.Get_Hero01_CheckedState_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ECheckBoxState UUI_CustomizeLayout_JoyStickControl_Mode3_C::Get_Hero01_CheckedState_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CustomizeLayout_JoyStickControl_Mode3.UI_CustomizeLayout_JoyStickControl_Mode3_C.Get_Hero01_CheckedState_1"));
		
		UUI_CustomizeLayout_JoyStickControl_Mode3_C_Get_Hero01_CheckedState_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64A40
	 * 		Name   -> Function UI_CustomizeLayout_JoyStickControl_Mode3.UI_CustomizeLayout_JoyStickControl_Mode3_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CustomizeLayout_JoyStickControl_Mode3_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CustomizeLayout_JoyStickControl_Mode3.UI_CustomizeLayout_JoyStickControl_Mode3_C.PreConstruct"));
		
		UUI_CustomizeLayout_JoyStickControl_Mode3_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64A40
	 * 		Name   -> Function UI_CustomizeLayout_JoyStickControl_Mode3.UI_CustomizeLayout_JoyStickControl_Mode3_C.ExecuteUbergraph_UI_CustomizeLayout_JoyStickControl_Mode3
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CustomizeLayout_JoyStickControl_Mode3_C::ExecuteUbergraph_UI_CustomizeLayout_JoyStickControl_Mode3(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CustomizeLayout_JoyStickControl_Mode3.UI_CustomizeLayout_JoyStickControl_Mode3_C.ExecuteUbergraph_UI_CustomizeLayout_JoyStickControl_Mode3"));
		
		UUI_CustomizeLayout_JoyStickControl_Mode3_C_ExecuteUbergraph_UI_CustomizeLayout_JoyStickControl_Mode3_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CustomizeLayout_JoyStickControl_Mode3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CustomizeLayout_JoyStickControl_Mode3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_CustomizeLayout_JoyStickControl_Mode3.UI_CustomizeLayout_JoyStickControl_Mode3_C"));
		return ptr;
	}

}


