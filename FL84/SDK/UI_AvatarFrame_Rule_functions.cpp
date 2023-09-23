#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_AvatarFrame_Rule.UI_AvatarFrame_Rule_C
// (None)

class UClass* UUI_AvatarFrame_Rule_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_AvatarFrame_Rule_C");

	return Clss;
}


// UI_AvatarFrame_Rule_C UI_AvatarFrame_Rule.Default__UI_AvatarFrame_Rule_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_AvatarFrame_Rule_C* UUI_AvatarFrame_Rule_C::GetDefaultObj()
{
	static class UUI_AvatarFrame_Rule_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_AvatarFrame_Rule_C*>(UUI_AvatarFrame_Rule_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_AvatarFrame_Rule.UI_AvatarFrame_Rule_C.GetModuleName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_AvatarFrame_Rule_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_AvatarFrame_Rule_C", "GetModuleName");

	Params::UUI_AvatarFrame_Rule_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_AvatarFrame_Rule.UI_AvatarFrame_Rule_C.SetAvatarIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InAvatarID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_AvatarFrame_Rule_C::SetAvatarIcon(int32 InAvatarID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_AvatarFrame_Rule_C", "SetAvatarIcon");

	Params::UUI_AvatarFrame_Rule_C_SetAvatarIcon_Params Parms{};

	Parms.InAvatarID = InAvatarID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_AvatarFrame_Rule.UI_AvatarFrame_Rule_C.SetEmptyState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEmpty                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_AvatarFrame_Rule_C::SetEmptyState(bool IsEmpty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_AvatarFrame_Rule_C", "SetEmptyState");

	Params::UUI_AvatarFrame_Rule_C_SetEmptyState_Params Parms{};

	Parms.IsEmpty = IsEmpty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_AvatarFrame_Rule.UI_AvatarFrame_Rule_C.SetPlayerGender
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_Type_Gender           Gender                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_AvatarFrame_Rule_C::SetPlayerGender(enum class E_Type_Gender Gender)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_AvatarFrame_Rule_C", "SetPlayerGender");

	Params::UUI_AvatarFrame_Rule_C_SetPlayerGender_Params Parms{};

	Parms.Gender = Gender;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_AvatarFrame_Rule.UI_AvatarFrame_Rule_C.SetSocialIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_Type_Social           Social                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_AvatarFrame_Rule_C::SetSocialIcon(enum class E_Type_Social Social)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_AvatarFrame_Rule_C", "SetSocialIcon");

	Params::UUI_AvatarFrame_Rule_C_SetSocialIcon_Params Parms{};

	Parms.Social = Social;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_AvatarFrame_Rule.UI_AvatarFrame_Rule_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_AvatarFrame_Rule_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_AvatarFrame_Rule_C", "PreConstruct");

	Params::UUI_AvatarFrame_Rule_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_AvatarFrame_Rule.UI_AvatarFrame_Rule_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_AvatarFrame_Rule_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_AvatarFrame_Rule_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_AvatarFrame_Rule.UI_AvatarFrame_Rule_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_AvatarFrame_Rule_C::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_AvatarFrame_Rule_C", "Update");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_AvatarFrame_Rule.UI_AvatarFrame_Rule_C.ExecuteUbergraph_UI_AvatarFrame_Rule
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_AvatarFrame_Rule_C::ExecuteUbergraph_UI_AvatarFrame_Rule(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_AvatarFrame_Rule_C", "ExecuteUbergraph_UI_AvatarFrame_Rule");

	Params::UUI_AvatarFrame_Rule_C_ExecuteUbergraph_UI_AvatarFrame_Rule_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_AvatarFrame_Rule.UI_AvatarFrame_Rule_C.On Released__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_AvatarFrame_Rule_C::On_Released__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_AvatarFrame_Rule_C", "On Released__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_AvatarFrame_Rule.UI_AvatarFrame_Rule_C.On Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_AvatarFrame_Rule_C::On_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_AvatarFrame_Rule_C", "On Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}

