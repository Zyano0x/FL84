#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CascadeExtensionPlugin.AbstractParticleModule
// (None)

class UClass* UAbstractParticleModule::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbstractParticleModule");

	return Clss;
}


// AbstractParticleModule CascadeExtensionPlugin.Default__AbstractParticleModule
// (Public, ClassDefaultObject, ArchetypeObject)

class UAbstractParticleModule* UAbstractParticleModule::GetDefaultObj()
{
	static class UAbstractParticleModule* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbstractParticleModule*>(UAbstractParticleModule::StaticClass()->DefaultObject);

	return Default;
}


// Class CascadeExtensionPlugin.ForcePointDataProvider
// (None)

class UClass* IForcePointDataProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ForcePointDataProvider");

	return Clss;
}


// ForcePointDataProvider CascadeExtensionPlugin.Default__ForcePointDataProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class IForcePointDataProvider* IForcePointDataProvider::GetDefaultObj()
{
	static class IForcePointDataProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<IForcePointDataProvider*>(IForcePointDataProvider::StaticClass()->DefaultObject);

	return Default;
}


// Function CascadeExtensionPlugin.ForcePointDataProvider.GetForcePoints
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FForcePoints                ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FForcePoints IForcePointDataProvider::GetForcePoints()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ForcePointDataProvider", "GetForcePoints");

	Params::IForcePointDataProvider_GetForcePoints_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CascadeExtensionPlugin.MeshDataProvider
// (None)

class UClass* IMeshDataProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshDataProvider");

	return Clss;
}


// MeshDataProvider CascadeExtensionPlugin.Default__MeshDataProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class IMeshDataProvider* IMeshDataProvider::GetDefaultObj()
{
	static class IMeshDataProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<IMeshDataProvider*>(IMeshDataProvider::StaticClass()->DefaultObject);

	return Default;
}


// Function CascadeExtensionPlugin.MeshDataProvider.GetMeshTriangleData
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FMeshTriangleData           ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FMeshTriangleData IMeshDataProvider::GetMeshTriangleData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDataProvider", "GetMeshTriangleData");

	Params::IMeshDataProvider_GetMeshTriangleData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CascadeExtensionPlugin.MeshDataProvider.GetDataRevision
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 IMeshDataProvider::GetDataRevision()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDataProvider", "GetDataRevision");

	Params::IMeshDataProvider_GetDataRevision_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CascadeExtensionPlugin.ParticleDataProvider
// (None)

class UClass* IParticleDataProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParticleDataProvider");

	return Clss;
}


// ParticleDataProvider CascadeExtensionPlugin.Default__ParticleDataProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class IParticleDataProvider* IParticleDataProvider::GetDefaultObj()
{
	static class IParticleDataProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<IParticleDataProvider*>(IParticleDataProvider::StaticClass()->DefaultObject);

	return Default;
}


// Function CascadeExtensionPlugin.ParticleDataProvider.UpdateParticle
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FParticleProperties         CurrentParticleProperties                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FParticleProperties         ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FParticleProperties IParticleDataProvider::UpdateParticle(const struct FParticleProperties& CurrentParticleProperties)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ParticleDataProvider", "UpdateParticle");

	Params::IParticleDataProvider_UpdateParticle_Params Parms{};

	Parms.CurrentParticleProperties = CurrentParticleProperties;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CascadeExtensionPlugin.ParticleDataProvider.SpawnParticle
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FParticleProperties         CurrentParticleProperties                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FParticleProperties         ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FParticleProperties IParticleDataProvider::SpawnParticle(const struct FParticleProperties& CurrentParticleProperties)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ParticleDataProvider", "SpawnParticle");

	Params::IParticleDataProvider_SpawnParticle_Params Parms{};

	Parms.CurrentParticleProperties = CurrentParticleProperties;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class CascadeExtensionPlugin.ParticleDecalComponent
// (SceneComponent)

class UClass* UParticleDecalComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParticleDecalComponent");

	return Clss;
}


// ParticleDecalComponent CascadeExtensionPlugin.Default__ParticleDecalComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UParticleDecalComponent* UParticleDecalComponent::GetDefaultObj()
{
	static class UParticleDecalComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UParticleDecalComponent*>(UParticleDecalComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class CascadeExtensionPlugin.ParticleModuleColorTexture
// (None)

class UClass* UParticleModuleColorTexture::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParticleModuleColorTexture");

	return Clss;
}


// ParticleModuleColorTexture CascadeExtensionPlugin.Default__ParticleModuleColorTexture
// (Public, ClassDefaultObject, ArchetypeObject)

class UParticleModuleColorTexture* UParticleModuleColorTexture::GetDefaultObj()
{
	static class UParticleModuleColorTexture* Default = nullptr;

	if (!Default)
		Default = static_cast<UParticleModuleColorTexture*>(UParticleModuleColorTexture::StaticClass()->DefaultObject);

	return Default;
}


// Class CascadeExtensionPlugin.ParticleModuleCustomData
// (None)

class UClass* UParticleModuleCustomData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParticleModuleCustomData");

	return Clss;
}


