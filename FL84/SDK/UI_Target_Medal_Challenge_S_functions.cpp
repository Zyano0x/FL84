#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Target_Medal_Challenge_S.UI_Target_Medal_Challenge_S_C
// (None)

class UClass* UUI_Target_Medal_Challenge_S_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Target_Medal_Challenge_S_C");

	return Clss;
}


// UI_Target_Medal_Challenge_S_C UI_Target_Medal_Challenge_S.Default__UI_Target_Medal_Challenge_S_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Target_Medal_Challenge_S_C* UUI_Target_Medal_Challenge_S_C::GetDefaultObj()
{
	static class UUI_Target_Medal_Challenge_S_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Target_Medal_Challenge_S_C*>(UUI_Target_Medal_Challenge_S_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Target_Medal_Challenge_S.UI_Target_Medal_Challenge_S_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Target_Medal_Challenge_S_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Target_Medal_Challenge_S_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Target_Medal_Challenge_S.UI_Target_Medal_Challenge_S_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Target_Medal_Challenge_S_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Target_Medal_Challenge_S_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Target_Medal_Challenge_S.UI_Target_Medal_Challenge_S_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_Target_Medal_Challenge_S_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Target_Medal_Challenge_S_C", "GetModuleName");

	Params::UUI_Target_Medal_Challenge_S_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Target_Medal_Challenge_S.UI_Target_Medal_Challenge_S_C.SetStateIsLocked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLock                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Target_Medal_Challenge_S_C::SetStateIsLocked(bool IsLock, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Target_Medal_Challenge_S_C", "SetStateIsLocked");

	Params::UUI_Target_Medal_Challenge_S_C_SetStateIsLocked_Params Parms{};

	Parms.IsLock = IsLock;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Target_Medal_Challenge_S.UI_Target_Medal_Challenge_S_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Target_Medal_Challenge_S_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Target_Medal_Challenge_S_C", "PreConstruct");

	Params::UUI_Target_Medal_Challenge_S_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Target_Medal_Challenge_S.UI_Target_Medal_Challenge_S_C.ExecuteUbergraph_UI_Target_Medal_Challenge_S
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Target_Medal_Challenge_S_C::ExecuteUbergraph_UI_Target_Medal_Challenge_S(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Target_Medal_Challenge_S_C", "ExecuteUbergraph_UI_Target_Medal_Challenge_S");

	Params::UUI_Target_Medal_Challenge_S_C_ExecuteUbergraph_UI_Target_Medal_Challenge_S_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


