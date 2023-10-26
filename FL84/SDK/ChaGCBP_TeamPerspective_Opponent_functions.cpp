#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_TeamPerspective_Opponent.ChaGCBP_TeamPerspective_Opponent_C
// (Actor)

class UClass* AChaGCBP_TeamPerspective_Opponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_TeamPerspective_Opponent_C");

	return Clss;
}


// ChaGCBP_TeamPerspective_Opponent_C ChaGCBP_TeamPerspective_Opponent.Default__ChaGCBP_TeamPerspective_Opponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_TeamPerspective_Opponent_C* AChaGCBP_TeamPerspective_Opponent_C::GetDefaultObj()
{
	static class AChaGCBP_TeamPerspective_Opponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_TeamPerspective_Opponent_C*>(AChaGCBP_TeamPerspective_Opponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


