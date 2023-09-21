#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effect_VH_Leg_9A02_Gatling_BaseDamage.Effect_VH_Leg_9A02_Gatling_BaseDamage_C
// (None)

class UClass* UEffect_VH_Leg_9A02_Gatling_BaseDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effect_VH_Leg_9A02_Gatling_BaseDamage_C");

	return Clss;
}


// Effect_VH_Leg_9A02_Gatling_BaseDamage_C Effect_VH_Leg_9A02_Gatling_BaseDamage.Default__Effect_VH_Leg_9A02_Gatling_BaseDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffect_VH_Leg_9A02_Gatling_BaseDamage_C* UEffect_VH_Leg_9A02_Gatling_BaseDamage_C::GetDefaultObj()
{
	static class UEffect_VH_Leg_9A02_Gatling_BaseDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffect_VH_Leg_9A02_Gatling_BaseDamage_C*>(UEffect_VH_Leg_9A02_Gatling_BaseDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


