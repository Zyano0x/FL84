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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.SetToggleValueAt
	 */
	struct UHoudiniAssetBlueprintComponent_SetToggleValueAt_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Value;                                                   // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6XM5[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Index;                                                   // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.SetFloatParameter
	 */
	struct UHoudiniAssetBlueprintComponent_SetFloatParameter_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.HasParameter
	 */
	struct UHoudiniAssetBlueprintComponent_HasParameter_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.SetVertexPosition
	 */
	struct UHoudiniStaticMesh_SetVertexPosition_Params
	{
	public:
		uint32_t                                                   InVertexIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             InPosition;                                              // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexVTangent
	 */
	struct UHoudiniStaticMesh_SetTriangleVertexVTangent_Params
	{
	public:
		uint32_t                                                   InTriangleIndex;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              InTriangleVertexIndex;                                   // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VKK9[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             InVTangent;                                              // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexUV
	 */
	struct UHoudiniStaticMesh_SetTriangleVertexUV_Params
	{
	public:
		uint32_t                                                   InTriangleIndex;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              InTriangleVertexIndex;                                   // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              InUVLayer;                                               // 0x0005(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ITXF[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector2D                                           InUV;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexUTangent
	 */
	struct UHoudiniStaticMesh_SetTriangleVertexUTangent_Params
	{
	public:
		uint32_t                                                   InTriangleIndex;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              InTriangleVertexIndex;                                   // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4MAD[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             InUTangent;                                              // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexNormal
	 */
	struct UHoudiniStaticMesh_SetTriangleVertexNormal_Params
	{
	public:
		uint32_t                                                   InTriangleIndex;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              InTriangleVertexIndex;                                   // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YVLA[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             InNormal;                                                // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexIndices
	 */
	struct UHoudiniStaticMesh_SetTriangleVertexIndices_Params
	{
	public:
		uint32_t                                                   InTriangleIndex;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIntVector                                          InTriangleVertexIndices;                                 // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexColor
	 */
	struct UHoudiniStaticMesh_SetTriangleVertexColor_Params
	{
	public:
		uint32_t                                                   InTriangleIndex;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              InTriangleVertexIndex;                                   // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_H83H[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FColor                                              InColor;                                                 // 0x0008(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleMaterialID
	 */
	struct UHoudiniStaticMesh_SetTriangleMaterialID_Params
	{
	public:
		uint32_t                                                   InTriangleIndex;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InMaterialID;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.SetStaticMaterial
	 */
	struct UHoudiniStaticMesh_SetStaticMaterial_Params
	{
	public:
		uint32_t                                                   InMaterialIndex;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KLO2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FStaticMaterial                                     InStaticMaterial;                                        // 0x0008(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.SetNumUVLayers
	 */
	struct UHoudiniStaticMesh_SetNumUVLayers_Params
	{
	public:
		uint32_t                                                   InNumUVLayers;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.SetNumStaticMaterials
	 */
	struct UHoudiniStaticMesh_SetNumStaticMaterials_Params
	{
	public:
		uint32_t                                                   InNumStaticMaterials;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasTangents
	 */
	struct UHoudiniStaticMesh_SetHasTangents_Params
	{
	public:
		bool                                                       bInHasTangents;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasPerFaceMaterials
	 */
	struct UHoudiniStaticMesh_SetHasPerFaceMaterials_Params
	{
	public:
		bool                                                       bInHasPerFaceMaterials;                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasNormals
	 */
	struct UHoudiniStaticMesh_SetHasNormals_Params
	{
	public:
		bool                                                       bInHasNormals;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasColors
	 */
	struct UHoudiniStaticMesh_SetHasColors_Params
	{
	public:
		bool                                                       bInHasColors;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.Optimize
	 */
	struct UHoudiniStaticMesh_Optimize_Params
	{	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.IsValid
	 */
	struct UHoudiniStaticMesh_IsValid_Params
	{
	public:
		bool                                                       bInSkipVertexIndicesCheck;                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.Initialize
	 */
	struct UHoudiniStaticMesh_Initialize_Params
	{
	public:
		uint32_t                                                   InNumVertices;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint32_t                                                   InNumTriangles;                                          // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint32_t                                                   InNumUVLayers;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint32_t                                                   InInitialNumStaticMaterials;                             // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInHasNormals;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInHasTangents;                                          // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInHasColors;                                            // 0x0012(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInHasPerFaceMaterials;                                  // 0x0013(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.HasTangents
	 */
	struct UHoudiniStaticMesh_HasTangents_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.HasPerFaceMaterials
	 */
	struct UHoudiniStaticMesh_HasPerFaceMaterials_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.HasNormals
	 */
	struct UHoudiniStaticMesh_HasNormals_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.HasColors
	 */
	struct UHoudiniStaticMesh_HasColors_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexPositions
	 */
	struct UHoudiniStaticMesh_GetVertexPositions_Params
	{
	public:
		TArray<struct FVector>                                     ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceVTangents
	 */
	struct UHoudiniStaticMesh_GetVertexInstanceVTangents_Params
	{
	public:
		TArray<struct FVector>                                     ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceUVs
	 */
	struct UHoudiniStaticMesh_GetVertexInstanceUVs_Params
	{
	public:
		TArray<struct FVector2D>                                   ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceUTangents
	 */
	struct UHoudiniStaticMesh_GetVertexInstanceUTangents_Params
	{
	public:
		TArray<struct FVector>                                     ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceNormals
	 */
	struct UHoudiniStaticMesh_GetVertexInstanceNormals_Params
	{
	public:
		TArray<struct FVector>                                     ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceColors
	 */
	struct UHoudiniStaticMesh_GetVertexInstanceColors_Params
	{
	public:
		TArray<struct FColor>                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.GetTriangleIndices
	 */
	struct UHoudiniStaticMesh_GetTriangleIndices_Params
	{
	public:
		TArray<struct FIntVector>                                  ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.GetStaticMaterials
	 */
	struct UHoudiniStaticMesh_GetStaticMaterials_Params
	{
	public:
		TArray<struct FStaticMaterial>                             ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumVertices
	 */
	struct UHoudiniStaticMesh_GetNumVertices_Params
	{
	public:
		uint32_t                                                   ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumVertexInstances
	 */
	struct UHoudiniStaticMesh_GetNumVertexInstances_Params
	{
	public:
		uint32_t                                                   ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumUVLayers
	 */
	struct UHoudiniStaticMesh_GetNumUVLayers_Params
	{
	public:
		uint32_t                                                   ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumTriangles
	 */
	struct UHoudiniStaticMesh_GetNumTriangles_Params
	{
	public:
		uint32_t                                                   ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumStaticMaterials
	 */
	struct UHoudiniStaticMesh_GetNumStaticMaterials_Params
	{
	public:
		uint32_t                                                   ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterialIndex
	 */
	struct UHoudiniStaticMesh_GetMaterialIndex_Params
	{
	public:
		class FName                                                InMaterialSlotName;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterialIDsPerTriangle
	 */
	struct UHoudiniStaticMesh_GetMaterialIDsPerTriangle_Params
	{
	public:
		TArray<int32_t>                                            ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterial
	 */
	struct UHoudiniStaticMesh_GetMaterial_Params
	{
	public:
		int32_t                                                    InMaterialIndex;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_D2OW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMaterialInterface*                                  ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.CalculateTangents
	 */
	struct UHoudiniStaticMesh_CalculateTangents_Params
	{
	public:
		bool                                                       bInComputeWeightedNormals;                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.CalculateNormals
	 */
	struct UHoudiniStaticMesh_CalculateNormals_Params
	{
	public:
		bool                                                       bInComputeWeightedNormals;                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.CalcBounds
	 */
	struct UHoudiniStaticMesh_CalcBounds_Params
	{
	public:
		struct FBox                                                ReturnValue;                                             // 0x0000(0x001C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMesh.AddStaticMaterial
	 */
	struct UHoudiniStaticMesh_AddStaticMaterial_Params
	{
	public:
		struct FStaticMaterial                                     InStaticMaterial;                                        // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		uint32_t                                                   ReturnValue;                                             // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.SetMesh
	 */
	struct UHoudiniStaticMeshComponent_SetMesh_Params
	{
	public:
		class UHoudiniStaticMesh*                                  InMesh;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.SetHoudiniIconVisible
	 */
	struct UHoudiniStaticMeshComponent_SetHoudiniIconVisible_Params
	{
	public:
		bool                                                       bInHoudiniIconVisible;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.NotifyMeshUpdated
	 */
	struct UHoudiniStaticMeshComponent_NotifyMeshUpdated_Params
	{	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.IsHoudiniIconVisible
	 */
	struct UHoudiniStaticMeshComponent_IsHoudiniIconVisible_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.GetMesh
	 */
	struct UHoudiniStaticMeshComponent_GetMesh_Params
	{
	public:
		class UHoudiniStaticMesh*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
