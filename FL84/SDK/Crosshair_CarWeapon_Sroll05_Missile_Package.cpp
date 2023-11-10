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
	 * 		Name   -> Function Crosshair_CarWeapon_Sroll05_Missile.Crosshair_CarWeapon_Sroll05_Missile_C.ChangeAmmoCount
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AmmoCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrosshair_CarWeapon_Sroll05_Missile_C::ChangeAmmoCount(int32_t AmmoCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_CarWeapon_Sroll05_Missile.Crosshair_CarWeapon_Sroll05_Missile_C.ChangeAmmoCount"));
		
		UCrosshair_CarWeapon_Sroll05_Missile_C_ChangeAmmoCount_Params params {};
		params.AmmoCount = AmmoCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64A40
	 * 		Name   -> Function Crosshair_CarWeapon_Sroll05_Missile.Crosshair_CarWeapon_Sroll05_Missile_C.OnAmmoChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            InReservedAmmo                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InMaxAmmo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InbFirst                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCrosshair_CarWeapon_Sroll05_Missile_C::OnAmmoChanged(int32_t InReservedAmmo, int32_t InMaxAmmo, bool InbFirst)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_CarWeapon_Sroll05_Missile.Crosshair_CarWeapon_Sroll05_Missile_C.OnAmmoChanged"));
		
		UCrosshair_CarWeapon_Sroll05_Missile_C_OnAmmoChanged_Params params {};
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
	 * 		Name   -> Function Crosshair_CarWeapon_Sroll05_Missile.Crosshair_CarWeapon_Sroll05_Missile_C.OnUpdateVehicleRotationPitch
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InPitch                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrosshair_CarWeapon_Sroll05_Missile_C::OnUpdateVehicleRotationPitch(float InPitch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_CarWeapon_Sroll05_Missile.Crosshair_CarWeapon_Sroll05_Missile_C.OnUpdateVehicleRotationPitch"));
		
		UCrosshair_CarWeapon_Sroll05_Missile_C_OnUpdateVehicleRotationPitch_Params params {};
		params.InPitch = InPitch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64A40
	 * 		Name   -> Function Crosshair_CarWeapon_Sroll05_Missile.Crosshair_CarWeapon_Sroll05_Missile_C.OnReloadFinished
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InbReloadSuccess                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InReloadAmmo                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InReservedAmmo                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InMaxAmmo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrosshair_CarWeapon_Sroll05_Missile_C::OnReloadFinished(bool InbReloadSuccess, int32_t InReloadAmmo, int32_t InReservedAmmo, int32_t InMaxAmmo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_CarWeapon_Sroll05_Missile.Crosshair_CarWeapon_Sroll05_Missile_C.OnReloadFinished"));
		
		UCrosshair_CarWeapon_Sroll05_Missile_C_OnReloadFinished_Params params {};
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
	 * 		Name   -> Function Crosshair_CarWeapon_Sroll05_Missile.Crosshair_CarWeapon_Sroll05_Missile_C.OnUpdateReloadProgress
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InReloadProgress                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InReservedAmmo                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InMaxAmmo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrosshair_CarWeapon_Sroll05_Missile_C::OnUpdateReloadProgress(float InReloadProgress, int32_t InReservedAmmo, int32_t InMaxAmmo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_CarWeapon_Sroll05_Missile.Crosshair_CarWeapon_Sroll05_Missile_C.OnUpdateReloadProgress"));
		
		UCrosshair_CarWeapon_Sroll05_Missile_C_OnUpdateReloadProgress_Params params {};
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
	 * 		Name   -> Function Crosshair_CarWeapon_Sroll05_Missile.Crosshair_CarWeapon_Sroll05_Missile_C.ExecuteUbergraph_Crosshair_CarWeapon_Sroll05_Missile
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrosshair_CarWeapon_Sroll05_Missile_C::ExecuteUbergraph_Crosshair_CarWeapon_Sroll05_Missile(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_CarWeapon_Sroll05_Missile.Crosshair_CarWeapon_Sroll05_Missile_C.ExecuteUbergraph_Crosshair_CarWeapon_Sroll05_Missile"));
		
		UCrosshair_CarWeapon_Sroll05_Missile_C_ExecuteUbergraph_Crosshair_CarWeapon_Sroll05_Missile_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrosshair_CarWeapon_Sroll05_Missile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrosshair_CarWeapon_Sroll05_Missile_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass Crosshair_CarWeapon_Sroll05_Missile.Crosshair_CarWeapon_Sroll05_Missile_C"));
		return ptr;
	}

}


