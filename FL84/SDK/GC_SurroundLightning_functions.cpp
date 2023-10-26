#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_SurroundLightning.GC_SurroundLightning_C
// (Actor)

class UClass* AGC_SurroundLightning_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_SurroundLightning_C");

	return Clss;
}


// GC_SurroundLightning_C GC_SurroundLightning.Default__GC_SurroundLightning_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGC_SurroundLightning_C* AGC_SurroundLightning_C::GetDefaultObj()
{
	static class AGC_SurroundLightning_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGC_SurroundLightning_C*>(AGC_SurroundLightning_C::StaticClass()->DefaultObject);

	return Default;
}

}


