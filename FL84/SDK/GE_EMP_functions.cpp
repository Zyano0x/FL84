#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_EMP.GE_EMP_C
// (None)

class UClass* UGE_EMP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_EMP_C");

	return Clss;
}


// GE_EMP_C GE_EMP.Default__GE_EMP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_EMP_C* UGE_EMP_C::GetDefaultObj()
{
	static class UGE_EMP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_EMP_C*>(UGE_EMP_C::StaticClass()->DefaultObject);

	return Default;
}

}


