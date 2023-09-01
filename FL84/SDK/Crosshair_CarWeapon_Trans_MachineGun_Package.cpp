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
	 * 		Name   -> Function Crosshair_CarWeapon_Trans_MachineGun.Crosshair_CarWeapon_Trans_MachineGun_C.SetWidgetResources
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
	void UCrosshair_CarWeapon_Trans_MachineGun_C::SetWidgetResources(class UCanvasPanel** InSecondReticlePanel, class UImage** InReticleDirectionImage, class UImage** InRangedImage, class USizeBox** InAssistLockSizeBox, class UCanvasPanel** InChangeNewAssistLockPawnPanel, class UCanvasPanel** InEnterLockPawnPanel, class UCanvasPanel** InCanvas_Dynamic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crosshair_CarWeapon_Trans_MachineGun.Crosshair_CarWeapon_Trans_MachineGun_C.SetWidgetResources");
		
		UCrosshair_CarWeapon_Trans_MachineGun_C_SetWidgetResources_Params params {};
		
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
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function Crosshair_CarWeapon_Trans_MachineGun.Crosshair_CarWeapon_Trans_MachineGun_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UCrosshair_CarWeapon_Trans_MachineGun_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crosshair_CarWeapon_Trans_MachineGun.Crosshair_CarWeapon_Trans_MachineGun_C.Construct");
		
		UCrosshair_CarWeapon_Trans_MachineGun_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function Crosshair_CarWeapon_Trans_MachineGun.Crosshair_CarWeapon_Trans_MachineGun_C.OnTransformerWeaponChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		ETransformerType                                   InType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrosshair_CarWeapon_Trans_MachineGun_C::OnTransformerWeaponChanged(ETransformerType InType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crosshair_CarWeapon_Trans_MachineGun.Crosshair_CarWeapon_Trans_MachineGun_C.OnTransformerWeaponChanged");
		
		UCrosshair_CarWeapon_Trans_MachineGun_C_OnTransformerWeaponChanged_Params params {};
		params.InType = InType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function Crosshair_CarWeapon_Trans_MachineGun.Crosshair_CarWeapon_Trans_MachineGun_C.ExecuteUbergraph_Crosshair_CarWeapon_Trans_MachineGun
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrosshair_CarWeapon_Trans_MachineGun_C::ExecuteUbergraph_Crosshair_CarWeapon_Trans_MachineGun(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crosshair_CarWeapon_Trans_MachineGun.Crosshair_CarWeapon_Trans_MachineGun_C.ExecuteUbergraph_Crosshair_CarWeapon_Trans_MachineGun");
		
		UCrosshair_CarWeapon_Trans_MachineGun_C_ExecuteUbergraph_Crosshair_CarWeapon_Trans_MachineGun_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrosshair_CarWeapon_Trans_MachineGun_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrosshair_CarWeapon_Trans_MachineGun_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Crosshair_CarWeapon_Trans_MachineGun.Crosshair_CarWeapon_Trans_MachineGun_C");
		return ptr;
	}

}


