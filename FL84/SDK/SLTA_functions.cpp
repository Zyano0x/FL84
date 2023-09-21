#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SLTA.SLTA_BPL
// (None)

class UClass* USLTA_BPL::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SLTA_BPL");

	return Clss;
}


// SLTA_BPL SLTA.Default__SLTA_BPL
// (Public, ClassDefaultObject, ArchetypeObject)

class USLTA_BPL* USLTA_BPL::GetDefaultObj()
{
	static class USLTA_BPL* Default = nullptr;

	if (!Default)
		Default = static_cast<USLTA_BPL*>(USLTA_BPL::StaticClass()->DefaultObject);

	return Default;
}


// Function SLTA.SLTA_BPL.WriteTxt
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SaveString                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Path                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USLTA_BPL::WriteTxt(const class FString& SaveString, const class FString& Path)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SLTA_BPL", "WriteTxt");

	Params::USLTA_BPL_WriteTxt_Params Parms{};

	Parms.SaveString = SaveString;
	Parms.Path = Path;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SLTA.SLTA_BPL.SLTA_SetDetailMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*             _sceneComponent                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USLTA_BPL::SLTA_SetDetailMode(class USceneComponent* _sceneComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SLTA_BPL", "SLTA_SetDetailMode");

	Params::USLTA_BPL_SLTA_SetDetailMode_Params Parms{};

	Parms._sceneComponent = _sceneComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SLTA.SLTA_BPL.SLTA_GetPrimitivesRHI
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USLTA_BPL::SLTA_GetPrimitivesRHI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SLTA_BPL", "SLTA_GetPrimitivesRHI");

	Params::USLTA_BPL_SLTA_GetPrimitivesRHI_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SLTA.SLTA_BPL.SLTA_GetLightMapIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UStaticMeshComponent*        _ustaticMeshComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USLTA_BPL::SLTA_GetLightMapIndex(class UStaticMeshComponent* _ustaticMeshComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SLTA_BPL", "SLTA_GetLightMapIndex");

	Params::USLTA_BPL_SLTA_GetLightMapIndex_Params Parms{};

	Parms._ustaticMeshComponent = _ustaticMeshComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SLTA.SLTA_BPL.SLTA_GetLightMapCoordinateBias
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UStaticMeshComponent*        _ustaticMeshComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector4 USLTA_BPL::SLTA_GetLightMapCoordinateBias(class UStaticMeshComponent* _ustaticMeshComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SLTA_BPL", "SLTA_GetLightMapCoordinateBias");

	Params::USLTA_BPL_SLTA_GetLightMapCoordinateBias_Params Parms{};

	Parms._ustaticMeshComponent = _ustaticMeshComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SLTA.SLTA_BPL.SLTA_GetDrawcalls
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USLTA_BPL::SLTA_GetDrawcalls()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SLTA_BPL", "SLTA_GetDrawcalls");

	Params::USLTA_BPL_SLTA_GetDrawcalls_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SLTA.SLTA_BPL.SLTA_GetCustomPrimitiveData
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*         _primitive                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<float> USLTA_BPL::SLTA_GetCustomPrimitiveData(class UPrimitiveComponent* _primitive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SLTA_BPL", "SLTA_GetCustomPrimitiveData");

	Params::USLTA_BPL_SLTA_GetCustomPrimitiveData_Params Parms{};

	Parms._primitive = _primitive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SLTA.SLTA_BPL.SLTA_ArrayToCSV
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SaveDirectory                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TitleName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              SaveText                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ArrayIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               AllowOverwriting                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USLTA_BPL::SLTA_ArrayToCSV(const class FString& SaveDirectory, const class FString& Filename, const class FString& TitleName, const TArray<class FString>& SaveText, int32 ArrayIndex, bool AllowOverwriting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SLTA_BPL", "SLTA_ArrayToCSV");

	Params::USLTA_BPL_SLTA_ArrayToCSV_Params Parms{};

	Parms.SaveDirectory = SaveDirectory;
	Parms.Filename = Filename;
	Parms.TitleName = TitleName;
	Parms.SaveText = SaveText;
	Parms.ArrayIndex = ArrayIndex;
	Parms.AllowOverwriting = AllowOverwriting;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SLTA.SLTA_BPL.ReadTxt
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Path                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USLTA_BPL::ReadTxt(const class FString& Path)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SLTA_BPL", "ReadTxt");

	Params::USLTA_BPL_ReadTxt_Params Parms{};

	Parms.Path = Path;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


