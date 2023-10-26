#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TeamBoostPurifyEffectController.BP_TeamBoostPurifyEffectController_C
// (None)

class UClass* UBP_TeamBoostPurifyEffectController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TeamBoostPurifyEffectController_C");

	return Clss;
}


// BP_TeamBoostPurifyEffectController_C BP_TeamBoostPurifyEffectController.Default__BP_TeamBoostPurifyEffectController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_TeamBoostPurifyEffectController_C* UBP_TeamBoostPurifyEffectController_C::GetDefaultObj()
{
	static class UBP_TeamBoostPurifyEffectController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_TeamBoostPurifyEffectController_C*>(UBP_TeamBoostPurifyEffectController_C::StaticClass()->DefaultObject);

	return Default;
}

}


