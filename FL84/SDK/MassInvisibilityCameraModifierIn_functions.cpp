#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MassInvisibilityCameraModifierIn.MassInvisibilityCameraModifierIn_C
// (None)

class UClass* UMassInvisibilityCameraModifierIn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MassInvisibilityCameraModifierIn_C");

	return Clss;
}


// MassInvisibilityCameraModifierIn_C MassInvisibilityCameraModifierIn.Default__MassInvisibilityCameraModifierIn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMassInvisibilityCameraModifierIn_C* UMassInvisibilityCameraModifierIn_C::GetDefaultObj()
{
	static class UMassInvisibilityCameraModifierIn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMassInvisibilityCameraModifierIn_C*>(UMassInvisibilityCameraModifierIn_C::StaticClass()->DefaultObject);

	return Default;
}

}


