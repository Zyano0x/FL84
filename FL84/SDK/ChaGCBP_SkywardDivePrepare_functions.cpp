#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_SkywardDivePrepare.ChaGCBP_SkywardDivePrepare_C
// (Actor)

class UClass* AChaGCBP_SkywardDivePrepare_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_SkywardDivePrepare_C");

	return Clss;
}


// ChaGCBP_SkywardDivePrepare_C ChaGCBP_SkywardDivePrepare.Default__ChaGCBP_SkywardDivePrepare_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_SkywardDivePrepare_C* AChaGCBP_SkywardDivePrepare_C::GetDefaultObj()
{
	static class AChaGCBP_SkywardDivePrepare_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_SkywardDivePrepare_C*>(AChaGCBP_SkywardDivePrepare_C::StaticClass()->DefaultObject);

	return Default;
}

}


