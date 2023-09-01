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
	 * 		Name   -> Function UI_TabControl_Horizontal.UI_TabControl_Horizontal_C.SetBindWidget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UListView*                                   BindList                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_TabControl_Horizontal_C::SetBindWidget(class UListView** BindList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabControl_Horizontal.UI_TabControl_Horizontal_C.SetBindWidget");
		
		UUI_TabControl_Horizontal_C_SetBindWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BindList != nullptr)
			*BindList = params.BindList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_TabControl_Horizontal.UI_TabControl_Horizontal_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_TabControl_Horizontal_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabControl_Horizontal.UI_TabControl_Horizontal_C.PreConstruct");
		
		UUI_TabControl_Horizontal_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_TabControl_Horizontal.UI_TabControl_Horizontal_C.ExecuteUbergraph_UI_TabControl_Horizontal
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_TabControl_Horizontal_C::ExecuteUbergraph_UI_TabControl_Horizontal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabControl_Horizontal.UI_TabControl_Horizontal_C.ExecuteUbergraph_UI_TabControl_Horizontal");
		
		UUI_TabControl_Horizontal_C_ExecuteUbergraph_UI_TabControl_Horizontal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_TabControl_Horizontal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_TabControl_Horizontal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_TabControl_Horizontal.UI_TabControl_Horizontal_C");
		return ptr;
	}

}


