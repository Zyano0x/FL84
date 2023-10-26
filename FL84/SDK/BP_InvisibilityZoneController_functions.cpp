#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_InvisibilityZoneController.BP_InvisibilityZoneController_C
// (None)

class UClass* UBP_InvisibilityZoneController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_InvisibilityZoneController_C");

	return Clss;
}


// BP_InvisibilityZoneController_C BP_InvisibilityZoneController.Default__BP_InvisibilityZoneController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_InvisibilityZoneController_C* UBP_InvisibilityZoneController_C::GetDefaultObj()
{
	static class UBP_InvisibilityZoneController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_InvisibilityZoneController_C*>(UBP_InvisibilityZoneController_C::StaticClass()->DefaultObject);

	return Default;
}

}


