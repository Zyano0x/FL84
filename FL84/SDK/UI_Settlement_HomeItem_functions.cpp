#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Settlement_HomeItem.UI_Settlement_HomeItem_C
// (None)

class UClass* UUI_Settlement_HomeItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Settlement_HomeItem_C");

	return Clss;
}


// UI_Settlement_HomeItem_C UI_Settlement_HomeItem.Default__UI_Settlement_HomeItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Settlement_HomeItem_C* UUI_Settlement_HomeItem_C::GetDefaultObj()
{
	static class UUI_Settlement_HomeItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Settlement_HomeItem_C*>(UUI_Settlement_HomeItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_Settlement_HomeItem_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Settlement_HomeItem_C", "GetModuleName");

	Params::UUI_Settlement_HomeItem_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.SequenceEvent__ENTRYPOINTUI_Settlement_HomeItem_2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Settlement_HomeItem_C::SequenceEvent__ENTRYPOINTUI_Settlement_HomeItem_2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Settlement_HomeItem_C", "SequenceEvent__ENTRYPOINTUI_Settlement_HomeItem_2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.SequenceEvent__ENTRYPOINTUI_Settlement_HomeItem_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Settlement_HomeItem_C::SequenceEvent__ENTRYPOINTUI_Settlement_HomeItem_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Settlement_HomeItem_C", "SequenceEvent__ENTRYPOINTUI_Settlement_HomeItem_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.SequenceEvent__ENTRYPOINTUI_Settlement_HomeItem_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Settlement_HomeItem_C::SequenceEvent__ENTRYPOINTUI_Settlement_HomeItem_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Settlement_HomeItem_C", "SequenceEvent__ENTRYPOINTUI_Settlement_HomeItem_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Settlement_HomeItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Settlement_HomeItem_C", "PreConstruct");

	Params::UUI_Settlement_HomeItem_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Settlement_HomeItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Settlement_HomeItem_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Settlement_HomeItem_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Settlement_HomeItem_C", "Tick");

	Params::UUI_Settlement_HomeItem_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.PlayGoldAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Settlement_HomeItem_C::PlayGoldAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Settlement_HomeItem_C", "PlayGoldAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.EventCanContinue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Settlement_HomeItem_C::EventCanContinue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Settlement_HomeItem_C", "EventCanContinue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.BP_EventSetBlur
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Settlement_HomeItem_C::BP_EventSetBlur()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Settlement_HomeItem_C", "BP_EventSetBlur");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.ExecuteUbergraph_UI_Settlement_HomeItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Settlement_HomeItem_C::ExecuteUbergraph_UI_Settlement_HomeItem(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Settlement_HomeItem_C", "ExecuteUbergraph_UI_Settlement_HomeItem");

	Params::UUI_Settlement_HomeItem_C_ExecuteUbergraph_UI_Settlement_HomeItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


