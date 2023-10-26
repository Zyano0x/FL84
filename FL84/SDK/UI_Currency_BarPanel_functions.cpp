#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Currency_BarPanel.UI_Currency_BarPanel_C
// (None)

class UClass* UUI_Currency_BarPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Currency_BarPanel_C");

	return Clss;
}


// UI_Currency_BarPanel_C UI_Currency_BarPanel.Default__UI_Currency_BarPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Currency_BarPanel_C* UUI_Currency_BarPanel_C::GetDefaultObj()
{
	static class UUI_Currency_BarPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Currency_BarPanel_C*>(UUI_Currency_BarPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Currency_BarPanel.UI_Currency_BarPanel_C.OnSolarUIOpened
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Currency_BarPanel_C::OnSolarUIOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Currency_BarPanel_C", "OnSolarUIOpened");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Currency_BarPanel.UI_Currency_BarPanel_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Currency_BarPanel_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Currency_BarPanel_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Currency_BarPanel.UI_Currency_BarPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Currency_BarPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Currency_BarPanel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Currency_BarPanel.UI_Currency_BarPanel_C.OnSolarUIClosed
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Currency_BarPanel_C::OnSolarUIClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Currency_BarPanel_C", "OnSolarUIClosed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Currency_BarPanel.UI_Currency_BarPanel_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_Currency_BarPanel_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Currency_BarPanel_C", "GetModuleName");

	Params::UUI_Currency_BarPanel_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


