#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FL_NextGenCustomMode.FL_NextGenCustomMode_C
// (None)

class UClass* UFL_NextGenCustomMode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FL_NextGenCustomMode_C");

	return Clss;
}


// FL_NextGenCustomMode_C FL_NextGenCustomMode.Default__FL_NextGenCustomMode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFL_NextGenCustomMode_C* UFL_NextGenCustomMode_C::GetDefaultObj()
{
	static class UFL_NextGenCustomMode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFL_NextGenCustomMode_C*>(UFL_NextGenCustomMode_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[ A]BindOnBasicSystemReady
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bReady                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASCustomGameState*           K2Node_DynamicCast_AsSCustom_Game_State                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFL_NextGenCustomMode_C::__A_BindOnBasicSystemReady(FDelegateProperty_& Event, class UObject* __WorldContext, bool* bReady, bool CallFunc_IsServer_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ASCustomGameState* K2Node_DynamicCast_AsSCustom_Game_State, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[ A]BindOnBasicSystemReady");

	Params::UFL_NextGenCustomMode_C___A_BindOnBasicSystemReady_Params Parms{};

	Parms.Event = Event;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsSCustom_Game_State = K2Node_DynamicCast_AsSCustom_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bReady != nullptr)
		*bReady = Parms.bReady;

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.UseNewAiComp
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGMLogicComponent*          CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UFL_NextGenCustomMode_C::UseNewAiComp(class UObject* __WorldContext, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class UCGMLogicComponent* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "UseNewAiComp");

	Params::UFL_NextGenCustomMode_C_UseNewAiComp_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.GetAiComp
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USBattleRoyaleGameModeAIComp*AiComp                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USBattleRoyaleGameModeAIComp*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFL_NextGenCustomMode_C::GetAiComp(class UObject* __WorldContext, class USBattleRoyaleGameModeAIComp** AiComp, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class USBattleRoyaleGameModeAIComp* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "GetAiComp");

	Params::UFL_NextGenCustomMode_C_GetAiComp_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AiComp != nullptr)
		*AiComp = Parms.AiComp;

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.SortMap
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FString, float>         MapIn                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Ascending                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, float>         Sorted                                                           (Parm, OutParm)
// TMap<class FString, float>         SortResult                                                       (Edit, BlueprintVisible)
// TArray<class FString>              KeyMap                                                           (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Map_Length_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Map_Find_Value_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFL_NextGenCustomMode_C::SortMap(TMap<class FString, float> MapIn, bool Ascending, class UObject* __WorldContext, TMap<class FString, float>* Sorted, TMap<class FString, float> SortResult, const TArray<class FString>& KeyMap, int32 Temp_int_Array_Index_Variable, TArray<class FString>& CallFunc_Map_Keys_Keys, int32 CallFunc_Map_Length_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Array_Get_Item_1, float CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_4, const class FString& CallFunc_Array_Get_Item_2, float CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "SortMap");

	Params::UFL_NextGenCustomMode_C_SortMap_Params Parms{};

	Parms.MapIn = MapIn;
	Parms.Ascending = Ascending;
	Parms.__WorldContext = __WorldContext;
	Parms.SortResult = SortResult;
	Parms.KeyMap = KeyMap;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Map_Length_ReturnValue = CallFunc_Map_Length_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Sorted != nullptr)
		*Sorted = Parms.Sorted;

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[c]ShowWidget
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      WidgetClass                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_UI_Root               Layer                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_UI_Root               Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUIRoot                 Temp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUIRoot                 Temp_byte_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUIRoot                 Temp_byte_Variable_3                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUIRoot                 Temp_byte_Variable_4                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUIRoot                 Temp_byte_Variable_5                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUIRoot                 Temp_byte_Variable_6                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUIRoot                 Temp_byte_Variable_7                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUIRoot                 Temp_byte_Variable_8                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUIRoot                 K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_ShowSolarWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UUserWidget* UFL_NextGenCustomMode_C::_c_ShowWidget(class UClass* WidgetClass, enum class E_UI_Root Layer, class UObject* __WorldContext, enum class E_UI_Root Temp_byte_Variable, enum class EUIRoot Temp_byte_Variable_1, enum class EUIRoot Temp_byte_Variable_2, enum class EUIRoot Temp_byte_Variable_3, enum class EUIRoot Temp_byte_Variable_4, enum class EUIRoot Temp_byte_Variable_5, enum class EUIRoot Temp_byte_Variable_6, enum class EUIRoot Temp_byte_Variable_7, enum class EUIRoot Temp_byte_Variable_8, enum class EUIRoot K2Node_Select_Default, class UUserWidget* CallFunc_ShowSolarWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[c]ShowWidget");

	Params::UFL_NextGenCustomMode_C__c_ShowWidget_Params Parms{};

	Parms.WidgetClass = WidgetClass;
	Parms.Layer = Layer;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_ShowSolarWidget_ReturnValue = CallFunc_ShowSolarWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[c]CreateWidget
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      WidgetClass                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_UI_Root               Layer                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 WidgetObject                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_UI_Root               Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUIRoot                 Temp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUIRoot                 Temp_byte_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUIRoot                 Temp_byte_Variable_3                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUIRoot                 Temp_byte_Variable_4                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUIRoot                 Temp_byte_Variable_5                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUIRoot                 Temp_byte_Variable_6                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUIRoot                 Temp_byte_Variable_7                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUIRoot                 Temp_byte_Variable_8                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUIRoot                 K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_CreateSolarWidget_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFL_NextGenCustomMode_C::_c_CreateWidget(class UClass* WidgetClass, enum class E_UI_Root Layer, class UObject* __WorldContext, class UUserWidget** WidgetObject, enum class E_UI_Root Temp_byte_Variable, enum class EUIRoot Temp_byte_Variable_1, enum class EUIRoot Temp_byte_Variable_2, enum class EUIRoot Temp_byte_Variable_3, enum class EUIRoot Temp_byte_Variable_4, enum class EUIRoot Temp_byte_Variable_5, enum class EUIRoot Temp_byte_Variable_6, enum class EUIRoot Temp_byte_Variable_7, enum class EUIRoot Temp_byte_Variable_8, enum class EUIRoot K2Node_Select_Default, class UUserWidget* CallFunc_CreateSolarWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[c]CreateWidget");

	Params::UFL_NextGenCustomMode_C__c_CreateWidget_Params Parms{};

	Parms.WidgetClass = WidgetClass;
	Parms.Layer = Layer;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_CreateSolarWidget_ReturnValue = CallFunc_CreateSolarWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (WidgetObject != nullptr)
		*WidgetObject = Parms.WidgetObject;

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.GetRandomKeyInWidget
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<int32, int32>                 KeyMinusWeight                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              HitKey                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SumWeight                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_Map_Keys_Keys                                           (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<int32>                      CallFunc_Map_Values_Values                                       (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_SumOfIntArray_Sum                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFL_NextGenCustomMode_C::GetRandomKeyInWidget(TMap<int32, int32> KeyMinusWeight, class UObject* __WorldContext, int32* HitKey, int32 SumWeight, int32 Temp_int_Loop_Counter_Variable, TArray<int32>& CallFunc_Map_Keys_Keys, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, TArray<int32>& CallFunc_Map_Values_Values, int32 CallFunc_SumOfIntArray_Sum, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Get_Item, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "GetRandomKeyInWidget");

	Params::UFL_NextGenCustomMode_C_GetRandomKeyInWidget_Params Parms{};

	Parms.KeyMinusWeight = KeyMinusWeight;
	Parms.__WorldContext = __WorldContext;
	Parms.SumWeight = SumWeight;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_SumOfIntArray_Sum = CallFunc_SumOfIntArray_Sum;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HitKey != nullptr)
		*HitKey = Parms.HitKey;

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.SumOfIntArray
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<int32>                      Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Sum                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFL_NextGenCustomMode_C::SumOfIntArray(TArray<int32>& Array, class UObject* __WorldContext, int32* Sum, int32 NewLocalVar_0, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "SumOfIntArray");

	Params::UFL_NextGenCustomMode_C_SumOfIntArray_Params Parms{};

	Parms.Array = Array;
	Parms.__WorldContext = __WorldContext;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Sum != nullptr)
		*Sum = Parms.Sum;

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.GetTeamPlayerCount
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Num_Mode                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USolarTables_TablesReader*   CallFunc__A_GetExcelTableReader_TablesReader                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMatchRuleID_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSolarTablesData_MatchRule  CallFunc_GetRowData_ReturnValue                                  (ConstParm)
// bool                               CallFunc_HasRowKey_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFL_NextGenCustomMode_C::GetTeamPlayerCount(class UObject* __WorldContext, int32* Num_Mode, class USolarTables_TablesReader* CallFunc__A_GetExcelTableReader_TablesReader, int32 CallFunc_GetMatchRuleID_ReturnValue, const struct FSolarTablesData_MatchRule& CallFunc_GetRowData_ReturnValue, bool CallFunc_HasRowKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "GetTeamPlayerCount");

	Params::UFL_NextGenCustomMode_C_GetTeamPlayerCount_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc__A_GetExcelTableReader_TablesReader = CallFunc__A_GetExcelTableReader_TablesReader;
	Parms.CallFunc_GetMatchRuleID_ReturnValue = CallFunc_GetMatchRuleID_ReturnValue;
	Parms.CallFunc_GetRowData_ReturnValue = CallFunc_GetRowData_ReturnValue;
	Parms.CallFunc_HasRowKey_ReturnValue = CallFunc_HasRowKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Num_Mode != nullptr)
		*Num_Mode = Parms.Num_Mode;

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]GetModeConfig
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGMGameplayConfig*          ModeConfig                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASCustomGameState*           K2Node_DynamicCast_AsSCustom_Game_State                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGMGameplayConfig*          CallFunc_GetCGMGameplayConfig_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFL_NextGenCustomMode_C::_A_GetModeConfig(class UObject* __WorldContext, class UCGMGameplayConfig** ModeConfig, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ASCustomGameState* K2Node_DynamicCast_AsSCustom_Game_State, bool K2Node_DynamicCast_bSuccess, class UCGMGameplayConfig* CallFunc_GetCGMGameplayConfig_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[A]GetModeConfig");

	Params::UFL_NextGenCustomMode_C__A_GetModeConfig_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsSCustom_Game_State = K2Node_DynamicCast_AsSCustom_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCGMGameplayConfig_ReturnValue = CallFunc_GetCGMGameplayConfig_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ModeConfig != nullptr)
		*ModeConfig = Parms.ModeConfig;

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[C]SetWidgetVisibility
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_BattleControlWidgets  Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USolarGlobalEventSystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_ByteToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)

