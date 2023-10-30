#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Activity.UI_Activity_C
// (None)

class UClass* UUI_Activity_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Activity_C");

	return Clss;
}


// UI_Activity_C UI_Activity.Default__UI_Activity_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Activity_C* UUI_Activity_C::GetDefaultObj()
{
	static class UUI_Activity_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Activity_C*>(UUI_Activity_C::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction UI_Activity.UI_Activity_C.BP_OnItemClicked_FC64327E43978FFF6B333E9B198B0225
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UObject*                     Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUI_Activity_C::BP_OnItemClicked_FC64327E43978FFF6B333E9B198B0225(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Activity_C", "BP_OnItemClicked_FC64327E43978FFF6B333E9B198B0225");

	Params::UUI_Activity_C_BP_OnItemClicked_FC64327E43978FFF6B333E9B198B0225_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UI_Activity.UI_Activity_C.BP_OnItemSelectionChanged_BA2DC072424C97FEFE409E8205E66794
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UObject*                     Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsSelected                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UUI_Activity_C::BP_OnItemSelectionChanged_BA2DC072424C97FEFE409E8205E66794(class UObject* Item, bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Activity_C", "BP_OnItemSelectionChanged_BA2DC072424C97FEFE409E8205E66794");

	Params::UUI_Activity_C_BP_OnItemSelectionChanged_BA2DC072424C97FEFE409E8205E66794_Params Parms{};

	Parms.Item = Item;
	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Activity.UI_Activity_C.OnClicked_5829388C4526B3281F6654AC67A250A9
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Activity_C::OnClicked_5829388C4526B3281F6654AC67A250A9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Activity_C", "OnClicked_5829388C4526B3281F6654AC67A250A9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Activity.UI_Activity_C.OnBackKey
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// enum class EWidgetBackKeyType      BackKeyType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUI_Activity_C::OnBackKey(enum class EWidgetBackKeyType BackKeyType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Activity_C", "OnBackKey");

	Params::UUI_Activity_C_OnBackKey_Params Parms{};

	Parms.BackKeyType = BackKeyType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UI_Activity.UI_Activity_C.OnSolarUIOpened
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Activity_C::OnSolarUIOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Activity_C", "OnSolarUIOpened");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Activity.UI_Activity_C.OnShow
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Activity_C::OnShow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Activity_C", "OnShow");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Activity.UI_Activity_C.OnSolarUIClosed
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Activity_C::OnSolarUIClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Activity_C", "OnSolarUIClosed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Activity.UI_Activity_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_Activity_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Activity_C", "GetModuleName");

	Params::UUI_Activity_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Activity.UI_Activity_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Activity_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Activity_C", "PreConstruct");

	Params::UUI_Activity_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Activity.UI_Activity_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Activity_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Activity_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Activity.UI_Activity_C.ExecuteUbergraph_UI_Activity
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Activity_C::ExecuteUbergraph_UI_Activity(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Activity_C", "ExecuteUbergraph_UI_Activity");

	Params::UUI_Activity_C_ExecuteUbergraph_UI_Activity_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


