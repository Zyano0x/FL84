#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Environment_Lighting.Environment_Lighting_C
// (Actor)

class UClass* AEnvironment_Lighting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Environment_Lighting_C");

	return Clss;
}


// Environment_Lighting_C Environment_Lighting.Default__Environment_Lighting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEnvironment_Lighting_C* AEnvironment_Lighting_C::GetDefaultObj()
{
	static class AEnvironment_Lighting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEnvironment_Lighting_C*>(AEnvironment_Lighting_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Environment_Lighting.Environment_Lighting_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AEnvironment_Lighting_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Environment_Lighting_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Environment_Lighting.Environment_Lighting_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AEnvironment_Lighting_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Environment_Lighting_C", "ReceiveEndPlay");

	Params::AEnvironment_Lighting_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Environment_Lighting.Environment_Lighting_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString AEnvironment_Lighting_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Environment_Lighting_C", "GetModuleName");

	Params::AEnvironment_Lighting_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Environment_Lighting.Environment_Lighting_C.SetLight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SceneName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AEnvironment_Lighting_C::SetLight(const class FString& SceneName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Environment_Lighting_C", "SetLight");

	Params::AEnvironment_Lighting_C_SetLight_Params Parms{};

	Parms.SceneName = SceneName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Environment_Lighting.Environment_Lighting_C.SetCardSkyLightData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Indensity                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnvironment_Lighting_C::SetCardSkyLightData(float Indensity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Environment_Lighting_C", "SetCardSkyLightData");

	Params::AEnvironment_Lighting_C_SetCardSkyLightData_Params Parms{};

	Parms.Indensity = Indensity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Environment_Lighting.Environment_Lighting_C.ExecuteUbergraph_Environment_Lighting
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_SceneName                                     (ZeroConstructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Indensity                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnvironment_Lighting_C::ExecuteUbergraph_Environment_Lighting(int32 EntryPoint, const class FString& K2Node_CustomEvent_SceneName, float K2Node_CustomEvent_Indensity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Environment_Lighting_C", "ExecuteUbergraph_Environment_Lighting");

	Params::AEnvironment_Lighting_C_ExecuteUbergraph_Environment_Lighting_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_SceneName = K2Node_CustomEvent_SceneName;
	Parms.K2Node_CustomEvent_Indensity = K2Node_CustomEvent_Indensity;

	UObject::ProcessEvent(Func, &Parms);

}

}


