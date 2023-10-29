#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Marquees.UI_Marquees_C
// (None)

class UClass* UUI_Marquees_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Marquees_C");

	return Clss;
}


// UI_Marquees_C UI_Marquees.Default__UI_Marquees_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Marquees_C* UUI_Marquees_C::GetDefaultObj()
{
	static class UUI_Marquees_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Marquees_C*>(UUI_Marquees_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Marquees.UI_Marquees_C.ReceiveTick
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                              InDeltaTime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUI_Marquees_C::ReceiveTick(struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Marquees_C", "ReceiveTick");

	Params::UUI_Marquees_C_ReceiveTick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Marquees.UI_Marquees_C.OnSolarUIOpened
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Marquees_C::OnSolarUIOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Marquees_C", "OnSolarUIOpened");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Marquees.UI_Marquees_C.OnSolarUIClosed
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Marquees_C::OnSolarUIClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Marquees_C", "OnSolarUIClosed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Marquees.UI_Marquees_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Marquees_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Marquees_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Marquees.UI_Marquees_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_Marquees_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Marquees_C", "GetModuleName");

	Params::UUI_Marquees_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Marquees.UI_Marquees_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Marquees_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Marquees_C", "Tick");

	Params::UUI_Marquees_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Marquees.UI_Marquees_C.ExecuteUbergraph_UI_Marquees
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Marquees_C::ExecuteUbergraph_UI_Marquees(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Marquees_C", "ExecuteUbergraph_UI_Marquees");

	Params::UUI_Marquees_C_ExecuteUbergraph_UI_Marquees_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


