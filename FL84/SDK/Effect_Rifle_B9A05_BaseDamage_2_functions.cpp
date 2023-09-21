#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effect_Rifle_B9A05_BaseDamage_2.Effect_Rifle_B9A05_BaseDamage_2_C
// (None)

class UClass* UEffect_Rifle_B9A05_BaseDamage_2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effect_Rifle_B9A05_BaseDamage_2_C");

	return Clss;
}


// Effect_Rifle_B9A05_BaseDamage_2_C Effect_Rifle_B9A05_BaseDamage_2.Default__Effect_Rifle_B9A05_BaseDamage_2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffect_Rifle_B9A05_BaseDamage_2_C* UEffect_Rifle_B9A05_BaseDamage_2_C::GetDefaultObj()
{
	static class UEffect_Rifle_B9A05_BaseDamage_2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffect_Rifle_B9A05_BaseDamage_2_C*>(UEffect_Rifle_B9A05_BaseDamage_2_C::StaticClass()->DefaultObject);

	return Default;
}

}


