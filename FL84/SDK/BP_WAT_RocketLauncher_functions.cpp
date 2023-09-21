#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WAT_RocketLauncher.BP_WAT_RocketLauncher_C
// (None)

class UClass* UBP_WAT_RocketLauncher_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WAT_RocketLauncher_C");

	return Clss;
}


// BP_WAT_RocketLauncher_C BP_WAT_RocketLauncher.Default__BP_WAT_RocketLauncher_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted, StrongRefOnFrame)

class UBP_WAT_RocketLauncher_C* UBP_WAT_RocketLauncher_C::GetDefaultObj()
{
	static class UBP_WAT_RocketLauncher_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_WAT_RocketLauncher_C*>(UBP_WAT_RocketLauncher_C::StaticClass()->DefaultObject);

	return Default;
}

}


