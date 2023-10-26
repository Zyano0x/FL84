#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_OpponentPerspectiveEffectController.BP_OpponentPerspectiveEffectController_C
// (None)

class UClass* UBP_OpponentPerspectiveEffectController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_OpponentPerspectiveEffectController_C");

	return Clss;
}


// BP_OpponentPerspectiveEffectController_C BP_OpponentPerspectiveEffectController.Default__BP_OpponentPerspectiveEffectController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_OpponentPerspectiveEffectController_C* UBP_OpponentPerspectiveEffectController_C::GetDefaultObj()
{
	static class UBP_OpponentPerspectiveEffectController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_OpponentPerspectiveEffectController_C*>(UBP_OpponentPerspectiveEffectController_C::StaticClass()->DefaultObject);

	return Default;
}

}


