#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_OpponentPerspectiveEffect.BP_OpponentPerspectiveEffect_C
// (None)

class UClass* UBP_OpponentPerspectiveEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_OpponentPerspectiveEffect_C");

	return Clss;
}


// BP_OpponentPerspectiveEffect_C BP_OpponentPerspectiveEffect.Default__BP_OpponentPerspectiveEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_OpponentPerspectiveEffect_C* UBP_OpponentPerspectiveEffect_C::GetDefaultObj()
{
	static class UBP_OpponentPerspectiveEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_OpponentPerspectiveEffect_C*>(UBP_OpponentPerspectiveEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