void UFL_NextGenCustomMode_C::_C_SetWidgetVisibility(enum class E_BattleControlWidgets Widget, bool Visibility, class UObject* __WorldContext, bool Temp_bool_Variable, class USolarGlobalEventSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const class FString& CallFunc_Conv_ByteToString_ReturnValue, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& K2Node_Select_Default, TArray<class FString>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[C]SetWidgetVisibility");

	Params::UFL_NextGenCustomMode_C__C_SetWidgetVisibility_Params Parms{};

	Parms.Widget = Widget;
	Parms.Visibility = Visibility;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_Conv_ByteToString_ReturnValue = CallFunc_Conv_ByteToString_ReturnValue;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]GetDSTime
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Time                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDataInt_OutValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFL_NextGenCustomMode_C::_A_GetDSTime(class UObject* __WorldContext, int32* Time, int32 CallFunc_GetDataInt_OutValue, bool CallFunc_GetDataInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[A]GetDSTime");

	Params::UFL_NextGenCustomMode_C__A_GetDSTime_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDataInt_OutValue = CallFunc_GetDataInt_OutValue;
	Parms.CallFunc_GetDataInt_ReturnValue = CallFunc_GetDataInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Time != nullptr)
		*Time = Parms.Time;

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]GetBattleTime
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Time                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurBattleTime_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFL_NextGenCustomMode_C::_A_GetBattleTime(class UObject* __WorldContext, int32* Time, float CallFunc_GetCurBattleTime_ReturnValue, int32 CallFunc_FTrunc_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[A]GetBattleTime");

	Params::UFL_NextGenCustomMode_C__A_GetBattleTime_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetCurBattleTime_ReturnValue = CallFunc_GetCurBattleTime_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Time != nullptr)
		*Time = Parms.Time;

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.ToBool
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      String                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Bool                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFL_NextGenCustomMode_C::ToBool(const class FString& String, class UObject* __WorldContext, bool* Bool, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "ToBool");

	Params::UFL_NextGenCustomMode_C_ToBool_Params Parms{};

	Parms.String = String;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Bool != nullptr)
		*Bool = Parms.Bool;

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]PrintLog
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Prefix                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TMap<class FString, class FString> InputPin                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp                                                             (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetGameModeID_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Map_Find_Value                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)

