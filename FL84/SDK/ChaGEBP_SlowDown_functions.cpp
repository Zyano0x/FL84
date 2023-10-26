#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGEBP_SlowDown.ChaGEBP_SlowDown_C
// (None)

class UClass* UChaGEBP_SlowDown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGEBP_SlowDown_C");

	return Clss;
}


// ChaGEBP_SlowDown_C ChaGEBP_SlowDown.Default__ChaGEBP_SlowDown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChaGEBP_SlowDown_C* UChaGEBP_SlowDown_C::GetDefaultObj()
{
	static class UChaGEBP_SlowDown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaGEBP_SlowDown_C*>(UChaGEBP_SlowDown_C::StaticClass()->DefaultObject);

	return Default;
}

}


