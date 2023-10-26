#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SolarGameSettingsRange.BP_SolarGameSettingsRange_C
// (None)

class UClass* UBP_SolarGameSettingsRange_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SolarGameSettingsRange_C");

	return Clss;
}


// BP_SolarGameSettingsRange_C BP_SolarGameSettingsRange.Default__BP_SolarGameSettingsRange_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SolarGameSettingsRange_C* UBP_SolarGameSettingsRange_C::GetDefaultObj()
{
	static class UBP_SolarGameSettingsRange_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SolarGameSettingsRange_C*>(UBP_SolarGameSettingsRange_C::StaticClass()->DefaultObject);

	return Default;
}

}


