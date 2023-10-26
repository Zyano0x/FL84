#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MassInvisibilityStealthEffectController.BP_MassInvisibilityStealthEffectController_C
// (None)

class UClass* UBP_MassInvisibilityStealthEffectController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MassInvisibilityStealthEffectController_C");

	return Clss;
}


// BP_MassInvisibilityStealthEffectController_C BP_MassInvisibilityStealthEffectController.Default__BP_MassInvisibilityStealthEffectController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MassInvisibilityStealthEffectController_C* UBP_MassInvisibilityStealthEffectController_C::GetDefaultObj()
{
	static class UBP_MassInvisibilityStealthEffectController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MassInvisibilityStealthEffectController_C*>(UBP_MassInvisibilityStealthEffectController_C::StaticClass()->DefaultObject);

	return Default;
}

}


