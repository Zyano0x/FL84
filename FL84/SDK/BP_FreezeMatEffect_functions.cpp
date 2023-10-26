#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FreezeMatEffect.BP_FreezeMatEffect_C
// (None)

class UClass* UBP_FreezeMatEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FreezeMatEffect_C");

	return Clss;
}


// BP_FreezeMatEffect_C BP_FreezeMatEffect.Default__BP_FreezeMatEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FreezeMatEffect_C* UBP_FreezeMatEffect_C::GetDefaultObj()
{
	static class UBP_FreezeMatEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FreezeMatEffect_C*>(UBP_FreezeMatEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


