#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FL_UIComponents.FL_UIComponents_C
// (None)

class UClass* UFL_UIComponents_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FL_UIComponents_C");

	return Clss;
}


// FL_UIComponents_C FL_UIComponents.Default__FL_UIComponents_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFL_UIComponents_C* UFL_UIComponents_C::GetDefaultObj()
{
	static class UFL_UIComponents_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFL_UIComponents_C*>(UFL_UIComponents_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FL_UIComponents.FL_UIComponents_C.LocalText2Text
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_LocalText                LocalText                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)
// class FString                      Loctext                                                          (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_ToUpper_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetLocalText_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UFL_UIComponents_C::LocalText2Text(const struct FS_LocalText& LocalText, class UObject* __WorldContext, class FText* Text, const class FString& Loctext, bool Temp_bool_Variable, const class FString& CallFunc_ToUpper_ReturnValue, const class FString& CallFunc_GetLocalText_ReturnValue, const class FString& K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_UIComponents_C", "LocalText2Text");

	Params::UFL_UIComponents_C_LocalText2Text_Params Parms{};

	Parms.LocalText = LocalText;
	Parms.__WorldContext = __WorldContext;
	Parms.Loctext = Loctext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_ToUpper_ReturnValue = CallFunc_ToUpper_ReturnValue;
	Parms.CallFunc_GetLocalText_ReturnValue = CallFunc_GetLocalText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function FL_UIComponents.FL_UIComponents_C.LocalText2String
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_LocalText                LocalText                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Text                                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetLocalText_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)

void UFL_UIComponents_C::LocalText2String(const struct FS_LocalText& LocalText, class UObject* __WorldContext, class FString* Text, const class FString& CallFunc_GetLocalText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_UIComponents_C", "LocalText2String");

	Params::UFL_UIComponents_C_LocalText2String_Params Parms{};

	Parms.LocalText = LocalText;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetLocalText_ReturnValue = CallFunc_GetLocalText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);

}

}


