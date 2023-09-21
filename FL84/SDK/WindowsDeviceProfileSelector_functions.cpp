#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class WindowsDeviceProfileSelector.WindowsDeviceProfileMatchingRules
// (None)

class UClass* UWindowsDeviceProfileMatchingRules::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WindowsDeviceProfileMatchingRules");

	return Clss;
}


// WindowsDeviceProfileMatchingRules WindowsDeviceProfileSelector.Default__WindowsDeviceProfileMatchingRules
// (Public, ClassDefaultObject, ArchetypeObject)

class UWindowsDeviceProfileMatchingRules* UWindowsDeviceProfileMatchingRules::GetDefaultObj()
{
	static class UWindowsDeviceProfileMatchingRules* Default = nullptr;

	if (!Default)
		Default = static_cast<UWindowsDeviceProfileMatchingRules*>(UWindowsDeviceProfileMatchingRules::StaticClass()->DefaultObject);

	return Default;
}

}


