#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_DuckRollingMeshComponent.B_DuckRollingMeshComponent_C
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UB_DuckRollingMeshComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_DuckRollingMeshComponent_C");

	return Clss;
}


// B_DuckRollingMeshComponent_C B_DuckRollingMeshComponent.Default__B_DuckRollingMeshComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UB_DuckRollingMeshComponent_C* UB_DuckRollingMeshComponent_C::GetDefaultObj()
{
	static class UB_DuckRollingMeshComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UB_DuckRollingMeshComponent_C*>(UB_DuckRollingMeshComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


