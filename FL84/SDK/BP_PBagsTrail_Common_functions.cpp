#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PBagsTrail_Common.BP_PBagsTrail_Common_C
// (Actor)

class UClass* ABP_PBagsTrail_Common_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PBagsTrail_Common_C");

	return Clss;
}


// BP_PBagsTrail_Common_C BP_PBagsTrail_Common.Default__BP_PBagsTrail_Common_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PBagsTrail_Common_C* ABP_PBagsTrail_Common_C::GetDefaultObj()
{
	static class ABP_PBagsTrail_Common_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PBagsTrail_Common_C*>(ABP_PBagsTrail_Common_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.OnWallRun
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PBagsTrail_Common_C::OnWallRun()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PBagsTrail_Common_C", "OnWallRun");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.BackpackSFXEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PBagsTrail_Common_C::BackpackSFXEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PBagsTrail_Common_C", "BackpackSFXEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.BackpackSFXLaunch
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               GroundDetected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     GroundLocation                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     GroundNormal                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromZ_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PBagsTrail_Common_C::BackpackSFXLaunch(bool GroundDetected, struct FVector& GroundLocation, struct FVector& GroundNormal, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PBagsTrail_Common_C", "BackpackSFXLaunch");

	Params::ABP_PBagsTrail_Common_C_BackpackSFXLaunch_Params Parms{};

	Parms.GroundDetected = GroundDetected;
	Parms.GroundLocation = GroundLocation;
	Parms.GroundNormal = GroundNormal;
	Parms.CallFunc_MakeRotFromZ_ReturnValue = CallFunc_MakeRotFromZ_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.BackpackSFXBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFXJetType              InJetType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               GroundDetected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PBagsTrail_Common_C::BackpackSFXBegin(enum class EFXJetType InJetType, bool GroundDetected, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PBagsTrail_Common_C", "BackpackSFXBegin");

	Params::ABP_PBagsTrail_Common_C_BackpackSFXBegin_Params Parms{};

	Parms.InJetType = InJetType;
	Parms.GroundDetected = GroundDetected;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.UpdateTrailParticle
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBackpackTrailAssemblingParamsSoftObjectRef                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             K2Node_DynamicCast_AsParticle_System                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystem*             K2Node_DynamicCast_AsParticle_System_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PBagsTrail_Common_C::UpdateTrailParticle(const struct FBackpackTrailAssemblingParams& SoftObjectRef, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class UParticleSystem* K2Node_DynamicCast_AsParticle_System, bool K2Node_DynamicCast_bSuccess, class UParticleSystem* K2Node_DynamicCast_AsParticle_System_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PBagsTrail_Common_C", "UpdateTrailParticle");

	Params::ABP_PBagsTrail_Common_C_UpdateTrailParticle_Params Parms{};

	Parms.SoftObjectRef = SoftObjectRef;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsParticle_System = K2Node_DynamicCast_AsParticle_System;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsParticle_System_1 = K2Node_DynamicCast_AsParticle_System_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.GetTrailEffectComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystemComponent*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UParticleSystemComponent* ABP_PBagsTrail_Common_C::GetTrailEffectComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PBagsTrail_Common_C", "GetTrailEffectComponent");

	Params::ABP_PBagsTrail_Common_C_GetTrailEffectComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.FX_FinishDeactive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PBagsTrail_Common_C::FX_FinishDeactive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PBagsTrail_Common_C", "FX_FinishDeactive");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.SkyDivingLanding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PBagsTrail_Common_C::SkyDivingLanding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PBagsTrail_Common_C", "SkyDivingLanding");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.DropSlowDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PBagsTrail_Common_C::DropSlowDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PBagsTrail_Common_C", "DropSlowDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.Normal Jet Fly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PBagsTrail_Common_C::Normal_Jet_Fly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PBagsTrail_Common_C", "Normal Jet Fly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.FX_InitializeDeactive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PBagsTrail_Common_C::FX_InitializeDeactive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PBagsTrail_Common_C", "FX_InitializeDeactive");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.TrailFade__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_PBagsTrail_Common_C::TrailFade__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PBagsTrail_Common_C", "TrailFade__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.TrailFade__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_PBagsTrail_Common_C::TrailFade__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PBagsTrail_Common_C", "TrailFade__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.OnBackpackTrailAssembling
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FBackpackTrailAssemblingParamsParams                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class EBackpackPropellingMode PropellingMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PBagsTrail_Common_C::OnBackpackTrailAssembling(struct FBackpackTrailAssemblingParams& Params, enum class EBackpackPropellingMode PropellingMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PBagsTrail_Common_C", "OnBackpackTrailAssembling");

	Params::ABP_PBagsTrail_Common_C_OnBackpackTrailAssembling_Params Parms{};

	Parms.Params = Params;
	Parms.PropellingMode = PropellingMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.TryFadeOutTrail
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PBagsTrail_Common_C::TryFadeOutTrail()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PBagsTrail_Common_C", "TryFadeOutTrail");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.ExecuteUbergraph_BP_PBagsTrail_Common
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBackpackTrailAssemblingParamsK2Node_Event_Params                                              (ConstParm)
// enum class EBackpackPropellingMode K2Node_Event_PropellingMode                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PBagsTrail_Common_C::ExecuteUbergraph_BP_PBagsTrail_Common(int32 EntryPoint, const struct FBackpackTrailAssemblingParams& K2Node_Event_Params, enum class EBackpackPropellingMode K2Node_Event_PropellingMode, bool CallFunc_IsActive_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PBagsTrail_Common_C", "ExecuteUbergraph_BP_PBagsTrail_Common");

	Params::ABP_PBagsTrail_Common_C_ExecuteUbergraph_BP_PBagsTrail_Common_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Params = K2Node_Event_Params;
	Parms.K2Node_Event_PropellingMode = K2Node_Event_PropellingMode;
	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


