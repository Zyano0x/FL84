#pragma once

/**
 * Name: FL84
 * Version: 1.15.1.6
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
	 * Class CustomMeshComponent.CustomMeshComponent
	 * Size -> 0x0018 (FullSize[0x0590] - InheritedSize[0x0578])
	 */
	class UCustomMeshComponent : public UMeshComponent
	{
	public:
		unsigned char                                              UnknownData_HA7J[0x8];                                   // 0x0578(0x0008) Fix Super Size
		unsigned char                                              UnknownData_UY5X[0x10];                                  // 0x0580(0x0010) MISSED OFFSET (PADDING)

	public:
		bool SetCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles);
		void ClearCustomMeshTriangles();
		void AddCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
