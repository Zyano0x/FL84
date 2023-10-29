#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Lobby_RoomInvite_MIni_Popup.UI_Lobby_RoomInvite_MIni_Popup_C
// (None)

class UClass* UUI_Lobby_RoomInvite_MIni_Popup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Lobby_RoomInvite_MIni_Popup_C");

	return Clss;
}


// UI_Lobby_RoomInvite_MIni_Popup_C UI_Lobby_RoomInvite_MIni_Popup.Default__UI_Lobby_RoomInvite_MIni_Popup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Lobby_RoomInvite_MIni_Popup_C* UUI_Lobby_RoomInvite_MIni_Popup_C::GetDefaultObj()
{
	static class UUI_Lobby_RoomInvite_MIni_Popup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Lobby_RoomInvite_MIni_Popup_C*>(UUI_Lobby_RoomInvite_MIni_Popup_C::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction UI_Lobby_RoomInvite_MIni_Popup.UI_Lobby_RoomInvite_MIni_Popup_C.OnClicked_0F52AC9C4512CAA68394A686D86B3314
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_Lobby_RoomInvite_MIni_Popup_C::OnClicked_0F52AC9C4512CAA68394A686D86B3314()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_RoomInvite_MIni_Popup_C", "OnClicked_0F52AC9C4512CAA68394A686D86B3314");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction UI_Lobby_RoomInvite_MIni_Popup.UI_Lobby_RoomInvite_MIni_Popup_C.OnClicked_AF9C500E45EC1DF90DFB8182241C3436
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_Lobby_RoomInvite_MIni_Popup_C::OnClicked_AF9C500E45EC1DF90DFB8182241C3436()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_RoomInvite_MIni_Popup_C", "OnClicked_AF9C500E45EC1DF90DFB8182241C3436");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_RoomInvite_MIni_Popup.UI_Lobby_RoomInvite_MIni_Popup_C.OnClicked_6149F1B14B25DA0301A5468AD53F91B1
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Lobby_RoomInvite_MIni_Popup_C::OnClicked_6149F1B14B25DA0301A5468AD53F91B1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_RoomInvite_MIni_Popup_C", "OnClicked_6149F1B14B25DA0301A5468AD53F91B1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_RoomInvite_MIni_Popup.UI_Lobby_RoomInvite_MIni_Popup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Lobby_RoomInvite_MIni_Popup_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_RoomInvite_MIni_Popup_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_RoomInvite_MIni_Popup.UI_Lobby_RoomInvite_MIni_Popup_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Lobby_RoomInvite_MIni_Popup_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_RoomInvite_MIni_Popup_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_RoomInvite_MIni_Popup.UI_Lobby_RoomInvite_MIni_Popup_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_Lobby_RoomInvite_MIni_Popup_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_RoomInvite_MIni_Popup_C", "GetModuleName");

	Params::UUI_Lobby_RoomInvite_MIni_Popup_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Lobby_RoomInvite_MIni_Popup.UI_Lobby_RoomInvite_MIni_Popup_C.Update_Btn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ET_Type_Button          NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ET_Type_Button          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ET_Type_Button          Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ET_Type_Button          Temp_byte_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_14                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Lobby_RoomInvite_MIni_Popup_C::Update_Btn(enum class ET_Type_Button NewParam, enum class ET_Type_Button Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ET_Type_Button Temp_byte_Variable_5, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, enum class ESlateVisibility Temp_byte_Variable_8, enum class ESlateVisibility Temp_byte_Variable_9, enum class ET_Type_Button Temp_byte_Variable_10, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility Temp_byte_Variable_11, enum class ESlateVisibility Temp_byte_Variable_12, enum class ESlateVisibility Temp_byte_Variable_13, enum class ESlateVisibility Temp_byte_Variable_14, enum class ESlateVisibility K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_RoomInvite_MIni_Popup_C", "Update_Btn");

	Params::UUI_Lobby_RoomInvite_MIni_Popup_C_Update_Btn_Params Parms{};

	Parms.NewParam = NewParam;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.Temp_byte_Variable_9 = Temp_byte_Variable_9;
	Parms.Temp_byte_Variable_10 = Temp_byte_Variable_10;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_byte_Variable_11 = Temp_byte_Variable_11;
	Parms.Temp_byte_Variable_12 = Temp_byte_Variable_12;
	Parms.Temp_byte_Variable_13 = Temp_byte_Variable_13;
	Parms.Temp_byte_Variable_14 = Temp_byte_Variable_14;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Lobby_RoomInvite_MIni_Popup.UI_Lobby_RoomInvite_MIni_Popup_C.SetType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ET_Type_System_Push     Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ET_Type_System_Push     Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ET_Type_System_Push     Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_8                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_9                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_10                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_11                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ET_Type_System_Push     Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ET_Type_System_Push     Temp_byte_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_14                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_15                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ET_Type_System_Push     Temp_byte_Variable_16                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_17                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_18                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_19                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_20                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_21                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_22                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ET_Type_System_Push     Temp_byte_Variable_23                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_24                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_25                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_26                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_27                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_28                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_29                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ET_Type_System_Push     Temp_byte_Variable_30                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_12                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_13                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_14                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_15                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_16                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_17                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ET_Type_System_Push     Temp_byte_Variable_31                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_18                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_19                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_20                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_21                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_22                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_23                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ET_Type_System_Push     Temp_byte_Variable_32                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_7                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// enum class ESlateVisibility        Temp_byte_Variable_33                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_34                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_35                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_36                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_37                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_38                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ET_Type_System_Push     Temp_byte_Variable_39                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_8                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Select_Default_9                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Lobby_RoomInvite_MIni_Popup_C::SetType(enum class ET_Type_System_Push Type, enum class ET_Type_System_Push Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, const struct FLinearColor& Temp_struct_Variable_4, const struct FLinearColor& Temp_struct_Variable_5, enum class ET_Type_System_Push Temp_byte_Variable_1, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& Temp_struct_Variable_6, const struct FLinearColor& Temp_struct_Variable_7, const struct FLinearColor& Temp_struct_Variable_8, const struct FLinearColor& Temp_struct_Variable_9, const struct FLinearColor& Temp_struct_Variable_10, const struct FLinearColor& Temp_struct_Variable_11, enum class ET_Type_System_Push Temp_byte_Variable_2, const struct FLinearColor& K2Node_Select_Default_1, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, enum class ESlateVisibility Temp_byte_Variable_8, enum class ET_Type_System_Push Temp_byte_Variable_9, enum class ESlateVisibility K2Node_Select_Default_2, enum class ESlateVisibility Temp_byte_Variable_10, enum class ESlateVisibility Temp_byte_Variable_11, enum class ESlateVisibility Temp_byte_Variable_12, enum class ESlateVisibility Temp_byte_Variable_13, enum class ESlateVisibility Temp_byte_Variable_14, enum class ESlateVisibility Temp_byte_Variable_15, enum class ET_Type_System_Push Temp_byte_Variable_16, enum class ESlateVisibility K2Node_Select_Default_3, enum class ESlateVisibility Temp_byte_Variable_17, enum class ESlateVisibility Temp_byte_Variable_18, enum class ESlateVisibility Temp_byte_Variable_19, enum class ESlateVisibility Temp_byte_Variable_20, enum class ESlateVisibility Temp_byte_Variable_21, enum class ESlateVisibility Temp_byte_Variable_22, enum class ET_Type_System_Push Temp_byte_Variable_23, enum class ESlateVisibility K2Node_Select_Default_4, enum class ESlateVisibility Temp_byte_Variable_24, enum class ESlateVisibility Temp_byte_Variable_25, enum class ESlateVisibility Temp_byte_Variable_26, enum class ESlateVisibility Temp_byte_Variable_27, enum class ESlateVisibility Temp_byte_Variable_28, enum class ESlateVisibility Temp_byte_Variable_29, enum class ET_Type_System_Push Temp_byte_Variable_30, enum class ESlateVisibility K2Node_Select_Default_5, const struct FLinearColor& Temp_struct_Variable_12, const struct FLinearColor& Temp_struct_Variable_13, const struct FLinearColor& Temp_struct_Variable_14, const struct FLinearColor& Temp_struct_Variable_15, const struct FLinearColor& Temp_struct_Variable_16, const struct FLinearColor& Temp_struct_Variable_17, enum class ET_Type_System_Push Temp_byte_Variable_31, const struct FLinearColor& K2Node_Select_Default_6, const struct FLinearColor& Temp_struct_Variable_18, const struct FLinearColor& Temp_struct_Variable_19, const struct FLinearColor& Temp_struct_Variable_20, const struct FLinearColor& Temp_struct_Variable_21, const struct FLinearColor& Temp_struct_Variable_22, const struct FLinearColor& Temp_struct_Variable_23, enum class ET_Type_System_Push Temp_byte_Variable_32, const struct FLinearColor& K2Node_Select_Default_7, const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class ESlateVisibility Temp_byte_Variable_33, enum class ESlateVisibility Temp_byte_Variable_34, enum class ESlateVisibility Temp_byte_Variable_35, enum class ESlateVisibility Temp_byte_Variable_36, enum class ESlateVisibility Temp_byte_Variable_37, enum class ESlateVisibility Temp_byte_Variable_38, enum class ET_Type_System_Push Temp_byte_Variable_39, enum class ESlateVisibility K2Node_Select_Default_8, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, class UObject* Temp_object_Variable_2, class UObject* Temp_object_Variable_3, class UObject* Temp_object_Variable_4, class UObject* Temp_object_Variable_5, class UObject* K2Node_Select_Default_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_RoomInvite_MIni_Popup_C", "SetType");

	Params::UUI_Lobby_RoomInvite_MIni_Popup_C_SetType_Params Parms{};

	Parms.Type = Type;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_struct_Variable_6 = Temp_struct_Variable_6;
	Parms.Temp_struct_Variable_7 = Temp_struct_Variable_7;
	Parms.Temp_struct_Variable_8 = Temp_struct_Variable_8;
	Parms.Temp_struct_Variable_9 = Temp_struct_Variable_9;
	Parms.Temp_struct_Variable_10 = Temp_struct_Variable_10;
	Parms.Temp_struct_Variable_11 = Temp_struct_Variable_11;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.Temp_byte_Variable_9 = Temp_byte_Variable_9;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.Temp_byte_Variable_10 = Temp_byte_Variable_10;
	Parms.Temp_byte_Variable_11 = Temp_byte_Variable_11;
	Parms.Temp_byte_Variable_12 = Temp_byte_Variable_12;
	Parms.Temp_byte_Variable_13 = Temp_byte_Variable_13;
	Parms.Temp_byte_Variable_14 = Temp_byte_Variable_14;
	Parms.Temp_byte_Variable_15 = Temp_byte_Variable_15;
	Parms.Temp_byte_Variable_16 = Temp_byte_Variable_16;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.Temp_byte_Variable_17 = Temp_byte_Variable_17;
	Parms.Temp_byte_Variable_18 = Temp_byte_Variable_18;
	Parms.Temp_byte_Variable_19 = Temp_byte_Variable_19;
	Parms.Temp_byte_Variable_20 = Temp_byte_Variable_20;
	Parms.Temp_byte_Variable_21 = Temp_byte_Variable_21;
	Parms.Temp_byte_Variable_22 = Temp_byte_Variable_22;
	Parms.Temp_byte_Variable_23 = Temp_byte_Variable_23;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.Temp_byte_Variable_24 = Temp_byte_Variable_24;
	Parms.Temp_byte_Variable_25 = Temp_byte_Variable_25;
	Parms.Temp_byte_Variable_26 = Temp_byte_Variable_26;
	Parms.Temp_byte_Variable_27 = Temp_byte_Variable_27;
	Parms.Temp_byte_Variable_28 = Temp_byte_Variable_28;
	Parms.Temp_byte_Variable_29 = Temp_byte_Variable_29;
	Parms.Temp_byte_Variable_30 = Temp_byte_Variable_30;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.Temp_struct_Variable_12 = Temp_struct_Variable_12;
	Parms.Temp_struct_Variable_13 = Temp_struct_Variable_13;
	Parms.Temp_struct_Variable_14 = Temp_struct_Variable_14;
	Parms.Temp_struct_Variable_15 = Temp_struct_Variable_15;
	Parms.Temp_struct_Variable_16 = Temp_struct_Variable_16;
	Parms.Temp_struct_Variable_17 = Temp_struct_Variable_17;
	Parms.Temp_byte_Variable_31 = Temp_byte_Variable_31;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.Temp_struct_Variable_18 = Temp_struct_Variable_18;
	Parms.Temp_struct_Variable_19 = Temp_struct_Variable_19;
	Parms.Temp_struct_Variable_20 = Temp_struct_Variable_20;
	Parms.Temp_struct_Variable_21 = Temp_struct_Variable_21;
	Parms.Temp_struct_Variable_22 = Temp_struct_Variable_22;
	Parms.Temp_struct_Variable_23 = Temp_struct_Variable_23;
	Parms.Temp_byte_Variable_32 = Temp_byte_Variable_32;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.Temp_byte_Variable_33 = Temp_byte_Variable_33;
	Parms.Temp_byte_Variable_34 = Temp_byte_Variable_34;
	Parms.Temp_byte_Variable_35 = Temp_byte_Variable_35;
	Parms.Temp_byte_Variable_36 = Temp_byte_Variable_36;
	Parms.Temp_byte_Variable_37 = Temp_byte_Variable_37;
	Parms.Temp_byte_Variable_38 = Temp_byte_Variable_38;
	Parms.Temp_byte_Variable_39 = Temp_byte_Variable_39;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.K2Node_Select_Default_9 = K2Node_Select_Default_9;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Lobby_RoomInvite_MIni_Popup.UI_Lobby_RoomInvite_MIni_Popup_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Lobby_RoomInvite_MIni_Popup_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_RoomInvite_MIni_Popup_C", "PreConstruct");

	Params::UUI_Lobby_RoomInvite_MIni_Popup_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Lobby_RoomInvite_MIni_Popup.UI_Lobby_RoomInvite_MIni_Popup_C.ExecuteUbergraph_UI_Lobby_RoomInvite_MIni_Popup
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Lobby_RoomInvite_MIni_Popup_C::ExecuteUbergraph_UI_Lobby_RoomInvite_MIni_Popup(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_RoomInvite_MIni_Popup_C", "ExecuteUbergraph_UI_Lobby_RoomInvite_MIni_Popup");

	Params::UUI_Lobby_RoomInvite_MIni_Popup_C_ExecuteUbergraph_UI_Lobby_RoomInvite_MIni_Popup_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


