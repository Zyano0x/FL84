#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_BackpackPropelling.ChaGCBP_BackpackPropelling_C
// (None)

class UClass* UChaGCBP_BackpackPropelling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_BackpackPropelling_C");

	return Clss;
}


// ChaGCBP_BackpackPropelling_C ChaGCBP_BackpackPropelling.Default__ChaGCBP_BackpackPropelling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChaGCBP_BackpackPropelling_C* UChaGCBP_BackpackPropelling_C::GetDefaultObj()
{
	static class UChaGCBP_BackpackPropelling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaGCBP_BackpackPropelling_C*>(UChaGCBP_BackpackPropelling_C::StaticClass()->DefaultObject);

	return Default;
}

}


