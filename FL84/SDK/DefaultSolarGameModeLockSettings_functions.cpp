#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DefaultSolarGameModeLockSettings.DefaultSolarGameModeLockSettings_C
// (None)

class UClass* UDefaultSolarGameModeLockSettings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefaultSolarGameModeLockSettings_C");

	return Clss;
}


// DefaultSolarGameModeLockSettings_C DefaultSolarGameModeLockSettings.Default__DefaultSolarGameModeLockSettings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefaultSolarGameModeLockSettings_C* UDefaultSolarGameModeLockSettings_C::GetDefaultObj()
{
	static class UDefaultSolarGameModeLockSettings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefaultSolarGameModeLockSettings_C*>(UDefaultSolarGameModeLockSettings_C::StaticClass()->DefaultObject);

	return Default;
}

}


