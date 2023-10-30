#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_UserFission.UI_UserFission_C
// (None)

class UClass* UUI_UserFission_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_UserFission_C");

	return Clss;
}


// UI_UserFission_C UI_UserFission.Default__UI_UserFission_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_UserFission_C* UUI_UserFission_C::GetDefaultObj()
{
	static class UUI_UserFission_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_UserFission_C*>(UUI_UserFission_C::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction UI_UserFission.UI_UserFission_C.OnClicked_0F80591F4FB66A84B9F78A96F1B1B015
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_UserFission_C::OnClicked_0F80591F4FB66A84B9F78A96F1B1B015()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UserFission_C", "OnClicked_0F80591F4FB66A84B9F78A96F1B1B015");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction UI_UserFission.UI_UserFission_C.OnClicked_FC4CF2D74FBE5631C2A7349BCC08AE6F
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_UserFission_C::OnClicked_FC4CF2D74FBE5631C2A7349BCC08AE6F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UserFission_C", "OnClicked_FC4CF2D74FBE5631C2A7349BCC08AE6F");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction UI_UserFission.UI_UserFission_C.OnClicked_76907B414E3957A41A31988370B33A6A
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_UserFission_C::OnClicked_76907B414E3957A41A31988370B33A6A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UserFission_C", "OnClicked_76907B414E3957A41A31988370B33A6A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_UserFission.UI_UserFission_C.OnClicked_B6BB697A4C883994874495AE1F5CEA40
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_UserFission_C::OnClicked_B6BB697A4C883994874495AE1F5CEA40()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UserFission_C", "OnClicked_B6BB697A4C883994874495AE1F5CEA40");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction UI_UserFission.UI_UserFission_C.OnClicked_3F208CB14B0A5E1C4908BAA5C04112E5
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_UserFission_C::OnClicked_3F208CB14B0A5E1C4908BAA5C04112E5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UserFission_C", "OnClicked_3F208CB14B0A5E1C4908BAA5C04112E5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_UserFission.UI_UserFission_C.OnSolarUIOpened
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_UserFission_C::OnSolarUIOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UserFission_C", "OnSolarUIOpened");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_UserFission.UI_UserFission_C.OnSolarUIClosed
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_UserFission_C::OnSolarUIClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UserFission_C", "OnSolarUIClosed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_UserFission.UI_UserFission_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_UserFission_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UserFission_C", "GetModuleName");

	Params::UUI_UserFission_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_UserFission.UI_UserFission_C.IsFirstInvite
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               FirstInvite                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_UserFission_C::IsFirstInvite(bool FirstInvite, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UserFission_C", "IsFirstInvite");

	Params::UUI_UserFission_C_IsFirstInvite_Params Parms{};

	Parms.FirstInvite = FirstInvite;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_UserFission.UI_UserFission_C.SetNewIncreased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewIncreased                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_UserFission_C::SetNewIncreased(bool NewIncreased, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UserFission_C", "SetNewIncreased");

	Params::UUI_UserFission_C_SetNewIncreased_Params Parms{};

	Parms.NewIncreased = NewIncreased;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_UserFission.UI_UserFission_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_UserFission_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UserFission_C", "PreConstruct");

	Params::UUI_UserFission_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_UserFission.UI_UserFission_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_UserFission_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UserFission_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_UserFission.UI_UserFission_C.ExecuteUbergraph_UI_UserFission
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_UserFission_C::ExecuteUbergraph_UI_UserFission(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UserFission_C", "ExecuteUbergraph_UI_UserFission");

	Params::UUI_UserFission_C_ExecuteUbergraph_UI_UserFission_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


