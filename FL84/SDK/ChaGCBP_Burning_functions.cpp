#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_Burning.ChaGCBP_Burning_C
// (Actor)

class UClass* AChaGCBP_Burning_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_Burning_C");

	return Clss;
}


// ChaGCBP_Burning_C ChaGCBP_Burning.Default__ChaGCBP_Burning_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_Burning_C* AChaGCBP_Burning_C::GetDefaultObj()
{
	static class AChaGCBP_Burning_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_Burning_C*>(AChaGCBP_Burning_C::StaticClass()->DefaultObject);

	return Default;
}

}


