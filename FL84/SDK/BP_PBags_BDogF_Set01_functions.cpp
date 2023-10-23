#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PBags_BDogF_Set01.BP_PBags_BDogF_Set01_C
// (Actor)

class UClass* ABP_PBags_BDogF_Set01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PBags_BDogF_Set01_C");

	return Clss;
}


// BP_PBags_BDogF_Set01_C BP_PBags_BDogF_Set01.Default__BP_PBags_BDogF_Set01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PBags_BDogF_Set01_C* ABP_PBags_BDogF_Set01_C::GetDefaultObj()
{
	static class ABP_PBags_BDogF_Set01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PBags_BDogF_Set01_C*>(ABP_PBags_BDogF_Set01_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PBags_BDogF_Set01.BP_PBags_BDogF_Set01_C.FX_Flying
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PBags_BDogF_Set01_C::FX_Flying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PBags_BDogF_Set01_C", "FX_Flying");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PBags_BDogF_Set01.BP_PBags_BDogF_Set01_C.FX_Idle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PBags_BDogF_Set01_C::FX_Idle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PBags_BDogF_Set01_C", "FX_Idle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PBags_BDogF_Set01.BP_PBags_BDogF_Set01_C.FX_LowPower
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PBags_BDogF_Set01_C::FX_LowPower()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PBags_BDogF_Set01_C", "FX_LowPower");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PBags_BDogF_Set01.BP_PBags_BDogF_Set01_C.FX_Charging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PBags_BDogF_Set01_C::FX_Charging()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PBags_BDogF_Set01_C", "FX_Charging");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PBags_BDogF_Set01.BP_PBags_BDogF_Set01_C.FX_Default
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PBags_BDogF_Set01_C::FX_Default()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PBags_BDogF_Set01_C", "FX_Default");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PBags_BDogF_Set01.BP_PBags_BDogF_Set01_C.OnMeshEffectFactorChange
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_PBags_BDogF_Set01_C::OnMeshEffectFactorChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PBags_BDogF_Set01_C", "OnMeshEffectFactorChange");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PBags_BDogF_Set01.BP_PBags_BDogF_Set01_C.ExecuteUbergraph_BP_PBags_BDogF_Set01
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PBags_BDogF_Set01_C::ExecuteUbergraph_BP_PBags_BDogF_Set01(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PBags_BDogF_Set01_C", "ExecuteUbergraph_BP_PBags_BDogF_Set01");

	Params::ABP_PBags_BDogF_Set01_C_ExecuteUbergraph_BP_PBags_BDogF_Set01_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


