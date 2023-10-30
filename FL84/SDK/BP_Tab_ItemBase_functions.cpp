#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_Tab_ItemBase.BP_Tab_ItemBase_C
// (None)

class UClass* UBP_Tab_ItemBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Tab_ItemBase_C");

	return Clss;
}


// BP_Tab_ItemBase_C BP_Tab_ItemBase.Default__BP_Tab_ItemBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Tab_ItemBase_C* UBP_Tab_ItemBase_C::GetDefaultObj()
{
	static class UBP_Tab_ItemBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Tab_ItemBase_C*>(UBP_Tab_ItemBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Tab_ItemBase.BP_Tab_ItemBase_C.ReviseWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// class FText                        CallFunc_LocalText2Text_Text                                     (None)

void UBP_Tab_ItemBase_C::ReviseWidget(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class FText CallFunc_LocalText2Text_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Tab_ItemBase_C", "ReviseWidget");

	Params::UBP_Tab_ItemBase_C_ReviseWidget_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.CallFunc_LocalText2Text_Text = CallFunc_LocalText2Text_Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Tab_ItemBase.BP_Tab_ItemBase_C.SetProperties
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_TabItemObj_C*            Obj                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Tab_ItemBase_C::SetProperties(class UBP_TabItemObj_C* Obj)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Tab_ItemBase_C", "SetProperties");

	Params::UBP_Tab_ItemBase_C_SetProperties_Params Parms{};

	Parms.Obj = Obj;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Tab_ItemBase.BP_Tab_ItemBase_C.UpdateWidget
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// class FText                        CallFunc_LocalText2Text_Text                                     (None)

void UBP_Tab_ItemBase_C::UpdateWidget(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class FText CallFunc_LocalText2Text_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Tab_ItemBase_C", "UpdateWidget");

	Params::UBP_Tab_ItemBase_C_UpdateWidget_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.CallFunc_LocalText2Text_Text = CallFunc_LocalText2Text_Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Tab_ItemBase.BP_Tab_ItemBase_C.InitWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USolarRedHint_General_C*     HintWidget                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USolarTextBlock*             Text                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      Icon                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Tab_ItemBase_C::InitWidget(class USolarRedHint_General_C** HintWidget, class USolarTextBlock** Text, class UImage** Icon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Tab_ItemBase_C", "InitWidget");

	Params::UBP_Tab_ItemBase_C_InitWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HintWidget != nullptr)
		*HintWidget = Parms.HintWidget;

	if (Text != nullptr)
		*Text = Parms.Text;

	if (Icon != nullptr)
		*Icon = Parms.Icon;

}


// Function BP_Tab_ItemBase.BP_Tab_ItemBase_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSelected                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Tab_ItemBase_C::SetSelected(bool IsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Tab_ItemBase_C", "SetSelected");

	Params::UBP_Tab_ItemBase_C_SetSelected_Params Parms{};

	Parms.IsSelected = IsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Tab_ItemBase.BP_Tab_ItemBase_C.SetStyle
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_TabStyle              Style                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Tab_ItemBase_C::SetStyle(enum class E_TabStyle Style)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Tab_ItemBase_C", "SetStyle");

	Params::UBP_Tab_ItemBase_C_SetStyle_Params Parms{};

	Parms.Style = Style;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Tab_ItemBase.BP_Tab_ItemBase_C.SetHintData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_HintData                 S_HintData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Tab_ItemBase_C::SetHintData(struct FS_HintData& S_HintData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Tab_ItemBase_C", "SetHintData");

	Params::UBP_Tab_ItemBase_C_SetHintData_Params Parms{};

	Parms.S_HintData = S_HintData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Tab_ItemBase.BP_Tab_ItemBase_C.SetItemSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Tab_ItemBase_C::SetItemSize(const struct FVector2D& Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Tab_ItemBase_C", "SetItemSize");

	Params::UBP_Tab_ItemBase_C_SetItemSize_Params Parms{};

	Parms.Size = Size;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Tab_ItemBase.BP_Tab_ItemBase_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_Tab_ItemBase_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Tab_ItemBase_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Tab_ItemBase.BP_Tab_ItemBase_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Tab_ItemBase_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Tab_ItemBase_C", "BP_OnItemExpansionChanged");

	Params::UBP_Tab_ItemBase_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Tab_ItemBase.BP_Tab_ItemBase_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Tab_ItemBase_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Tab_ItemBase_C", "PreConstruct");

	Params::UBP_Tab_ItemBase_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Tab_ItemBase.BP_Tab_ItemBase_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Tab_ItemBase_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Tab_ItemBase_C", "OnListItemObjectSet");

	Params::UBP_Tab_ItemBase_C_OnListItemObjectSet_Params Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Tab_ItemBase.BP_Tab_ItemBase_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Tab_ItemBase_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Tab_ItemBase_C", "BP_OnItemSelectionChanged");

	Params::UBP_Tab_ItemBase_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Tab_ItemBase.BP_Tab_ItemBase_C.OnRevised
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Tab_ItemBase_C::OnRevised()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Tab_ItemBase_C", "OnRevised");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Tab_ItemBase.BP_Tab_ItemBase_C.OnLocalLangChangedEx
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FString                      InLang                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_Tab_ItemBase_C::OnLocalLangChangedEx(const class FString& InLang)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Tab_ItemBase_C", "OnLocalLangChangedEx");

	Params::UBP_Tab_ItemBase_C_OnLocalLangChangedEx_Params Parms{};

	Parms.InLang = InLang;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Tab_ItemBase.BP_Tab_ItemBase_C.ExecuteUbergraph_BP_Tab_ItemBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USolarRedHint_General_C*     CallFunc_InitWidget_HintWidget                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USolarTextBlock*             CallFunc_InitWidget_Text                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      CallFunc_InitWidget_Icon                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_TabItemObj_C*            K2Node_DynamicCast_AsBP_Tab_Item_Obj                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Event_InLang                                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_LocalText2Text_Text                                     (None)

void UBP_Tab_ItemBase_C::ExecuteUbergraph_BP_Tab_ItemBase(int32 EntryPoint, bool K2Node_Event_bIsExpanded, bool K2Node_Event_IsDesignTime, class USolarRedHint_General_C* CallFunc_InitWidget_HintWidget, class USolarTextBlock* CallFunc_InitWidget_Text, class UImage* CallFunc_InitWidget_Icon, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UObject* K2Node_Event_ListItemObject, bool K2Node_Event_bIsSelected, class UBP_TabItemObj_C* K2Node_DynamicCast_AsBP_Tab_Item_Obj, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_3, const class FString& K2Node_Event_InLang, bool CallFunc_IsValid_ReturnValue_4, class FText CallFunc_LocalText2Text_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Tab_ItemBase_C", "ExecuteUbergraph_BP_Tab_ItemBase");

	Params::UBP_Tab_ItemBase_C_ExecuteUbergraph_BP_Tab_ItemBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_InitWidget_HintWidget = CallFunc_InitWidget_HintWidget;
	Parms.CallFunc_InitWidget_Text = CallFunc_InitWidget_Text;
	Parms.CallFunc_InitWidget_Icon = CallFunc_InitWidget_Icon;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_DynamicCast_AsBP_Tab_Item_Obj = K2Node_DynamicCast_AsBP_Tab_Item_Obj;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_Event_InLang = K2Node_Event_InLang;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_LocalText2Text_Text = CallFunc_LocalText2Text_Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Tab_ItemBase.BP_Tab_ItemBase_C.ItemSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_Tab_ItemBase_C::ItemSelected__DelegateSignature(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Tab_ItemBase_C", "ItemSelected__DelegateSignature");

	Params::UBP_Tab_ItemBase_C_ItemSelected__DelegateSignature_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}

}


