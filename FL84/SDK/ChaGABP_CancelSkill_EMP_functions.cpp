#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGABP_CancelSkill_EMP.ChaGABP_CancelSkill_EMP_C
// (None)

class UClass* UChaGABP_CancelSkill_EMP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGABP_CancelSkill_EMP_C");

	return Clss;
}


// ChaGABP_CancelSkill_EMP_C ChaGABP_CancelSkill_EMP.Default__ChaGABP_CancelSkill_EMP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChaGABP_CancelSkill_EMP_C* UChaGABP_CancelSkill_EMP_C::GetDefaultObj()
{
	static class UChaGABP_CancelSkill_EMP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaGABP_CancelSkill_EMP_C*>(UChaGABP_CancelSkill_EMP_C::StaticClass()->DefaultObject);

	return Default;
}

}


