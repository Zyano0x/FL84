#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ImpostorBaker.KismetImpostorBakerLibrary
// (None)

class UClass* UKismetImpostorBakerLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KismetImpostorBakerLibrary");

	return Clss;
}


// KismetImpostorBakerLibrary ImpostorBaker.Default__KismetImpostorBakerLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UKismetImpostorBakerLibrary* UKismetImpostorBakerLibrary::GetDefaultObj()
{
	static class UKismetImpostorBakerLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UKismetImpostorBakerLibrary*>(UKismetImpostorBakerLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ImpostorBaker.KismetImpostorBakerLibrary.ConvertProceduralToStatic
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UProceduralMeshComponent*    ProceduralMeshComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        MeshName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MeshPath                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStaticMesh*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UStaticMesh* UKismetImpostorBakerLibrary::ConvertProceduralToStatic(class UProceduralMeshComponent* ProceduralMeshComponent, class FName MeshName, const class FString& MeshPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetImpostorBakerLibrary", "ConvertProceduralToStatic");

	Params::UKismetImpostorBakerLibrary_ConvertProceduralToStatic_Params Parms{};

	Parms.ProceduralMeshComponent = ProceduralMeshComponent;
	Parms.MeshName = MeshName;
	Parms.MeshPath = MeshPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


