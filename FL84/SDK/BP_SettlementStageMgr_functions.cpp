#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SettlementStageMgr.BP_SettlementStageMgr_C
// (None)

class UClass* UBP_SettlementStageMgr_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SettlementStageMgr_C");

	return Clss;
}


// BP_SettlementStageMgr_C BP_SettlementStageMgr.Default__BP_SettlementStageMgr_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SettlementStageMgr_C* UBP_SettlementStageMgr_C::GetDefaultObj()
{
	static class UBP_SettlementStageMgr_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SettlementStageMgr_C*>(UBP_SettlementStageMgr_C::StaticClass()->DefaultObject);

	return Default;
}

}


