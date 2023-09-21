#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGABP_Bolt.ChaGABP_Bolt_C
// (None)

class UClass* UChaGABP_Bolt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGABP_Bolt_C");

	return Clss;
}


// ChaGABP_Bolt_C ChaGABP_Bolt.Default__ChaGABP_Bolt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChaGABP_Bolt_C* UChaGABP_Bolt_C::GetDefaultObj()
{
	static class UChaGABP_Bolt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaGABP_Bolt_C*>(UChaGABP_Bolt_C::StaticClass()->DefaultObject);

	return Default;
}

}