void UFL_NextGenCustomMode_C::_A_PrintLog(const class FString& Prefix, TMap<class FString, class FString>& InputPin, class UObject* __WorldContext, const class FString& Temp, int32 CallFunc_GetGameModeID_ReturnValue, TArray<class FString>& CallFunc_Map_Keys_Keys, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Array_Get_Item, const class FString& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& Temp_string_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[A]PrintLog");

	Params::UFL_NextGenCustomMode_C__A_PrintLog_Params Parms{};

	Parms.Prefix = Prefix;
	Parms.InputPin = InputPin;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp = Temp;
	Parms.CallFunc_GetGameModeID_ReturnValue = CallFunc_GetGameModeID_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]GetCharacters
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               OnlyRealPlayers                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ASolarCharacter*>     Characters                                                       (Parm, OutParm, HasGetValueTypeHash)
// TArray<class ASolarCharacter*>     Temp                                                             (Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
// TArray<uint8>                      Temp_byte_Variable                                               (ConstParm, ReferenceParm, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              Temp_string_Variable                                             (ConstParm, ReferenceParm, HasGetValueTypeHash)
// TArray<enum class ESCMPlayerState> Temp_byte_Variable_1                                             (ConstParm, ReferenceParm, HasGetValueTypeHash)
// TArray<class ASCMPlayerState*>     CallFunc_FindPlayers_ReturnValue                                 (ReferenceParm, HasGetValueTypeHash)
// class ASCMPlayerState*             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASolarCharacter*             CallFunc_GetSolarCharacter_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOBPlayer_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFL_NextGenCustomMode_C::_A_GetCharacters(bool OnlyRealPlayers, class UObject* __WorldContext, TArray<class ASolarCharacter*>* Characters, const TArray<class ASolarCharacter*>& Temp, TArray<uint8>& Temp_byte_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FString>& Temp_string_Variable, TArray<enum class ESCMPlayerState>& Temp_byte_Variable_1, TArray<class ASCMPlayerState*>& CallFunc_FindPlayers_ReturnValue, class ASCMPlayerState* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ASolarCharacter* CallFunc_GetSolarCharacter_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsOBPlayer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[A]GetCharacters");

	Params::UFL_NextGenCustomMode_C__A_GetCharacters_Params Parms{};

	Parms.OnlyRealPlayers = OnlyRealPlayers;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp = Temp;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_FindPlayers_ReturnValue = CallFunc_FindPlayers_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetSolarCharacter_ReturnValue = CallFunc_GetSolarCharacter_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_IsOBPlayer_ReturnValue = CallFunc_IsOBPlayer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Characters != nullptr)
		*Characters = std::move(Parms.Characters);

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]GetTeamCountMax
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDataInt_OutValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFL_NextGenCustomMode_C::_A_GetTeamCountMax(class UObject* __WorldContext, int32* OutValue, int32 CallFunc_GetDataInt_OutValue, bool CallFunc_GetDataInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[A]GetTeamCountMax");

	Params::UFL_NextGenCustomMode_C__A_GetTeamCountMax_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDataInt_OutValue = CallFunc_GetDataInt_OutValue;
	Parms.CallFunc_GetDataInt_ReturnValue = CallFunc_GetDataInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[S]SetTeamCountMax
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetDataInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFL_NextGenCustomMode_C::_S_SetTeamCountMax(int32 InValue, class UObject* __WorldContext, bool CallFunc_SetDataInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[S]SetTeamCountMax");

	Params::UFL_NextGenCustomMode_C__S_SetTeamCountMax_Params Parms{};

	Parms.InValue = InValue;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_SetDataInt_ReturnValue = CallFunc_SetDataInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]GetPlayerCountMax
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDataInt_OutValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFL_NextGenCustomMode_C::_A_GetPlayerCountMax(class UObject* __WorldContext, int32* OutValue, int32 CallFunc_GetDataInt_OutValue, bool CallFunc_GetDataInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[A]GetPlayerCountMax");

	Params::UFL_NextGenCustomMode_C__A_GetPlayerCountMax_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDataInt_OutValue = CallFunc_GetDataInt_OutValue;
	Parms.CallFunc_GetDataInt_ReturnValue = CallFunc_GetDataInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[S]SetPlayerCountMax
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetDataInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFL_NextGenCustomMode_C::_S_SetPlayerCountMax(int32 InValue, class UObject* __WorldContext, bool CallFunc_SetDataInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[S]SetPlayerCountMax");

	Params::UFL_NextGenCustomMode_C__S_SetPlayerCountMax_Params Parms{};

	Parms.InValue = InValue;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_SetDataInt_ReturnValue = CallFunc_SetDataInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[c]FillInCanvas
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanelSlot*            Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFL_NextGenCustomMode_C::_c_FillInCanvas(class UCanvasPanelSlot* Slot, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors, const struct FMargin& K2Node_MakeStruct_Margin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[c]FillInCanvas");

	Params::UFL_NextGenCustomMode_C__c_FillInCanvas_Params Parms{};

	Parms.Slot = Slot;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[S]UpdateTeamsCount
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Change                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Set                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Current                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetDataInt_OutValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetDataInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFL_NextGenCustomMode_C::_S_UpdateTeamsCount(int32 Change, bool Set, class UObject* __WorldContext, int32* Current, int32 NewLocalVar_0, bool Temp_bool_Variable, int32 CallFunc_GetDataInt_OutValue, bool CallFunc_GetDataInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 K2Node_Select_Default, bool CallFunc_SetDataInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[S]UpdateTeamsCount");

	Params::UFL_NextGenCustomMode_C__S_UpdateTeamsCount_Params Parms{};

	Parms.Change = Change;
	Parms.Set = Set;
	Parms.__WorldContext = __WorldContext;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetDataInt_OutValue = CallFunc_GetDataInt_OutValue;
	Parms.CallFunc_GetDataInt_ReturnValue = CallFunc_GetDataInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetDataInt_ReturnValue = CallFunc_SetDataInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Current != nullptr)
		*Current = Parms.Current;

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[C]RemoveAllWidgetsFromBigMapUI
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_BigMapSlot            Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClearMapUISlot_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFL_NextGenCustomMode_C::_C_RemoveAllWidgetsFromBigMapUI(enum class E_BigMapSlot Slot, class UObject* __WorldContext, bool* Success, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_ClearMapUISlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[C]RemoveAllWidgetsFromBigMapUI");

	Params::UFL_NextGenCustomMode_C__C_RemoveAllWidgetsFromBigMapUI_Params Parms{};

	Parms.Slot = Slot;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_ClearMapUISlot_ReturnValue = CallFunc_ClearMapUISlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[C]InsertWidgetToBigMapUI
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_BigMapSlot            Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bReplaceOldWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  OutResultSlot                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_InsertWidgetToMapUISlot_OutResultSlot                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InsertWidgetToMapUISlot_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFL_NextGenCustomMode_C::_C_InsertWidgetToBigMapUI(class UUserWidget* Widget, enum class E_BigMapSlot Slot, bool bReplaceOldWidget, class UObject* __WorldContext, class UPanelSlot** OutResultSlot, bool* Success, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class UPanelSlot* CallFunc_InsertWidgetToMapUISlot_OutResultSlot, bool CallFunc_InsertWidgetToMapUISlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[C]InsertWidgetToBigMapUI");

	Params::UFL_NextGenCustomMode_C__C_InsertWidgetToBigMapUI_Params Parms{};

	Parms.Widget = Widget;
	Parms.Slot = Slot;
	Parms.bReplaceOldWidget = bReplaceOldWidget;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_InsertWidgetToMapUISlot_OutResultSlot = CallFunc_InsertWidgetToMapUISlot_OutResultSlot;
	Parms.CallFunc_InsertWidgetToMapUISlot_ReturnValue = CallFunc_InsertWidgetToMapUISlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutResultSlot != nullptr)
		*OutResultSlot = Parms.OutResultSlot;

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[C]RemoveAllWidgetsFromBackpackUI
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_BackPackSlot          Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClearBackpackUISlot_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFL_NextGenCustomMode_C::_C_RemoveAllWidgetsFromBackpackUI(enum class E_BackPackSlot Slot, class UObject* __WorldContext, bool* Success, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_ClearBackpackUISlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[C]RemoveAllWidgetsFromBackpackUI");

	Params::UFL_NextGenCustomMode_C__C_RemoveAllWidgetsFromBackpackUI_Params Parms{};

	Parms.Slot = Slot;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_ClearBackpackUISlot_ReturnValue = CallFunc_ClearBackpackUISlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[C]InsertWidgetToBackpackUI
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_BackPackSlot          Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bReplaceOldWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  OutResultSlot                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_InsertWidgetToBackpackUISlot_OutResultSlot              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InsertWidgetToBackpackUISlot_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFL_NextGenCustomMode_C::_C_InsertWidgetToBackpackUI(class UUserWidget* Widget, enum class E_BackPackSlot Slot, bool bReplaceOldWidget, class UObject* __WorldContext, class UPanelSlot** OutResultSlot, bool* Success, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class UPanelSlot* CallFunc_InsertWidgetToBackpackUISlot_OutResultSlot, bool CallFunc_InsertWidgetToBackpackUISlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[C]InsertWidgetToBackpackUI");

	Params::UFL_NextGenCustomMode_C__C_InsertWidgetToBackpackUI_Params Parms{};

	Parms.Widget = Widget;
	Parms.Slot = Slot;
	Parms.bReplaceOldWidget = bReplaceOldWidget;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_InsertWidgetToBackpackUISlot_OutResultSlot = CallFunc_InsertWidgetToBackpackUISlot_OutResultSlot;
	Parms.CallFunc_InsertWidgetToBackpackUISlot_ReturnValue = CallFunc_InsertWidgetToBackpackUISlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutResultSlot != nullptr)
		*OutResultSlot = Parms.OutResultSlot;

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[s]IsTesting
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Testing                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USolarGameplayConfigComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFL_NextGenCustomMode_C::_s_IsTesting(class UObject* __WorldContext, bool* Testing, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class USolarGameplayConfigComponent* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[s]IsTesting");

	Params::UFL_NextGenCustomMode_C__s_IsTesting_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Testing != nullptr)
		*Testing = Parms.Testing;

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]GetAllRealPlayers
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ASCMPlayerState*>     RealPlayers                                                      (Parm, OutParm, HasGetValueTypeHash)
// TArray<class ASCMPlayerState*>     NewLocalVar_0                                                    (Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
// TArray<uint8>                      Temp_byte_Variable                                               (ConstParm, ReferenceParm, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              Temp_string_Variable                                             (ConstParm, ReferenceParm, HasGetValueTypeHash)
// TArray<enum class ESCMPlayerState> Temp_byte_Variable_1                                             (ConstParm, ReferenceParm, HasGetValueTypeHash)
// TArray<class ASCMPlayerState*>     CallFunc_FindPlayers_ReturnValue                                 (ReferenceParm, HasGetValueTypeHash)
// class ASCMPlayerState*             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFL_NextGenCustomMode_C::_A_GetAllRealPlayers(class UObject* __WorldContext, TArray<class ASCMPlayerState*>* RealPlayers, const TArray<class ASCMPlayerState*>& NewLocalVar_0, TArray<uint8>& Temp_byte_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FString>& Temp_string_Variable, TArray<enum class ESCMPlayerState>& Temp_byte_Variable_1, TArray<class ASCMPlayerState*>& CallFunc_FindPlayers_ReturnValue, class ASCMPlayerState* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[A]GetAllRealPlayers");

	Params::UFL_NextGenCustomMode_C__A_GetAllRealPlayers_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_FindPlayers_ReturnValue = CallFunc_FindPlayers_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RealPlayers != nullptr)
		*RealPlayers = std::move(Parms.RealPlayers);

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]PrintStringArray
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Prefix                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Final                                                            (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)

void UFL_NextGenCustomMode_C::_A_PrintStringArray(const class FString& Prefix, TArray<class FString>& Array, class UObject* __WorldContext, const class FString& Final, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Array_Get_Item, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[A]PrintStringArray");

	Params::UFL_NextGenCustomMode_C__A_PrintStringArray_Params Parms{};

	Parms.Prefix = Prefix;
	Parms.Array = Array;
	Parms.__WorldContext = __WorldContext;
	Parms.Final = Final;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]DataInt++
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESCMHostType            HostType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      HostID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      DataName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDataInt_OutValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetDataInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFL_NextGenCustomMode_C::_A_DataIntPlusPlus(enum class ESCMHostType HostType, const class FString& HostID, const class FString& DataName, int32 InValue, class UObject* __WorldContext, int32 CallFunc_GetDataInt_OutValue, bool CallFunc_GetDataInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_SetDataInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[A]DataInt++");

	Params::UFL_NextGenCustomMode_C__A_DataIntPlusPlus_Params Parms{};

	Parms.HostType = HostType;
	Parms.HostID = HostID;
	Parms.DataName = DataName;
	Parms.InValue = InValue;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDataInt_OutValue = CallFunc_GetDataInt_OutValue;
	Parms.CallFunc_GetDataInt_ReturnValue = CallFunc_GetDataInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SetDataInt_ReturnValue = CallFunc_SetDataInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]GetRandomLocationNearby
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Center                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Radius                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TargetLocation1                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TargetLocation                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             ValidTarget                                                      (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class ASolarCharacter*>     Ignore                                                           (Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ASolarCharacter*>     CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetRotated2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Normal2D_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingleForObjects_OutHit                        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingleForObjects_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFL_NextGenCustomMode_C::_A_GetRandomLocationNearby(const struct FVector& Center, float Radius, class UObject* __WorldContext, struct FVector* TargetLocation1, const struct FVector& TargetLocation, const TArray<struct FVector>& ValidTarget, const TArray<class ASolarCharacter*>& Ignore, bool Temp_bool_Variable, TArray<class ASolarCharacter*>& CallFunc_GetAllActorsOfClass_OutActors, int32 Temp_int_Variable, float CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_GetRotated2D_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, const struct FVector2D& CallFunc_Normal2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingleForObjects_OutHit, bool CallFunc_LineTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FVector& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[A]GetRandomLocationNearby");

	Params::UFL_NextGenCustomMode_C__A_GetRandomLocationNearby_Params Parms{};

	Parms.Center = Center;
	Parms.Radius = Radius;
	Parms.__WorldContext = __WorldContext;
	Parms.TargetLocation = TargetLocation;
	Parms.ValidTarget = ValidTarget;
	Parms.Ignore = Ignore;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.CallFunc_GetRotated2D_ReturnValue = CallFunc_GetRotated2D_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Normal2D_ReturnValue = CallFunc_Normal2D_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue = CallFunc_Multiply_Vector2DFloat_ReturnValue;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue = CallFunc_Add_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_LineTraceSingleForObjects_OutHit = CallFunc_LineTraceSingleForObjects_OutHit;
	Parms.CallFunc_LineTraceSingleForObjects_ReturnValue = CallFunc_LineTraceSingleForObjects_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_BreakVector_X_2 = CallFunc_BreakVector_X_2;
	Parms.CallFunc_BreakVector_Y_2 = CallFunc_BreakVector_Y_2;
	Parms.CallFunc_BreakVector_Z_2 = CallFunc_BreakVector_Z_2;
	Parms.CallFunc_BreakHitResult_bBlockingHit_1 = CallFunc_BreakHitResult_bBlockingHit_1;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_1 = CallFunc_BreakHitResult_bInitialOverlap_1;
	Parms.CallFunc_BreakHitResult_Time_1 = CallFunc_BreakHitResult_Time_1;
	Parms.CallFunc_BreakHitResult_Distance_1 = CallFunc_BreakHitResult_Distance_1;
	Parms.CallFunc_BreakHitResult_Location_1 = CallFunc_BreakHitResult_Location_1;
	Parms.CallFunc_BreakHitResult_ImpactPoint_1 = CallFunc_BreakHitResult_ImpactPoint_1;
	Parms.CallFunc_BreakHitResult_Normal_1 = CallFunc_BreakHitResult_Normal_1;
	Parms.CallFunc_BreakHitResult_ImpactNormal_1 = CallFunc_BreakHitResult_ImpactNormal_1;
	Parms.CallFunc_BreakHitResult_PhysMat_1 = CallFunc_BreakHitResult_PhysMat_1;
	Parms.CallFunc_BreakHitResult_HitActor_1 = CallFunc_BreakHitResult_HitActor_1;
	Parms.CallFunc_BreakHitResult_HitComponent_1 = CallFunc_BreakHitResult_HitComponent_1;
	Parms.CallFunc_BreakHitResult_HitBoneName_1 = CallFunc_BreakHitResult_HitBoneName_1;
	Parms.CallFunc_BreakHitResult_HitItem_1 = CallFunc_BreakHitResult_HitItem_1;
	Parms.CallFunc_BreakHitResult_FaceIndex_1 = CallFunc_BreakHitResult_FaceIndex_1;
	Parms.CallFunc_BreakHitResult_TraceStart_1 = CallFunc_BreakHitResult_TraceStart_1;
	Parms.CallFunc_BreakHitResult_TraceEnd_1 = CallFunc_BreakHitResult_TraceEnd_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_2 = CallFunc_MakeVector_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetLocation1 != nullptr)
		*TargetLocation1 = std::move(Parms.TargetLocation1);

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.UpdatePlayerCount
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Change                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Set                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Current                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetDataInt_OutValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetDataInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFL_NextGenCustomMode_C::UpdatePlayerCount(int32 Change, bool Set, class UObject* __WorldContext, int32* Current, int32 NewLocalVar_0, bool Temp_bool_Variable, int32 CallFunc_GetDataInt_OutValue, bool CallFunc_GetDataInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 K2Node_Select_Default, bool CallFunc_SetDataInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "UpdatePlayerCount");

	Params::UFL_NextGenCustomMode_C_UpdatePlayerCount_Params Parms{};

	Parms.Change = Change;
	Parms.Set = Set;
	Parms.__WorldContext = __WorldContext;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetDataInt_OutValue = CallFunc_GetDataInt_OutValue;
	Parms.CallFunc_GetDataInt_ReturnValue = CallFunc_GetDataInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetDataInt_ReturnValue = CallFunc_SetDataInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Current != nullptr)
		*Current = Parms.Current;

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.BattleOver
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFL_NextGenCustomMode_C::BattleOver(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "BattleOver");

	Params::UFL_NextGenCustomMode_C_BattleOver_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.DeathReason2String
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESCMDamageType          DamageType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      TraceString                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_ByteToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// enum class ESCMDamageType          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_2                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_3                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_4                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_5                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_6                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_7                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_8                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_9                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_10                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_11                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_12                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_13                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_14                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_15                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_16                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_17                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_18                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_19                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_20                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default_1                                          (ZeroConstructor, HasGetValueTypeHash)

void UFL_NextGenCustomMode_C::DeathReason2String(enum class ESCMDamageType DamageType, class UObject* __WorldContext, class FString* TraceString, bool Temp_bool_Variable, const class FString& CallFunc_Conv_ByteToString_ReturnValue, enum class ESCMDamageType Temp_byte_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, const class FString& Temp_string_Variable_4, const class FString& Temp_string_Variable_5, const class FString& Temp_string_Variable_6, const class FString& Temp_string_Variable_7, const class FString& Temp_string_Variable_8, const class FString& Temp_string_Variable_9, const class FString& Temp_string_Variable_10, const class FString& Temp_string_Variable_11, const class FString& Temp_string_Variable_12, const class FString& Temp_string_Variable_13, const class FString& Temp_string_Variable_14, const class FString& Temp_string_Variable_15, const class FString& Temp_string_Variable_16, const class FString& Temp_string_Variable_17, const class FString& Temp_string_Variable_18, const class FString& Temp_string_Variable_19, const class FString& Temp_string_Variable_20, const class FString& K2Node_Select_Default, bool CallFunc_IsEmpty_ReturnValue, const class FString& K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "DeathReason2String");

	Params::UFL_NextGenCustomMode_C_DeathReason2String_Params Parms{};

	Parms.DamageType = DamageType;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_ByteToString_ReturnValue = CallFunc_Conv_ByteToString_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.Temp_string_Variable_3 = Temp_string_Variable_3;
	Parms.Temp_string_Variable_4 = Temp_string_Variable_4;
	Parms.Temp_string_Variable_5 = Temp_string_Variable_5;
	Parms.Temp_string_Variable_6 = Temp_string_Variable_6;
	Parms.Temp_string_Variable_7 = Temp_string_Variable_7;
	Parms.Temp_string_Variable_8 = Temp_string_Variable_8;
	Parms.Temp_string_Variable_9 = Temp_string_Variable_9;
	Parms.Temp_string_Variable_10 = Temp_string_Variable_10;
	Parms.Temp_string_Variable_11 = Temp_string_Variable_11;
	Parms.Temp_string_Variable_12 = Temp_string_Variable_12;
	Parms.Temp_string_Variable_13 = Temp_string_Variable_13;
	Parms.Temp_string_Variable_14 = Temp_string_Variable_14;
	Parms.Temp_string_Variable_15 = Temp_string_Variable_15;
	Parms.Temp_string_Variable_16 = Temp_string_Variable_16;
	Parms.Temp_string_Variable_17 = Temp_string_Variable_17;
	Parms.Temp_string_Variable_18 = Temp_string_Variable_18;
	Parms.Temp_string_Variable_19 = Temp_string_Variable_19;
	Parms.Temp_string_Variable_20 = Temp_string_Variable_20;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	if (TraceString != nullptr)
		*TraceString = std::move(Parms.TraceString);

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]GetPlayerType
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASCMPlayerState*             Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_PlayerType            PlayerType                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBotAIType              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               CallFunc_GetAIController_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASolarBotAIController*       K2Node_DynamicCast_AsSolar_Bot_AIController                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_PlayerType            Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_PlayerType            Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_PlayerType            Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_PlayerType            K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFL_NextGenCustomMode_C::_A_GetPlayerType(class ASCMPlayerState* Player, class UObject* __WorldContext, enum class E_PlayerType* PlayerType, enum class EBotAIType Temp_byte_Variable, class AAIController* CallFunc_GetAIController_ReturnValue, class ASolarBotAIController* K2Node_DynamicCast_AsSolar_Bot_AIController, bool K2Node_DynamicCast_bSuccess, enum class E_PlayerType Temp_byte_Variable_1, enum class E_PlayerType Temp_byte_Variable_2, enum class E_PlayerType Temp_byte_Variable_3, enum class E_PlayerType K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[A]GetPlayerType");

	Params::UFL_NextGenCustomMode_C__A_GetPlayerType_Params Parms{};

	Parms.Player = Player;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetAIController_ReturnValue = CallFunc_GetAIController_ReturnValue;
	Parms.K2Node_DynamicCast_AsSolar_Bot_AIController = K2Node_DynamicCast_AsSolar_Bot_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayerType != nullptr)
		*PlayerType = Parms.PlayerType;

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[S]GetOutcomIDByChestID
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OutcomeID                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewLocalVar_1                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USolarTables_TablesReader*   CallFunc__A_GetExcelTableReader_TablesReader                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasRowKey_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSolarTablesData_ChestSpawn CallFunc_GetRowData_ReturnValue                                  (ConstParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSolarTablesData_Chest      CallFunc_GetRowData_ReturnValue_1                                (ConstParm)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasRowKey_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFL_NextGenCustomMode_C::_S_GetOutcomIDByChestID(int32 Key, class UObject* __WorldContext, int32* OutcomeID, int32 NewLocalVar_1, int32 NewLocalVar_0, class USolarTables_TablesReader* CallFunc__A_GetExcelTableReader_TablesReader, bool CallFunc_HasRowKey_ReturnValue, const struct FSolarTablesData_ChestSpawn& CallFunc_GetRowData_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FSolarTablesData_Chest& CallFunc_GetRowData_ReturnValue_1, int32 CallFunc_RandomInteger_ReturnValue, bool CallFunc_HasRowKey_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[S]GetOutcomIDByChestID");

	Params::UFL_NextGenCustomMode_C__S_GetOutcomIDByChestID_Params Parms{};

	Parms.Key = Key;
	Parms.__WorldContext = __WorldContext;
	Parms.NewLocalVar_1 = NewLocalVar_1;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.CallFunc__A_GetExcelTableReader_TablesReader = CallFunc__A_GetExcelTableReader_TablesReader;
	Parms.CallFunc_HasRowKey_ReturnValue = CallFunc_HasRowKey_ReturnValue;
	Parms.CallFunc_GetRowData_ReturnValue = CallFunc_GetRowData_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetRowData_ReturnValue_1 = CallFunc_GetRowData_ReturnValue_1;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_HasRowKey_ReturnValue_1 = CallFunc_HasRowKey_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutcomeID != nullptr)
		*OutcomeID = Parms.OutcomeID;

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.Vector2DArray2String
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FVector2D>           Vector                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Str                                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp                                                             (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Vector2D2String_Str                                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Mid_ReturnValue                                         (ZeroConstructor, HasGetValueTypeHash)

void UFL_NextGenCustomMode_C::Vector2DArray2String(TArray<struct FVector2D>& Vector, class UObject* __WorldContext, class FString* Str, const class FString& Temp, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FVector2D& CallFunc_Array_Get_Item, const class FString& CallFunc_Vector2D2String_Str, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Len_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const class FString& CallFunc_Mid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "Vector2DArray2String");

	Params::UFL_NextGenCustomMode_C_Vector2DArray2String_Params Parms{};

	Parms.Vector = Vector;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp = Temp;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Vector2D2String_Str = CallFunc_Vector2D2String_Str;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Mid_ReturnValue = CallFunc_Mid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Str != nullptr)
		*Str = std::move(Parms.Str);

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.VectorArray2String
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FVector>             Vector                                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Str                                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp                                                             (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Vector2String_Str                                       (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Mid_ReturnValue                                         (ZeroConstructor, HasGetValueTypeHash)

void UFL_NextGenCustomMode_C::VectorArray2String(TArray<struct FVector>& Vector, class UObject* __WorldContext, class FString* Str, const class FString& Temp, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FVector& CallFunc_Array_Get_Item, const class FString& CallFunc_Vector2String_Str, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Len_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const class FString& CallFunc_Mid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "VectorArray2String");

	Params::UFL_NextGenCustomMode_C_VectorArray2String_Params Parms{};

	Parms.Vector = Vector;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp = Temp;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Vector2String_Str = CallFunc_Vector2String_Str;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Mid_ReturnValue = CallFunc_Mid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Str != nullptr)
		*Str = std::move(Parms.Str);

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.Vector2D2String
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                   Vector                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Str                                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_1                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void UFL_NextGenCustomMode_C::Vector2D2String(const struct FVector2D& Vector, class UObject* __WorldContext, class FString* Str, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "Vector2D2String");

	Params::UFL_NextGenCustomMode_C_Vector2D2String_Params Parms{};

	Parms.Vector = Vector;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_1 = CallFunc_Conv_FloatToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Str != nullptr)
		*Str = std::move(Parms.Str);

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.Ω	è:pW
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              _P                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              _P                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      _d                                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      LOCAL___pW_                                                      (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFL_NextGenCustomMode_C::____pW(int32 _P, int32 _P, TArray<int32>& _d, class UObject* __WorldContext, int32* Result, const TArray<int32>& LOCAL___pW_, int32 Temp_int_Variable, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "Ω	è:pW");

	Params::UFL_NextGenCustomMode_C_____pW_Params Parms{};

	Parms._P = _P;
	Parms._P = _P;
	Parms._d = _d;
	Parms.__WorldContext = __WorldContext;
	Parms.LOCAL___pW_ = LOCAL___pW_;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[S]GetBuildPackageType
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESolarBuildConfigurationS___                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESolarBuildConfigurationCallFunc_GetBuildConfiguration_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFL_NextGenCustomMode_C::_S_GetBuildPackageType(class UObject* __WorldContext, enum class ESolarBuildConfiguration* S___, enum class ESolarBuildConfiguration CallFunc_GetBuildConfiguration_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[S]GetBuildPackageType");

	Params::UFL_NextGenCustomMode_C__S_GetBuildPackageType_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetBuildConfiguration_ReturnValue = CallFunc_GetBuildConfiguration_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (S___ != nullptr)
		*S___ = Parms.S___;

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[S]Number2Letter
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Number                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Letter                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Valid                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InRange_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_2                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_3                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_4                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_5                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_6                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_7                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_8                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_9                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_10                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_11                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_12                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_13                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_14                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_15                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_16                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_17                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_18                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_19                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_20                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_21                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_22                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_23                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_24                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_25                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_26                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)

void UFL_NextGenCustomMode_C::_S_Number2Letter(int32 Number, class UObject* __WorldContext, class FString* Letter, bool* Valid, int32 Temp_int_Variable, bool CallFunc_InRange_IntInt_ReturnValue, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, const class FString& Temp_string_Variable_4, const class FString& Temp_string_Variable_5, const class FString& Temp_string_Variable_6, const class FString& Temp_string_Variable_7, const class FString& Temp_string_Variable_8, const class FString& Temp_string_Variable_9, const class FString& Temp_string_Variable_10, const class FString& Temp_string_Variable_11, const class FString& Temp_string_Variable_12, const class FString& Temp_string_Variable_13, const class FString& Temp_string_Variable_14, const class FString& Temp_string_Variable_15, const class FString& Temp_string_Variable_16, const class FString& Temp_string_Variable_17, const class FString& Temp_string_Variable_18, const class FString& Temp_string_Variable_19, const class FString& Temp_string_Variable_20, const class FString& Temp_string_Variable_21, const class FString& Temp_string_Variable_22, const class FString& Temp_string_Variable_23, const class FString& Temp_string_Variable_24, const class FString& Temp_string_Variable_25, const class FString& Temp_string_Variable_26, const class FString& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[S]Number2Letter");

	Params::UFL_NextGenCustomMode_C__S_Number2Letter_Params Parms{};

	Parms.Number = Number;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_InRange_IntInt_ReturnValue = CallFunc_InRange_IntInt_ReturnValue;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.Temp_string_Variable_3 = Temp_string_Variable_3;
	Parms.Temp_string_Variable_4 = Temp_string_Variable_4;
	Parms.Temp_string_Variable_5 = Temp_string_Variable_5;
	Parms.Temp_string_Variable_6 = Temp_string_Variable_6;
	Parms.Temp_string_Variable_7 = Temp_string_Variable_7;
	Parms.Temp_string_Variable_8 = Temp_string_Variable_8;
	Parms.Temp_string_Variable_9 = Temp_string_Variable_9;
	Parms.Temp_string_Variable_10 = Temp_string_Variable_10;
	Parms.Temp_string_Variable_11 = Temp_string_Variable_11;
	Parms.Temp_string_Variable_12 = Temp_string_Variable_12;
	Parms.Temp_string_Variable_13 = Temp_string_Variable_13;
	Parms.Temp_string_Variable_14 = Temp_string_Variable_14;
	Parms.Temp_string_Variable_15 = Temp_string_Variable_15;
	Parms.Temp_string_Variable_16 = Temp_string_Variable_16;
	Parms.Temp_string_Variable_17 = Temp_string_Variable_17;
	Parms.Temp_string_Variable_18 = Temp_string_Variable_18;
	Parms.Temp_string_Variable_19 = Temp_string_Variable_19;
	Parms.Temp_string_Variable_20 = Temp_string_Variable_20;
	Parms.Temp_string_Variable_21 = Temp_string_Variable_21;
	Parms.Temp_string_Variable_22 = Temp_string_Variable_22;
	Parms.Temp_string_Variable_23 = Temp_string_Variable_23;
	Parms.Temp_string_Variable_24 = Temp_string_Variable_24;
	Parms.Temp_string_Variable_25 = Temp_string_Variable_25;
	Parms.Temp_string_Variable_26 = Temp_string_Variable_26;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Letter != nullptr)
		*Letter = std::move(Parms.Letter);

	if (Valid != nullptr)
		*Valid = Parms.Valid;

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.Vector2String
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Vector                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Str                                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_1                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_2                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)

void UFL_NextGenCustomMode_C::Vector2String(const struct FVector& Vector, class UObject* __WorldContext, class FString* Str, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "Vector2String");

	Params::UFL_NextGenCustomMode_C_Vector2String_Params Parms{};

	Parms.Vector = Vector;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_1 = CallFunc_Conv_FloatToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_2 = CallFunc_Conv_FloatToString_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (Str != nullptr)
		*Str = std::move(Parms.Str);

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.Bool2String
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Bool                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      String                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)

void UFL_NextGenCustomMode_C::Bool2String(bool Bool, class UObject* __WorldContext, class FString* String, bool Temp_bool_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "Bool2String");

	Params::UFL_NextGenCustomMode_C_Bool2String_Params Parms{};

	Parms.Bool = Bool;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (String != nullptr)
		*String = std::move(Parms.String);

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.∑÷0bÿ¶
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Mn                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               __0_                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ZerobMn                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Z                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               __4Minus                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm, HasGetValueTypeHash)
// struct FVector                     K2Node_Select_Default_1                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SolarWaterActor_C*       K2Node_DynamicCast_AsBP_Solar_Water_Actor                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFL_NextGenCustomMode_C::__0b__(const struct FVector& Mn, bool __0_, class UObject* __WorldContext, struct FVector* ZerobMn, float* Z, bool* __4Minus, bool Temp_bool_Variable, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, bool Temp_bool_Variable_1, const struct FVector& K2Node_Select_Default, TArray<class AActor*>& Temp_object_Variable, const struct FVector& K2Node_Select_Default_1, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, class ABP_SolarWaterActor_C* K2Node_DynamicCast_AsBP_Solar_Water_Actor, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "∑÷0bÿ¶");

	Params::UFL_NextGenCustomMode_C___0b___Params Parms{};

	Parms.Mn = Mn;
	Parms.__0_ = __0_;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.K2Node_DynamicCast_AsBP_Solar_Water_Actor = K2Node_DynamicCast_AsBP_Solar_Water_Actor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (ZerobMn != nullptr)
		*ZerobMn = std::move(Parms.ZerobMn);

	if (Z != nullptr)
		*Z = Parms.Z;

	if (__4Minus != nullptr)
		*__4Minus = Parms.__4Minus;

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.ToInt(StringArray)
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FString>              Str                                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      Int                                                              (Parm, OutParm, HasGetValueTypeHash)
// TArray<int32>                      Temp                                                             (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFL_NextGenCustomMode_C::ToInt_StringArray_(TArray<class FString>& Str, class UObject* __WorldContext, TArray<int32>* Int, const TArray<int32>& Temp, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Conv_StringToInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "ToInt(StringArray)");

	Params::UFL_NextGenCustomMode_C_ToInt_StringArray__Params Parms{};

	Parms.Str = Str;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp = Temp;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Int != nullptr)
		*Int = std::move(Parms.Int);

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]GetMiniMapSize
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              MapId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Size                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USolarTables_TablesReader*   CallFunc__A_GetExcelTableReader_TablesReader                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSolarTablesData_GameMap    CallFunc_GetRowData_ReturnValue                                  (ConstParm)
// bool                               CallFunc_HasRowKey_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFL_NextGenCustomMode_C::_A_GetMiniMapSize(int32 MapId, class UObject* __WorldContext, struct FVector2D* Size, class USolarTables_TablesReader* CallFunc__A_GetExcelTableReader_TablesReader, const struct FSolarTablesData_GameMap& CallFunc_GetRowData_ReturnValue, bool CallFunc_HasRowKey_ReturnValue, float CallFunc_Array_Get_Item, float CallFunc_Array_Get_Item_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[A]GetMiniMapSize");

	Params::UFL_NextGenCustomMode_C__A_GetMiniMapSize_Params Parms{};

	Parms.MapId = MapId;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc__A_GetExcelTableReader_TablesReader = CallFunc__A_GetExcelTableReader_TablesReader;
	Parms.CallFunc_GetRowData_ReturnValue = CallFunc_GetRowData_ReturnValue;
	Parms.CallFunc_HasRowKey_ReturnValue = CallFunc_HasRowKey_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Size != nullptr)
		*Size = std::move(Parms.Size);

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[S]GetMapIDByName
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      LevelName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MapId                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASCustomGameState*           K2Node_DynamicCast_AsSCustom_Game_State                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetMapIDByName_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFL_NextGenCustomMode_C::_S_GetMapIDByName(const class FString& LevelName, class UObject* __WorldContext, int32* MapId, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ASCustomGameState* K2Node_DynamicCast_AsSCustom_Game_State, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetMapIDByName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[S]GetMapIDByName");

	Params::UFL_NextGenCustomMode_C__S_GetMapIDByName_Params Parms{};

	Parms.LevelName = LevelName;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsSCustom_Game_State = K2Node_DynamicCast_AsSCustom_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMapIDByName_ReturnValue = CallFunc_GetMapIDByName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MapId != nullptr)
		*MapId = Parms.MapId;

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[S]GetModeMainLogic
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGMLogicComponent*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGMLogicComponent*          CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UCGMLogicComponent* UFL_NextGenCustomMode_C::_S_GetModeMainLogic(class UObject* __WorldContext, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class UCGMLogicComponent* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[S]GetModeMainLogic");

	Params::UFL_NextGenCustomMode_C__S_GetModeMainLogic_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[S]DeployPlayer
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASolarPlayerState*           TargetPlayer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerStart*                PlayerStart                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ClearPlayerItems                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASolarCharacter*             K2Node_DynamicCast_AsSolar_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFL_NextGenCustomMode_C::_S_DeployPlayer(class ASolarPlayerState* TargetPlayer, class APlayerStart* PlayerStart, bool ClearPlayerItems, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, class ASolarCharacter* K2Node_DynamicCast_AsSolar_Character, bool K2Node_DynamicCast_bSuccess, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[S]DeployPlayer");

	Params::UFL_NextGenCustomMode_C__S_DeployPlayer_Params Parms{};

	Parms.TargetPlayer = TargetPlayer;
	Parms.PlayerStart = PlayerStart;
	Parms.ClearPlayerItems = ClearPlayerItems;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsSolar_Character = K2Node_DynamicCast_AsSolar_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]WorldLocationToMiniMap
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                     WorldLocation                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   MiniMapPosition                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USolarMapManager*            CallFunc__A_GetMapManager_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_WorldLocationToMiniMap_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFL_NextGenCustomMode_C::_A_WorldLocationToMiniMap(const struct FVector& WorldLocation, class UObject* __WorldContext, struct FVector2D* MiniMapPosition, class USolarMapManager* CallFunc__A_GetMapManager_ReturnValue, const struct FVector2D& CallFunc_WorldLocationToMiniMap_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[A]WorldLocationToMiniMap");

	Params::UFL_NextGenCustomMode_C__A_WorldLocationToMiniMap_Params Parms{};

	Parms.WorldLocation = WorldLocation;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc__A_GetMapManager_ReturnValue = CallFunc__A_GetMapManager_ReturnValue;
	Parms.CallFunc_WorldLocationToMiniMap_ReturnValue = CallFunc_WorldLocationToMiniMap_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MiniMapPosition != nullptr)
		*MiniMapPosition = std::move(Parms.MiniMapPosition);

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]MiniMapToWorldLocation
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   MiniMapPosition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Z                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     WorldLocation                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USolarMapManager*            CallFunc__A_GetMapManager_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MiniMapToWorldLocation_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFL_NextGenCustomMode_C::_A_MiniMapToWorldLocation(const struct FVector2D& MiniMapPosition, float Z, class UObject* __WorldContext, struct FVector* WorldLocation, class USolarMapManager* CallFunc__A_GetMapManager_ReturnValue, const struct FVector& CallFunc_MiniMapToWorldLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[A]MiniMapToWorldLocation");

	Params::UFL_NextGenCustomMode_C__A_MiniMapToWorldLocation_Params Parms{};

	Parms.MiniMapPosition = MiniMapPosition;
	Parms.Z = Z;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc__A_GetMapManager_ReturnValue = CallFunc__A_GetMapManager_ReturnValue;
	Parms.CallFunc_MiniMapToWorldLocation_ReturnValue = CallFunc_MiniMapToWorldLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (WorldLocation != nullptr)
		*WorldLocation = std::move(Parms.WorldLocation);

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[c] Create Widget And Display
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      WidgetClass                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_UI_Root               DisplayLayer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USolarUserWidget*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_UI_Root               Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUIRoot                 Temp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUIRoot                 Temp_byte_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUIRoot                 Temp_byte_Variable_3                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUIRoot                 Temp_byte_Variable_4                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUIRoot                 Temp_byte_Variable_5                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUIRoot                 Temp_byte_Variable_6                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUIRoot                 Temp_byte_Variable_7                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUIRoot                 Temp_byte_Variable_8                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUIRoot                 K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_ShowSolarWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USolarUserWidget*            K2Node_DynamicCast_AsSolar_User_Widget                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

class USolarUserWidget* UFL_NextGenCustomMode_C::_c__Create_Widget_And_Display(class UClass* WidgetClass, enum class E_UI_Root DisplayLayer, class UObject* __WorldContext, enum class E_UI_Root Temp_byte_Variable, enum class EUIRoot Temp_byte_Variable_1, enum class EUIRoot Temp_byte_Variable_2, enum class EUIRoot Temp_byte_Variable_3, enum class EUIRoot Temp_byte_Variable_4, enum class EUIRoot Temp_byte_Variable_5, enum class EUIRoot Temp_byte_Variable_6, enum class EUIRoot Temp_byte_Variable_7, enum class EUIRoot Temp_byte_Variable_8, enum class EUIRoot K2Node_Select_Default, class UUserWidget* CallFunc_ShowSolarWidget_ReturnValue, class USolarUserWidget* K2Node_DynamicCast_AsSolar_User_Widget, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[c] Create Widget And Display");

	Params::UFL_NextGenCustomMode_C__c__Create_Widget_And_Display_Params Parms{};

	Parms.WidgetClass = WidgetClass;
	Parms.DisplayLayer = DisplayLayer;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_ShowSolarWidget_ReturnValue = CallFunc_ShowSolarWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsSolar_User_Widget = K2Node_DynamicCast_AsSolar_User_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]GetMapManager
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USolarMapManager*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USolarGameInstanceBase*      K2Node_DynamicCast_AsSolar_Game_Instance_Base                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USolarMapManager*            CallFunc_GetSolarMapManager_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USolarMapManager* UFL_NextGenCustomMode_C::_A_GetMapManager(class UObject* __WorldContext, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USolarGameInstanceBase* K2Node_DynamicCast_AsSolar_Game_Instance_Base, bool K2Node_DynamicCast_bSuccess, class USolarMapManager* CallFunc_GetSolarMapManager_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[A]GetMapManager");

	Params::UFL_NextGenCustomMode_C__A_GetMapManager_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsSolar_Game_Instance_Base = K2Node_DynamicCast_AsSolar_Game_Instance_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSolarMapManager_ReturnValue = CallFunc_GetSolarMapManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[C]GetLocalCharacter
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASolarCharacter*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASCMPlayerState*             CallFunc_GetLocalPlayer_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASolarCharacter*             CallFunc_GetSolarCharacter_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class ASolarCharacter* UFL_NextGenCustomMode_C::_C_GetLocalCharacter(class UObject* __WorldContext, class ASCMPlayerState* CallFunc_GetLocalPlayer_ReturnValue, class ASolarCharacter* CallFunc_GetSolarCharacter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[C]GetLocalCharacter");

	Params::UFL_NextGenCustomMode_C__C_GetLocalCharacter_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetLocalPlayer_ReturnValue = CallFunc_GetLocalPlayer_ReturnValue;
	Parms.CallFunc_GetSolarCharacter_ReturnValue = CallFunc_GetSolarCharacter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[s]GetWarmGameInfo
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsWarmGame                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSolarTablesData_WarmGameModeWarmGameInfo                                                     (ConstParm, Parm, OutParm)
// struct FSolarTablesData_WarmGameModeK2Node_MakeStruct_SolarTablesData_WarmGameMode                   (None)
// int32                              CallFunc_GetWramGameType_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USolarTables_TablesReader*   CallFunc__A_GetExcelTableReader_TablesReader                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSolarTablesData_WarmGameModeCallFunc_GetRowData_ReturnValue                                  (ConstParm)
// bool                               CallFunc_HasRowKey_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFL_NextGenCustomMode_C::_s_GetWarmGameInfo(class UObject* __WorldContext, bool* bIsWarmGame, struct FSolarTablesData_WarmGameMode* WarmGameInfo, const struct FSolarTablesData_WarmGameMode& K2Node_MakeStruct_SolarTablesData_WarmGameMode, int32 CallFunc_GetWramGameType_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class USolarTables_TablesReader* CallFunc__A_GetExcelTableReader_TablesReader, const struct FSolarTablesData_WarmGameMode& CallFunc_GetRowData_ReturnValue, bool CallFunc_HasRowKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[s]GetWarmGameInfo");

	Params::UFL_NextGenCustomMode_C__s_GetWarmGameInfo_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeStruct_SolarTablesData_WarmGameMode = K2Node_MakeStruct_SolarTablesData_WarmGameMode;
	Parms.CallFunc_GetWramGameType_ReturnValue = CallFunc_GetWramGameType_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc__A_GetExcelTableReader_TablesReader = CallFunc__A_GetExcelTableReader_TablesReader;
	Parms.CallFunc_GetRowData_ReturnValue = CallFunc_GetRowData_ReturnValue;
	Parms.CallFunc_HasRowKey_ReturnValue = CallFunc_HasRowKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsWarmGame != nullptr)
		*bIsWarmGame = Parms.bIsWarmGame;

	if (WarmGameInfo != nullptr)
		*WarmGameInfo = std::move(Parms.WarmGameInfo);

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[S]PlayInEditor
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsEditor                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPackagedForDistribution_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USolarGameInstanceBase*      CallFunc_GetSolarGameInstanceBase_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGIsEditor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFL_NextGenCustomMode_C::_S_PlayInEditor(class UObject* __WorldContext, bool* bIsEditor, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_IsPackagedForDistribution_ReturnValue, class USolarGameInstanceBase* CallFunc_GetSolarGameInstanceBase_ReturnValue, bool CallFunc_IsGIsEditor_ReturnValue, bool K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[S]PlayInEditor");

	Params::UFL_NextGenCustomMode_C__S_PlayInEditor_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_IsPackagedForDistribution_ReturnValue = CallFunc_IsPackagedForDistribution_ReturnValue;
	Parms.CallFunc_GetSolarGameInstanceBase_ReturnValue = CallFunc_GetSolarGameInstanceBase_ReturnValue;
	Parms.CallFunc_IsGIsEditor_ReturnValue = CallFunc_IsGIsEditor_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsEditor != nullptr)
		*bIsEditor = Parms.bIsEditor;

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]GetBotTemplete
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<int32, int32>                 Templete                                                         (Parm, OutParm)
// TMap<int32, int32>                 NewLocalVar_0                                                    (Edit, BlueprintVisible)
// TMap<int32, int32>                 K2Node_MakeVariable_MakeVariableOutput                           (None)

void UFL_NextGenCustomMode_C::_A_GetBotTemplete(class UObject* __WorldContext, TMap<int32, int32>* Templete, TMap<int32, int32> NewLocalVar_0, TMap<int32, int32> K2Node_MakeVariable_MakeVariableOutput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[A]GetBotTemplete");

	Params::UFL_NextGenCustomMode_C__A_GetBotTemplete_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;

	UObject::ProcessEvent(Func, &Parms);

	if (Templete != nullptr)
		*Templete = Parms.Templete;

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]GetExcelTableReader
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USolarTables_TablesReader*   TablesReader                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USolarTables*                CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFL_NextGenCustomMode_C::_A_GetExcelTableReader(class UObject* __WorldContext, class USolarTables_TablesReader** TablesReader, class USolarTables* CallFunc_GetInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[A]GetExcelTableReader");

	Params::UFL_NextGenCustomMode_C__A_GetExcelTableReader_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TablesReader != nullptr)
		*TablesReader = Parms.TablesReader;

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[s] Set Global Damage Enable
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameModeGlobalSetting*      CallFunc_GetGameModeSetting_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFL_NextGenCustomMode_C::_s__Set_Global_Damage_Enable(bool Enabled, class UObject* __WorldContext, class UGameModeGlobalSetting* CallFunc_GetGameModeSetting_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[s] Set Global Damage Enable");

	Params::UFL_NextGenCustomMode_C__s__Set_Global_Damage_Enable_Params Parms{};

	Parms.Enabled = Enabled;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameModeSetting_ReturnValue = CallFunc_GetGameModeSetting_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[s] Get Logic Component
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGMLogicComponent*          Logic_Component                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASCustomGameMode*            K2Node_DynamicCast_AsSCustom_Game_Mode                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFL_NextGenCustomMode_C::_s__Get_Logic_Component(class UObject* __WorldContext, class UCGMLogicComponent** Logic_Component, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ASCustomGameMode* K2Node_DynamicCast_AsSCustom_Game_Mode, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[s] Get Logic Component");

	Params::UFL_NextGenCustomMode_C__s__Get_Logic_Component_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsSCustom_Game_Mode = K2Node_DynamicCast_AsSCustom_Game_Mode;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Logic_Component != nullptr)
		*Logic_Component = Parms.Logic_Component;

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[C]RemoveAllWidgetsFromBattleUI
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_BattleControllerSlot  Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClearBattleUISlot_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFL_NextGenCustomMode_C::_C_RemoveAllWidgetsFromBattleUI(enum class E_BattleControllerSlot Slot, class UObject* __WorldContext, bool* Success, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_ClearBattleUISlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[C]RemoveAllWidgetsFromBattleUI");

	Params::UFL_NextGenCustomMode_C__C_RemoveAllWidgetsFromBattleUI_Params Parms{};

	Parms.Slot = Slot;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_ClearBattleUISlot_ReturnValue = CallFunc_ClearBattleUISlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[C]InsertWidgetToBattleUI
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_BattleControllerSlot  Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bReplaceOldWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  OutResultSlot                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_InsertWidgetToBattleUISlot_OutResultSlot                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InsertWidgetToBattleUISlot_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFL_NextGenCustomMode_C::_C_InsertWidgetToBattleUI(class UUserWidget* Widget, enum class E_BattleControllerSlot Slot, bool bReplaceOldWidget, class UObject* __WorldContext, class UPanelSlot** OutResultSlot, bool* Success, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class UPanelSlot* CallFunc_InsertWidgetToBattleUISlot_OutResultSlot, bool CallFunc_InsertWidgetToBattleUISlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_NextGenCustomMode_C", "[C]InsertWidgetToBattleUI");

	Params::UFL_NextGenCustomMode_C__C_InsertWidgetToBattleUI_Params Parms{};

	Parms.Widget = Widget;
	Parms.Slot = Slot;
	Parms.bReplaceOldWidget = bReplaceOldWidget;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_InsertWidgetToBattleUISlot_OutResultSlot = CallFunc_InsertWidgetToBattleUISlot_OutResultSlot;
	Parms.CallFunc_InsertWidgetToBattleUISlot_ReturnValue = CallFunc_InsertWidgetToBattleUISlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutResultSlot != nullptr)
		*OutResultSlot = Parms.OutResultSlot;

	if (Success != nullptr)
		*Success = Parms.Success;

}

}


