/**
 * Name: FL84
 * Version: 1.14.4.6.511026
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0170E760
	 * 		Name   -> Function ImpostorBaker.KismetImpostorBakerLibrary.ConvertProceduralToStatic
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UProceduralMeshComponent*                    ProceduralMeshComponent                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        MeshName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MeshPath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UStaticMesh* UKismetImpostorBakerLibrary::STATIC_ConvertProceduralToStatic(class UProceduralMeshComponent* ProceduralMeshComponent, const class FName& MeshName, const class FString& MeshPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImpostorBaker.KismetImpostorBakerLibrary.ConvertProceduralToStatic");
		
		UKismetImpostorBakerLibrary_ConvertProceduralToStatic_Params params {};
		params.ProceduralMeshComponent = ProceduralMeshComponent;
		params.MeshName = MeshName;
		params.MeshPath = MeshPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKismetImpostorBakerLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKismetImpostorBakerLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ImpostorBaker.KismetImpostorBakerLibrary");
		return ptr;
	}

}


