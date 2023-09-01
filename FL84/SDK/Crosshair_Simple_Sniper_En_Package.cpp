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
	 * 		Name   -> Function Crosshair_Simple_Sniper_En.Crosshair_Simple_Sniper_En_C.GetChargeWidget
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UUserWidget* UCrosshair_Simple_Sniper_En_C::GetChargeWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crosshair_Simple_Sniper_En.Crosshair_Simple_Sniper_En_C.GetChargeWidget");
		
		UCrosshair_Simple_Sniper_En_C_GetChargeWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrosshair_Simple_Sniper_En_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrosshair_Simple_Sniper_En_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Crosshair_Simple_Sniper_En.Crosshair_Simple_Sniper_En_C");
		return ptr;
	}

}


