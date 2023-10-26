#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Vehicle_Ability_NOS.GC_Vehicle_Ability_NOS_C
// (Actor)

class UClass* AGC_Vehicle_Ability_NOS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Vehicle_Ability_NOS_C");

	return Clss;
}


// GC_Vehicle_Ability_NOS_C GC_Vehicle_Ability_NOS.Default__GC_Vehicle_Ability_NOS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGC_Vehicle_Ability_NOS_C* AGC_Vehicle_Ability_NOS_C::GetDefaultObj()
{
	static class AGC_Vehicle_Ability_NOS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGC_Vehicle_Ability_NOS_C*>(AGC_Vehicle_Ability_NOS_C::StaticClass()->DefaultObject);

	return Default;
}

}


