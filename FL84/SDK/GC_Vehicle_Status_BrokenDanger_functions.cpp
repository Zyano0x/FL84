#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Vehicle_Status_BrokenDanger.GC_Vehicle_Status_BrokenDanger_C
// (None)

class UClass* UGC_Vehicle_Status_BrokenDanger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Vehicle_Status_BrokenDanger_C");

	return Clss;
}


// GC_Vehicle_Status_BrokenDanger_C GC_Vehicle_Status_BrokenDanger.Default__GC_Vehicle_Status_BrokenDanger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_Vehicle_Status_BrokenDanger_C* UGC_Vehicle_Status_BrokenDanger_C::GetDefaultObj()
{
	static class UGC_Vehicle_Status_BrokenDanger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_Vehicle_Status_BrokenDanger_C*>(UGC_Vehicle_Status_BrokenDanger_C::StaticClass()->DefaultObject);

	return Default;
}

}


