#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WAT_9A08.WAT_9A08_C
// (None)

class UClass* UWAT_9A08_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WAT_9A08_C");

	return Clss;
}


// WAT_9A08_C WAT_9A08.Default__WAT_9A08_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted, StrongRefOnFrame)

class UWAT_9A08_C* UWAT_9A08_C::GetDefaultObj()
{
	static class UWAT_9A08_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWAT_9A08_C*>(UWAT_9A08_C::StaticClass()->DefaultObject);

	return Default;
}

}


