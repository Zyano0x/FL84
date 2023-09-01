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
	 * 		Name   -> Function Crosshair_Simple_En.Crosshair_Simple_En_C.GetReloadWidget
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UUserWidget* UCrosshair_Simple_En_C::GetReloadWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crosshair_Simple_En.Crosshair_Simple_En_C.GetReloadWidget");
		
		UCrosshair_Simple_En_C_GetReloadWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function Crosshair_Simple_En.Crosshair_Simple_En_C.GetAmmoWidget
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UUserWidget* UCrosshair_Simple_En_C::GetAmmoWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crosshair_Simple_En.Crosshair_Simple_En_C.GetAmmoWidget");
		
		UCrosshair_Simple_En_C_GetAmmoWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function Crosshair_Simple_En.Crosshair_Simple_En_C.Update
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCrosshair_Simple_En_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crosshair_Simple_En.Crosshair_Simple_En_C.Update");
		
		UCrosshair_Simple_En_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function Crosshair_Simple_En.Crosshair_Simple_En_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UCrosshair_Simple_En_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crosshair_Simple_En.Crosshair_Simple_En_C.Construct");
		
		UCrosshair_Simple_En_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function Crosshair_Simple_En.Crosshair_Simple_En_C.ExecuteUbergraph_Crosshair_Simple_En
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrosshair_Simple_En_C::ExecuteUbergraph_Crosshair_Simple_En(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crosshair_Simple_En.Crosshair_Simple_En_C.ExecuteUbergraph_Crosshair_Simple_En");
		
		UCrosshair_Simple_En_C_ExecuteUbergraph_Crosshair_Simple_En_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrosshair_Simple_En_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrosshair_Simple_En_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Crosshair_Simple_En.Crosshair_Simple_En_C");
		return ptr;
	}

}


