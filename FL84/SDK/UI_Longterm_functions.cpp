#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Longterm.UI_Longterm_C
// (None)

class UClass* UUI_Longterm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Longterm_C");

	return Clss;
}


// UI_Longterm_C UI_Longterm.Default__UI_Longterm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Longterm_C* UUI_Longterm_C::GetDefaultObj()
{
	static class UUI_Longterm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Longterm_C*>(UUI_Longterm_C::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction UI_Longterm.UI_Longterm_C.OnClicked_FE18C5CD40E0075FAAC211BC579E3AEA
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_Longterm_C::OnClicked_FE18C5CD40E0075FAAC211BC579E3AEA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Longterm_C", "OnClicked_FE18C5CD40E0075FAAC211BC579E3AEA");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction UI_Longterm.UI_Longterm_C.OnClicked_E328650F4324F661BB8D708E188F4CC6
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_Longterm_C::OnClicked_E328650F4324F661BB8D708E188F4CC6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Longterm_C", "OnClicked_E328650F4324F661BB8D708E188F4CC6");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction UI_Longterm.UI_Longterm_C.OnClicked_0C373C33448930D162EF4F8393DD2842
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_Longterm_C::OnClicked_0C373C33448930D162EF4F8393DD2842()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Longterm_C", "OnClicked_0C373C33448930D162EF4F8393DD2842");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Longterm.UI_Longterm_C.OnSolarUIOpened
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Longterm_C::OnSolarUIOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Longterm_C", "OnSolarUIOpened");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Longterm.UI_Longterm_C.TickCopy
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Longterm_C::TickCopy(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Longterm_C", "TickCopy");

	Params::UUI_Longterm_C_TickCopy_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Longterm.UI_Longterm_C.OnSolarUIClosed
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Longterm_C::OnSolarUIClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Longterm_C", "OnSolarUIClosed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Longterm.UI_Longterm_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_Longterm_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Longterm_C", "GetModuleName");

	Params::UUI_Longterm_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Longterm.UI_Longterm_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Longterm_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Longterm_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Longterm.UI_Longterm_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Longterm_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Longterm_C", "Tick");

	Params::UUI_Longterm_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Longterm.UI_Longterm_C.BndEvt__ListView_Mission_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Longterm_C::BndEvt__ListView_Mission_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Longterm_C", "BndEvt__ListView_Mission_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature");

	Params::UUI_Longterm_C_BndEvt__ListView_Mission_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Longterm.UI_Longterm_C.ExecuteUbergraph_UI_Longterm
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Longterm_C::ExecuteUbergraph_UI_Longterm(int32 EntryPoint, class UUserWidget* K2Node_ComponentBoundEvent_Widget, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Longterm_C", "ExecuteUbergraph_UI_Longterm");

	Params::UUI_Longterm_C_ExecuteUbergraph_UI_Longterm_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


