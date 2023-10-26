#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_TeamPerspectiveInSmoke.ChaGCBP_TeamPerspectiveInSmoke_C
// (Actor)

class UClass* AChaGCBP_TeamPerspectiveInSmoke_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_TeamPerspectiveInSmoke_C");

	return Clss;
}


// ChaGCBP_TeamPerspectiveInSmoke_C ChaGCBP_TeamPerspectiveInSmoke.Default__ChaGCBP_TeamPerspectiveInSmoke_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_TeamPerspectiveInSmoke_C* AChaGCBP_TeamPerspectiveInSmoke_C::GetDefaultObj()
{
	static class AChaGCBP_TeamPerspectiveInSmoke_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_TeamPerspectiveInSmoke_C*>(AChaGCBP_TeamPerspectiveInSmoke_C::StaticClass()->DefaultObject);

	return Default;
}

}


