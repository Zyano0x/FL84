#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_FireworksCooldown.GE_FireworksCooldown_C
// (None)

class UClass* UGE_FireworksCooldown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_FireworksCooldown_C");

	return Clss;
}


// GE_FireworksCooldown_C GE_FireworksCooldown.Default__GE_FireworksCooldown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_FireworksCooldown_C* UGE_FireworksCooldown_C::GetDefaultObj()
{
	static class UGE_FireworksCooldown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_FireworksCooldown_C*>(UGE_FireworksCooldown_C::StaticClass()->DefaultObject);

	return Default;
}

}


