#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MassInvisibilityExEffectController.BP_MassInvisibilityExEffectController_C
// (None)

class UClass* UBP_MassInvisibilityExEffectController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MassInvisibilityExEffectController_C");

	return Clss;
}


// BP_MassInvisibilityExEffectController_C BP_MassInvisibilityExEffectController.Default__BP_MassInvisibilityExEffectController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MassInvisibilityExEffectController_C* UBP_MassInvisibilityExEffectController_C::GetDefaultObj()
{
	static class UBP_MassInvisibilityExEffectController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MassInvisibilityExEffectController_C*>(UBP_MassInvisibilityExEffectController_C::StaticClass()->DefaultObject);

	return Default;
}

}


