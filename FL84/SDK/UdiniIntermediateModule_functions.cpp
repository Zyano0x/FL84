#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class UdiniIntermediateModule.UdiniIntermediateModuleBPLibrary
// (None)

class UClass* UUdiniIntermediateModuleBPLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UdiniIntermediateModuleBPLibrary");

	return Clss;
}


// UdiniIntermediateModuleBPLibrary UdiniIntermediateModule.Default__UdiniIntermediateModuleBPLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UUdiniIntermediateModuleBPLibrary* UUdiniIntermediateModuleBPLibrary::GetDefaultObj()
{
	static class UUdiniIntermediateModuleBPLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UUdiniIntermediateModuleBPLibrary*>(UUdiniIntermediateModuleBPLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function UdiniIntermediateModule.UdiniIntermediateModuleBPLibrary.UdiniIntermediateModuleSampleFunction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              Param                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UUdiniIntermediateModuleBPLibrary::UdiniIntermediateModuleSampleFunction(float Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UdiniIntermediateModuleBPLibrary", "UdiniIntermediateModuleSampleFunction");

	Params::UUdiniIntermediateModuleBPLibrary_UdiniIntermediateModuleSampleFunction_Params Parms{};

	Parms.Param = Param;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


