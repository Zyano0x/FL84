#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_HUD_Notice_VICTORY_Desktop.UI_HUD_Notice_VICTORY_Desktop_C
// (None)

class UClass* UUI_HUD_Notice_VICTORY_Desktop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_HUD_Notice_VICTORY_Desktop_C");

	return Clss;
}


// UI_HUD_Notice_VICTORY_Desktop_C UI_HUD_Notice_VICTORY_Desktop.Default__UI_HUD_Notice_VICTORY_Desktop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_HUD_Notice_VICTORY_Desktop_C* UUI_HUD_Notice_VICTORY_Desktop_C::GetDefaultObj()
{
	static class UUI_HUD_Notice_VICTORY_Desktop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_HUD_Notice_VICTORY_Desktop_C*>(UUI_HUD_Notice_VICTORY_Desktop_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_HUD_Notice_VICTORY_Desktop.UI_HUD_Notice_VICTORY_Desktop_C.GetModuleName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_HUD_Notice_VICTORY_Desktop_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HUD_Notice_VICTORY_Desktop_C", "GetModuleName");

	Params::UUI_HUD_Notice_VICTORY_Desktop_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_HUD_Notice_VICTORY_Desktop.UI_HUD_Notice_VICTORY_Desktop_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_HUD_Notice_VICTORY_Desktop_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HUD_Notice_VICTORY_Desktop_C", "PreConstruct");

	Params::UUI_HUD_Notice_VICTORY_Desktop_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_HUD_Notice_VICTORY_Desktop.UI_HUD_Notice_VICTORY_Desktop_C.CloseSelf
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_HUD_Notice_VICTORY_Desktop_C::CloseSelf()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HUD_Notice_VICTORY_Desktop_C", "CloseSelf");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_HUD_Notice_VICTORY_Desktop.UI_HUD_Notice_VICTORY_Desktop_C.OnEndAnimFinish
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUI_HUD_Notice_VICTORY_Desktop_C::OnEndAnimFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HUD_Notice_VICTORY_Desktop_C", "OnEndAnimFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_HUD_Notice_VICTORY_Desktop.UI_HUD_Notice_VICTORY_Desktop_C.ExecuteUbergraph_UI_HUD_Notice_VICTORY_Desktop
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UUI_HUD_Notice_VICTORY_Desktop_C::ExecuteUbergraph_UI_HUD_Notice_VICTORY_Desktop(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_HUD_Notice_VICTORY_Desktop_C", "ExecuteUbergraph_UI_HUD_Notice_VICTORY_Desktop");

	Params::UUI_HUD_Notice_VICTORY_Desktop_C_ExecuteUbergraph_UI_HUD_Notice_VICTORY_Desktop_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

