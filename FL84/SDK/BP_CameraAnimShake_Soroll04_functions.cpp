#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CameraAnimShake_Soroll04.BP_CameraAnimShake_Soroll04_C
// (None)

class UClass* UBP_CameraAnimShake_Soroll04_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CameraAnimShake_Soroll04_C");

	return Clss;
}


// BP_CameraAnimShake_Soroll04_C BP_CameraAnimShake_Soroll04.Default__BP_CameraAnimShake_Soroll04_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CameraAnimShake_Soroll04_C* UBP_CameraAnimShake_Soroll04_C::GetDefaultObj()
{
	static class UBP_CameraAnimShake_Soroll04_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CameraAnimShake_Soroll04_C*>(UBP_CameraAnimShake_Soroll04_C::StaticClass()->DefaultObject);

	return Default;
}

}


