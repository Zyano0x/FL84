#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TeamPerspective_Teammate.BP_TeamPerspective_Teammate_C
// (None)

class UClass* UBP_TeamPerspective_Teammate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TeamPerspective_Teammate_C");

	return Clss;
}


// BP_TeamPerspective_Teammate_C BP_TeamPerspective_Teammate.Default__BP_TeamPerspective_Teammate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_TeamPerspective_Teammate_C* UBP_TeamPerspective_Teammate_C::GetDefaultObj()
{
	static class UBP_TeamPerspective_Teammate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_TeamPerspective_Teammate_C*>(UBP_TeamPerspective_Teammate_C::StaticClass()->DefaultObject);

	return Default;
}

}


