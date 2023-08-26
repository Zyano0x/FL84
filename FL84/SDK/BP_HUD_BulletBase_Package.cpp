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
	 * 		Name   -> Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.GetReloadBulletAnimation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UWidgetAnimation*                            OutReloadAniamtion                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HUD_BulletBase_C::GetReloadBulletAnimation(class UWidgetAnimation** OutReloadAniamtion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.GetReloadBulletAnimation");
		
		UBP_HUD_BulletBase_C_GetReloadBulletAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutReloadAniamtion != nullptr)
			*OutReloadAniamtion = params.OutReloadAniamtion;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.PlayReloadBulletAnimation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_HUD_BulletBase_C::PlayReloadBulletAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.PlayReloadBulletAnimation");
		
		UBP_HUD_BulletBase_C_PlayReloadBulletAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.SetBulletVisible
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InbVisilble                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_HUD_BulletBase_C::SetBulletVisible(bool InbVisilble)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.SetBulletVisible");
		
		UBP_HUD_BulletBase_C_SetBulletVisible_Params params {};
		params.InbVisilble = InbVisilble;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.ReloadFinish
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            InReservedAmmo                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InMaxAmmo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HUD_BulletBase_C::ReloadFinish(int32_t InReservedAmmo, int32_t InMaxAmmo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.ReloadFinish");
		
		UBP_HUD_BulletBase_C_ReloadFinish_Params params {};
		params.InReservedAmmo = InReservedAmmo;
		params.InMaxAmmo = InMaxAmmo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.SetBulletLightEffect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InProgress                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HUD_BulletBase_C::SetBulletLightEffect(float InProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.SetBulletLightEffect");
		
		UBP_HUD_BulletBase_C_SetBulletLightEffect_Params params {};
		params.InProgress = InProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.GetBulletGaugeWidget
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UUserWidget*                                 OutBulletGaugeWidget                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HUD_BulletBase_C::GetBulletGaugeWidget(class UUserWidget** OutBulletGaugeWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.GetBulletGaugeWidget");
		
		UBP_HUD_BulletBase_C_GetBulletGaugeWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutBulletGaugeWidget != nullptr)
			*OutBulletGaugeWidget = params.OutBulletGaugeWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.UpdateBulletGaugeProgress
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InBulletGaugeProgress                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HUD_BulletBase_C::UpdateBulletGaugeProgress(float InBulletGaugeProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.UpdateBulletGaugeProgress");
		
		UBP_HUD_BulletBase_C_UpdateBulletGaugeProgress_Params params {};
		params.InBulletGaugeProgress = InBulletGaugeProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.GetUpdateBulletStateAnimation
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UWidgetAnimation*                            OutUpdateBulletStateAnimation                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HUD_BulletBase_C::GetUpdateBulletStateAnimation(class UWidgetAnimation** OutUpdateBulletStateAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.GetUpdateBulletStateAnimation");
		
		UBP_HUD_BulletBase_C_GetUpdateBulletStateAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutUpdateBulletStateAnimation != nullptr)
			*OutUpdateBulletStateAnimation = params.OutUpdateBulletStateAnimation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.PlayUpdateBulletStateAnimation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InbReload                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_HUD_BulletBase_C::PlayUpdateBulletStateAnimation(bool InbReload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.PlayUpdateBulletStateAnimation");
		
		UBP_HUD_BulletBase_C_PlayUpdateBulletStateAnimation_Params params {};
		params.InbReload = InbReload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnActiveCrosshair
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUserWidget*                                 InActiveCrosshair                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HUD_BulletBase_C::OnActiveCrosshair(class UUserWidget* InActiveCrosshair)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnActiveCrosshair");
		
		UBP_HUD_BulletBase_C_OnActiveCrosshair_Params params {};
		params.InActiveCrosshair = InActiveCrosshair;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnChangeOverloadState
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InbQuitState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_HUD_BulletBase_C::OnChangeOverloadState(bool InbQuitState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnChangeOverloadState");
		
		UBP_HUD_BulletBase_C_OnChangeOverloadState_Params params {};
		params.InbQuitState = InbQuitState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnChangeReloadState
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InbQuitState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bReloadSpeedup                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_HUD_BulletBase_C::OnChangeReloadState(bool InbQuitState, bool bReloadSpeedup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnChangeReloadState");
		
		UBP_HUD_BulletBase_C_OnChangeReloadState_Params params {};
		params.InbQuitState = InbQuitState;
		params.bReloadSpeedup = bReloadSpeedup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnInsufficientAmmo
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_HUD_BulletBase_C::OnInsufficientAmmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnInsufficientAmmo");
		
		UBP_HUD_BulletBase_C_OnInsufficientAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnUpdateCharge
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InbCharging                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InChargeMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InChargeProgress                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HUD_BulletBase_C::OnUpdateCharge(bool InbCharging, int32_t InChargeMode, float InChargeProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnUpdateCharge");
		
		UBP_HUD_BulletBase_C_OnUpdateCharge_Params params {};
		params.InbCharging = InbCharging;
		params.InChargeMode = InChargeMode;
		params.InChargeProgress = InChargeProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnUpdateCoolDown
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InReloadProgress                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HUD_BulletBase_C::OnUpdateCoolDown(float InReloadProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnUpdateCoolDown");
		
		UBP_HUD_BulletBase_C_OnUpdateCoolDown_Params params {};
		params.InReloadProgress = InReloadProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnUpdateOverload
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InOverloadProgress                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InOverloadWarningRate                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InbOverloadState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_HUD_BulletBase_C::OnUpdateOverload(float InOverloadProgress, float InOverloadWarningRate, bool InbOverloadState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnUpdateOverload");
		
		UBP_HUD_BulletBase_C_OnUpdateOverload_Params params {};
		params.InOverloadProgress = InOverloadProgress;
		params.InOverloadWarningRate = InOverloadWarningRate;
		params.InbOverloadState = InbOverloadState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnUpdateAmmo
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            InReservedAmmo                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InMaxAmmo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InAmmoProgress                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InbFirst                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_HUD_BulletBase_C::OnUpdateAmmo(int32_t InReservedAmmo, int32_t InMaxAmmo, float InAmmoProgress, bool InbFirst)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnUpdateAmmo");
		
		UBP_HUD_BulletBase_C_OnUpdateAmmo_Params params {};
		params.InReservedAmmo = InReservedAmmo;
		params.InMaxAmmo = InMaxAmmo;
		params.InAmmoProgress = InAmmoProgress;
		params.InbFirst = InbFirst;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnUpdateReload
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InReloadProgress                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InReloadAmmo                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InMaxAmmo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HUD_BulletBase_C::OnUpdateReload(float InReloadProgress, int32_t InReloadAmmo, int32_t InMaxAmmo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnUpdateReload");
		
		UBP_HUD_BulletBase_C_OnUpdateReload_Params params {};
		params.InReloadProgress = InReloadProgress;
		params.InReloadAmmo = InReloadAmmo;
		params.InMaxAmmo = InMaxAmmo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnReloadFinish
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InbReloadSuccess                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InReloadAmmo                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InReservedAmmo                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InMaxAmmo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InAmmoProgress                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HUD_BulletBase_C::OnReloadFinish(bool InbReloadSuccess, int32_t InReloadAmmo, int32_t InReservedAmmo, int32_t InMaxAmmo, float InAmmoProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnReloadFinish");
		
		UBP_HUD_BulletBase_C_OnReloadFinish_Params params {};
		params.InbReloadSuccess = InbReloadSuccess;
		params.InReloadAmmo = InReloadAmmo;
		params.InReservedAmmo = InReservedAmmo;
		params.InMaxAmmo = InMaxAmmo;
		params.InAmmoProgress = InAmmoProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.ExecuteUbergraph_BP_HUD_BulletBase
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HUD_BulletBase_C::ExecuteUbergraph_BP_HUD_BulletBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.ExecuteUbergraph_BP_HUD_BulletBase");
		
		UBP_HUD_BulletBase_C_ExecuteUbergraph_BP_HUD_BulletBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_HUD_BulletBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_HUD_BulletBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_HUD_BulletBase.BP_HUD_BulletBase_C");
		return ptr;
	}

}


