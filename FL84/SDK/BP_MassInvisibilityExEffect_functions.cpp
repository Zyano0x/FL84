#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MassInvisibilityExEffect.BP_MassInvisibilityExEffect_C
// (None)

class UClass* UBP_MassInvisibilityExEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MassInvisibilityExEffect_C");

	return Clss;
}


// BP_MassInvisibilityExEffect_C BP_MassInvisibilityExEffect.Default__BP_MassInvisibilityExEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MassInvisibilityExEffect_C* UBP_MassInvisibilityExEffect_C::GetDefaultObj()
{
	static class UBP_MassInvisibilityExEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MassInvisibilityExEffect_C*>(UBP_MassInvisibilityExEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


