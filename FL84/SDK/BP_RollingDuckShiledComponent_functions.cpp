#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RollingDuckShiledComponent.BP_RollingDuckShiledComponent_C
// (SceneComponent, PrimitiveComponent, StaticMeshComponent)

class UClass* UBP_RollingDuckShiledComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RollingDuckShiledComponent_C");

	return Clss;
}


// BP_RollingDuckShiledComponent_C BP_RollingDuckShiledComponent.Default__BP_RollingDuckShiledComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RollingDuckShiledComponent_C* UBP_RollingDuckShiledComponent_C::GetDefaultObj()
{
	static class UBP_RollingDuckShiledComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RollingDuckShiledComponent_C*>(UBP_RollingDuckShiledComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


