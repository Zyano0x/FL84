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
	 * 		Name   -> Function UI_Settings_Gamepad_Desktop.UI_Settings_Gamepad_Desktop_C.GetModuleName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString UUI_Settings_Gamepad_Desktop_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Gamepad_Desktop.UI_Settings_Gamepad_Desktop_C.GetModuleName");
		
		UUI_Settings_Gamepad_Desktop_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_Settings_Gamepad_Desktop.UI_Settings_Gamepad_Desktop_C.ExecuteUbergraph_UI_Settings_Gamepad_Desktop
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_Gamepad_Desktop_C::ExecuteUbergraph_UI_Settings_Gamepad_Desktop(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Gamepad_Desktop.UI_Settings_Gamepad_Desktop_C.ExecuteUbergraph_UI_Settings_Gamepad_Desktop");
		
		UUI_Settings_Gamepad_Desktop_C_ExecuteUbergraph_UI_Settings_Gamepad_Desktop_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Settings_Gamepad_Desktop_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Settings_Gamepad_Desktop_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Settings_Gamepad_Desktop.UI_Settings_Gamepad_Desktop_C");
		return ptr;
	}

}


