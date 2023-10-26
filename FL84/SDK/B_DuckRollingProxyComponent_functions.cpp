#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_DuckRollingProxyComponent.B_DuckRollingProxyComponent_C
// (None)

class UClass* UB_DuckRollingProxyComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_DuckRollingProxyComponent_C");

	return Clss;
}


// B_DuckRollingProxyComponent_C B_DuckRollingProxyComponent.Default__B_DuckRollingProxyComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UB_DuckRollingProxyComponent_C* UB_DuckRollingProxyComponent_C::GetDefaultObj()
{
	static class UB_DuckRollingProxyComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UB_DuckRollingProxyComponent_C*>(UB_DuckRollingProxyComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


