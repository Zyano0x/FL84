#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Lobby_TeamInvite_MIni_Popup.UI_Lobby_TeamInvite_Mini_Popup_C
// (None)

class UClass* UUI_Lobby_TeamInvite_Mini_Popup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Lobby_TeamInvite_Mini_Popup_C");

	return Clss;
}


// UI_Lobby_TeamInvite_Mini_Popup_C UI_Lobby_TeamInvite_MIni_Popup.Default__UI_Lobby_TeamInvite_Mini_Popup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Lobby_TeamInvite_Mini_Popup_C* UUI_Lobby_TeamInvite_Mini_Popup_C::GetDefaultObj()
{
	static class UUI_Lobby_TeamInvite_Mini_Popup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Lobby_TeamInvite_Mini_Popup_C*>(UUI_Lobby_TeamInvite_Mini_Popup_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Lobby_TeamInvite_MIni_Popup.UI_Lobby_TeamInvite_Mini_Popup_C.OnClicked_C512E9C44F6A92E8D8ED6BAB1E3AD8D2
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Lobby_TeamInvite_Mini_Popup_C::OnClicked_C512E9C44F6A92E8D8ED6BAB1E3AD8D2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_TeamInvite_Mini_Popup_C", "OnClicked_C512E9C44F6A92E8D8ED6BAB1E3AD8D2");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction UI_Lobby_TeamInvite_MIni_Popup.UI_Lobby_TeamInvite_Mini_Popup_C.OnClicked_9DD56296417E3FB2112C2FB5A0C22818
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_Lobby_TeamInvite_Mini_Popup_C::OnClicked_9DD56296417E3FB2112C2FB5A0C22818()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_TeamInvite_Mini_Popup_C", "OnClicked_9DD56296417E3FB2112C2FB5A0C22818");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_TeamInvite_MIni_Popup.UI_Lobby_TeamInvite_Mini_Popup_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Lobby_TeamInvite_Mini_Popup_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_TeamInvite_Mini_Popup_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_TeamInvite_MIni_Popup.UI_Lobby_TeamInvite_Mini_Popup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Lobby_TeamInvite_Mini_Popup_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_TeamInvite_Mini_Popup_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_TeamInvite_MIni_Popup.UI_Lobby_TeamInvite_Mini_Popup_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_Lobby_TeamInvite_Mini_Popup_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_TeamInvite_Mini_Popup_C", "GetModuleName");

	Params::UUI_Lobby_TeamInvite_Mini_Popup_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Lobby_TeamInvite_MIni_Popup.UI_Lobby_TeamInvite_Mini_Popup_C.SetPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Num                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        K2Node_Select_Default_1                                          (None)

void UUI_Lobby_TeamInvite_Mini_Popup_C::SetPlayer(int32 Num, int32 Temp_int_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, const struct FLinearColor& Temp_struct_Variable_4, int32 Temp_int_Variable_1, const struct FLinearColor& K2Node_Select_Default, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_TeamInvite_Mini_Popup_C", "SetPlayer");

	Params::UUI_Lobby_TeamInvite_Mini_Popup_C_SetPlayer_Params Parms{};

	Parms.Num = Num;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Lobby_TeamInvite_MIni_Popup.UI_Lobby_TeamInvite_Mini_Popup_C.SetType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ET_Type_Invitation      Pop_Type                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ET_Type_Invitation      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ET_Type_Invitation      Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ET_Type_Invitation      Temp_byte_Variable_14                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_15                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_16                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_17                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_18                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_19                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_20                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ET_Type_Invitation      Temp_byte_Variable_21                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ET_Type_Invitation      Temp_byte_Variable_22                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ET_Type_Invitation      Temp_byte_Variable_23                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_8                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_9                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_10                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_11                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ET_Type_Invitation      Temp_byte_Variable_24                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_25                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_26                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_27                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_28                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_29                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_30                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ET_Type_Invitation      Temp_byte_Variable_31                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_32                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_33                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_34                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_35                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_36                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_37                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ET_Type_Invitation      Temp_byte_Variable_38                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_7                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_39                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_40                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_41                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_42                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_43                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_44                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ET_Type_Invitation      Temp_byte_Variable_45                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_8                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_46                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_47                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_48                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_49                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_50                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_51                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ET_Type_Invitation      Temp_byte_Variable_52                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_9                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_53                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_54                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_55                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_56                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_57                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_58                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ET_Type_Invitation      Temp_byte_Variable_59                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_10                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_60                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_61                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_62                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_63                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_64                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_65                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ET_Type_Invitation      Temp_byte_Variable_66                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_11                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_67                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_68                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_69                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_70                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_71                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_72                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_12                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Lobby_TeamInvite_Mini_Popup_C::SetType(enum class ET_Type_Invitation Pop_Type, enum class ET_Type_Invitation Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, enum class ET_Type_Invitation Temp_byte_Variable_7, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_8, enum class ESlateVisibility Temp_byte_Variable_9, enum class ESlateVisibility Temp_byte_Variable_10, enum class ESlateVisibility Temp_byte_Variable_11, enum class ESlateVisibility Temp_byte_Variable_12, enum class ESlateVisibility Temp_byte_Variable_13, enum class ET_Type_Invitation Temp_byte_Variable_14, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility Temp_byte_Variable_15, enum class ESlateVisibility Temp_byte_Variable_16, enum class ESlateVisibility Temp_byte_Variable_17, enum class ESlateVisibility Temp_byte_Variable_18, enum class ESlateVisibility Temp_byte_Variable_19, enum class ESlateVisibility Temp_byte_Variable_20, enum class ET_Type_Invitation Temp_byte_Variable_21, enum class ESlateVisibility K2Node_Select_Default_2, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, enum class ET_Type_Invitation Temp_byte_Variable_22, int32 K2Node_Select_Default_3, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, class UObject* Temp_object_Variable_2, class UObject* Temp_object_Variable_3, class UObject* Temp_object_Variable_4, class UObject* Temp_object_Variable_5, enum class ET_Type_Invitation Temp_byte_Variable_23, class UObject* K2Node_Select_Default_4, int32 Temp_int_Variable_6, int32 Temp_int_Variable_7, int32 Temp_int_Variable_8, int32 Temp_int_Variable_9, int32 Temp_int_Variable_10, int32 Temp_int_Variable_11, enum class ET_Type_Invitation Temp_byte_Variable_24, int32 K2Node_Select_Default_5, enum class ESlateVisibility Temp_byte_Variable_25, enum class ESlateVisibility Temp_byte_Variable_26, enum class ESlateVisibility Temp_byte_Variable_27, enum class ESlateVisibility Temp_byte_Variable_28, enum class ESlateVisibility Temp_byte_Variable_29, enum class ESlateVisibility Temp_byte_Variable_30, enum class ET_Type_Invitation Temp_byte_Variable_31, enum class ESlateVisibility K2Node_Select_Default_6, enum class ESlateVisibility Temp_byte_Variable_32, enum class ESlateVisibility Temp_byte_Variable_33, enum class ESlateVisibility Temp_byte_Variable_34, enum class ESlateVisibility Temp_byte_Variable_35, enum class ESlateVisibility Temp_byte_Variable_36, enum class ESlateVisibility Temp_byte_Variable_37, enum class ET_Type_Invitation Temp_byte_Variable_38, enum class ESlateVisibility K2Node_Select_Default_7, enum class ESlateVisibility Temp_byte_Variable_39, enum class ESlateVisibility Temp_byte_Variable_40, enum class ESlateVisibility Temp_byte_Variable_41, enum class ESlateVisibility Temp_byte_Variable_42, enum class ESlateVisibility Temp_byte_Variable_43, enum class ESlateVisibility Temp_byte_Variable_44, enum class ET_Type_Invitation Temp_byte_Variable_45, enum class ESlateVisibility K2Node_Select_Default_8, enum class ESlateVisibility Temp_byte_Variable_46, enum class ESlateVisibility Temp_byte_Variable_47, enum class ESlateVisibility Temp_byte_Variable_48, enum class ESlateVisibility Temp_byte_Variable_49, enum class ESlateVisibility Temp_byte_Variable_50, enum class ESlateVisibility Temp_byte_Variable_51, enum class ET_Type_Invitation Temp_byte_Variable_52, enum class ESlateVisibility K2Node_Select_Default_9, enum class ESlateVisibility Temp_byte_Variable_53, enum class ESlateVisibility Temp_byte_Variable_54, enum class ESlateVisibility Temp_byte_Variable_55, enum class ESlateVisibility Temp_byte_Variable_56, enum class ESlateVisibility Temp_byte_Variable_57, enum class ESlateVisibility Temp_byte_Variable_58, enum class ET_Type_Invitation Temp_byte_Variable_59, enum class ESlateVisibility K2Node_Select_Default_10, enum class ESlateVisibility Temp_byte_Variable_60, enum class ESlateVisibility Temp_byte_Variable_61, enum class ESlateVisibility Temp_byte_Variable_62, enum class ESlateVisibility Temp_byte_Variable_63, enum class ESlateVisibility Temp_byte_Variable_64, enum class ESlateVisibility Temp_byte_Variable_65, enum class ET_Type_Invitation Temp_byte_Variable_66, enum class ESlateVisibility K2Node_Select_Default_11, enum class ESlateVisibility Temp_byte_Variable_67, enum class ESlateVisibility Temp_byte_Variable_68, enum class ESlateVisibility Temp_byte_Variable_69, enum class ESlateVisibility Temp_byte_Variable_70, enum class ESlateVisibility Temp_byte_Variable_71, enum class ESlateVisibility Temp_byte_Variable_72, enum class ESlateVisibility K2Node_Select_Default_12)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_TeamInvite_Mini_Popup_C", "SetType");

	Params::UUI_Lobby_TeamInvite_Mini_Popup_C_SetType_Params Parms{};

	Parms.Pop_Type = Pop_Type;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.Temp_byte_Variable_9 = Temp_byte_Variable_9;
	Parms.Temp_byte_Variable_10 = Temp_byte_Variable_10;
	Parms.Temp_byte_Variable_11 = Temp_byte_Variable_11;
	Parms.Temp_byte_Variable_12 = Temp_byte_Variable_12;
	Parms.Temp_byte_Variable_13 = Temp_byte_Variable_13;
	Parms.Temp_byte_Variable_14 = Temp_byte_Variable_14;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_byte_Variable_15 = Temp_byte_Variable_15;
	Parms.Temp_byte_Variable_16 = Temp_byte_Variable_16;
	Parms.Temp_byte_Variable_17 = Temp_byte_Variable_17;
	Parms.Temp_byte_Variable_18 = Temp_byte_Variable_18;
	Parms.Temp_byte_Variable_19 = Temp_byte_Variable_19;
	Parms.Temp_byte_Variable_20 = Temp_byte_Variable_20;
	Parms.Temp_byte_Variable_21 = Temp_byte_Variable_21;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.Temp_byte_Variable_22 = Temp_byte_Variable_22;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_byte_Variable_23 = Temp_byte_Variable_23;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.Temp_int_Variable_6 = Temp_int_Variable_6;
	Parms.Temp_int_Variable_7 = Temp_int_Variable_7;
	Parms.Temp_int_Variable_8 = Temp_int_Variable_8;
	Parms.Temp_int_Variable_9 = Temp_int_Variable_9;
	Parms.Temp_int_Variable_10 = Temp_int_Variable_10;
	Parms.Temp_int_Variable_11 = Temp_int_Variable_11;
	Parms.Temp_byte_Variable_24 = Temp_byte_Variable_24;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.Temp_byte_Variable_25 = Temp_byte_Variable_25;
	Parms.Temp_byte_Variable_26 = Temp_byte_Variable_26;
	Parms.Temp_byte_Variable_27 = Temp_byte_Variable_27;
	Parms.Temp_byte_Variable_28 = Temp_byte_Variable_28;
	Parms.Temp_byte_Variable_29 = Temp_byte_Variable_29;
	Parms.Temp_byte_Variable_30 = Temp_byte_Variable_30;
	Parms.Temp_byte_Variable_31 = Temp_byte_Variable_31;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.Temp_byte_Variable_32 = Temp_byte_Variable_32;
	Parms.Temp_byte_Variable_33 = Temp_byte_Variable_33;
	Parms.Temp_byte_Variable_34 = Temp_byte_Variable_34;
	Parms.Temp_byte_Variable_35 = Temp_byte_Variable_35;
	Parms.Temp_byte_Variable_36 = Temp_byte_Variable_36;
	Parms.Temp_byte_Variable_37 = Temp_byte_Variable_37;
	Parms.Temp_byte_Variable_38 = Temp_byte_Variable_38;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.Temp_byte_Variable_39 = Temp_byte_Variable_39;
	Parms.Temp_byte_Variable_40 = Temp_byte_Variable_40;
	Parms.Temp_byte_Variable_41 = Temp_byte_Variable_41;
	Parms.Temp_byte_Variable_42 = Temp_byte_Variable_42;
	Parms.Temp_byte_Variable_43 = Temp_byte_Variable_43;
	Parms.Temp_byte_Variable_44 = Temp_byte_Variable_44;
	Parms.Temp_byte_Variable_45 = Temp_byte_Variable_45;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.Temp_byte_Variable_46 = Temp_byte_Variable_46;
	Parms.Temp_byte_Variable_47 = Temp_byte_Variable_47;
	Parms.Temp_byte_Variable_48 = Temp_byte_Variable_48;
	Parms.Temp_byte_Variable_49 = Temp_byte_Variable_49;
	Parms.Temp_byte_Variable_50 = Temp_byte_Variable_50;
	Parms.Temp_byte_Variable_51 = Temp_byte_Variable_51;
	Parms.Temp_byte_Variable_52 = Temp_byte_Variable_52;
	Parms.K2Node_Select_Default_9 = K2Node_Select_Default_9;
	Parms.Temp_byte_Variable_53 = Temp_byte_Variable_53;
	Parms.Temp_byte_Variable_54 = Temp_byte_Variable_54;
	Parms.Temp_byte_Variable_55 = Temp_byte_Variable_55;
	Parms.Temp_byte_Variable_56 = Temp_byte_Variable_56;
	Parms.Temp_byte_Variable_57 = Temp_byte_Variable_57;
	Parms.Temp_byte_Variable_58 = Temp_byte_Variable_58;
	Parms.Temp_byte_Variable_59 = Temp_byte_Variable_59;
	Parms.K2Node_Select_Default_10 = K2Node_Select_Default_10;
	Parms.Temp_byte_Variable_60 = Temp_byte_Variable_60;
	Parms.Temp_byte_Variable_61 = Temp_byte_Variable_61;
	Parms.Temp_byte_Variable_62 = Temp_byte_Variable_62;
	Parms.Temp_byte_Variable_63 = Temp_byte_Variable_63;
	Parms.Temp_byte_Variable_64 = Temp_byte_Variable_64;
	Parms.Temp_byte_Variable_65 = Temp_byte_Variable_65;
	Parms.Temp_byte_Variable_66 = Temp_byte_Variable_66;
	Parms.K2Node_Select_Default_11 = K2Node_Select_Default_11;
	Parms.Temp_byte_Variable_67 = Temp_byte_Variable_67;
	Parms.Temp_byte_Variable_68 = Temp_byte_Variable_68;
	Parms.Temp_byte_Variable_69 = Temp_byte_Variable_69;
	Parms.Temp_byte_Variable_70 = Temp_byte_Variable_70;
	Parms.Temp_byte_Variable_71 = Temp_byte_Variable_71;
	Parms.Temp_byte_Variable_72 = Temp_byte_Variable_72;
	Parms.K2Node_Select_Default_12 = K2Node_Select_Default_12;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Lobby_TeamInvite_MIni_Popup.UI_Lobby_TeamInvite_Mini_Popup_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Lobby_TeamInvite_Mini_Popup_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_TeamInvite_Mini_Popup_C", "PreConstruct");

	Params::UUI_Lobby_TeamInvite_Mini_Popup_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Lobby_TeamInvite_MIni_Popup.UI_Lobby_TeamInvite_Mini_Popup_C.ExecuteUbergraph_UI_Lobby_TeamInvite_Mini_Popup
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Lobby_TeamInvite_Mini_Popup_C::ExecuteUbergraph_UI_Lobby_TeamInvite_Mini_Popup(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_TeamInvite_Mini_Popup_C", "ExecuteUbergraph_UI_Lobby_TeamInvite_Mini_Popup");

	Params::UUI_Lobby_TeamInvite_Mini_Popup_C_ExecuteUbergraph_UI_Lobby_TeamInvite_Mini_Popup_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


