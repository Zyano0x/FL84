#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Vehicle_Ability_SelfHealing.GC_Vehicle_Ability_SelfHealing_C
// (None)

class UClass* UGC_Vehicle_Ability_SelfHealing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Vehicle_Ability_SelfHealing_C");

	return Clss;
}


// GC_Vehicle_Ability_SelfHealing_C GC_Vehicle_Ability_SelfHealing.Default__GC_Vehicle_Ability_SelfHealing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_Vehicle_Ability_SelfHealing_C* UGC_Vehicle_Ability_SelfHealing_C::GetDefaultObj()
{
	static class UGC_Vehicle_Ability_SelfHealing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_Vehicle_Ability_SelfHealing_C*>(UGC_Vehicle_Ability_SelfHealing_C::StaticClass()->DefaultObject);

	return Default;
}

}


