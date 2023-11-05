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
	 * 		RVA    -> 0x02D64C70
	 * 		Name   -> Function BP_SolarScreenEffectWidget.BP_SolarScreenEffectWidget_C.FadeOutScreenEffect
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_SolarScreenEffectWidget_C::FadeOutScreenEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarScreenEffectWidget.BP_SolarScreenEffectWidget_C.FadeOutScreenEffect"));
		
		UBP_SolarScreenEffectWidget_C_FadeOutScreenEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64C70
	 * 		Name   -> Function BP_SolarScreenEffectWidget.BP_SolarScreenEffectWidget_C.IsFadeOutFinished
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UBP_SolarScreenEffectWidget_C::IsFadeOutFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarScreenEffectWidget.BP_SolarScreenEffectWidget_C.IsFadeOutFinished"));
		
		UBP_SolarScreenEffectWidget_C_IsFadeOutFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64C70
	 * 		Name   -> Function BP_SolarScreenEffectWidget.BP_SolarScreenEffectWidget_C.IsInstantEffectComplete
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UBP_SolarScreenEffectWidget_C::IsInstantEffectComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarScreenEffectWidget.BP_SolarScreenEffectWidget_C.IsInstantEffectComplete"));
		
		UBP_SolarScreenEffectWidget_C_IsInstantEffectComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_SolarScreenEffectWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_SolarScreenEffectWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass BP_SolarScreenEffectWidget.BP_SolarScreenEffectWidget_C"));
		return ptr;
	}

}


