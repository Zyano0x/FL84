#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SolarRuntimeAssetsCollection.BP_SolarRuntimeAssetsCollection_C
// (None)

class UClass* UBP_SolarRuntimeAssetsCollection_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SolarRuntimeAssetsCollection_C");

	return Clss;
}


// BP_SolarRuntimeAssetsCollection_C BP_SolarRuntimeAssetsCollection.Default__BP_SolarRuntimeAssetsCollection_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SolarRuntimeAssetsCollection_C* UBP_SolarRuntimeAssetsCollection_C::GetDefaultObj()
{
	static class UBP_SolarRuntimeAssetsCollection_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SolarRuntimeAssetsCollection_C*>(UBP_SolarRuntimeAssetsCollection_C::StaticClass()->DefaultObject);

	return Default;
}

}


