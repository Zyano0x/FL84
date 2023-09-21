#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AiPal.AiPalComponent
// (None)

class UClass* UAiPalComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AiPalComponent");

	return Clss;
}


// AiPalComponent AiPal.Default__AiPalComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAiPalComponent* UAiPalComponent::GetDefaultObj()
{
	static class UAiPalComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAiPalComponent*>(UAiPalComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AiPal.AiPalComponent.SetUserID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      UserId                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAiPalComponent::SetUserID(const class FString& UserId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AiPalComponent", "SetUserID");

	Params::UAiPalComponent_SetUserID_Params Parms{};

	Parms.UserId = UserId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AiPal.AiPalComponent.SetThreshold
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ThresholdPer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAiPalComponent::SetThreshold(float ThresholdPer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AiPalComponent", "SetThreshold");

	Params::UAiPalComponent_SetThreshold_Params Parms{};

	Parms.ThresholdPer = ThresholdPer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AiPal.AiPalComponent.SetMaxDetectTimes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              DetectGap_ms                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAiPalComponent::SetMaxDetectTimes(int32 DetectGap_ms)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AiPalComponent", "SetMaxDetectTimes");

	Params::UAiPalComponent_SetMaxDetectTimes_Params Parms{};

	Parms.DetectGap_ms = DetectGap_ms;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AiPal.AiPalComponent.SetDetectGap_ms
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              DetectGap_ms                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAiPalComponent::SetDetectGap_ms(int32 DetectGap_ms)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AiPalComponent", "SetDetectGap_ms");

	Params::UAiPalComponent_SetDetectGap_ms_Params Parms{};

	Parms.DetectGap_ms = DetectGap_ms;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AiPal.AiPalComponent.EndDetect
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAiPalComponent::EndDetect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AiPalComponent", "EndDetect");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AiPal.AiPalComponent.Capture
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAiPalComponent::Capture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AiPalComponent", "Capture");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AiPal.AiPalComponent.BeginDetect
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAiPalComponent::BeginDetect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AiPalComponent", "BeginDetect");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


