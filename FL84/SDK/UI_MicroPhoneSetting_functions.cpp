#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_MicroPhoneSetting.UI_MicroPhoneSetting_C
// (None)

class UClass* UUI_MicroPhoneSetting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_MicroPhoneSetting_C");

	return Clss;
}


// UI_MicroPhoneSetting_C UI_MicroPhoneSetting.Default__UI_MicroPhoneSetting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_MicroPhoneSetting_C* UUI_MicroPhoneSetting_C::GetDefaultObj()
{
	static class UUI_MicroPhoneSetting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_MicroPhoneSetting_C*>(UUI_MicroPhoneSetting_C::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.OnMouseButtonDownEvent_ACC56C1C4E2B3B86E3E607A67414A2BD
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUI_MicroPhoneSetting_C::OnMouseButtonDownEvent_ACC56C1C4E2B3B86E3E607A67414A2BD(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MicroPhoneSetting_C", "OnMouseButtonDownEvent_ACC56C1C4E2B3B86E3E607A67414A2BD");

	Params::UUI_MicroPhoneSetting_C_OnMouseButtonDownEvent_ACC56C1C4E2B3B86E3E607A67414A2BD_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// DelegateFunction UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.OnMouseButtonDownEvent_C836F08C459FCBEBAA4B2E9ECF100EDB
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUI_MicroPhoneSetting_C::OnMouseButtonDownEvent_C836F08C459FCBEBAA4B2E9ECF100EDB(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MicroPhoneSetting_C", "OnMouseButtonDownEvent_C836F08C459FCBEBAA4B2E9ECF100EDB");

	Params::UUI_MicroPhoneSetting_C_OnMouseButtonDownEvent_C836F08C459FCBEBAA4B2E9ECF100EDB_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// DelegateFunction UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.OnStateChangedEvent_DE7B70464E9CEF68D34BCABA5428BB6A
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// TArray<class UCheckBox*>           ChildChangedArray                                                (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CheckedChildIndex                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUI_MicroPhoneSetting_C::OnStateChangedEvent_DE7B70464E9CEF68D34BCABA5428BB6A(TArray<class UCheckBox*>& ChildChangedArray, int32 CheckedChildIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MicroPhoneSetting_C", "OnStateChangedEvent_DE7B70464E9CEF68D34BCABA5428BB6A");

	Params::UUI_MicroPhoneSetting_C_OnStateChangedEvent_DE7B70464E9CEF68D34BCABA5428BB6A_Params Parms{};

	Parms.ChildChangedArray = ChildChangedArray;
	Parms.CheckedChildIndex = CheckedChildIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.OnStateChangedEvent_0AA4018E4F3334D025F8AD87FBC592E1
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// TArray<class UCheckBox*>           ChildChangedArray                                                (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CheckedChildIndex                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUI_MicroPhoneSetting_C::OnStateChangedEvent_0AA4018E4F3334D025F8AD87FBC592E1(TArray<class UCheckBox*>& ChildChangedArray, int32 CheckedChildIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MicroPhoneSetting_C", "OnStateChangedEvent_0AA4018E4F3334D025F8AD87FBC592E1");

	Params::UUI_MicroPhoneSetting_C_OnStateChangedEvent_0AA4018E4F3334D025F8AD87FBC592E1_Params Parms{};

	Parms.ChildChangedArray = ChildChangedArray;
	Parms.CheckedChildIndex = CheckedChildIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_MicroPhoneSetting_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MicroPhoneSetting_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_MicroPhoneSetting_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MicroPhoneSetting_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_MicroPhoneSetting_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MicroPhoneSetting_C", "GetModuleName");

	Params::UUI_MicroPhoneSetting_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MicroPhoneSetting_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MicroPhoneSetting_C", "PreConstruct");

	Params::UUI_MicroPhoneSetting_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.ExecuteUbergraph_UI_MicroPhoneSetting
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MicroPhoneSetting_C::ExecuteUbergraph_UI_MicroPhoneSetting(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MicroPhoneSetting_C", "ExecuteUbergraph_UI_MicroPhoneSetting");

	Params::UUI_MicroPhoneSetting_C_ExecuteUbergraph_UI_MicroPhoneSetting_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


