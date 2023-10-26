#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_DuckRollingJump.ChaGCBP_DuckRollingJump_C
// (Actor)

class UClass* AChaGCBP_DuckRollingJump_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_DuckRollingJump_C");

	return Clss;
}


// ChaGCBP_DuckRollingJump_C ChaGCBP_DuckRollingJump.Default__ChaGCBP_DuckRollingJump_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_DuckRollingJump_C* AChaGCBP_DuckRollingJump_C::GetDefaultObj()
{
	static class AChaGCBP_DuckRollingJump_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_DuckRollingJump_C*>(AChaGCBP_DuckRollingJump_C::StaticClass()->DefaultObject);

	return Default;
}

}