// ParticleModuleCustomData CascadeExtensionPlugin.Default__ParticleModuleCustomData
// (Public, ClassDefaultObject, ArchetypeObject)

class UParticleModuleCustomData* UParticleModuleCustomData::GetDefaultObj()
{
	static class UParticleModuleCustomData* Default = nullptr;

	if (!Default)
		Default = static_cast<UParticleModuleCustomData*>(UParticleModuleCustomData::StaticClass()->DefaultObject);

	return Default;
}


// Class CascadeExtensionPlugin.ParticleModuleDecalComponent
// (None)

class UClass* UParticleModuleDecalComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParticleModuleDecalComponent");

	return Clss;
}


// ParticleModuleDecalComponent CascadeExtensionPlugin.Default__ParticleModuleDecalComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UParticleModuleDecalComponent* UParticleModuleDecalComponent::GetDefaultObj()
{
	static class UParticleModuleDecalComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UParticleModuleDecalComponent*>(UParticleModuleDecalComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class CascadeExtensionPlugin.ParticleModuleForcePoints
// (None)

class UClass* UParticleModuleForcePoints::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParticleModuleForcePoints");

	return Clss;
}


// ParticleModuleForcePoints CascadeExtensionPlugin.Default__ParticleModuleForcePoints
// (Public, ClassDefaultObject, ArchetypeObject)

class UParticleModuleForcePoints* UParticleModuleForcePoints::GetDefaultObj()
{
	static class UParticleModuleForcePoints* Default = nullptr;

	if (!Default)
		Default = static_cast<UParticleModuleForcePoints*>(UParticleModuleForcePoints::StaticClass()->DefaultObject);

	return Default;
}


// Class CascadeExtensionPlugin.ParticleModuleLocationDonut
// (None)

class UClass* UParticleModuleLocationDonut::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParticleModuleLocationDonut");

	return Clss;
}


// ParticleModuleLocationDonut CascadeExtensionPlugin.Default__ParticleModuleLocationDonut
// (Public, ClassDefaultObject, ArchetypeObject)

class UParticleModuleLocationDonut* UParticleModuleLocationDonut::GetDefaultObj()
{
	static class UParticleModuleLocationDonut* Default = nullptr;

	if (!Default)
		Default = static_cast<UParticleModuleLocationDonut*>(UParticleModuleLocationDonut::StaticClass()->DefaultObject);

	return Default;
}


// Class CascadeExtensionPlugin.ParticleModuleLocationHeightmap
// (None)

class UClass* UParticleModuleLocationHeightmap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParticleModuleLocationHeightmap");

	return Clss;
}


// ParticleModuleLocationHeightmap CascadeExtensionPlugin.Default__ParticleModuleLocationHeightmap
// (Public, ClassDefaultObject, ArchetypeObject)

class UParticleModuleLocationHeightmap* UParticleModuleLocationHeightmap::GetDefaultObj()
{
	static class UParticleModuleLocationHeightmap* Default = nullptr;

	if (!Default)
		Default = static_cast<UParticleModuleLocationHeightmap*>(UParticleModuleLocationHeightmap::StaticClass()->DefaultObject);

	return Default;
}


// Class CascadeExtensionPlugin.ParticleModuleLocationJiggle
// (None)

class UClass* UParticleModuleLocationJiggle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParticleModuleLocationJiggle");

	return Clss;
}


// ParticleModuleLocationJiggle CascadeExtensionPlugin.Default__ParticleModuleLocationJiggle
// (Public, ClassDefaultObject, ArchetypeObject)

class UParticleModuleLocationJiggle* UParticleModuleLocationJiggle::GetDefaultObj()
{
	static class UParticleModuleLocationJiggle* Default = nullptr;

	if (!Default)
		Default = static_cast<UParticleModuleLocationJiggle*>(UParticleModuleLocationJiggle::StaticClass()->DefaultObject);

	return Default;
}


// Class CascadeExtensionPlugin.ParticleModuleLocationMesh
// (None)

