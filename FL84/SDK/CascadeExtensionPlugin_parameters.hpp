#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// Function CascadeExtensionPlugin.ForcePointDataProvider.GetForcePoints
struct IForcePointDataProvider_GetForcePoints_Params
{
public:
	struct FForcePoints                          ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CascadeExtensionPlugin.MeshDataProvider.GetMeshTriangleData
struct IMeshDataProvider_GetMeshTriangleData_Params
{
public:
	struct FMeshTriangleData                     ReturnValue;                                       // 0x0(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CascadeExtensionPlugin.MeshDataProvider.GetDataRevision
struct IMeshDataProvider_GetDataRevision_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function CascadeExtensionPlugin.ParticleDataProvider.UpdateParticle
struct IParticleDataProvider_UpdateParticle_Params
{
public:
	struct FParticleProperties                   CurrentParticleProperties;                         // 0x0(0x44)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FParticleProperties                   ReturnValue;                                       // 0x44(0x44)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function CascadeExtensionPlugin.ParticleDataProvider.SpawnParticle
struct IParticleDataProvider_SpawnParticle_Params
{
public:
	struct FParticleProperties                   CurrentParticleProperties;                         // 0x0(0x44)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FParticleProperties                   ReturnValue;                                       // 0x44(0x44)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CascadeExtensionPlugin.ParticleModuleLocationMesh.OnCachedActorDestroyed
struct UParticleModuleLocationMesh_OnCachedActorDestroyed_Params
{
public:
	class AActor*                                DestroyedActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


