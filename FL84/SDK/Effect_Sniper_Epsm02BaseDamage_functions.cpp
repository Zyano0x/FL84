#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effect_Sniper_Epsm02BaseDamage.Effect_Sniper_Epsm02BaseDamage_C
// (None)

class UClass* UEffect_Sniper_Epsm02BaseDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effect_Sniper_Epsm02BaseDamage_C");

	return Clss;
}


// Effect_Sniper_Epsm02BaseDamage_C Effect_Sniper_Epsm02BaseDamage.Default__Effect_Sniper_Epsm02BaseDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffect_Sniper_Epsm02BaseDamage_C* UEffect_Sniper_Epsm02BaseDamage_C::GetDefaultObj()
{
	static class UEffect_Sniper_Epsm02BaseDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffect_Sniper_Epsm02BaseDamage_C*>(UEffect_Sniper_Epsm02BaseDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


