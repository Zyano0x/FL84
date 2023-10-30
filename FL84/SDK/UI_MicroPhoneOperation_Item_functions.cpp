#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_MicroPhoneOperation_Item.UI_MicroPhoneOperation_Item_C
// (None)

class UClass* UUI_MicroPhoneOperation_Item_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_MicroPhoneOperation_Item_C");

	return Clss;
}


// UI_MicroPhoneOperation_Item_C UI_MicroPhoneOperation_Item.Default__UI_MicroPhoneOperation_Item_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_MicroPhoneOperation_Item_C* UUI_MicroPhoneOperation_Item_C::GetDefaultObj()
{
	static class UUI_MicroPhoneOperation_Item_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_MicroPhoneOperation_Item_C*>(UUI_MicroPhoneOperation_Item_C::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction UI_MicroPhoneOperation_Item.UI_MicroPhoneOperation_Item_C.OnCheckStateChanged_21C10C0243F5E1663031F29C3E4CB942
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               bIsChecked                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UUI_MicroPhoneOperation_Item_C::OnCheckStateChanged_21C10C0243F5E1663031F29C3E4CB942(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MicroPhoneOperation_Item_C", "OnCheckStateChanged_21C10C0243F5E1663031F29C3E4CB942");

	Params::UUI_MicroPhoneOperation_Item_C_OnCheckStateChanged_21C10C0243F5E1663031F29C3E4CB942_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UI_MicroPhoneOperation_Item.UI_MicroPhoneOperation_Item_C.OnCheckStateChanged_787D3A8F47EC52B230DF9E9F9B4E41CF
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               bIsChecked                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UUI_MicroPhoneOperation_Item_C::OnCheckStateChanged_787D3A8F47EC52B230DF9E9F9B4E41CF(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MicroPhoneOperation_Item_C", "OnCheckStateChanged_787D3A8F47EC52B230DF9E9F9B4E41CF");

	Params::UUI_MicroPhoneOperation_Item_C_OnCheckStateChanged_787D3A8F47EC52B230DF9E9F9B4E41CF_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UI_MicroPhoneOperation_Item.UI_MicroPhoneOperation_Item_C.OnCheckStateChanged_EB7718B044B88F485AFBAF90B7A8F0FC
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               bIsChecked                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UUI_MicroPhoneOperation_Item_C::OnCheckStateChanged_EB7718B044B88F485AFBAF90B7A8F0FC(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MicroPhoneOperation_Item_C", "OnCheckStateChanged_EB7718B044B88F485AFBAF90B7A8F0FC");

	Params::UUI_MicroPhoneOperation_Item_C_OnCheckStateChanged_EB7718B044B88F485AFBAF90B7A8F0FC_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UI_MicroPhoneOperation_Item.UI_MicroPhoneOperation_Item_C.OnCheckStateChanged_DDD1F4F94BDDF973F63624BAC5EA1D06
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               bIsChecked                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UUI_MicroPhoneOperation_Item_C::OnCheckStateChanged_DDD1F4F94BDDF973F63624BAC5EA1D06(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MicroPhoneOperation_Item_C", "OnCheckStateChanged_DDD1F4F94BDDF973F63624BAC5EA1D06");

	Params::UUI_MicroPhoneOperation_Item_C_OnCheckStateChanged_DDD1F4F94BDDF973F63624BAC5EA1D06_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MicroPhoneOperation_Item.UI_MicroPhoneOperation_Item_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_MicroPhoneOperation_Item_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MicroPhoneOperation_Item_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MicroPhoneOperation_Item.UI_MicroPhoneOperation_Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_MicroPhoneOperation_Item_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MicroPhoneOperation_Item_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MicroPhoneOperation_Item.UI_MicroPhoneOperation_Item_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_MicroPhoneOperation_Item_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MicroPhoneOperation_Item_C", "GetModuleName");

	Params::UUI_MicroPhoneOperation_Item_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_MicroPhoneOperation_Item.UI_MicroPhoneOperation_Item_C.SetOrder
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OrderId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_1                                   (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_2                                   (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_3                                   (None)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MicroPhoneOperation_Item_C::SetOrder(int32 OrderId, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_3, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MicroPhoneOperation_Item_C", "SetOrder");

	Params::UUI_MicroPhoneOperation_Item_C_SetOrder_Params Parms{};

	Parms.OrderId = OrderId;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_SlateBrush_1 = K2Node_MakeStruct_SlateBrush_1;
	Parms.K2Node_MakeStruct_SlateBrush_2 = K2Node_MakeStruct_SlateBrush_2;
	Parms.K2Node_MakeStruct_SlateBrush_3 = K2Node_MakeStruct_SlateBrush_3;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MicroPhoneOperation_Item.UI_MicroPhoneOperation_Item_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MicroPhoneOperation_Item_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MicroPhoneOperation_Item_C", "PreConstruct");

	Params::UUI_MicroPhoneOperation_Item_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MicroPhoneOperation_Item.UI_MicroPhoneOperation_Item_C.ExecuteUbergraph_UI_MicroPhoneOperation_Item
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MicroPhoneOperation_Item_C::ExecuteUbergraph_UI_MicroPhoneOperation_Item(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MicroPhoneOperation_Item_C", "ExecuteUbergraph_UI_MicroPhoneOperation_Item");

	Params::UUI_MicroPhoneOperation_Item_C_ExecuteUbergraph_UI_MicroPhoneOperation_Item_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


