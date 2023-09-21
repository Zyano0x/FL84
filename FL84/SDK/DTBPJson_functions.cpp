#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DTBPJson.DTBPJsonBPLib
// (None)

class UClass* UDTBPJsonBPLib::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DTBPJsonBPLib");

	return Clss;
}


// DTBPJsonBPLib DTBPJson.Default__DTBPJsonBPLib
// (Public, ClassDefaultObject, ArchetypeObject)

class UDTBPJsonBPLib* UDTBPJsonBPLib::GetDefaultObj()
{
	static class UDTBPJsonBPLib* Default = nullptr;

	if (!Default)
		Default = static_cast<UDTBPJsonBPLib*>(UDTBPJsonBPLib::StaticClass()->DefaultObject);

	return Default;
}


// Function DTBPJson.DTBPJsonBPLib.StructToJson
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDTStruct                   Struct                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Json                                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               PrettyPrint                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDTBPJsonBPLib::StructToJson(struct FDTStruct& Struct, class FString* Json, bool PrettyPrint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DTBPJsonBPLib", "StructToJson");

	Params::UDTBPJsonBPLib_StructToJson_Params Parms{};

	Parms.Struct = Struct;
	Parms.PrettyPrint = PrettyPrint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Json != nullptr)
		*Json = std::move(Parms.Json);

}


// Function DTBPJson.DTBPJsonBPLib.JsonToStruct
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDTStruct                   Struct                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Json                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDTBPJsonBPLib::JsonToStruct(struct FDTStruct* Struct, const class FString& Json)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DTBPJsonBPLib", "JsonToStruct");

	Params::UDTBPJsonBPLib_JsonToStruct_Params Parms{};

	Parms.Json = Json;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Struct != nullptr)
		*Struct = std::move(Parms.Struct);

}

}


