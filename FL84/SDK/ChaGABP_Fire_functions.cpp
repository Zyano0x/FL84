#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGABP_Fire.ChaGABP_Fire_C
// (None)

class UClass* UChaGABP_Fire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGABP_Fire_C");

	return Clss;
}


// ChaGABP_Fire_C ChaGABP_Fire.Default__ChaGABP_Fire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChaGABP_Fire_C* UChaGABP_Fire_C::GetDefaultObj()
{
	static class UChaGABP_Fire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaGABP_Fire_C*>(UChaGABP_Fire_C::StaticClass()->DefaultObject);

	return Default;
}

}


