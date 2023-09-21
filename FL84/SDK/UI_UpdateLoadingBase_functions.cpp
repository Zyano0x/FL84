#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_UpdateLoadingBase.UI_UpdateLoadingBase_C
// (None)

class UClass* UUI_UpdateLoadingBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_UpdateLoadingBase_C");

	return Clss;
}


// UI_UpdateLoadingBase_C UI_UpdateLoadingBase.Default__UI_UpdateLoadingBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_UpdateLoadingBase_C* UUI_UpdateLoadingBase_C::GetDefaultObj()
{
	static class UUI_UpdateLoadingBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_UpdateLoadingBase_C*>(UUI_UpdateLoadingBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_UpdateLoadingBase.UI_UpdateLoadingBase_C.SetPercentText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_UpdateLoadingBase_C::SetPercentText(class FText NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UpdateLoadingBase_C", "SetPercentText");

	Params::UUI_UpdateLoadingBase_C_SetPercentText_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_UpdateLoadingBase.UI_UpdateLoadingBase_C.SetImgBgHidden
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_UpdateLoadingBase_C::SetImgBgHidden()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UpdateLoadingBase_C", "SetImgBgHidden");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_UpdateLoadingBase.UI_UpdateLoadingBase_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_UpdateLoadingBase_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UpdateLoadingBase_C", "PreConstruct");

	Params::UUI_UpdateLoadingBase_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_UpdateLoadingBase.UI_UpdateLoadingBase_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_UpdateLoadingBase_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UpdateLoadingBase_C", "Tick");

	Params::UUI_UpdateLoadingBase_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_UpdateLoadingBase.UI_UpdateLoadingBase_C.ExecuteUbergraph_UI_UpdateLoadingBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_UpdateLoadingBase_C::ExecuteUbergraph_UI_UpdateLoadingBase(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UpdateLoadingBase_C", "ExecuteUbergraph_UI_UpdateLoadingBase");

	Params::UUI_UpdateLoadingBase_C_ExecuteUbergraph_UI_UpdateLoadingBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


