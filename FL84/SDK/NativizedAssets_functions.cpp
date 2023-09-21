#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class NativizedAssets.__Delegates__ABP_Penguin_C__pf944487101
// (None)

class UClass* U__Delegates__ABP_Penguin_C__pf944487101::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("__Delegates__ABP_Penguin_C__pf944487101");

	return Clss;
}


// __Delegates__ABP_Penguin_C__pf944487101 NativizedAssets.Default____Delegates__ABP_Penguin_C__pf944487101
// (Public, ClassDefaultObject, ArchetypeObject)

class U__Delegates__ABP_Penguin_C__pf944487101* U__Delegates__ABP_Penguin_C__pf944487101::GetDefaultObj()
{
	static class U__Delegates__ABP_Penguin_C__pf944487101* Default = nullptr;

	if (!Default)
		Default = static_cast<U__Delegates__ABP_Penguin_C__pf944487101*>(U__Delegates__ABP_Penguin_C__pf944487101::StaticClass()->DefaultObject);

	return Default;
}

}


