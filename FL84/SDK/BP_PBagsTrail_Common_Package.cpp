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
	 * 		Name   -> Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.OnWallRun
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PBagsTrail_Common_C::OnWallRun()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.OnWallRun"));
		
		ABP_PBagsTrail_Common_C_OnWallRun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.BackpackSFXEnd
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PBagsTrail_Common_C::BackpackSFXEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.BackpackSFXEnd"));
		
		ABP_PBagsTrail_Common_C_BackpackSFXEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.BackpackSFXLaunch
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               GroundDetected                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     GroundLocation                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     GroundNormal                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PBagsTrail_Common_C::BackpackSFXLaunch(bool GroundDetected, const struct FVector& GroundLocation, const struct FVector& GroundNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.BackpackSFXLaunch"));
		
		ABP_PBagsTrail_Common_C_BackpackSFXLaunch_Params params {};
		params.GroundDetected = GroundDetected;
		params.GroundLocation = GroundLocation;
		params.GroundNormal = GroundNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.BackpackSFXBegin
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EFXJetType                                         InJetType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               GroundDetected                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PBagsTrail_Common_C::BackpackSFXBegin(EFXJetType InJetType, bool GroundDetected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.BackpackSFXBegin"));
		
		ABP_PBagsTrail_Common_C_BackpackSFXBegin_Params params {};
		params.InJetType = InJetType;
		params.GroundDetected = GroundDetected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.UpdateTrailParticle
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FBackpackTrailAssemblingParams              SoftObjectRef                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_PBagsTrail_Common_C::UpdateTrailParticle(const struct FBackpackTrailAssemblingParams& SoftObjectRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.UpdateTrailParticle"));
		
		ABP_PBagsTrail_Common_C_UpdateTrailParticle_Params params {};
		params.SoftObjectRef = SoftObjectRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.GetTrailEffectComponent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class UParticleSystemComponent* ABP_PBagsTrail_Common_C::GetTrailEffectComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.GetTrailEffectComponent"));
		
		ABP_PBagsTrail_Common_C_GetTrailEffectComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.FX_FinishDeactive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PBagsTrail_Common_C::FX_FinishDeactive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.FX_FinishDeactive"));
		
		ABP_PBagsTrail_Common_C_FX_FinishDeactive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.SkyDivingLanding
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PBagsTrail_Common_C::SkyDivingLanding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.SkyDivingLanding"));
		
		ABP_PBagsTrail_Common_C_SkyDivingLanding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.DropSlowDown
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PBagsTrail_Common_C::DropSlowDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.DropSlowDown"));
		
		ABP_PBagsTrail_Common_C_DropSlowDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.Normal Jet Fly
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PBagsTrail_Common_C::NormalJetFly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.Normal Jet Fly"));
		
		ABP_PBagsTrail_Common_C_NormalJetFly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.FX_InitializeDeactive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PBagsTrail_Common_C::FX_InitializeDeactive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.FX_InitializeDeactive"));
		
		ABP_PBagsTrail_Common_C_FX_InitializeDeactive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.TrailFade__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_PBagsTrail_Common_C::TrailFade__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.TrailFade__FinishedFunc"));
		
		ABP_PBagsTrail_Common_C_TrailFade__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.TrailFade__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_PBagsTrail_Common_C::TrailFade__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.TrailFade__UpdateFunc"));
		
		ABP_PBagsTrail_Common_C_TrailFade__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.OnBackpackTrailAssembling
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FBackpackTrailAssemblingParams              Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		EBackpackPropellingMode                            PropellingMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PBagsTrail_Common_C::OnBackpackTrailAssembling(const struct FBackpackTrailAssemblingParams& Params, EBackpackPropellingMode PropellingMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.OnBackpackTrailAssembling"));
		
		ABP_PBagsTrail_Common_C_OnBackpackTrailAssembling_Params params {};
		params.Params = Params;
		params.PropellingMode = PropellingMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.TryFadeOutTrail
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PBagsTrail_Common_C::TryFadeOutTrail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.TryFadeOutTrail"));
		
		ABP_PBagsTrail_Common_C_TryFadeOutTrail_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.ExecuteUbergraph_BP_PBagsTrail_Common
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PBagsTrail_Common_C::ExecuteUbergraph_BP_PBagsTrail_Common(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.ExecuteUbergraph_BP_PBagsTrail_Common"));
		
		ABP_PBagsTrail_Common_C_ExecuteUbergraph_BP_PBagsTrail_Common_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PBagsTrail_Common_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PBagsTrail_Common_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_PBagsTrail_Common.BP_PBagsTrail_Common_C"));
		return ptr;
	}

}


