#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SolarGraphicSettings.BP_SolarGraphicSettings_C
// (None)

class UClass* UBP_SolarGraphicSettings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SolarGraphicSettings_C");

	return Clss;
}


// BP_SolarGraphicSettings_C BP_SolarGraphicSettings.Default__BP_SolarGraphicSettings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SolarGraphicSettings_C* UBP_SolarGraphicSettings_C::GetDefaultObj()
{
	static class UBP_SolarGraphicSettings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SolarGraphicSettings_C*>(UBP_SolarGraphicSettings_C::StaticClass()->DefaultObject);

	return Default;
}

}


