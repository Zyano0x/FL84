#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WL09_QuickSummon_Forward.BP_WL09_QuickSummon_Forward_C
// (None)

class UClass* UBP_WL09_QuickSummon_Forward_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WL09_QuickSummon_Forward_C");

	return Clss;
}


// BP_WL09_QuickSummon_Forward_C BP_WL09_QuickSummon_Forward.Default__BP_WL09_QuickSummon_Forward_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_WL09_QuickSummon_Forward_C* UBP_WL09_QuickSummon_Forward_C::GetDefaultObj()
{
	static class UBP_WL09_QuickSummon_Forward_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_WL09_QuickSummon_Forward_C*>(UBP_WL09_QuickSummon_Forward_C::StaticClass()->DefaultObject);

	return Default;
}

}


