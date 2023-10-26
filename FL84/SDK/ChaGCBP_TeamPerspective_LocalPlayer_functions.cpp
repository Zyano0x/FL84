#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_TeamPerspective_LocalPlayer.ChaGCBP_TeamPerspective_LocalPlayer_C
// (Actor)

class UClass* AChaGCBP_TeamPerspective_LocalPlayer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_TeamPerspective_LocalPlayer_C");

	return Clss;
}


// ChaGCBP_TeamPerspective_LocalPlayer_C ChaGCBP_TeamPerspective_LocalPlayer.Default__ChaGCBP_TeamPerspective_LocalPlayer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_TeamPerspective_LocalPlayer_C* AChaGCBP_TeamPerspective_LocalPlayer_C::GetDefaultObj()
{
	static class AChaGCBP_TeamPerspective_LocalPlayer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_TeamPerspective_LocalPlayer_C*>(AChaGCBP_TeamPerspective_LocalPlayer_C::StaticClass()->DefaultObject);

	return Default;
}

}


