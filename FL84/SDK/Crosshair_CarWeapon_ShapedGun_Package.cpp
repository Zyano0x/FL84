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
	 * 		Name   -> Function Crosshair_CarWeapon_ShapedGun.Crosshair_CarWeapon_ShapedGun_C.SetPrograssPrecent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Percent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UProgressBar*                                InProgressBar                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrosshair_CarWeapon_ShapedGun_C::SetPrograssPrecent(float Percent, int32_t Index, class UProgressBar* InProgressBar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crosshair_CarWeapon_ShapedGun.Crosshair_CarWeapon_ShapedGun_C.SetPrograssPrecent");
		
		UCrosshair_CarWeapon_ShapedGun_C_SetPrograssPrecent_Params params {};
		params.Percent = Percent;
		params.Index = Index;
		params.InProgressBar = InProgressBar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function Crosshair_CarWeapon_ShapedGun.Crosshair_CarWeapon_ShapedGun_C.GetChargeWidget
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UUserWidget* UCrosshair_CarWeapon_ShapedGun_C::GetChargeWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crosshair_CarWeapon_ShapedGun.Crosshair_CarWeapon_ShapedGun_C.GetChargeWidget");
		
		UCrosshair_CarWeapon_ShapedGun_C_GetChargeWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function Crosshair_CarWeapon_ShapedGun.Crosshair_CarWeapon_ShapedGun_C.SetWidgetResources
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
	void UCrosshair_CarWeapon_ShapedGun_C::SetWidgetResources(class UCanvasPanel** InSecondReticlePanel, class UImage** InReticleDirectionImage, class UImage** InRangedImage, class USizeBox** InAssistLockSizeBox, class UCanvasPanel** InChangeNewAssistLockPawnPanel, class UCanvasPanel** InEnterLockPawnPanel, class UCanvasPanel** InCanvas_Dynamic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crosshair_CarWeapon_ShapedGun.Crosshair_CarWeapon_ShapedGun_C.SetWidgetResources");
		
		UCrosshair_CarWeapon_ShapedGun_C_SetWidgetResources_Params params {};
		
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
	 * 		Name   -> Function Crosshair_CarWeapon_ShapedGun.Crosshair_CarWeapon_ShapedGun_C.OnUpdateChargeProgress
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InbCharging                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InChargeMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InChargeProgress                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InChargeBurstCount                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrosshair_CarWeapon_ShapedGun_C::OnUpdateChargeProgress(bool InbCharging, int32_t InChargeMode, float InChargeProgress, int32_t InChargeBurstCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crosshair_CarWeapon_ShapedGun.Crosshair_CarWeapon_ShapedGun_C.OnUpdateChargeProgress");
		
		UCrosshair_CarWeapon_ShapedGun_C_OnUpdateChargeProgress_Params params {};
		params.InbCharging = InbCharging;
		params.InChargeMode = InChargeMode;
		params.InChargeProgress = InChargeProgress;
		params.InChargeBurstCount = InChargeBurstCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function Crosshair_CarWeapon_ShapedGun.Crosshair_CarWeapon_ShapedGun_C.ExecuteUbergraph_Crosshair_CarWeapon_ShapedGun
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrosshair_CarWeapon_ShapedGun_C::ExecuteUbergraph_Crosshair_CarWeapon_ShapedGun(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crosshair_CarWeapon_ShapedGun.Crosshair_CarWeapon_ShapedGun_C.ExecuteUbergraph_Crosshair_CarWeapon_ShapedGun");
		
		UCrosshair_CarWeapon_ShapedGun_C_ExecuteUbergraph_Crosshair_CarWeapon_ShapedGun_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrosshair_CarWeapon_ShapedGun_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrosshair_CarWeapon_ShapedGun_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Crosshair_CarWeapon_ShapedGun.Crosshair_CarWeapon_ShapedGun_C");
		return ptr;
	}

}


