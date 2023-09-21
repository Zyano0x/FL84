#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ImageTween.ImageTween_C
// (None)

class UClass* UImageTween_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ImageTween_C");

	return Clss;
}


// ImageTween_C ImageTween.Default__ImageTween_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UImageTween_C* UImageTween_C::GetDefaultObj()
{
	static class UImageTween_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UImageTween_C*>(UImageTween_C::StaticClass()->DefaultObject);

	return Default;
}

}


