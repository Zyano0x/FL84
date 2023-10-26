#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_Invincible.ChaGCBP_Invincible_C
// (Actor)

class UClass* AChaGCBP_Invincible_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_Invincible_C");

	return Clss;
}


// ChaGCBP_Invincible_C ChaGCBP_Invincible.Default__ChaGCBP_Invincible_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_Invincible_C* AChaGCBP_Invincible_C::GetDefaultObj()
{
	static class AChaGCBP_Invincible_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_Invincible_C*>(AChaGCBP_Invincible_C::StaticClass()->DefaultObject);

	return Default;
}

}


