#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Chip30.UI_Chip30_C
// (None)

class UClass* UUI_Chip30_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Chip30_C");

	return Clss;
}


// UI_Chip30_C UI_Chip30.Default__UI_Chip30_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Chip30_C* UUI_Chip30_C::GetDefaultObj()
{
	static class UUI_Chip30_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Chip30_C*>(UUI_Chip30_C::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction UI_Chip30.UI_Chip30_C.OnClicked_66FFFB404B1C94303C67BF95E3CE31E9
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_Chip30_C::OnClicked_66FFFB404B1C94303C67BF95E3CE31E9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Chip30_C", "OnClicked_66FFFB404B1C94303C67BF95E3CE31E9");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction UI_Chip30.UI_Chip30_C.OnClicked_ECA0E78A48C454388AC21D8862F69C91
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_Chip30_C::OnClicked_ECA0E78A48C454388AC21D8862F69C91()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Chip30_C", "OnClicked_ECA0E78A48C454388AC21D8862F69C91");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Chip30.UI_Chip30_C.OnSolarUIOpened
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Chip30_C::OnSolarUIOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Chip30_C", "OnSolarUIOpened");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Chip30.UI_Chip30_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Chip30_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Chip30_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Chip30.UI_Chip30_C.OnHide
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Chip30_C::OnHide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Chip30_C", "OnHide");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Chip30.UI_Chip30_C.OnShow
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Chip30_C::OnShow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Chip30_C", "OnShow");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Chip30.UI_Chip30_C.OnSolarUIClosed
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Chip30_C::OnSolarUIClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Chip30_C", "OnSolarUIClosed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Chip30.UI_Chip30_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_Chip30_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Chip30_C", "GetModuleName");

	Params::UUI_Chip30_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Chip30.UI_Chip30_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Chip30_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Chip30_C", "PreConstruct");

	Params::UUI_Chip30_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Chip30.UI_Chip30_C.ExecuteUbergraph_UI_Chip30
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Chip30_C::ExecuteUbergraph_UI_Chip30(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Chip30_C", "ExecuteUbergraph_UI_Chip30");

	Params::UUI_Chip30_C_ExecuteUbergraph_UI_Chip30_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


