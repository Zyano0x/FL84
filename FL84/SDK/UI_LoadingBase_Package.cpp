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
	 * 		Name   -> Function UI_LoadingBase.UI_LoadingBase_C.StartLoading
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_LoadingBase_C::StartLoading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LoadingBase.UI_LoadingBase_C.StartLoading");
		
		UUI_LoadingBase_C_StartLoading_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_LoadingBase.UI_LoadingBase_C.FinishLoading
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_LoadingBase_C::FinishLoading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LoadingBase.UI_LoadingBase_C.FinishLoading");
		
		UUI_LoadingBase_C_FinishLoading_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_LoadingBase.UI_LoadingBase_C.ExecuteUbergraph_UI_LoadingBase
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_LoadingBase_C::ExecuteUbergraph_UI_LoadingBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_LoadingBase.UI_LoadingBase_C.ExecuteUbergraph_UI_LoadingBase");
		
		UUI_LoadingBase_C_ExecuteUbergraph_UI_LoadingBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_LoadingBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_LoadingBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_LoadingBase.UI_LoadingBase_C");
		return ptr;
	}

}


