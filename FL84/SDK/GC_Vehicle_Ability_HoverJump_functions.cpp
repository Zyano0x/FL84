#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Vehicle_Ability_HoverJump.GC_Vehicle_Ability_HoverJump_C
// (None)

class UClass* UGC_Vehicle_Ability_HoverJump_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Vehicle_Ability_HoverJump_C");

	return Clss;
}


// GC_Vehicle_Ability_HoverJump_C GC_Vehicle_Ability_HoverJump.Default__GC_Vehicle_Ability_HoverJump_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_Vehicle_Ability_HoverJump_C* UGC_Vehicle_Ability_HoverJump_C::GetDefaultObj()
{
	static class UGC_Vehicle_Ability_HoverJump_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_Vehicle_Ability_HoverJump_C*>(UGC_Vehicle_Ability_HoverJump_C::StaticClass()->DefaultObject);

	return Default;
}

}


