#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_TabControl_Base.UI_TabControl_Base_C
// (None)

class UClass* UUI_TabControl_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_TabControl_Base_C");

	return Clss;
}


// UI_TabControl_Base_C UI_TabControl_Base.Default__UI_TabControl_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_TabControl_Base_C* UUI_TabControl_Base_C::GetDefaultObj()
{
	static class UUI_TabControl_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_TabControl_Base_C*>(UUI_TabControl_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_TabControl_Base.UI_TabControl_Base_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_TabControl_Base_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TabControl_Base_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_TabControl_Base.UI_TabControl_Base_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_TabControl_Base_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TabControl_Base_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_TabControl_Base.UI_TabControl_Base_C.OnDeinitialize
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_TabControl_Base_C::OnDeinitialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TabControl_Base_C", "OnDeinitialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_TabControl_Base.UI_TabControl_Base_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_TabControl_Base_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TabControl_Base_C", "GetModuleName");

	Params::UUI_TabControl_Base_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_TabControl_Base.UI_TabControl_Base_C.AddItemByItemData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_TabItem                  TabData                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_TabItem                  K2Node_SetFieldsInStruct_StructOut                               (ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_TabItemObj_C*            CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_TabItemObj_C*            CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TabControl_Base_C::AddItemByItemData(const struct FS_TabItem& TabData, bool* Success, const struct FS_TabItem& K2Node_SetFieldsInStruct_StructOut, int32 CallFunc_Array_AddUnique_ReturnValue, class UBP_TabItemObj_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UBP_TabItemObj_C* CallFunc_SpawnObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TabControl_Base_C", "AddItemByItemData");

	Params::UUI_TabControl_Base_C_AddItemByItemData_Params Parms{};

	Parms.TabData = TabData;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function UI_TabControl_Base.UI_TabControl_Base_C.AddSizedItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_HintData                 HintDotData                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     LinkWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Szie                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   ItemSize                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_Vector2DVector2D_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_LocalText                K2Node_MakeStruct_S_LocalText                                    (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_TabItem                  K2Node_MakeStruct_S_TabItem                                      (ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_TabItemObj_C*            CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_TabItemObj_C*            CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TabControl_Base_C::AddSizedItem(const class FString& Key, const class FString& Text, class UObject* Icon, const struct FS_HintData& HintDotData, class UWidget* LinkWidget, const struct FVector2D& Szie, bool* Success, const struct FVector2D& ItemSize, bool CallFunc_EqualEqual_Vector2DVector2D_ReturnValue, const struct FS_LocalText& K2Node_MakeStruct_S_LocalText, bool Temp_bool_Variable, const struct FVector2D& K2Node_Select_Default, const struct FS_TabItem& K2Node_MakeStruct_S_TabItem, int32 CallFunc_Array_AddUnique_ReturnValue, class UBP_TabItemObj_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UBP_TabItemObj_C* CallFunc_SpawnObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TabControl_Base_C", "AddSizedItem");

	Params::UUI_TabControl_Base_C_AddSizedItem_Params Parms{};

	Parms.Key = Key;
	Parms.Text = Text;
	Parms.Icon = Icon;
	Parms.HintDotData = HintDotData;
	Parms.LinkWidget = LinkWidget;
	Parms.Szie = Szie;
	Parms.ItemSize = ItemSize;
	Parms.CallFunc_EqualEqual_Vector2DVector2D_ReturnValue = CallFunc_EqualEqual_Vector2DVector2D_ReturnValue;
	Parms.K2Node_MakeStruct_S_LocalText = K2Node_MakeStruct_S_LocalText;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_S_TabItem = K2Node_MakeStruct_S_TabItem;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function UI_TabControl_Base.UI_TabControl_Base_C.ReviseItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_HintData                 HintDotData                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     LinkWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_TabItemObj_C*            ItemObj                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TargetIndex                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_LocalText                K2Node_MakeStruct_S_LocalText                                    (ZeroConstructor, HasGetValueTypeHash)
// struct FS_TabItem                  K2Node_MakeStruct_S_TabItem                                      (ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_TabItem                  CallFunc_Map_Find_Value                                          (ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_TabItemObj_C*            CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_TabControl_Base_C::ReviseItem(const class FString& Key, const class FString& Text, class UObject* Icon, const struct FS_HintData& HintDotData, class UWidget* LinkWidget, bool* Success, class UBP_TabItemObj_C* ItemObj, int32 TargetIndex, const struct FS_LocalText& K2Node_MakeStruct_S_LocalText, const struct FS_TabItem& K2Node_MakeStruct_S_TabItem, const struct FS_TabItem& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, class UBP_TabItemObj_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TabControl_Base_C", "ReviseItem");

	Params::UUI_TabControl_Base_C_ReviseItem_Params Parms{};

	Parms.Key = Key;
	Parms.Text = Text;
	Parms.Icon = Icon;
	Parms.HintDotData = HintDotData;
	Parms.LinkWidget = LinkWidget;
	Parms.ItemObj = ItemObj;
	Parms.TargetIndex = TargetIndex;
	Parms.K2Node_MakeStruct_S_LocalText = K2Node_MakeStruct_S_LocalText;
	Parms.K2Node_MakeStruct_S_TabItem = K2Node_MakeStruct_S_TabItem;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function UI_TabControl_Base.UI_TabControl_Base_C.RefreshAllItems
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_TabItem                  CallFunc_Array_Get_Item                                          (ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddItemByItemData_Success                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_TabControl_Base_C::RefreshAllItems(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FS_TabItem& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_AddItemByItemData_Success, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TabControl_Base_C", "RefreshAllItems");

	Params::UUI_TabControl_Base_C_RefreshAllItems_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_AddItemByItemData_Success = CallFunc_AddItemByItemData_Success;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_TabControl_Base.UI_TabControl_Base_C.InsertItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_HintData                 HintDotData                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     LinkWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_LocalText                K2Node_MakeStruct_S_LocalText                                    (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_TabItem                  K2Node_MakeStruct_S_TabItem                                      (ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TabControl_Base_C::InsertItem(int32 Index, const class FString& Key, const class FString& Text, class UObject* Icon, const struct FS_HintData& HintDotData, class UWidget* LinkWidget, bool Temp_bool_Variable, const struct FS_LocalText& K2Node_MakeStruct_S_LocalText, int32 CallFunc_Add_IntInt_ReturnValue, const struct FS_TabItem& K2Node_MakeStruct_S_TabItem, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TabControl_Base_C", "InsertItem");

	Params::UUI_TabControl_Base_C_InsertItem_Params Parms{};

	Parms.Index = Index;
	Parms.Key = Key;
	Parms.Text = Text;
	Parms.Icon = Icon;
	Parms.HintDotData = HintDotData;
	Parms.LinkWidget = LinkWidget;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_S_LocalText = K2Node_MakeStruct_S_LocalText;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_S_TabItem = K2Node_MakeStruct_S_TabItem;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_TabControl_Base.UI_TabControl_Base_C.AddItemByPreset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_TabItem                  S_TabItem                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_AddItemByItemData_Success                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_TabControl_Base_C::AddItemByPreset(struct FS_TabItem& S_TabItem, bool CallFunc_AddItemByItemData_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TabControl_Base_C", "AddItemByPreset");

	Params::UUI_TabControl_Base_C_AddItemByPreset_Params Parms{};

	Parms.S_TabItem = S_TabItem;
	Parms.CallFunc_AddItemByItemData_Success = CallFunc_AddItemByItemData_Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_TabControl_Base.UI_TabControl_Base_C.BindChildWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListView*                   CallFunc_SetBindWidget_BindList                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TabControl_Base_C::BindChildWidget(class UListView* CallFunc_SetBindWidget_BindList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TabControl_Base_C", "BindChildWidget");

	Params::UUI_TabControl_Base_C_BindChildWidget_Params Parms{};

	Parms.CallFunc_SetBindWidget_BindList = CallFunc_SetBindWidget_BindList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_TabControl_Base.UI_TabControl_Base_C.SetBindWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListView*                   BindList                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TabControl_Base_C::SetBindWidget(class UListView** BindList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TabControl_Base_C", "SetBindWidget");

	Params::UUI_TabControl_Base_C_SetBindWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BindList != nullptr)
		*BindList = Parms.BindList;

}


// Function UI_TabControl_Base.UI_TabControl_Base_C.ScrollToItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              InScrollOffset                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_TabItemObj_C*            CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetActiveTab_Success                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_TabControl_Base_C::ScrollToItem(const class FString& Key, bool Active, float InScrollOffset, class UBP_TabItemObj_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_SetActiveTab_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TabControl_Base_C", "ScrollToItem");

	Params::UUI_TabControl_Base_C_ScrollToItem_Params Parms{};

	Parms.Key = Key;
	Parms.Active = Active;
	Parms.InScrollOffset = InScrollOffset;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_SetActiveTab_Success = CallFunc_SetActiveTab_Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_TabControl_Base.UI_TabControl_Base_C.ClearItems
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_TabControl_Base_C::ClearItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TabControl_Base_C", "ClearItems");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_TabControl_Base.UI_TabControl_Base_C.SetStyle
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_TabControl_Base_C::SetStyle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TabControl_Base_C", "SetStyle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_TabControl_Base.UI_TabControl_Base_C.GetKeys
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              Keys                                                             (Parm, OutParm, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm, HasGetValueTypeHash)

void UUI_TabControl_Base_C::GetKeys(TArray<class FString>* Keys, TArray<class FString>& CallFunc_Map_Keys_Keys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TabControl_Base_C", "GetKeys");

	Params::UUI_TabControl_Base_C_GetKeys_Params Parms{};

	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;

	UObject::ProcessEvent(Func, &Parms);

	if (Keys != nullptr)
		*Keys = std::move(Parms.Keys);

}


// Function UI_TabControl_Base.UI_TabControl_Base_C.AddPresetItem
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_TabControl_Base_C::AddPresetItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TabControl_Base_C", "AddPresetItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_TabControl_Base.UI_TabControl_Base_C.SetActiveTab
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_TabItemObj_C*            CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_BP_GetSelectedItem_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_TabItem                  CallFunc_Map_Find_Value_1                                        (ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_TabControl_Base_C::SetActiveTab(const class FString& Key, bool* Success, class UBP_TabItemObj_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FS_TabItem& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TabControl_Base_C", "SetActiveTab");

	Params::UUI_TabControl_Base_C_SetActiveTab_Params Parms{};

	Parms.Key = Key;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_BP_GetSelectedItem_ReturnValue = CallFunc_BP_GetSelectedItem_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function UI_TabControl_Base.UI_TabControl_Base_C.GetLinkedWidgetByKey
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                     Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_TabItem                  CallFunc_Map_Find_Value                                          (ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_TabControl_Base_C::GetLinkedWidgetByKey(const class FString& Key, class UWidget** Widget, const struct FS_TabItem& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TabControl_Base_C", "GetLinkedWidgetByKey");

	Params::UUI_TabControl_Base_C_GetLinkedWidgetByKey_Params Parms{};

	Parms.Key = Key;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function UI_TabControl_Base.UI_TabControl_Base_C.RemoveItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_TabItemObj_C*            CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Remove_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_TabControl_Base_C::RemoveItem(const class FString& Key, bool* Success, class UBP_TabItemObj_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_Map_Remove_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TabControl_Base_C", "RemoveItem");

	Params::UUI_TabControl_Base_C_RemoveItem_Params Parms{};

	Parms.Key = Key;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_Map_Remove_ReturnValue_1 = CallFunc_Map_Remove_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function UI_TabControl_Base.UI_TabControl_Base_C.AddItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_HintData                 HintDotData                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     LinkWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_LocalText                K2Node_MakeStruct_S_LocalText                                    (ZeroConstructor, HasGetValueTypeHash)
// struct FS_TabItem                  K2Node_MakeStruct_S_TabItem                                      (ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_TabItemObj_C*            CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_TabItemObj_C*            CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TabControl_Base_C::AddItem(const class FString& Key, const class FString& Text, class UObject* Icon, const struct FS_HintData& HintDotData, class UWidget* LinkWidget, bool* Success, const struct FS_LocalText& K2Node_MakeStruct_S_LocalText, const struct FS_TabItem& K2Node_MakeStruct_S_TabItem, int32 CallFunc_Array_AddUnique_ReturnValue, class UBP_TabItemObj_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UBP_TabItemObj_C* CallFunc_SpawnObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TabControl_Base_C", "AddItem");

	Params::UUI_TabControl_Base_C_AddItem_Params Parms{};

	Parms.Key = Key;
	Parms.Text = Text;
	Parms.Icon = Icon;
	Parms.HintDotData = HintDotData;
	Parms.LinkWidget = LinkWidget;
	Parms.K2Node_MakeStruct_S_LocalText = K2Node_MakeStruct_S_LocalText;
	Parms.K2Node_MakeStruct_S_TabItem = K2Node_MakeStruct_S_TabItem;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function UI_TabControl_Base.UI_TabControl_Base_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_TabControl_Base_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TabControl_Base_C", "PreConstruct");

	Params::UUI_TabControl_Base_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_TabControl_Base.UI_TabControl_Base_C.OnItemClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TabControl_Base_C::OnItemClicked(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TabControl_Base_C", "OnItemClicked");

	Params::UUI_TabControl_Base_C_OnItemClicked_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_TabControl_Base.UI_TabControl_Base_C.OnItemSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_TabControl_Base_C::OnItemSelected(class UObject* Item, bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TabControl_Base_C", "OnItemSelected");

	Params::UUI_TabControl_Base_C_OnItemSelected_Params Parms{};

	Parms.Item = Item;
	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_TabControl_Base.UI_TabControl_Base_C.ExecuteUbergraph_UI_TabControl_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetActiveTab_Success                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UObject*                     K2Node_CustomEvent_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bIsSelected                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UBP_TabItemObj_C*            K2Node_DynamicCast_AsBP_Tab_Item_Obj                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_TabItem                  CallFunc_Map_Find_Value                                          (ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetActiveTab_Success_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TabControl_Base_C::ExecuteUbergraph_UI_TabControl_Base(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool CallFunc_SetActiveTab_Success, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* K2Node_CustomEvent_Item_1, class UObject* K2Node_CustomEvent_Item, bool K2Node_CustomEvent_bIsSelected, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UBP_TabItemObj_C* K2Node_DynamicCast_AsBP_Tab_Item_Obj, bool K2Node_DynamicCast_bSuccess, const struct FS_TabItem& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_SetActiveTab_Success_1, int32 CallFunc_Array_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TabControl_Base_C", "ExecuteUbergraph_UI_TabControl_Base");

	Params::UUI_TabControl_Base_C_ExecuteUbergraph_UI_TabControl_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_SetActiveTab_Success = CallFunc_SetActiveTab_Success;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Item_1 = K2Node_CustomEvent_Item_1;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;
	Parms.K2Node_CustomEvent_bIsSelected = K2Node_CustomEvent_bIsSelected;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_DynamicCast_AsBP_Tab_Item_Obj = K2Node_DynamicCast_AsBP_Tab_Item_Obj;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_SetActiveTab_Success_1 = CallFunc_SetActiveTab_Success_1;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_TabControl_Base.UI_TabControl_Base_C.OnActiveTabChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TabControl_Base_C::OnActiveTabChanged__DelegateSignature(const class FString& Key, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TabControl_Base_C", "OnActiveTabChanged__DelegateSignature");

	Params::UUI_TabControl_Base_C_OnActiveTabChanged__DelegateSignature_Params Parms{};

	Parms.Key = Key;
	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}

}


