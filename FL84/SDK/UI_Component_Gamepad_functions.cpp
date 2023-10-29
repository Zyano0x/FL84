#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Component_Gamepad.UI_Component_Gamepad_C
// (None)

class UClass* UUI_Component_Gamepad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Component_Gamepad_C");

	return Clss;
}


// UI_Component_Gamepad_C UI_Component_Gamepad.Default__UI_Component_Gamepad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Component_Gamepad_C* UUI_Component_Gamepad_C::GetDefaultObj()
{
	static class UUI_Component_Gamepad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Component_Gamepad_C*>(UUI_Component_Gamepad_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Component_Gamepad.UI_Component_Gamepad_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Component_Gamepad_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_Gamepad_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Component_Gamepad.UI_Component_Gamepad_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Component_Gamepad_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_Gamepad_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Component_Gamepad.UI_Component_Gamepad_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Component_Gamepad_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_Gamepad_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Component_Gamepad.UI_Component_Gamepad_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_Component_Gamepad_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_Gamepad_C", "GetModuleName");

	Params::UUI_Component_Gamepad_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Component_Gamepad.UI_Component_Gamepad_C.SetMainKeySelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Component_Gamepad_C::SetMainKeySelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_Gamepad_C", "SetMainKeySelection");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Component_Gamepad.UI_Component_Gamepad_C.SetMainKeyNormal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Component_Gamepad_C::SetMainKeyNormal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_Gamepad_C", "SetMainKeyNormal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Component_Gamepad.UI_Component_Gamepad_C.GetGamepadIconByKey
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UPaperSprite*                GamepadIcon                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Component_Gamepad_C::GetGamepadIconByKey(const struct FKey& InKey, class UPaperSprite** GamepadIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_Gamepad_C", "GetGamepadIconByKey");

	Params::UUI_Component_Gamepad_C_GetGamepadIconByKey_Params Parms{};

	Parms.InKey = InKey;

	UObject::ProcessEvent(Func, &Parms);

	if (GamepadIcon != nullptr)
		*GamepadIcon = Parms.GamepadIcon;

}


// Function UI_Component_Gamepad.UI_Component_Gamepad_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        ModifierKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FKey                        MainKey                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FKey                        LocalMainKey                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FKey                        LocalModifierKey                                                 (Edit, BlueprintVisible, HasGetValueTypeHash)
// class UPaperSprite*                CallFunc_GetGamepadIconByKey_GamepadIcon                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPaperSprite*                CallFunc_GetGamepadIconByKey_GamepadIcon_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Component_Gamepad_C::SetData(const struct FKey& ModifierKey, const struct FKey& MainKey, const struct FKey& LocalMainKey, const struct FKey& LocalModifierKey, class UPaperSprite* CallFunc_GetGamepadIconByKey_GamepadIcon, bool CallFunc_EqualEqual_KeyKey_ReturnValue, class UPaperSprite* CallFunc_GetGamepadIconByKey_GamepadIcon_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_Gamepad_C", "SetData");

	Params::UUI_Component_Gamepad_C_SetData_Params Parms{};

	Parms.ModifierKey = ModifierKey;
	Parms.MainKey = MainKey;
	Parms.LocalMainKey = LocalMainKey;
	Parms.LocalModifierKey = LocalModifierKey;
	Parms.CallFunc_GetGamepadIconByKey_GamepadIcon = CallFunc_GetGamepadIconByKey_GamepadIcon;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_GetGamepadIconByKey_GamepadIcon_1 = CallFunc_GetGamepadIconByKey_GamepadIcon_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_Gamepad.UI_Component_Gamepad_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Component_Gamepad_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_Gamepad_C", "PreConstruct");

	Params::UUI_Component_Gamepad_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_Gamepad.UI_Component_Gamepad_C.ExecuteUbergraph_UI_Component_Gamepad
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Component_Gamepad_C::ExecuteUbergraph_UI_Component_Gamepad(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_Gamepad_C", "ExecuteUbergraph_UI_Component_Gamepad");

	Params::UUI_Component_Gamepad_C_ExecuteUbergraph_UI_Component_Gamepad_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


