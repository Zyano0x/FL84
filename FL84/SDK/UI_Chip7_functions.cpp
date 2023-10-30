#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Chip7.UI_Chip7_C
// (None)

class UClass* UUI_Chip7_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Chip7_C");

	return Clss;
}


// UI_Chip7_C UI_Chip7.Default__UI_Chip7_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Chip7_C* UUI_Chip7_C::GetDefaultObj()
{
	static class UUI_Chip7_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Chip7_C*>(UUI_Chip7_C::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction UI_Chip7.UI_Chip7_C.OnClicked_428371624C55F35DE436E6A2B92B8D97
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_Chip7_C::OnClicked_428371624C55F35DE436E6A2B92B8D97()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Chip7_C", "OnClicked_428371624C55F35DE436E6A2B92B8D97");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction UI_Chip7.UI_Chip7_C.OnClicked_FFC1E9FC43C77A90A2A226B91FEF73A7
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_Chip7_C::OnClicked_FFC1E9FC43C77A90A2A226B91FEF73A7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Chip7_C", "OnClicked_FFC1E9FC43C77A90A2A226B91FEF73A7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Chip7.UI_Chip7_C.OnSolarUIOpened
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Chip7_C::OnSolarUIOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Chip7_C", "OnSolarUIOpened");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Chip7.UI_Chip7_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Chip7_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Chip7_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Chip7.UI_Chip7_C.OnHide
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Chip7_C::OnHide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Chip7_C", "OnHide");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Chip7.UI_Chip7_C.OnShow
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Chip7_C::OnShow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Chip7_C", "OnShow");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Chip7.UI_Chip7_C.OnSolarUIClosed
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Chip7_C::OnSolarUIClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Chip7_C", "OnSolarUIClosed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Chip7.UI_Chip7_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_Chip7_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Chip7_C", "GetModuleName");

	Params::UUI_Chip7_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Chip7.UI_Chip7_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Chip7_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Chip7_C", "PreConstruct");

	Params::UUI_Chip7_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Chip7.UI_Chip7_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Chip7_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Chip7_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Chip7.UI_Chip7_C.ExecuteUbergraph_UI_Chip7
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Chip7_C::ExecuteUbergraph_UI_Chip7(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Chip7_C", "ExecuteUbergraph_UI_Chip7");

	Params::UUI_Chip7_C_ExecuteUbergraph_UI_Chip7_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


