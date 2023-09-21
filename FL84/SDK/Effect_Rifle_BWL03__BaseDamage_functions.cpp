#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effect_Rifle_BWL03__BaseDamage.Effect_Rifle_BWL03__BaseDamage_C
// (None)

class UClass* UEffect_Rifle_BWL03__BaseDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effect_Rifle_BWL03__BaseDamage_C");

	return Clss;
}


// Effect_Rifle_BWL03__BaseDamage_C Effect_Rifle_BWL03__BaseDamage.Default__Effect_Rifle_BWL03__BaseDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffect_Rifle_BWL03__BaseDamage_C* UEffect_Rifle_BWL03__BaseDamage_C::GetDefaultObj()
{
	static class UEffect_Rifle_BWL03__BaseDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffect_Rifle_BWL03__BaseDamage_C*>(UEffect_Rifle_BWL03__BaseDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


