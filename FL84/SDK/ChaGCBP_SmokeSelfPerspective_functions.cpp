#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_SmokeSelfPerspective.ChaGCBP_SmokeSelfPerspective_C
// (Actor)

class UClass* AChaGCBP_SmokeSelfPerspective_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_SmokeSelfPerspective_C");

	return Clss;
}


// ChaGCBP_SmokeSelfPerspective_C ChaGCBP_SmokeSelfPerspective.Default__ChaGCBP_SmokeSelfPerspective_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_SmokeSelfPerspective_C* AChaGCBP_SmokeSelfPerspective_C::GetDefaultObj()
{
	static class AChaGCBP_SmokeSelfPerspective_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_SmokeSelfPerspective_C*>(AChaGCBP_SmokeSelfPerspective_C::StaticClass()->DefaultObject);

	return Default;
}

}


