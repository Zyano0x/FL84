#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WAT_9A02.WAT_9A02_C
// (None)

class UClass* UWAT_9A02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WAT_9A02_C");

	return Clss;
}


// WAT_9A02_C WAT_9A02.Default__WAT_9A02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted, StrongRefOnFrame)

class UWAT_9A02_C* UWAT_9A02_C::GetDefaultObj()
{
	static class UWAT_9A02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWAT_9A02_C*>(UWAT_9A02_C::StaticClass()->DefaultObject);

	return Default;
}

}


