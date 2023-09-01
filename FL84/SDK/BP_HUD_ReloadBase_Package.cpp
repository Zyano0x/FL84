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
	 * 		Name   -> Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.SetSpeedUpBuff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bHaveBuff                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_HUD_ReloadBase_C::SetSpeedUpBuff(bool bHaveBuff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.SetSpeedUpBuff");
		
		UBP_HUD_ReloadBase_C_SetSpeedUpBuff_Params params {};
		params.bHaveBuff = bHaveBuff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.StopReloadAnimation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_HUD_ReloadBase_C::StopReloadAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.StopReloadAnimation");
		
		UBP_HUD_ReloadBase_C_StopReloadAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.GetReloadAnimation
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UWidgetAnimation*                            OutReloadAnimation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HUD_ReloadBase_C::GetReloadAnimation(class UWidgetAnimation** OutReloadAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.GetReloadAnimation");
		
		UBP_HUD_ReloadBase_C_GetReloadAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutReloadAnimation != nullptr)
			*OutReloadAnimation = params.OutReloadAnimation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.PlayReloadAnimation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_HUD_ReloadBase_C::PlayReloadAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.PlayReloadAnimation");
		
		UBP_HUD_ReloadBase_C_PlayReloadAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnActiveCrosshair
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUserWidget*                                 InActiveCrosshair                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HUD_ReloadBase_C::OnActiveCrosshair(class UUserWidget* InActiveCrosshair)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnActiveCrosshair");
		
		UBP_HUD_ReloadBase_C_OnActiveCrosshair_Params params {};
		params.InActiveCrosshair = InActiveCrosshair;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnChangeOverloadState
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InbQuitState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_HUD_ReloadBase_C::OnChangeOverloadState(bool InbQuitState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnChangeOverloadState");
		
		UBP_HUD_ReloadBase_C_OnChangeOverloadState_Params params {};
		params.InbQuitState = InbQuitState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnInsufficientAmmo
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_HUD_ReloadBase_C::OnInsufficientAmmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnInsufficientAmmo");
		
		UBP_HUD_ReloadBase_C_OnInsufficientAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnReloadFinish
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InbReloadSuccess                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InReloadAmmo                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InReservedAmmo                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InMaxAmmo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InAmmoProgress                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HUD_ReloadBase_C::OnReloadFinish(bool InbReloadSuccess, int32_t InReloadAmmo, int32_t InReservedAmmo, int32_t InMaxAmmo, float InAmmoProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnReloadFinish");
		
		UBP_HUD_ReloadBase_C_OnReloadFinish_Params params {};
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
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnUpdateAmmo
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            InReservedAmmo                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InMaxAmmo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InAmmoProgress                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InbFirst                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_HUD_ReloadBase_C::OnUpdateAmmo(int32_t InReservedAmmo, int32_t InMaxAmmo, float InAmmoProgress, bool InbFirst)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnUpdateAmmo");
		
		UBP_HUD_ReloadBase_C_OnUpdateAmmo_Params params {};
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
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnUpdateCharge
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InbCharging                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InChargeMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InChargeProgress                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HUD_ReloadBase_C::OnUpdateCharge(bool InbCharging, int32_t InChargeMode, float InChargeProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnUpdateCharge");
		
		UBP_HUD_ReloadBase_C_OnUpdateCharge_Params params {};
		params.InbCharging = InbCharging;
		params.InChargeMode = InChargeMode;
		params.InChargeProgress = InChargeProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnUpdateCoolDown
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InReloadProgress                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HUD_ReloadBase_C::OnUpdateCoolDown(float InReloadProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnUpdateCoolDown");
		
		UBP_HUD_ReloadBase_C_OnUpdateCoolDown_Params params {};
		params.InReloadProgress = InReloadProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnUpdateOverload
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InOverloadProgress                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InOverloadWarningRate                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InbOverloadState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_HUD_ReloadBase_C::OnUpdateOverload(float InOverloadProgress, float InOverloadWarningRate, bool InbOverloadState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnUpdateOverload");
		
		UBP_HUD_ReloadBase_C_OnUpdateOverload_Params params {};
		params.InOverloadProgress = InOverloadProgress;
		params.InOverloadWarningRate = InOverloadWarningRate;
		params.InbOverloadState = InbOverloadState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnUpdateReload
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InReloadProgress                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InReloadAmmo                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InMaxAmmo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HUD_ReloadBase_C::OnUpdateReload(float InReloadProgress, int32_t InReloadAmmo, int32_t InMaxAmmo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnUpdateReload");
		
		UBP_HUD_ReloadBase_C_OnUpdateReload_Params params {};
		params.InReloadProgress = InReloadProgress;
		params.InReloadAmmo = InReloadAmmo;
		params.InMaxAmmo = InMaxAmmo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnChangeReloadState
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InbQuitState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bReloadSpeedup                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_HUD_ReloadBase_C::OnChangeReloadState(bool InbQuitState, bool bReloadSpeedup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnChangeReloadState");
		
		UBP_HUD_ReloadBase_C_OnChangeReloadState_Params params {};
		params.InbQuitState = InbQuitState;
		params.bReloadSpeedup = bReloadSpeedup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.ExecuteUbergraph_BP_HUD_ReloadBase
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_HUD_ReloadBase_C::ExecuteUbergraph_BP_HUD_ReloadBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.ExecuteUbergraph_BP_HUD_ReloadBase");
		
		UBP_HUD_ReloadBase_C_ExecuteUbergraph_BP_HUD_ReloadBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_HUD_ReloadBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_HUD_ReloadBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_HUD_ReloadBase.BP_HUD_ReloadBase_C");
		return ptr;
	}

}


