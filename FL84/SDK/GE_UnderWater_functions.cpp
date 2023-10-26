#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_UnderWater.GE_UnderWater_C
// (None)

class UClass* UGE_UnderWater_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_UnderWater_C");

	return Clss;
}


// GE_UnderWater_C GE_UnderWater.Default__GE_UnderWater_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_UnderWater_C* UGE_UnderWater_C::GetDefaultObj()
{
	static class UGE_UnderWater_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_UnderWater_C*>(UGE_UnderWater_C::StaticClass()->DefaultObject);

	return Default;
}

}


