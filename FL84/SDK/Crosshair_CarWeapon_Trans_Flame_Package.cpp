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
	 * 		Name   -> Function Crosshair_CarWeapon_Trans_Flame.Crosshair_CarWeapon_Trans_Flame_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UCrosshair_CarWeapon_Trans_Flame_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_CarWeapon_Trans_Flame.Crosshair_CarWeapon_Trans_Flame_C.Construct"));
		
		UCrosshair_CarWeapon_Trans_Flame_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function Crosshair_CarWeapon_Trans_Flame.Crosshair_CarWeapon_Trans_Flame_C.OnTransformerWeaponChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		ETransformerType                                   InType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrosshair_CarWeapon_Trans_Flame_C::OnTransformerWeaponChanged(ETransformerType InType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_CarWeapon_Trans_Flame.Crosshair_CarWeapon_Trans_Flame_C.OnTransformerWeaponChanged"));
		
		UCrosshair_CarWeapon_Trans_Flame_C_OnTransformerWeaponChanged_Params params {};
		params.InType = InType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function Crosshair_CarWeapon_Trans_Flame.Crosshair_CarWeapon_Trans_Flame_C.OnOverloadStateChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bEnter                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCrosshair_CarWeapon_Trans_Flame_C::OnOverloadStateChanged(bool bEnter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_CarWeapon_Trans_Flame.Crosshair_CarWeapon_Trans_Flame_C.OnOverloadStateChanged"));
		
		UCrosshair_CarWeapon_Trans_Flame_C_OnOverloadStateChanged_Params params {};
		params.bEnter = bEnter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function Crosshair_CarWeapon_Trans_Flame.Crosshair_CarWeapon_Trans_Flame_C.OnCrosshairInNormalState
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCrosshair_CarWeapon_Trans_Flame_C::OnCrosshairInNormalState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_CarWeapon_Trans_Flame.Crosshair_CarWeapon_Trans_Flame_C.OnCrosshairInNormalState"));
		
		UCrosshair_CarWeapon_Trans_Flame_C_OnCrosshairInNormalState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function Crosshair_CarWeapon_Trans_Flame.Crosshair_CarWeapon_Trans_Flame_C.ExecuteUbergraph_Crosshair_CarWeapon_Trans_Flame
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrosshair_CarWeapon_Trans_Flame_C::ExecuteUbergraph_Crosshair_CarWeapon_Trans_Flame(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_CarWeapon_Trans_Flame.Crosshair_CarWeapon_Trans_Flame_C.ExecuteUbergraph_Crosshair_CarWeapon_Trans_Flame"));
		
		UCrosshair_CarWeapon_Trans_Flame_C_ExecuteUbergraph_Crosshair_CarWeapon_Trans_Flame_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrosshair_CarWeapon_Trans_Flame_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrosshair_CarWeapon_Trans_Flame_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass Crosshair_CarWeapon_Trans_Flame.Crosshair_CarWeapon_Trans_Flame_C"));
		return ptr;
	}

}


