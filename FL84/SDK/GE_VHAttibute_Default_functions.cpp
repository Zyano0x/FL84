#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_VHAttibute_Default.GE_VHAttibute_Default_C
// (None)

class UClass* UGE_VHAttibute_Default_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_VHAttibute_Default_C");

	return Clss;
}


// GE_VHAttibute_Default_C GE_VHAttibute_Default.Default__GE_VHAttibute_Default_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_VHAttibute_Default_C* UGE_VHAttibute_Default_C::GetDefaultObj()
{
	static class UGE_VHAttibute_Default_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_VHAttibute_Default_C*>(UGE_VHAttibute_Default_C::StaticClass()->DefaultObject);

	return Default;
}

}


