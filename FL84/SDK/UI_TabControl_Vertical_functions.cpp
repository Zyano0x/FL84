#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_TabControl_Vertical.UI_TabControl_Vertical_C
// (None)

class UClass* UUI_TabControl_Vertical_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_TabControl_Vertical_C");

	return Clss;
}


// UI_TabControl_Vertical_C UI_TabControl_Vertical.Default__UI_TabControl_Vertical_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_TabControl_Vertical_C* UUI_TabControl_Vertical_C::GetDefaultObj()
{
	static class UUI_TabControl_Vertical_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_TabControl_Vertical_C*>(UUI_TabControl_Vertical_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_TabControl_Vertical.UI_TabControl_Vertical_C.SetBindWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListView*                   BindList                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListView*                   CallFunc_SetBindWidget_BindList                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TabControl_Vertical_C::SetBindWidget(class UListView** BindList, class UListView* CallFunc_SetBindWidget_BindList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TabControl_Vertical_C", "SetBindWidget");

	Params::UUI_TabControl_Vertical_C_SetBindWidget_Params Parms{};

	Parms.CallFunc_SetBindWidget_BindList = CallFunc_SetBindWidget_BindList;

	UObject::ProcessEvent(Func, &Parms);

	if (BindList != nullptr)
		*BindList = Parms.BindList;

}


// Function UI_TabControl_Vertical.UI_TabControl_Vertical_C.SetStyle
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_TabStyle              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TabControl_Vertical_C::SetStyle(enum class E_TabStyle Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, float K2Node_Select_Default, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TabControl_Vertical_C", "SetStyle");

	Params::UUI_TabControl_Vertical_C_SetStyle_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_TabControl_Vertical.UI_TabControl_Vertical_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_TabControl_Vertical_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TabControl_Vertical_C", "PreConstruct");

	Params::UUI_TabControl_Vertical_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_TabControl_Vertical.UI_TabControl_Vertical_C.ExecuteUbergraph_UI_TabControl_Vertical
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_TabControl_Vertical_C::ExecuteUbergraph_UI_TabControl_Vertical(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TabControl_Vertical_C", "ExecuteUbergraph_UI_TabControl_Vertical");

	Params::UUI_TabControl_Vertical_C_ExecuteUbergraph_UI_TabControl_Vertical_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


