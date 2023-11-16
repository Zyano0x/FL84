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
	 * 		Name   -> Function Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C.ChangeAmmoCount
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ReloadCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AmmoCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrosshair_CarWeapon_Shotgun_New_C::ChangeAmmoCount(int32_t ReloadCount, int32_t AmmoCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C.ChangeAmmoCount"));
		
		UCrosshair_CarWeapon_Shotgun_New_C_ChangeAmmoCount_Params params {};
		params.ReloadCount = ReloadCount;
		params.AmmoCount = AmmoCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C.SetWidgetResources
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCanvasPanel*                                InSecondReticlePanel                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      InReticleDirectionImage                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      InRangedImage                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USizeBox*                                    InAssistLockSizeBox                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCanvasPanel*                                InChangeNewAssistLockPawnPanel                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCanvasPanel*                                InEnterLockPawnPanel                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCanvasPanel*                                InCanvas_Dynamic                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrosshair_CarWeapon_Shotgun_New_C::SetWidgetResources(class UCanvasPanel** InSecondReticlePanel, class UImage** InReticleDirectionImage, class UImage** InRangedImage, class USizeBox** InAssistLockSizeBox, class UCanvasPanel** InChangeNewAssistLockPawnPanel, class UCanvasPanel** InEnterLockPawnPanel, class UCanvasPanel** InCanvas_Dynamic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C.SetWidgetResources"));
		
		UCrosshair_CarWeapon_Shotgun_New_C_SetWidgetResources_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InSecondReticlePanel != nullptr)
			*InSecondReticlePanel = params.InSecondReticlePanel;
		if (InReticleDirectionImage != nullptr)
			*InReticleDirectionImage = params.InReticleDirectionImage;
		if (InRangedImage != nullptr)
			*InRangedImage = params.InRangedImage;
		if (InAssistLockSizeBox != nullptr)
			*InAssistLockSizeBox = params.InAssistLockSizeBox;
		if (InChangeNewAssistLockPawnPanel != nullptr)
			*InChangeNewAssistLockPawnPanel = params.InChangeNewAssistLockPawnPanel;
		if (InEnterLockPawnPanel != nullptr)
			*InEnterLockPawnPanel = params.InEnterLockPawnPanel;
		if (InCanvas_Dynamic != nullptr)
			*InCanvas_Dynamic = params.InCanvas_Dynamic;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UCrosshair_CarWeapon_Shotgun_New_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C.Construct"));
		
		UCrosshair_CarWeapon_Shotgun_New_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C.OnAmmoChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            InReservedAmmo                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InMaxAmmo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InbFirst                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCrosshair_CarWeapon_Shotgun_New_C::OnAmmoChanged(int32_t InReservedAmmo, int32_t InMaxAmmo, bool InbFirst)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C.OnAmmoChanged"));
		
		UCrosshair_CarWeapon_Shotgun_New_C_OnAmmoChanged_Params params {};
		params.InReservedAmmo = InReservedAmmo;
		params.InMaxAmmo = InMaxAmmo;
		params.InbFirst = InbFirst;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C.OnReloadStarted
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InReloadTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InReservedAmmo                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrosshair_CarWeapon_Shotgun_New_C::OnReloadStarted(float InReloadTime, int32_t InReservedAmmo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C.OnReloadStarted"));
		
		UCrosshair_CarWeapon_Shotgun_New_C_OnReloadStarted_Params params {};
		params.InReloadTime = InReloadTime;
		params.InReservedAmmo = InReservedAmmo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C.OnReloadFinished
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InbReloadSuccess                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InReloadAmmo                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InReservedAmmo                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InMaxAmmo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrosshair_CarWeapon_Shotgun_New_C::OnReloadFinished(bool InbReloadSuccess, int32_t InReloadAmmo, int32_t InReservedAmmo, int32_t InMaxAmmo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C.OnReloadFinished"));
		
		UCrosshair_CarWeapon_Shotgun_New_C_OnReloadFinished_Params params {};
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
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C.ExecuteUbergraph_Crosshair_CarWeapon_Shotgun_New
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrosshair_CarWeapon_Shotgun_New_C::ExecuteUbergraph_Crosshair_CarWeapon_Shotgun_New(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C.ExecuteUbergraph_Crosshair_CarWeapon_Shotgun_New"));
		
		UCrosshair_CarWeapon_Shotgun_New_C_ExecuteUbergraph_Crosshair_CarWeapon_Shotgun_New_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrosshair_CarWeapon_Shotgun_New_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrosshair_CarWeapon_Shotgun_New_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C"));
		return ptr;
	}

}


