#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Chip15.UI_Chip15_C
// (None)

class UClass* UUI_Chip15_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Chip15_C");

	return Clss;
}


// UI_Chip15_C UI_Chip15.Default__UI_Chip15_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Chip15_C* UUI_Chip15_C::GetDefaultObj()
{
	static class UUI_Chip15_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Chip15_C*>(UUI_Chip15_C::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction UI_Chip15.UI_Chip15_C.OnClicked_3225CE624E40A42ABACD13B52990BC0E
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_Chip15_C::OnClicked_3225CE624E40A42ABACD13B52990BC0E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Chip15_C", "OnClicked_3225CE624E40A42ABACD13B52990BC0E");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction UI_Chip15.UI_Chip15_C.OnClicked_E7BB102C406BF87882599885E34B5E2C
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_Chip15_C::OnClicked_E7BB102C406BF87882599885E34B5E2C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Chip15_C", "OnClicked_E7BB102C406BF87882599885E34B5E2C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Chip15.UI_Chip15_C.OnSolarUIOpened
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Chip15_C::OnSolarUIOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Chip15_C", "OnSolarUIOpened");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Chip15.UI_Chip15_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Chip15_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Chip15_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Chip15.UI_Chip15_C.OnHide
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Chip15_C::OnHide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Chip15_C", "OnHide");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Chip15.UI_Chip15_C.OnShow
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Chip15_C::OnShow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Chip15_C", "OnShow");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Chip15.UI_Chip15_C.OnSolarUIClosed
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Chip15_C::OnSolarUIClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Chip15_C", "OnSolarUIClosed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Chip15.UI_Chip15_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_Chip15_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Chip15_C", "GetModuleName");

	Params::UUI_Chip15_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Chip15.UI_Chip15_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Chip15_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Chip15_C", "PreConstruct");

	Params::UUI_Chip15_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Chip15.UI_Chip15_C.ExecuteUbergraph_UI_Chip15
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Chip15_C::ExecuteUbergraph_UI_Chip15(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Chip15_C", "ExecuteUbergraph_UI_Chip15");

	Params::UUI_Chip15_C_ExecuteUbergraph_UI_Chip15_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


