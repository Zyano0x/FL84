/**
 * Name: FL84
 * Version: 15.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAbstractParticleModule.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbstractParticleModule::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CascadeExtensionPlugin.AbstractParticleModule"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CCA240
	 * 		Name   -> Function CascadeExtensionPlugin.ForcePointDataProvider.GetForcePoints
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 */
	struct FForcePoints UForcePointDataProvider::GetForcePoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CascadeExtensionPlugin.ForcePointDataProvider.GetForcePoints"));
		
		UForcePointDataProvider_GetForcePoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UForcePointDataProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UForcePointDataProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CascadeExtensionPlugin.ForcePointDataProvider"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CCA9F0
	 * 		Name   -> Function CascadeExtensionPlugin.MeshDataProvider.GetMeshTriangleData
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 */
	struct FMeshTriangleData UMeshDataProvider::GetMeshTriangleData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CascadeExtensionPlugin.MeshDataProvider.GetMeshTriangleData"));
		
		UMeshDataProvider_GetMeshTriangleData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CCA9C0
	 * 		Name   -> Function CascadeExtensionPlugin.MeshDataProvider.GetDataRevision
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 */
	int32_t UMeshDataProvider::GetDataRevision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CascadeExtensionPlugin.MeshDataProvider.GetDataRevision"));
		
		UMeshDataProvider_GetDataRevision_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshDataProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshDataProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CascadeExtensionPlugin.MeshDataProvider"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CCB120
	 * 		Name   -> Function CascadeExtensionPlugin.ParticleDataProvider.UpdateParticle
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FParticleProperties                         currentParticleProperties                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FParticleProperties UParticleDataProvider::UpdateParticle(const struct FParticleProperties& currentParticleProperties)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CascadeExtensionPlugin.ParticleDataProvider.UpdateParticle"));
		
		UParticleDataProvider_UpdateParticle_Params params {};
		params.currentParticleProperties = currentParticleProperties;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CCB020
	 * 		Name   -> Function CascadeExtensionPlugin.ParticleDataProvider.SpawnParticle
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FParticleProperties                         currentParticleProperties                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FParticleProperties UParticleDataProvider::SpawnParticle(const struct FParticleProperties& currentParticleProperties)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CascadeExtensionPlugin.ParticleDataProvider.SpawnParticle"));
		
		UParticleDataProvider_SpawnParticle_Params params {};
		params.currentParticleProperties = currentParticleProperties;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UParticleDataProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UParticleDataProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CascadeExtensionPlugin.ParticleDataProvider"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UParticleDecalComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UParticleDecalComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CascadeExtensionPlugin.ParticleDecalComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UParticleModuleColorTexture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UParticleModuleColorTexture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CascadeExtensionPlugin.ParticleModuleColorTexture"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UParticleModuleCustomData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UParticleModuleCustomData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CascadeExtensionPlugin.ParticleModuleCustomData"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UParticleModuleDecalComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UParticleModuleDecalComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CascadeExtensionPlugin.ParticleModuleDecalComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UParticleModuleForcePoints.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UParticleModuleForcePoints::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CascadeExtensionPlugin.ParticleModuleForcePoints"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UParticleModuleLocationDonut.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UParticleModuleLocationDonut::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CascadeExtensionPlugin.ParticleModuleLocationDonut"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UParticleModuleLocationHeightmap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UParticleModuleLocationHeightmap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CascadeExtensionPlugin.ParticleModuleLocationHeightmap"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UParticleModuleLocationJiggle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UParticleModuleLocationJiggle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CascadeExtensionPlugin.ParticleModuleLocationJiggle"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CCC110
	 * 		Name   -> Function CascadeExtensionPlugin.ParticleModuleLocationMesh.OnCachedActorDestroyed
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UParticleModuleLocationMesh::OnCachedActorDestroyed(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CascadeExtensionPlugin.ParticleModuleLocationMesh.OnCachedActorDestroyed"));
		
		UParticleModuleLocationMesh_OnCachedActorDestroyed_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UParticleModuleLocationMesh.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UParticleModuleLocationMesh::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CascadeExtensionPlugin.ParticleModuleLocationMesh"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UParticleModuleLocationSpiral.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UParticleModuleLocationSpiral::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CascadeExtensionPlugin.ParticleModuleLocationSpiral"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UParticleModuleSizeBySpeedOverTime.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UParticleModuleSizeBySpeedOverTime::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CascadeExtensionPlugin.ParticleModuleSizeBySpeedOverTime"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UParticleModuleSortOrder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UParticleModuleSortOrder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CascadeExtensionPlugin.ParticleModuleSortOrder"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UParticleModuleSwarmMovement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UParticleModuleSwarmMovement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CascadeExtensionPlugin.ParticleModuleSwarmMovement"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UParticleModuleVelocityTurbulence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UParticleModuleVelocityTurbulence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CascadeExtensionPlugin.ParticleModuleVelocityTurbulence"));
		return ptr;
	}

}


