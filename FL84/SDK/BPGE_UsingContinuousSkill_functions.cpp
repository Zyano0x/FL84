#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPGE_UsingContinuousSkill.BPGE_UsingContinuousSkill_C
// (None)

class UClass* UBPGE_UsingContinuousSkill_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPGE_UsingContinuousSkill_C");

	return Clss;
}


// BPGE_UsingContinuousSkill_C BPGE_UsingContinuousSkill.Default__BPGE_UsingContinuousSkill_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPGE_UsingContinuousSkill_C* UBPGE_UsingContinuousSkill_C::GetDefaultObj()
{
	static class UBPGE_UsingContinuousSkill_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPGE_UsingContinuousSkill_C*>(UBPGE_UsingContinuousSkill_C::StaticClass()->DefaultObject);

	return Default;
}

}


