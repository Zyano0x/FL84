#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGABP_Reload.ChaGABP_Reload_C
// (None)

class UClass* UChaGABP_Reload_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGABP_Reload_C");

	return Clss;
}


// ChaGABP_Reload_C ChaGABP_Reload.Default__ChaGABP_Reload_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChaGABP_Reload_C* UChaGABP_Reload_C::GetDefaultObj()
{
	static class UChaGABP_Reload_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaGABP_Reload_C*>(UChaGABP_Reload_C::StaticClass()->DefaultObject);

	return Default;
}

}


