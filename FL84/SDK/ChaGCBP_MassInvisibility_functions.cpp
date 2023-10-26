#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_MassInvisibility.ChaGCBP_MassInvisibility_C
// (Actor)

class UClass* AChaGCBP_MassInvisibility_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_MassInvisibility_C");

	return Clss;
}


// ChaGCBP_MassInvisibility_C ChaGCBP_MassInvisibility.Default__ChaGCBP_MassInvisibility_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_MassInvisibility_C* AChaGCBP_MassInvisibility_C::GetDefaultObj()
{
	static class AChaGCBP_MassInvisibility_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_MassInvisibility_C*>(AChaGCBP_MassInvisibility_C::StaticClass()->DefaultObject);

	return Default;
}

}


