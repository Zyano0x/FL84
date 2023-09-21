#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_CursorWidget_Default.UI_CursorWidget_Default_C
// (None)

class UClass* UUI_CursorWidget_Default_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_CursorWidget_Default_C");

	return Clss;
}


// UI_CursorWidget_Default_C UI_CursorWidget_Default.Default__UI_CursorWidget_Default_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_CursorWidget_Default_C* UUI_CursorWidget_Default_C::GetDefaultObj()
{
	static class UUI_CursorWidget_Default_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_CursorWidget_Default_C*>(UUI_CursorWidget_Default_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_CursorWidget_Default.UI_CursorWidget_Default_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_CursorWidget_Default_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CursorWidget_Default_C", "GetModuleName");

	Params::UUI_CursorWidget_Default_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


