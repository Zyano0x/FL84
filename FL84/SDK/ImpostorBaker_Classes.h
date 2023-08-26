#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.5.503427
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class ImpostorBaker.KismetImpostorBakerLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UKismetImpostorBakerLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UStaticMesh* STATIC_ConvertProceduralToStatic(class UProceduralMeshComponent* ProceduralMeshComponent, const class FName& MeshName, const class FString& MeshPath);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
