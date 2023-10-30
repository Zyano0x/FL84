#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_CollectRedeem.UI_CollectRedeem_C
// (None)

class UClass* UUI_CollectRedeem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_CollectRedeem_C");

	return Clss;
}


// UI_CollectRedeem_C UI_CollectRedeem.Default__UI_CollectRedeem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_CollectRedeem_C* UUI_CollectRedeem_C::GetDefaultObj()
{
	static class UUI_CollectRedeem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_CollectRedeem_C*>(UUI_CollectRedeem_C::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction UI_CollectRedeem.UI_CollectRedeem_C.OnStateChangedEvent_5C04C6D54E5BE9C9A5CDCDB4A8E44AD3
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// TArray<class UCheckBox*>           ChildChangedArray                                                (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CheckedChildIndex                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUI_CollectRedeem_C::OnStateChangedEvent_5C04C6D54E5BE9C9A5CDCDB4A8E44AD3(TArray<class UCheckBox*>& ChildChangedArray, int32 CheckedChildIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CollectRedeem_C", "OnStateChangedEvent_5C04C6D54E5BE9C9A5CDCDB4A8E44AD3");

	Params::UUI_CollectRedeem_C_OnStateChangedEvent_5C04C6D54E5BE9C9A5CDCDB4A8E44AD3_Params Parms{};

	Parms.ChildChangedArray = ChildChangedArray;
	Parms.CheckedChildIndex = CheckedChildIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CollectRedeem.UI_CollectRedeem_C.OnClicked_0471F75648E92DF314AA3FBDD435DAE2
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CollectRedeem_C::OnClicked_0471F75648E92DF314AA3FBDD435DAE2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CollectRedeem_C", "OnClicked_0471F75648E92DF314AA3FBDD435DAE2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CollectRedeem.UI_CollectRedeem_C.OnSolarUIOpened
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_CollectRedeem_C::OnSolarUIOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CollectRedeem_C", "OnSolarUIOpened");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_CollectRedeem.UI_CollectRedeem_C.OnShow
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_CollectRedeem_C::OnShow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CollectRedeem_C", "OnShow");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_CollectRedeem.UI_CollectRedeem_C.OnSolarUIClosed
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_CollectRedeem_C::OnSolarUIClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CollectRedeem_C", "OnSolarUIClosed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_CollectRedeem.UI_CollectRedeem_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_CollectRedeem_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CollectRedeem_C", "GetModuleName");

	Params::UUI_CollectRedeem_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_CollectRedeem.UI_CollectRedeem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_CollectRedeem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CollectRedeem_C", "PreConstruct");

	Params::UUI_CollectRedeem_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CollectRedeem.UI_CollectRedeem_C.ExecuteUbergraph_UI_CollectRedeem
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_CollectRedeem_C::ExecuteUbergraph_UI_CollectRedeem(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CollectRedeem_C", "ExecuteUbergraph_UI_CollectRedeem");

	Params::UUI_CollectRedeem_C_ExecuteUbergraph_UI_CollectRedeem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


