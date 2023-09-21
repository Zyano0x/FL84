#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGABP_OpenScope.ChaGABP_OpenScope_C
// (None)

class UClass* UChaGABP_OpenScope_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGABP_OpenScope_C");

	return Clss;
}


// ChaGABP_OpenScope_C ChaGABP_OpenScope.Default__ChaGABP_OpenScope_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChaGABP_OpenScope_C* UChaGABP_OpenScope_C::GetDefaultObj()
{
	static class UChaGABP_OpenScope_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaGABP_OpenScope_C*>(UChaGABP_OpenScope_C::StaticClass()->DefaultObject);

	return Default;
}

}


