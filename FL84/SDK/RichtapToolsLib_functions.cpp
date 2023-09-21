#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class RichtapToolsLib.RichtapClip
// (None)

class UClass* URichtapClip::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RichtapClip");

	return Clss;
}


// RichtapClip RichtapToolsLib.Default__RichtapClip
// (Public, ClassDefaultObject, ArchetypeObject)

class URichtapClip* URichtapClip::GetDefaultObj()
{
	static class URichtapClip* Default = nullptr;

	if (!Default)
		Default = static_cast<URichtapClip*>(URichtapClip::StaticClass()->DefaultObject);

	return Default;
}

}


