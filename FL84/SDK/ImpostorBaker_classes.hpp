#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class ImpostorBaker.KismetImpostorBakerLibrary
class UKismetImpostorBakerLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UKismetImpostorBakerLibrary* GetDefaultObj();

	class UStaticMesh* ConvertProceduralToStatic(class UProceduralMeshComponent* ProceduralMeshComponent, class FName MeshName, const class FString& MeshPath);
};

}


