#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_MassInvisibilityEx.ChaGCBP_MassInvisibilityEx_C
// (Actor)

class UClass* AChaGCBP_MassInvisibilityEx_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_MassInvisibilityEx_C");

	return Clss;
}


// ChaGCBP_MassInvisibilityEx_C ChaGCBP_MassInvisibilityEx.Default__ChaGCBP_MassInvisibilityEx_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_MassInvisibilityEx_C* AChaGCBP_MassInvisibilityEx_C::GetDefaultObj()
{
	static class AChaGCBP_MassInvisibilityEx_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_MassInvisibilityEx_C*>(AChaGCBP_MassInvisibilityEx_C::StaticClass()->DefaultObject);

	return Default;
}

}


