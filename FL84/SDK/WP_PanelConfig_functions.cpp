#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WP_PanelConfig.WP_PanelConfig_C
// (None)

class UClass* UWP_PanelConfig_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WP_PanelConfig_C");

	return Clss;
}


// WP_PanelConfig_C WP_PanelConfig.Default__WP_PanelConfig_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWP_PanelConfig_C* UWP_PanelConfig_C::GetDefaultObj()
{
	static class UWP_PanelConfig_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWP_PanelConfig_C*>(UWP_PanelConfig_C::StaticClass()->DefaultObject);

	return Default;
}

}


