#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WAT_WL05.WAT_WL05_C
// (None)

class UClass* UWAT_WL05_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WAT_WL05_C");

	return Clss;
}


// WAT_WL05_C WAT_WL05.Default__WAT_WL05_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted, StrongRefOnFrame)

class UWAT_WL05_C* UWAT_WL05_C::GetDefaultObj()
{
	static class UWAT_WL05_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWAT_WL05_C*>(UWAT_WL05_C::StaticClass()->DefaultObject);

	return Default;
}

}


