#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MassInvisibilityStealthEffect.BP_MassInvisibilityStealthEffect_C
// (None)

class UClass* UBP_MassInvisibilityStealthEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MassInvisibilityStealthEffect_C");

	return Clss;
}


// BP_MassInvisibilityStealthEffect_C BP_MassInvisibilityStealthEffect.Default__BP_MassInvisibilityStealthEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MassInvisibilityStealthEffect_C* UBP_MassInvisibilityStealthEffect_C::GetDefaultObj()
{
	static class UBP_MassInvisibilityStealthEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MassInvisibilityStealthEffect_C*>(UBP_MassInvisibilityStealthEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


