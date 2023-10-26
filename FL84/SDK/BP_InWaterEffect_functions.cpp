#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_InWaterEffect.BP_InWaterEffect_C
// (None)

class UClass* UBP_InWaterEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_InWaterEffect_C");

	return Clss;
}


// BP_InWaterEffect_C BP_InWaterEffect.Default__BP_InWaterEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_InWaterEffect_C* UBP_InWaterEffect_C::GetDefaultObj()
{
	static class UBP_InWaterEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_InWaterEffect_C*>(UBP_InWaterEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


