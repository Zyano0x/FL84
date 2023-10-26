#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DissolvedDeathController.BP_DissolvedDeathController_C
// (None)

class UClass* UBP_DissolvedDeathController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DissolvedDeathController_C");

	return Clss;
}


// BP_DissolvedDeathController_C BP_DissolvedDeathController.Default__BP_DissolvedDeathController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_DissolvedDeathController_C* UBP_DissolvedDeathController_C::GetDefaultObj()
{
	static class UBP_DissolvedDeathController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_DissolvedDeathController_C*>(UBP_DissolvedDeathController_C::StaticClass()->DefaultObject);

	return Default;
}

}


