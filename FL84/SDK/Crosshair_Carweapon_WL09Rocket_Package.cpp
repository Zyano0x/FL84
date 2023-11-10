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
	 * 		Name   -> Function Crosshair_Carweapon_WL09Rocket.Crosshair_Carweapon_WL09Rocket_C.OnAmmoCounterChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Counter                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrosshair_Carweapon_WL09Rocket_C::OnAmmoCounterChanged(int32_t Counter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_Carweapon_WL09Rocket.Crosshair_Carweapon_WL09Rocket_C.OnAmmoCounterChanged"));
		
		UCrosshair_Carweapon_WL09Rocket_C_OnAmmoCounterChanged_Params params {};
		params.Counter = Counter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64A40
	 * 		Name   -> Function Crosshair_Carweapon_WL09Rocket.Crosshair_Carweapon_WL09Rocket_C.OnAmmoChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            InReservedAmmo                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InMaxAmmo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InbFirst                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCrosshair_Carweapon_WL09Rocket_C::OnAmmoChanged(int32_t InReservedAmmo, int32_t InMaxAmmo, bool InbFirst)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_Carweapon_WL09Rocket.Crosshair_Carweapon_WL09Rocket_C.OnAmmoChanged"));
		
		UCrosshair_Carweapon_WL09Rocket_C_OnAmmoChanged_Params params {};
		params.InReservedAmmo = InReservedAmmo;
		params.InMaxAmmo = InMaxAmmo;
		params.InbFirst = InbFirst;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64A40
	 * 		Name   -> Function Crosshair_Carweapon_WL09Rocket.Crosshair_Carweapon_WL09Rocket_C.OnUpdateReloadProgress
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InReloadProgress                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InReservedAmmo                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InMaxAmmo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrosshair_Carweapon_WL09Rocket_C::OnUpdateReloadProgress(float InReloadProgress, int32_t InReservedAmmo, int32_t InMaxAmmo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_Carweapon_WL09Rocket.Crosshair_Carweapon_WL09Rocket_C.OnUpdateReloadProgress"));
		
		UCrosshair_Carweapon_WL09Rocket_C_OnUpdateReloadProgress_Params params {};
		params.InReloadProgress = InReloadProgress;
		params.InReservedAmmo = InReservedAmmo;
		params.InMaxAmmo = InMaxAmmo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64A40
	 * 		Name   -> Function Crosshair_Carweapon_WL09Rocket.Crosshair_Carweapon_WL09Rocket_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UCrosshair_Carweapon_WL09Rocket_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_Carweapon_WL09Rocket.Crosshair_Carweapon_WL09Rocket_C.OnInitialized"));
		
		UCrosshair_Carweapon_WL09Rocket_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64A40
	 * 		Name   -> Function Crosshair_Carweapon_WL09Rocket.Crosshair_Carweapon_WL09Rocket_C.OnReloadFinished
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InbReloadSuccess                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InReloadAmmo                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InReservedAmmo                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InMaxAmmo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrosshair_Carweapon_WL09Rocket_C::OnReloadFinished(bool InbReloadSuccess, int32_t InReloadAmmo, int32_t InReservedAmmo, int32_t InMaxAmmo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_Carweapon_WL09Rocket.Crosshair_Carweapon_WL09Rocket_C.OnReloadFinished"));
		
		UCrosshair_Carweapon_WL09Rocket_C_OnReloadFinished_Params params {};
		params.InbReloadSuccess = InbReloadSuccess;
		params.InReloadAmmo = InReloadAmmo;
		params.InReservedAmmo = InReservedAmmo;
		params.InMaxAmmo = InMaxAmmo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64A40
	 * 		Name   -> Function Crosshair_Carweapon_WL09Rocket.Crosshair_Carweapon_WL09Rocket_C.OnUpdateAimTargetDistance
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InDistance                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrosshair_Carweapon_WL09Rocket_C::OnUpdateAimTargetDistance(float InDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_Carweapon_WL09Rocket.Crosshair_Carweapon_WL09Rocket_C.OnUpdateAimTargetDistance"));
		
		UCrosshair_Carweapon_WL09Rocket_C_OnUpdateAimTargetDistance_Params params {};
		params.InDistance = InDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64A40
	 * 		Name   -> Function Crosshair_Carweapon_WL09Rocket.Crosshair_Carweapon_WL09Rocket_C.ExecuteUbergraph_Crosshair_Carweapon_WL09Rocket
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrosshair_Carweapon_WL09Rocket_C::ExecuteUbergraph_Crosshair_Carweapon_WL09Rocket(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_Carweapon_WL09Rocket.Crosshair_Carweapon_WL09Rocket_C.ExecuteUbergraph_Crosshair_Carweapon_WL09Rocket"));
		
		UCrosshair_Carweapon_WL09Rocket_C_ExecuteUbergraph_Crosshair_Carweapon_WL09Rocket_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrosshair_Carweapon_WL09Rocket_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrosshair_Carweapon_WL09Rocket_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass Crosshair_Carweapon_WL09Rocket.Crosshair_Carweapon_WL09Rocket_C"));
		return ptr;
	}

}


