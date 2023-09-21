#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PBagsOffgas_Common.BP_PBagsOffgas_Common_C
// (Actor)

class UClass* ABP_PBagsOffgas_Common_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PBagsOffgas_Common_C");

	return Clss;
}


// BP_PBagsOffgas_Common_C BP_PBagsOffgas_Common.Default__BP_PBagsOffgas_Common_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PBagsOffgas_Common_C* ABP_PBagsOffgas_Common_C::GetDefaultObj()
{
	static class ABP_PBagsOffgas_Common_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PBagsOffgas_Common_C*>(ABP_PBagsOffgas_Common_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PBagsOffgas_Common.BP_PBagsOffgas_Common_C.BackpackSFXBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EFXJetType              InJetType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               GroundDetected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PBagsOffgas_Common_C::BackpackSFXBegin(enum class EFXJetType InJetType, bool GroundDetected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PBagsOffgas_Common_C", "BackpackSFXBegin");

	Params::ABP_PBagsOffgas_Common_C_BackpackSFXBegin_Params Parms{};

	Parms.InJetType = InJetType;
	Parms.GroundDetected = GroundDetected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PBagsOffgas_Common.BP_PBagsOffgas_Common_C.BackpackSFXEnd
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_PBagsOffgas_Common_C::BackpackSFXEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PBagsOffgas_Common_C", "BackpackSFXEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PBagsOffgas_Common.BP_PBagsOffgas_Common_C.OnBackpackTrailAssembling
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FBackpackTrailAssemblingParamsParams                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class EBackpackPropellingMode PropellingMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PBagsOffgas_Common_C::OnBackpackTrailAssembling(struct FBackpackTrailAssemblingParams& Params, enum class EBackpackPropellingMode PropellingMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PBagsOffgas_Common_C", "OnBackpackTrailAssembling");

	Params::ABP_PBagsOffgas_Common_C_OnBackpackTrailAssembling_Params Parms{};

	Parms.Params = Params;
	Parms.PropellingMode = PropellingMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PBagsOffgas_Common.BP_PBagsOffgas_Common_C.ExecuteUbergraph_BP_PBagsOffgas_Common
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFXJetType              K2Node_Event_InJetType                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_GroundDetected                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBackpackTrailAssemblingParamsK2Node_Event_Params                                              (ConstParm)
// enum class EBackpackPropellingMode K2Node_Event_PropellingMode                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             K2Node_DynamicCast_AsParticle_System                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystem*             K2Node_DynamicCast_AsParticle_System_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PBagsOffgas_Common_C::ExecuteUbergraph_BP_PBagsOffgas_Common(int32 EntryPoint, enum class EFXJetType K2Node_Event_InJetType, bool K2Node_Event_GroundDetected, bool K2Node_SwitchEnum_CmpSuccess, const struct FBackpackTrailAssemblingParams& K2Node_Event_Params, enum class EBackpackPropellingMode K2Node_Event_PropellingMode, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class UParticleSystem* K2Node_DynamicCast_AsParticle_System, bool K2Node_DynamicCast_bSuccess, class UParticleSystem* K2Node_DynamicCast_AsParticle_System_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PBagsOffgas_Common_C", "ExecuteUbergraph_BP_PBagsOffgas_Common");

	Params::ABP_PBagsOffgas_Common_C_ExecuteUbergraph_BP_PBagsOffgas_Common_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InJetType = K2Node_Event_InJetType;
	Parms.K2Node_Event_GroundDetected = K2Node_Event_GroundDetected;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_Params = K2Node_Event_Params;
	Parms.K2Node_Event_PropellingMode = K2Node_Event_PropellingMode;
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

}


