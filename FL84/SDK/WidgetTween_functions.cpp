#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WidgetTween.WidgetTween_C
// (None)

class UClass* UWidgetTween_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidgetTween_C");

	return Clss;
}


// WidgetTween_C WidgetTween.Default__WidgetTween_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWidgetTween_C* UWidgetTween_C::GetDefaultObj()
{
	static class UWidgetTween_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidgetTween_C*>(UWidgetTween_C::StaticClass()->DefaultObject);

	return Default;
}

}


