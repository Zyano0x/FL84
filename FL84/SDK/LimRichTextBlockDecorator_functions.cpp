#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LimRichTextBlockDecorator.LimRichTextBlockDecorator_C
// (None)

class UClass* ULimRichTextBlockDecorator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LimRichTextBlockDecorator_C");

	return Clss;
}


// LimRichTextBlockDecorator_C LimRichTextBlockDecorator.Default__LimRichTextBlockDecorator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULimRichTextBlockDecorator_C* ULimRichTextBlockDecorator_C::GetDefaultObj()
{
	static class ULimRichTextBlockDecorator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULimRichTextBlockDecorator_C*>(ULimRichTextBlockDecorator_C::StaticClass()->DefaultObject);

	return Default;
}

}


