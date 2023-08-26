/**
 * Name: FL84
 * Version: 1.14.4.5.503427
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function Crosshair_Simple_Sniper.Crosshair_Simple_Sniper_C.InitializeCrosshairSpread
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Spread                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrosshair_Simple_Sniper_C::InitializeCrosshairSpread(float Spread)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crosshair_Simple_Sniper.Crosshair_Simple_Sniper_C.InitializeCrosshairSpread");
		
		UCrosshair_Simple_Sniper_C_InitializeCrosshairSpread_Params params {};
		params.Spread = Spread;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function Crosshair_Simple_Sniper.Crosshair_Simple_Sniper_C.SetCrosshairSprite
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UPaperSprite*                                InSprite                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrosshair_Simple_Sniper_C::SetCrosshairSprite(class UPaperSprite* InSprite)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crosshair_Simple_Sniper.Crosshair_Simple_Sniper_C.SetCrosshairSprite");
		
		UCrosshair_Simple_Sniper_C_SetCrosshairSprite_Params params {};
		params.InSprite = InSprite;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function Crosshair_Simple_Sniper.Crosshair_Simple_Sniper_C.ExecuteUbergraph_Crosshair_Simple_Sniper
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrosshair_Simple_Sniper_C::ExecuteUbergraph_Crosshair_Simple_Sniper(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crosshair_Simple_Sniper.Crosshair_Simple_Sniper_C.ExecuteUbergraph_Crosshair_Simple_Sniper");
		
		UCrosshair_Simple_Sniper_C_ExecuteUbergraph_Crosshair_Simple_Sniper_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrosshair_Simple_Sniper_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrosshair_Simple_Sniper_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Crosshair_Simple_Sniper.Crosshair_Simple_Sniper_C");
		return ptr;
	}

}


