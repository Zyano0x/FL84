#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DefaultSolarLockSettings.DefaultSolarLockSettings_C
// (None)

class UClass* UDefaultSolarLockSettings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefaultSolarLockSettings_C");

	return Clss;
}


// DefaultSolarLockSettings_C DefaultSolarLockSettings.Default__DefaultSolarLockSettings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefaultSolarLockSettings_C* UDefaultSolarLockSettings_C::GetDefaultObj()
{
	static class UDefaultSolarLockSettings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefaultSolarLockSettings_C*>(UDefaultSolarLockSettings_C::StaticClass()->DefaultObject);

	return Default;
}

}


