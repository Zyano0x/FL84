#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BlackHole_Outline.BP_BlackHole_Outline_C
// (None)

class UClass* UBP_BlackHole_Outline_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BlackHole_Outline_C");

	return Clss;
}


// BP_BlackHole_Outline_C BP_BlackHole_Outline.Default__BP_BlackHole_Outline_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_BlackHole_Outline_C* UBP_BlackHole_Outline_C::GetDefaultObj()
{
	static class UBP_BlackHole_Outline_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_BlackHole_Outline_C*>(UBP_BlackHole_Outline_C::StaticClass()->DefaultObject);

	return Default;
}

}


