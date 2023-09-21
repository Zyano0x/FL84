#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effect_SG_EMphy04_BaseDamage.Effect_SG_EMphy04_BaseDamage_C
// (None)

class UClass* UEffect_SG_EMphy04_BaseDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effect_SG_EMphy04_BaseDamage_C");

	return Clss;
}


// Effect_SG_EMphy04_BaseDamage_C Effect_SG_EMphy04_BaseDamage.Default__Effect_SG_EMphy04_BaseDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffect_SG_EMphy04_BaseDamage_C* UEffect_SG_EMphy04_BaseDamage_C::GetDefaultObj()
{
	static class UEffect_SG_EMphy04_BaseDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffect_SG_EMphy04_BaseDamage_C*>(UEffect_SG_EMphy04_BaseDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


