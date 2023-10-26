#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_DGActive.ChaGCBP_DGActive_C
// (Actor)

class UClass* AChaGCBP_DGActive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_DGActive_C");

	return Clss;
}


// ChaGCBP_DGActive_C ChaGCBP_DGActive.Default__ChaGCBP_DGActive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_DGActive_C* AChaGCBP_DGActive_C::GetDefaultObj()
{
	static class AChaGCBP_DGActive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_DGActive_C*>(AChaGCBP_DGActive_C::StaticClass()->DefaultObject);

	return Default;
}

}


