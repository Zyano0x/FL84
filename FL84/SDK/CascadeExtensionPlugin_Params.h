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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function CascadeExtensionPlugin.ForcePointDataProvider.GetForcePoints
	 */
	struct UForcePointDataProvider_GetForcePoints_Params
	{
	public:
		struct FForcePoints                                        ReturnValue;                                             // 0x0000(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CascadeExtensionPlugin.MeshDataProvider.GetMeshTriangleData
	 */
	struct UMeshDataProvider_GetMeshTriangleData_Params
	{
	public:
		struct FMeshTriangleData                                   ReturnValue;                                             // 0x0000(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CascadeExtensionPlugin.MeshDataProvider.GetDataRevision
	 */
	struct UMeshDataProvider_GetDataRevision_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CascadeExtensionPlugin.ParticleDataProvider.UpdateParticle
	 */
	struct UParticleDataProvider_UpdateParticle_Params
	{
	public:
		struct FParticleProperties                                 currentParticleProperties;                               // 0x0000(0x0044)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FParticleProperties                                 ReturnValue;                                             // 0x0044(0x0044)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CascadeExtensionPlugin.ParticleDataProvider.SpawnParticle
	 */
	struct UParticleDataProvider_SpawnParticle_Params
	{
	public:
		struct FParticleProperties                                 currentParticleProperties;                               // 0x0000(0x0044)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FParticleProperties                                 ReturnValue;                                             // 0x0044(0x0044)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function CascadeExtensionPlugin.ParticleModuleLocationMesh.OnCachedActorDestroyed
	 */
	struct UParticleModuleLocationMesh_OnCachedActorDestroyed_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
