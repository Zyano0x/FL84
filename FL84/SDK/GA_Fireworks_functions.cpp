#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Fireworks.GA_Fireworks_C
// (None)

class UClass* UGA_Fireworks_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Fireworks_C");

	return Clss;
}


// GA_Fireworks_C GA_Fireworks.Default__GA_Fireworks_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Fireworks_C* UGA_Fireworks_C::GetDefaultObj()
{
	static class UGA_Fireworks_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Fireworks_C*>(UGA_Fireworks_C::StaticClass()->DefaultObject);

	return Default;
}

}


