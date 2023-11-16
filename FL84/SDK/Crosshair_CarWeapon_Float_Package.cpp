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
	 * 		Name   -> Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.OnOverloadChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InOverload                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCrosshair_CarWeapon_Float_C::OnOverloadChanged(bool InOverload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.OnOverloadChanged"));
		
		UCrosshair_CarWeapon_Float_C_OnOverloadChanged_Params params {};
		params.InOverload = InOverload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.Set Charge Panel Size
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCrosshair_CarWeapon_Float_C::SetChargePanelSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.Set Charge Panel Size"));
		
		UCrosshair_CarWeapon_Float_C_SetChargePanelSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.SetChargeProgress
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCrosshair_CarWeapon_Float_C::SetChargeProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.SetChargeProgress"));
		
		UCrosshair_CarWeapon_Float_C_SetChargeProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.SetWidgetResources
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
	void UCrosshair_CarWeapon_Float_C::SetWidgetResources(class UCanvasPanel** InSecondReticlePanel, class UImage** InReticleDirectionImage, class UImage** InRangedImage, class USizeBox** InAssistLockSizeBox, class UCanvasPanel** InChangeNewAssistLockPawnPanel, class UCanvasPanel** InEnterLockPawnPanel, class UCanvasPanel** InCanvas_Dynamic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.SetWidgetResources"));
		
		UCrosshair_CarWeapon_Float_C_SetWidgetResources_Params params {};
		
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
	 * 		Name   -> Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UCrosshair_CarWeapon_Float_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.Construct"));
		
		UCrosshair_CarWeapon_Float_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.OnUpdateChargeProgress
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InbCharging                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InChargeMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InChargeProgress                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InChargeBurstCount                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrosshair_CarWeapon_Float_C::OnUpdateChargeProgress(bool InbCharging, int32_t InChargeMode, float InChargeProgress, int32_t InChargeBurstCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.OnUpdateChargeProgress"));
		
		UCrosshair_CarWeapon_Float_C_OnUpdateChargeProgress_Params params {};
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
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.OnOverloadStateChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bEnter                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCrosshair_CarWeapon_Float_C::OnOverloadStateChanged(bool bEnter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.OnOverloadStateChanged"));
		
		UCrosshair_CarWeapon_Float_C_OnOverloadStateChanged_Params params {};
		params.bEnter = bEnter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.OnCrosshairInNormalState
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCrosshair_CarWeapon_Float_C::OnCrosshairInNormalState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.OnCrosshairInNormalState"));
		
		UCrosshair_CarWeapon_Float_C_OnCrosshairInNormalState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.OnAnimationFinished
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrosshair_CarWeapon_Float_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.OnAnimationFinished"));
		
		UCrosshair_CarWeapon_Float_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.OnUpdateAimState
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InbLockEnemy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCrosshair_CarWeapon_Float_C::OnUpdateAimState(bool InbLockEnemy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.OnUpdateAimState"));
		
		UCrosshair_CarWeapon_Float_C_OnUpdateAimState_Params params {};
		params.InbLockEnemy = InbLockEnemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.ExecuteUbergraph_Crosshair_CarWeapon_Float
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrosshair_CarWeapon_Float_C::ExecuteUbergraph_Crosshair_CarWeapon_Float(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.ExecuteUbergraph_Crosshair_CarWeapon_Float"));
		
		UCrosshair_CarWeapon_Float_C_ExecuteUbergraph_Crosshair_CarWeapon_Float_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrosshair_CarWeapon_Float_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrosshair_CarWeapon_Float_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C"));
		return ptr;
	}

}


