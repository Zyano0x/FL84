#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Component_NationalFlag.UI_Component_NationalFlag_C
// (None)

class UClass* UUI_Component_NationalFlag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Component_NationalFlag_C");

	return Clss;
}


// UI_Component_NationalFlag_C UI_Component_NationalFlag.Default__UI_Component_NationalFlag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Component_NationalFlag_C* UUI_Component_NationalFlag_C::GetDefaultObj()
{
	static class UUI_Component_NationalFlag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Component_NationalFlag_C*>(UUI_Component_NationalFlag_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Component_NationalFlag_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_NationalFlag_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Component_NationalFlag_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_NationalFlag_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.LoadClanFlagByUrl
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Component_NationalFlag_C::LoadClanFlagByUrl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_NationalFlag_C", "LoadClanFlagByUrl");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.OnSolarUIOpened
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Component_NationalFlag_C::OnSolarUIOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_NationalFlag_C", "OnSolarUIOpened");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.IsExclusiveFlagId
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// int32                              InFlagID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

bool UUI_Component_NationalFlag_C::IsExclusiveFlagId(int32 InFlagID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_NationalFlag_C", "IsExclusiveFlagId");

	Params::UUI_Component_NationalFlag_C_IsExclusiveFlagId_Params Parms{};

	Parms.InFlagID = InFlagID;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.SetDefaultClanFlag
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Component_NationalFlag_C::SetDefaultClanFlag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_NationalFlag_C", "SetDefaultClanFlag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.OnSolarUIClosed
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Component_NationalFlag_C::OnSolarUIClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_NationalFlag_C", "OnSolarUIClosed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Component_NationalFlag_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_NationalFlag_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.SetDefaultNationalFlag
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Component_NationalFlag_C::SetDefaultNationalFlag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_NationalFlag_C", "SetDefaultNationalFlag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.IsBroadCastMode
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

bool UUI_Component_NationalFlag_C::IsBroadCastMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_NationalFlag_C", "IsBroadCastMode");

	Params::UUI_Component_NationalFlag_C_IsBroadCastMode_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_Component_NationalFlag_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_NationalFlag_C", "GetModuleName");

	Params::UUI_Component_NationalFlag_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.SetEmptyClan
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Component_NationalFlag_C::SetEmptyClan()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_NationalFlag_C", "SetEmptyClan");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.SetFlagType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_FlagType              FlagType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Component_NationalFlag_C::SetFlagType(enum class E_FlagType FlagType, int32 CallFunc_Conv_ByteToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_NationalFlag_C", "SetFlagType");

	Params::UUI_Component_NationalFlag_C_SetFlagType_Params Parms{};

	Parms.FlagType = FlagType;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.Set UI State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_FlagType              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_FlagType              Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Component_NationalFlag_C::Set_UI_State(enum class E_FlagType Temp_byte_Variable, enum class E_FlagType Temp_byte_Variable_1, float CallFunc_Multiply_IntFloat_ReturnValue, float K2Node_Select_Default, float CallFunc_Divide_FloatFloat_ReturnValue, float K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_NationalFlag_C", "Set UI State");

	Params::UUI_Component_NationalFlag_C_Set_UI_State_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Component_NationalFlag_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_NationalFlag_C", "PreConstruct");

	Params::UUI_Component_NationalFlag_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.SetNationalFlagType
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Component_NationalFlag_C::SetNationalFlagType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_NationalFlag_C", "SetNationalFlagType");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.SetClanFlagType
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Component_NationalFlag_C::SetClanFlagType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_NationalFlag_C", "SetClanFlagType");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.ExecuteUbergraph_UI_Component_NationalFlag
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Component_NationalFlag_C::ExecuteUbergraph_UI_Component_NationalFlag(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_NationalFlag_C", "ExecuteUbergraph_UI_Component_NationalFlag");

	Params::UUI_Component_NationalFlag_C_ExecuteUbergraph_UI_Component_NationalFlag_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


