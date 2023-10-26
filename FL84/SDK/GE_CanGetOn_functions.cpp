#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CanGetOn.GE_CanGetOn_C
// (None)

class UClass* UGE_CanGetOn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CanGetOn_C");

	return Clss;
}


// GE_CanGetOn_C GE_CanGetOn.Default__GE_CanGetOn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CanGetOn_C* UGE_CanGetOn_C::GetDefaultObj()
{
	static class UGE_CanGetOn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CanGetOn_C*>(UGE_CanGetOn_C::StaticClass()->DefaultObject);

	return Default;
}

}


