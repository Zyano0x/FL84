#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_UserFission_Idol.UI_UserFission_Idol_C
// (None)

class UClass* UUI_UserFission_Idol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_UserFission_Idol_C");

	return Clss;
}


// UI_UserFission_Idol_C UI_UserFission_Idol.Default__UI_UserFission_Idol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_UserFission_Idol_C* UUI_UserFission_Idol_C::GetDefaultObj()
{
	static class UUI_UserFission_Idol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_UserFission_Idol_C*>(UUI_UserFission_Idol_C::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction UI_UserFission_Idol.UI_UserFission_Idol_C.OnClicked_00A526B341A72051A20CCAB3805E5DCF
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_UserFission_Idol_C::OnClicked_00A526B341A72051A20CCAB3805E5DCF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UserFission_Idol_C", "OnClicked_00A526B341A72051A20CCAB3805E5DCF");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction UI_UserFission_Idol.UI_UserFission_Idol_C.OnClicked_600E4E41413756ED127758B4D4BAE716
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_UserFission_Idol_C::OnClicked_600E4E41413756ED127758B4D4BAE716()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UserFission_Idol_C", "OnClicked_600E4E41413756ED127758B4D4BAE716");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction UI_UserFission_Idol.UI_UserFission_Idol_C.OnClicked_74C8B196445166B4ACA000971ABE4F86
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_UserFission_Idol_C::OnClicked_74C8B196445166B4ACA000971ABE4F86()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UserFission_Idol_C", "OnClicked_74C8B196445166B4ACA000971ABE4F86");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_UserFission_Idol.UI_UserFission_Idol_C.OnClicked_8DAAD73242375DCD28B4208E256F936A
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_UserFission_Idol_C::OnClicked_8DAAD73242375DCD28B4208E256F936A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UserFission_Idol_C", "OnClicked_8DAAD73242375DCD28B4208E256F936A");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction UI_UserFission_Idol.UI_UserFission_Idol_C.OnClicked_79B55B9C4F791087ACDD30BB731D1735
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_UserFission_Idol_C::OnClicked_79B55B9C4F791087ACDD30BB731D1735()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UserFission_Idol_C", "OnClicked_79B55B9C4F791087ACDD30BB731D1735");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_UserFission_Idol.UI_UserFission_Idol_C.OnSolarUIOpened
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_UserFission_Idol_C::OnSolarUIOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UserFission_Idol_C", "OnSolarUIOpened");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_UserFission_Idol.UI_UserFission_Idol_C.OnSolarUIClosed
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_UserFission_Idol_C::OnSolarUIClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UserFission_Idol_C", "OnSolarUIClosed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_UserFission_Idol.UI_UserFission_Idol_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_UserFission_Idol_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UserFission_Idol_C", "GetModuleName");

	Params::UUI_UserFission_Idol_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_UserFission_Idol.UI_UserFission_Idol_C.IsFirstInvite
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               FirstInvite                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_UserFission_Idol_C::IsFirstInvite(bool FirstInvite, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UserFission_Idol_C", "IsFirstInvite");

	Params::UUI_UserFission_Idol_C_IsFirstInvite_Params Parms{};

	Parms.FirstInvite = FirstInvite;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_UserFission_Idol.UI_UserFission_Idol_C.SetNewIncreased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewIncreased                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_UserFission_Idol_C::SetNewIncreased(bool NewIncreased, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UserFission_Idol_C", "SetNewIncreased");

	Params::UUI_UserFission_Idol_C_SetNewIncreased_Params Parms{};

	Parms.NewIncreased = NewIncreased;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_UserFission_Idol.UI_UserFission_Idol_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_UserFission_Idol_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UserFission_Idol_C", "PreConstruct");

	Params::UUI_UserFission_Idol_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_UserFission_Idol.UI_UserFission_Idol_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_UserFission_Idol_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UserFission_Idol_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_UserFission_Idol.UI_UserFission_Idol_C.ExecuteUbergraph_UI_UserFission_Idol
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_UserFission_Idol_C::ExecuteUbergraph_UI_UserFission_Idol(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_UserFission_Idol_C", "ExecuteUbergraph_UI_UserFission_Idol");

	Params::UUI_UserFission_Idol_C_ExecuteUbergraph_UI_UserFission_Idol_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


