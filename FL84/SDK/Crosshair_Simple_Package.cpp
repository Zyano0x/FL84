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
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function Crosshair_Simple.Crosshair_Simple_C.InitializeCrosshairSpread
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Spread                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrosshair_Simple_C::InitializeCrosshairSpread(float Spread)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_Simple.Crosshair_Simple_C.InitializeCrosshairSpread"));
		
		UCrosshair_Simple_C_InitializeCrosshairSpread_Params params {};
		params.Spread = Spread;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function Crosshair_Simple.Crosshair_Simple_C.SetCrosshairSprite
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UPaperSprite*                                InSprite                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrosshair_Simple_C::SetCrosshairSprite(class UPaperSprite* InSprite)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_Simple.Crosshair_Simple_C.SetCrosshairSprite"));
		
		UCrosshair_Simple_C_SetCrosshairSprite_Params params {};
		params.InSprite = InSprite;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function Crosshair_Simple.Crosshair_Simple_C.ExecuteUbergraph_Crosshair_Simple
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrosshair_Simple_C::ExecuteUbergraph_Crosshair_Simple(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_Simple.Crosshair_Simple_C.ExecuteUbergraph_Crosshair_Simple"));
		
		UCrosshair_Simple_C_ExecuteUbergraph_Crosshair_Simple_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrosshair_Simple_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrosshair_Simple_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass Crosshair_Simple.Crosshair_Simple_C"));
		return ptr;
	}

}


