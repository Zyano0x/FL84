#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SolarBackpackActor.BP_SolarBackpackActor_C
// (Actor)

class UClass* ABP_SolarBackpackActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SolarBackpackActor_C");

	return Clss;
}


// BP_SolarBackpackActor_C BP_SolarBackpackActor.Default__BP_SolarBackpackActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SolarBackpackActor_C* ABP_SolarBackpackActor_C::GetDefaultObj()
{
	static class ABP_SolarBackpackActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SolarBackpackActor_C*>(ABP_SolarBackpackActor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SolarBackpackActor.BP_SolarBackpackActor_C.TryCreateDynamicMaterialInstance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         Component                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ElementIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          SourceMaterial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        OptionlName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

class UMaterialInstanceDynamic* ABP_SolarBackpackActor_C::TryCreateDynamicMaterialInstance(class UPrimitiveComponent* Component, int32 ElementIndex, class UMaterialInterface* SourceMaterial, class FName OptionlName, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SolarBackpackActor_C", "TryCreateDynamicMaterialInstance");

	Params::ABP_SolarBackpackActor_C_TryCreateDynamicMaterialInstance_Params Parms{};

	Parms.Component = Component;
	Parms.ElementIndex = ElementIndex;
	Parms.SourceMaterial = SourceMaterial;
	Parms.OptionlName = OptionlName;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic = K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SolarBackpackActor.BP_SolarBackpackActor_C.FX_Idle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SolarBackpackActor_C::FX_Idle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SolarBackpackActor_C", "FX_Idle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SolarBackpackActor.BP_SolarBackpackActor_C.FX_Flying
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SolarBackpackActor_C::FX_Flying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SolarBackpackActor_C", "FX_Flying");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SolarBackpackActor.BP_SolarBackpackActor_C.FX_Charging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SolarBackpackActor_C::FX_Charging()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SolarBackpackActor_C", "FX_Charging");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SolarBackpackActor.BP_SolarBackpackActor_C.FX_LowPower
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SolarBackpackActor_C::FX_LowPower()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SolarBackpackActor_C", "FX_LowPower");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SolarBackpackActor.BP_SolarBackpackActor_C.FX_Default
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsFly_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SolarBackpackActor_C::FX_Default(bool CallFunc_IsFly_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SolarBackpackActor_C", "FX_Default");

	Params::ABP_SolarBackpackActor_C_FX_Default_Params Parms{};

	Parms.CallFunc_IsFly_ReturnValue = CallFunc_IsFly_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


