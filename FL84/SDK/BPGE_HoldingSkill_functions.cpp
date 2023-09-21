#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPGE_HoldingSkill.BPGE_HoldingSkill_C
// (None)

class UClass* UBPGE_HoldingSkill_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPGE_HoldingSkill_C");

	return Clss;
}


// BPGE_HoldingSkill_C BPGE_HoldingSkill.Default__BPGE_HoldingSkill_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPGE_HoldingSkill_C* UBPGE_HoldingSkill_C::GetDefaultObj()
{
	static class UBPGE_HoldingSkill_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPGE_HoldingSkill_C*>(UBPGE_HoldingSkill_C::StaticClass()->DefaultObject);

	return Default;
}

}


