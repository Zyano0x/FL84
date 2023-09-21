#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Currency_Bar.UI_Currency_Bar_C
// (None)

class UClass* UUI_Currency_Bar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Currency_Bar_C");

	return Clss;
}


// UI_Currency_Bar_C UI_Currency_Bar.Default__UI_Currency_Bar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Currency_Bar_C* UUI_Currency_Bar_C::GetDefaultObj()
{
	static class UUI_Currency_Bar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Currency_Bar_C*>(UUI_Currency_Bar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Currency_Bar.UI_Currency_Bar_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_Currency_Bar_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Currency_Bar_C", "GetModuleName");

	Params::UUI_Currency_Bar_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


