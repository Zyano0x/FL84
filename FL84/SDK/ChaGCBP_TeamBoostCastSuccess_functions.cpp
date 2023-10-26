#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_TeamBoostCastSuccess.ChaGCBP_TeamBoostCastSuccess_C
// (Actor)

class UClass* AChaGCBP_TeamBoostCastSuccess_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_TeamBoostCastSuccess_C");

	return Clss;
}


// ChaGCBP_TeamBoostCastSuccess_C ChaGCBP_TeamBoostCastSuccess.Default__ChaGCBP_TeamBoostCastSuccess_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_TeamBoostCastSuccess_C* AChaGCBP_TeamBoostCastSuccess_C::GetDefaultObj()
{
	static class AChaGCBP_TeamBoostCastSuccess_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_TeamBoostCastSuccess_C*>(AChaGCBP_TeamBoostCastSuccess_C::StaticClass()->DefaultObject);

	return Default;
}

}


