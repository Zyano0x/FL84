#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PBags_VF_Set02.BP_PBags_VF_Set02_C
// (Actor)

class UClass* ABP_PBags_VF_Set02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PBags_VF_Set02_C");

	return Clss;
}


// BP_PBags_VF_Set02_C BP_PBags_VF_Set02.Default__BP_PBags_VF_Set02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PBags_VF_Set02_C* ABP_PBags_VF_Set02_C::GetDefaultObj()
{
	static class ABP_PBags_VF_Set02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PBags_VF_Set02_C*>(ABP_PBags_VF_Set02_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PBags_VF_Set02.BP_PBags_VF_Set02_C.FX_LowPower
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PBags_VF_Set02_C::FX_LowPower(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PBags_VF_Set02_C", "FX_LowPower");

	Params::ABP_PBags_VF_Set02_C_FX_LowPower_Params Parms{};

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PBags_VF_Set02.BP_PBags_VF_Set02_C.FX_Flying
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PBags_VF_Set02_C::FX_Flying(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PBags_VF_Set02_C", "FX_Flying");

	Params::ABP_PBags_VF_Set02_C_FX_Flying_Params Parms{};

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PBags_VF_Set02.BP_PBags_VF_Set02_C.FX_Idle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PBags_VF_Set02_C::FX_Idle(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PBags_VF_Set02_C", "FX_Idle");

	Params::ABP_PBags_VF_Set02_C_FX_Idle_Params Parms{};

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PBags_VF_Set02.BP_PBags_VF_Set02_C.FX_Charging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PBags_VF_Set02_C::FX_Charging(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PBags_VF_Set02_C", "FX_Charging");

	Params::ABP_PBags_VF_Set02_C_FX_Charging_Params Parms{};

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PBags_VF_Set02.BP_PBags_VF_Set02_C.FX_Default
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PBags_VF_Set02_C::FX_Default()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PBags_VF_Set02_C", "FX_Default");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PBags_VF_Set02.BP_PBags_VF_Set02_C.OnMeshEffectFactorChange
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_PBags_VF_Set02_C::OnMeshEffectFactorChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PBags_VF_Set02_C", "OnMeshEffectFactorChange");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PBags_VF_Set02.BP_PBags_VF_Set02_C.ExecuteUbergraph_BP_PBags_VF_Set02
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PBags_VF_Set02_C::ExecuteUbergraph_BP_PBags_VF_Set02(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PBags_VF_Set02_C", "ExecuteUbergraph_BP_PBags_VF_Set02");

	Params::ABP_PBags_VF_Set02_C_ExecuteUbergraph_BP_PBags_VF_Set02_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