class UClass* UParticleModuleLocationMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParticleModuleLocationMesh");

	return Clss;
}


// ParticleModuleLocationMesh CascadeExtensionPlugin.Default__ParticleModuleLocationMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class UParticleModuleLocationMesh* UParticleModuleLocationMesh::GetDefaultObj()
{
	static class UParticleModuleLocationMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UParticleModuleLocationMesh*>(UParticleModuleLocationMesh::StaticClass()->DefaultObject);

	return Default;
}


// Function CascadeExtensionPlugin.ParticleModuleLocationMesh.OnCachedActorDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UParticleModuleLocationMesh::OnCachedActorDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ParticleModuleLocationMesh", "OnCachedActorDestroyed");

	Params::UParticleModuleLocationMesh_OnCachedActorDestroyed_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class CascadeExtensionPlugin.ParticleModuleLocationSpiral
// (None)

class UClass* UParticleModuleLocationSpiral::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParticleModuleLocationSpiral");

	return Clss;
}


// ParticleModuleLocationSpiral CascadeExtensionPlugin.Default__ParticleModuleLocationSpiral
// (Public, ClassDefaultObject, ArchetypeObject)

class UParticleModuleLocationSpiral* UParticleModuleLocationSpiral::GetDefaultObj()
{
	static class UParticleModuleLocationSpiral* Default = nullptr;

	if (!Default)
		Default = static_cast<UParticleModuleLocationSpiral*>(UParticleModuleLocationSpiral::StaticClass()->DefaultObject);

	return Default;
}


// Class CascadeExtensionPlugin.ParticleModuleSizeBySpeedOverTime
// (None)

class UClass* UParticleModuleSizeBySpeedOverTime::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParticleModuleSizeBySpeedOverTime");

	return Clss;
}


// ParticleModuleSizeBySpeedOverTime CascadeExtensionPlugin.Default__ParticleModuleSizeBySpeedOverTime
// (Public, ClassDefaultObject, ArchetypeObject)

class UParticleModuleSizeBySpeedOverTime* UParticleModuleSizeBySpeedOverTime::GetDefaultObj()
{
	static class UParticleModuleSizeBySpeedOverTime* Default = nullptr;

	if (!Default)
		Default = static_cast<UParticleModuleSizeBySpeedOverTime*>(UParticleModuleSizeBySpeedOverTime::StaticClass()->DefaultObject);

	return Default;
}


// Class CascadeExtensionPlugin.ParticleModuleSortOrder
// (None)

class UClass* UParticleModuleSortOrder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParticleModuleSortOrder");

	return Clss;
}


// ParticleModuleSortOrder CascadeExtensionPlugin.Default__ParticleModuleSortOrder
// (Public, ClassDefaultObject, ArchetypeObject)

class UParticleModuleSortOrder* UParticleModuleSortOrder::GetDefaultObj()
{
	static class UParticleModuleSortOrder* Default = nullptr;

	if (!Default)
		Default = static_cast<UParticleModuleSortOrder*>(UParticleModuleSortOrder::StaticClass()->DefaultObject);

	return Default;
}


// Class CascadeExtensionPlugin.ParticleModuleSwarmMovement
// (None)

class UClass* UParticleModuleSwarmMovement::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParticleModuleSwarmMovement");

	return Clss;
}


// ParticleModuleSwarmMovement CascadeExtensionPlugin.Default__ParticleModuleSwarmMovement
// (Public, ClassDefaultObject, ArchetypeObject)

class UParticleModuleSwarmMovement* UParticleModuleSwarmMovement::GetDefaultObj()
{
	static class UParticleModuleSwarmMovement* Default = nullptr;

	if (!Default)
		Default = static_cast<UParticleModuleSwarmMovement*>(UParticleModuleSwarmMovement::StaticClass()->DefaultObject);

	return Default;
}


// Class CascadeExtensionPlugin.ParticleModuleVelocityTurbulence
// (None)

class UClass* UParticleModuleVelocityTurbulence::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParticleModuleVelocityTurbulence");

	return Clss;
}


// ParticleModuleVelocityTurbulence CascadeExtensionPlugin.Default__ParticleModuleVelocityTurbulence
// (Public, ClassDefaultObject, ArchetypeObject)

class UParticleModuleVelocityTurbulence* UParticleModuleVelocityTurbulence::GetDefaultObj()
{
	static class UParticleModuleVelocityTurbulence* Default = nullptr;

	if (!Default)
		Default = static_cast<UParticleModuleVelocityTurbulence*>(UParticleModuleVelocityTurbulence::StaticClass()->DefaultObject);

	return Default;
}

}


