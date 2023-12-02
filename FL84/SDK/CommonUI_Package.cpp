﻿/**
 * Name: FL84
 * Version: 1.15.1.6
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnalogSlider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnalogSlider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.AnalogSlider"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonActionHandlerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonActionHandlerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonActionHandlerInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDAD30
	 * 		Name   -> Function CommonUI.CommonActionWidget.SetInputActions
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FDataTableRowHandle>                 NewInputActions                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonActionWidget::SetInputActions(TArray<struct FDataTableRowHandle> NewInputActions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonActionWidget.SetInputActions"));
		
		UCommonActionWidget_SetInputActions_Params params {};
		params.NewInputActions = NewInputActions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDAB80
	 * 		Name   -> Function CommonUI.CommonActionWidget.SetInputAction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FDataTableRowHandle                         InputActionRow                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCommonActionWidget::SetInputAction(const struct FDataTableRowHandle& InputActionRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonActionWidget.SetInputAction"));
		
		UCommonActionWidget_SetInputAction_Params params {};
		params.InputActionRow = InputActionRow;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDAAD0
	 * 		Name   -> Function CommonUI.CommonActionWidget.SetIconRimBrush
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FSlateBrush                                 InIconRimBrush                                             (Parm, NativeAccessSpecifierPublic)
	 */
	void UCommonActionWidget::SetIconRimBrush(const struct FSlateBrush& InIconRimBrush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonActionWidget.SetIconRimBrush"));
		
		UCommonActionWidget_SetIconRimBrush_Params params {};
		params.InIconRimBrush = InIconRimBrush;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction CommonUI.CommonActionWidget.OnInputMethodChanged__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               bUsingGamepad                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonActionWidget::OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction CommonUI.CommonActionWidget.OnInputMethodChanged__DelegateSignature"));
		
		UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Params params {};
		params.bUsingGamepad = bUsingGamepad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDA650
	 * 		Name   -> Function CommonUI.CommonActionWidget.IsHeldAction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCommonActionWidget::IsHeldAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonActionWidget.IsHeldAction"));
		
		UCommonActionWidget_IsHeldAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD9E10
	 * 		Name   -> Function CommonUI.CommonActionWidget.GetIcon
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FSlateBrush UCommonActionWidget::GetIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonActionWidget.GetIcon"));
		
		UCommonActionWidget_GetIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD9D70
	 * 		Name   -> Function CommonUI.CommonActionWidget.GetDisplayText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UCommonActionWidget::GetDisplayText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonActionWidget.GetDisplayText"));
		
		UCommonActionWidget_GetDisplayText_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonActionWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonActionWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonActionWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE5910
	 * 		Name   -> Function CommonUI.CommonUserWidget.SetConsumePointerInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInConsumePointerInput                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonUserWidget::SetConsumePointerInput(bool bInConsumePointerInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonUserWidget.SetConsumePointerInput"));
		
		UCommonUserWidget_SetConsumePointerInput_Params params {};
		params.bInConsumePointerInput = bInConsumePointerInput;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonUserWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonUserWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonUserWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDA630
	 * 		Name   -> Function CommonUI.CommonActivatableWidget.IsActivated
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCommonActivatableWidget::IsActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonActivatableWidget.IsActivated"));
		
		UCommonActivatableWidget_IsActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD97D0
	 * 		Name   -> Function CommonUI.CommonActivatableWidget.DeactivateWidget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCommonActivatableWidget::DeactivateWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonActivatableWidget.DeactivateWidget"));
		
		UCommonActivatableWidget_DeactivateWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function CommonUI.CommonActivatableWidget.BP_OnHandleBackAction
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	bool UCommonActivatableWidget::BP_OnHandleBackAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonActivatableWidget.BP_OnHandleBackAction"));
		
		UCommonActivatableWidget_BP_OnHandleBackAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function CommonUI.CommonActivatableWidget.BP_OnDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCommonActivatableWidget::BP_OnDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonActivatableWidget.BP_OnDeactivated"));
		
		UCommonActivatableWidget_BP_OnDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function CommonUI.CommonActivatableWidget.BP_OnActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCommonActivatableWidget::BP_OnActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonActivatableWidget.BP_OnActivated"));
		
		UCommonActivatableWidget_BP_OnActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function CommonUI.CommonActivatableWidget.BP_GetDesiredFocusTarget
	 * 		Flags  -> (Event, Protected, BlueprintEvent, Const)
	 */
	class UWidget* UCommonActivatableWidget::BP_GetDesiredFocusTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonActivatableWidget.BP_GetDesiredFocusTarget"));
		
		UCommonActivatableWidget_BP_GetDesiredFocusTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD96D0
	 * 		Name   -> Function CommonUI.CommonActivatableWidget.ActivateWidget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCommonActivatableWidget::ActivateWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonActivatableWidget.ActivateWidget"));
		
		UCommonActivatableWidget_ActivateWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonActivatableWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonActivatableWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonActivatableWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDA810
	 * 		Name   -> Function CommonUI.CommonActivatableWidgetContainerBase.RemoveWidget
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		class UCommonActivatableWidget*                    WidgetToRemove                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonActivatableWidgetContainerBase::RemoveWidget(class UCommonActivatableWidget* WidgetToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonActivatableWidgetContainerBase.RemoveWidget"));
		
		UCommonActivatableWidgetContainerBase_RemoveWidget_Params params {};
		params.WidgetToRemove = WidgetToRemove;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD98C0
	 * 		Name   -> Function CommonUI.CommonActivatableWidgetContainerBase.GetActiveWidget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UCommonActivatableWidget* UCommonActivatableWidgetContainerBase::GetActiveWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonActivatableWidgetContainerBase.GetActiveWidget"));
		
		UCommonActivatableWidgetContainerBase_GetActiveWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD97B0
	 * 		Name   -> Function CommonUI.CommonActivatableWidgetContainerBase.ClearWidgets
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCommonActivatableWidgetContainerBase::ClearWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonActivatableWidgetContainerBase.ClearWidgets"));
		
		UCommonActivatableWidgetContainerBase_ClearWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD96F0
	 * 		Name   -> Function CommonUI.CommonActivatableWidgetContainerBase.BP_AddWidget
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      ActivatableWidgetClass                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCommonActivatableWidget* UCommonActivatableWidgetContainerBase::BP_AddWidget(class UClass* ActivatableWidgetClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonActivatableWidgetContainerBase.BP_AddWidget"));
		
		UCommonActivatableWidgetContainerBase_BP_AddWidget_Params params {};
		params.ActivatableWidgetClass = ActivatableWidgetClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonActivatableWidgetContainerBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonActivatableWidgetContainerBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonActivatableWidgetContainerBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonActivatableWidgetStack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonActivatableWidgetStack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonActivatableWidgetStack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonActivatableWidgetQueue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonActivatableWidgetQueue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonActivatableWidgetQueue"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDA920
	 * 		Name   -> Function CommonUI.CommonAnimatedSwitcher.SetDisableTransitionAnimation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bDisableAnimation                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonAnimatedSwitcher::SetDisableTransitionAnimation(bool bDisableAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonAnimatedSwitcher.SetDisableTransitionAnimation"));
		
		UCommonAnimatedSwitcher_SetDisableTransitionAnimation_Params params {};
		params.bDisableAnimation = bDisableAnimation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDA600
	 * 		Name   -> Function CommonUI.CommonAnimatedSwitcher.HasWidgets
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCommonAnimatedSwitcher::HasWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonAnimatedSwitcher.HasWidgets"));
		
		UCommonAnimatedSwitcher_HasWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD9640
	 * 		Name   -> Function CommonUI.CommonAnimatedSwitcher.ActivatePreviousWidget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bCanWrap                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonAnimatedSwitcher::ActivatePreviousWidget(bool bCanWrap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonAnimatedSwitcher.ActivatePreviousWidget"));
		
		UCommonAnimatedSwitcher_ActivatePreviousWidget_Params params {};
		params.bCanWrap = bCanWrap;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD95B0
	 * 		Name   -> Function CommonUI.CommonAnimatedSwitcher.ActivateNextWidget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bCanWrap                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonAnimatedSwitcher::ActivateNextWidget(bool bCanWrap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonAnimatedSwitcher.ActivateNextWidget"));
		
		UCommonAnimatedSwitcher_ActivateNextWidget_Params params {};
		params.bCanWrap = bCanWrap;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonAnimatedSwitcher.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonAnimatedSwitcher::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonAnimatedSwitcher"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonActivatableWidgetSwitcher.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonActivatableWidgetSwitcher::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonActivatableWidgetSwitcher"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD98F0
	 * 		Name   -> Function CommonUI.CommonBorderStyle.GetBackgroundBrush
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FSlateBrush                                 Brush                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UCommonBorderStyle::GetBackgroundBrush(struct FSlateBrush* Brush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonBorderStyle.GetBackgroundBrush"));
		
		UCommonBorderStyle_GetBackgroundBrush_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Brush != nullptr)
			*Brush = params.Brush;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonBorderStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonBorderStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonBorderStyle"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDB5F0
	 * 		Name   -> Function CommonUI.CommonBorder.SetStyle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      InStyle                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonBorder::SetStyle(class UClass* InStyle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonBorder.SetStyle"));
		
		UCommonBorder_SetStyle_Params params {};
		params.InStyle = InStyle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonBorder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonBorder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonBorder"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDA9B0
	 * 		Name   -> Function CommonUI.CommonBoundActionBar.SetDisplayOwningPlayerActionsOnly
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bShouldOnlyDisplayOwningPlayerActions                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonBoundActionBar::SetDisplayOwningPlayerActionsOnly(bool bShouldOnlyDisplayOwningPlayerActions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonBoundActionBar.SetDisplayOwningPlayerActionsOnly"));
		
		UCommonBoundActionBar_SetDisplayOwningPlayerActionsOnly_Params params {};
		params.bShouldOnlyDisplayOwningPlayerActions = bShouldOnlyDisplayOwningPlayerActions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonBoundActionBar.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonBoundActionBar::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonBoundActionBar"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDB8D0
	 * 		Name   -> Function CommonUI.CommonButtonBase.StopDoubleClickPropagation
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UCommonButtonBase::StopDoubleClickPropagation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.StopDoubleClickPropagation"));
		
		UCommonButtonBase_StopDoubleClickPropagation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDB830
	 * 		Name   -> Function CommonUI.CommonButtonBase.SetTriggeringInputAction
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FDataTableRowHandle                         InputActionRow                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonBase::SetTriggeringInputAction(const struct FDataTableRowHandle& InputActionRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.SetTriggeringInputAction"));
		
		UCommonButtonBase_SetTriggeringInputAction_Params params {};
		params.InputActionRow = InputActionRow;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDB790
	 * 		Name   -> Function CommonUI.CommonButtonBase.SetTriggeredInputAction
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FDataTableRowHandle                         InputActionRow                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonBase::SetTriggeredInputAction(const struct FDataTableRowHandle& InputActionRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.SetTriggeredInputAction"));
		
		UCommonButtonBase_SetTriggeredInputAction_Params params {};
		params.InputActionRow = InputActionRow;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDB710
	 * 		Name   -> Function CommonUI.CommonButtonBase.SetTouchMethod
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EButtonTouchMethod                                 InTouchMethod                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonBase::SetTouchMethod(EButtonTouchMethod InTouchMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.SetTouchMethod"));
		
		UCommonButtonBase_SetTouchMethod_Params params {};
		params.InTouchMethod = InTouchMethod;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDB680
	 * 		Name   -> Function CommonUI.CommonButtonBase.SetStyle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      InStyle                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonBase::SetStyle(class UClass* InStyle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.SetStyle"));
		
		UCommonButtonBase_SetStyle_Params params {};
		params.InStyle = InStyle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDB560
	 * 		Name   -> Function CommonUI.CommonButtonBase.SetShouldUseFallbackDefaultInputAction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInShouldUseFallbackDefaultInputAction                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonBase::SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.SetShouldUseFallbackDefaultInputAction"));
		
		UCommonButtonBase_SetShouldUseFallbackDefaultInputAction_Params params {};
		params.bInShouldUseFallbackDefaultInputAction = bInShouldUseFallbackDefaultInputAction;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDB4D0
	 * 		Name   -> Function CommonUI.CommonButtonBase.SetShouldSelectUponReceivingFocus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInShouldSelectUponReceivingFocus                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonBase::SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.SetShouldSelectUponReceivingFocus"));
		
		UCommonButtonBase_SetShouldSelectUponReceivingFocus_Params params {};
		params.bInShouldSelectUponReceivingFocus = bInShouldSelectUponReceivingFocus;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDB3A0
	 * 		Name   -> Function CommonUI.CommonButtonBase.SetSelectedInternal
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInSelected                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowSound                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bBroadCast                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonBase::SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadCast)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.SetSelectedInternal"));
		
		UCommonButtonBase_SetSelectedInternal_Params params {};
		params.bInSelected = bInSelected;
		params.bAllowSound = bAllowSound;
		params.bBroadCast = bBroadCast;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDB290
	 * 		Name   -> Function CommonUI.CommonButtonBase.SetPressMethod
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EButtonPressMethod                                 InPressMethod                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonBase::SetPressMethod(EButtonPressMethod InPressMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.SetPressMethod"));
		
		UCommonButtonBase_SetPressMethod_Params params {};
		params.InPressMethod = InPressMethod;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDB310
	 * 		Name   -> Function CommonUI.CommonButtonBase.SetPressedSoundOverride
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USoundBase*                                  Sound                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonBase::SetPressedSoundOverride(class USoundBase* Sound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.SetPressedSoundOverride"));
		
		UCommonButtonBase_SetPressedSoundOverride_Params params {};
		params.Sound = Sound;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDB1C0
	 * 		Name   -> Function CommonUI.CommonButtonBase.SetMinDimensions
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InMinWidth                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InMinHeight                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonBase::SetMinDimensions(int32_t InMinWidth, int32_t InMinHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.SetMinDimensions"));
		
		UCommonButtonBase_SetMinDimensions_Params params {};
		params.InMinWidth = InMinWidth;
		params.InMinHeight = InMinHeight;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDB130
	 * 		Name   -> Function CommonUI.CommonButtonBase.SetIsToggleable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInIsToggleable                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonBase::SetIsToggleable(bool bInIsToggleable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.SetIsToggleable"));
		
		UCommonButtonBase_SetIsToggleable_Params params {};
		params.bInIsToggleable = bInIsToggleable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDB060
	 * 		Name   -> Function CommonUI.CommonButtonBase.SetIsSelected
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               InSelected                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bGiveClickFeedback                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonBase::SetIsSelected(bool InSelected, bool bGiveClickFeedback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.SetIsSelected"));
		
		UCommonButtonBase_SetIsSelected_Params params {};
		params.InSelected = InSelected;
		params.bGiveClickFeedback = bGiveClickFeedback;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDAFD0
	 * 		Name   -> Function CommonUI.CommonButtonBase.SetIsSelectable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInIsSelectable                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonBase::SetIsSelectable(bool bInIsSelectable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.SetIsSelectable"));
		
		UCommonButtonBase_SetIsSelectable_Params params {};
		params.bInIsSelectable = bInIsSelectable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDAF40
	 * 		Name   -> Function CommonUI.CommonButtonBase.SetIsInteractionEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInIsInteractionEnabled                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonBase::SetIsInteractionEnabled(bool bInIsInteractionEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.SetIsInteractionEnabled"));
		
		UCommonButtonBase_SetIsInteractionEnabled_Params params {};
		params.bInIsInteractionEnabled = bInIsInteractionEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDAEB0
	 * 		Name   -> Function CommonUI.CommonButtonBase.SetIsInteractableWhenSelected
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInInteractableWhenSelected                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonBase::SetIsInteractableWhenSelected(bool bInInteractableWhenSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.SetIsInteractableWhenSelected"));
		
		UCommonButtonBase_SetIsInteractableWhenSelected_Params params {};
		params.bInInteractableWhenSelected = bInInteractableWhenSelected;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDAE20
	 * 		Name   -> Function CommonUI.CommonButtonBase.SetIsFocusable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInIsFocusable                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonBase::SetIsFocusable(bool bInIsFocusable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.SetIsFocusable"));
		
		UCommonButtonBase_SetIsFocusable_Params params {};
		params.bInIsFocusable = bInIsFocusable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDAC20
	 * 		Name   -> Function CommonUI.CommonButtonBase.SetInputActionProgressMaterial
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSlateBrush                                 InProgressMaterialBrush                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        InProgressMaterialParam                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonBase::SetInputActionProgressMaterial(const struct FSlateBrush& InProgressMaterialBrush, const class FName& InProgressMaterialParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.SetInputActionProgressMaterial"));
		
		UCommonButtonBase_SetInputActionProgressMaterial_Params params {};
		params.InProgressMaterialBrush = InProgressMaterialBrush;
		params.InProgressMaterialParam = InProgressMaterialParam;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDAA40
	 * 		Name   -> Function CommonUI.CommonButtonBase.SetHoveredSoundOverride
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USoundBase*                                  Sound                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonBase::SetHoveredSoundOverride(class USoundBase* Sound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.SetHoveredSoundOverride"));
		
		UCommonButtonBase_SetHoveredSoundOverride_Params params {};
		params.Sound = Sound;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDA8A0
	 * 		Name   -> Function CommonUI.CommonButtonBase.SetClickMethod
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EButtonClickMethod                                 InClickMethod                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonBase::SetClickMethod(EButtonClickMethod InClickMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.SetClickMethod"));
		
		UCommonButtonBase_SetClickMethod_Params params {};
		params.InClickMethod = InClickMethod;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function CommonUI.CommonButtonBase.OnTriggeredInputActionChanged
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FDataTableRowHandle                         NewTriggeredAction                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonBase::OnTriggeredInputActionChanged(const struct FDataTableRowHandle& NewTriggeredAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.OnTriggeredInputActionChanged"));
		
		UCommonButtonBase_OnTriggeredInputActionChanged_Params params {};
		params.NewTriggeredAction = NewTriggeredAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDA790
	 * 		Name   -> Function CommonUI.CommonButtonBase.OnInputMethodChanged
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		ECommonInputType                                   CurrentInputType                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonBase::OnInputMethodChanged(ECommonInputType CurrentInputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.OnInputMethodChanged"));
		
		UCommonButtonBase_OnInputMethodChanged_Params params {};
		params.CurrentInputType = CurrentInputType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function CommonUI.CommonButtonBase.OnCurrentTextStyleChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCommonButtonBase::OnCurrentTextStyleChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.OnCurrentTextStyleChanged"));
		
		UCommonButtonBase_OnCurrentTextStyleChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function CommonUI.CommonButtonBase.OnActionProgress
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              HeldPercent                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonBase::OnActionProgress(float HeldPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.OnActionProgress"));
		
		UCommonButtonBase_OnActionProgress_Params params {};
		params.HeldPercent = HeldPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function CommonUI.CommonButtonBase.OnActionComplete
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCommonButtonBase::OnActionComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.OnActionComplete"));
		
		UCommonButtonBase_OnActionComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDA700
	 * 		Name   -> Function CommonUI.CommonButtonBase.NativeOnActionProgress
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		float                                              HeldPercent                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonBase::NativeOnActionProgress(float HeldPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.NativeOnActionProgress"));
		
		UCommonButtonBase_NativeOnActionProgress_Params params {};
		params.HeldPercent = HeldPercent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDA6E0
	 * 		Name   -> Function CommonUI.CommonButtonBase.NativeOnActionComplete
	 * 		Flags  -> (Native, Protected)
	 */
	void UCommonButtonBase::NativeOnActionComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.NativeOnActionComplete"));
		
		UCommonButtonBase_NativeOnActionComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDA6B0
	 * 		Name   -> Function CommonUI.CommonButtonBase.IsPressed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCommonButtonBase::IsPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.IsPressed"));
		
		UCommonButtonBase_IsPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDA680
	 * 		Name   -> Function CommonUI.CommonButtonBase.IsInteractionEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCommonButtonBase::IsInteractionEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.IsInteractionEnabled"));
		
		UCommonButtonBase_IsInteractionEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDA560
	 * 		Name   -> Function CommonUI.CommonButtonBase.HandleTriggeringActionCommited
	 * 		Flags  -> (Native, Protected, HasOutParms)
	 * Parameters:
	 * 		bool                                               bPassThrough                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonBase::HandleTriggeringActionCommited(bool* bPassThrough)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.HandleTriggeringActionCommited"));
		
		UCommonButtonBase_HandleTriggeringActionCommited_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bPassThrough != nullptr)
			*bPassThrough = params.bPassThrough;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDA540
	 * 		Name   -> Function CommonUI.CommonButtonBase.HandleFocusReceived
	 * 		Flags  -> (Native, Protected)
	 */
	void UCommonButtonBase::HandleFocusReceived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.HandleFocusReceived"));
		
		UCommonButtonBase_HandleFocusReceived_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDA520
	 * 		Name   -> Function CommonUI.CommonButtonBase.HandleButtonReleased
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UCommonButtonBase::HandleButtonReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.HandleButtonReleased"));
		
		UCommonButtonBase_HandleButtonReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDA500
	 * 		Name   -> Function CommonUI.CommonButtonBase.HandleButtonPressed
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UCommonButtonBase::HandleButtonPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.HandleButtonPressed"));
		
		UCommonButtonBase_HandleButtonPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDA4E0
	 * 		Name   -> Function CommonUI.CommonButtonBase.HandleButtonClicked
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UCommonButtonBase::HandleButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.HandleButtonClicked"));
		
		UCommonButtonBase_HandleButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDA4B0
	 * 		Name   -> Function CommonUI.CommonButtonBase.GetStyle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UCommonButtonStyle* UCommonButtonBase::GetStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.GetStyle"));
		
		UCommonButtonBase_GetStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDA480
	 * 		Name   -> Function CommonUI.CommonButtonBase.GetSingleMaterialStyleMID
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UMaterialInstanceDynamic* UCommonButtonBase::GetSingleMaterialStyleMID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.GetSingleMaterialStyleMID"));
		
		UCommonButtonBase_GetSingleMaterialStyleMID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDA450
	 * 		Name   -> Function CommonUI.CommonButtonBase.GetShouldSelectUponReceivingFocus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCommonButtonBase::GetShouldSelectUponReceivingFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.GetShouldSelectUponReceivingFocus"));
		
		UCommonButtonBase_GetShouldSelectUponReceivingFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDA1B0
	 * 		Name   -> Function CommonUI.CommonButtonBase.GetSelected
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCommonButtonBase::GetSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.GetSelected"));
		
		UCommonButtonBase_GetSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD9F10
	 * 		Name   -> Function CommonUI.CommonButtonBase.GetIsFocusable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCommonButtonBase::GetIsFocusable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.GetIsFocusable"));
		
		UCommonButtonBase_GetIsFocusable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD9E60
	 * 		Name   -> Function CommonUI.CommonButtonBase.GetInputAction
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FDataTableRowHandle                         InputActionRow                                             (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UCommonButtonBase::GetInputAction(struct FDataTableRowHandle* InputActionRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.GetInputAction"));
		
		UCommonButtonBase_GetInputAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InputActionRow != nullptr)
			*InputActionRow = params.InputActionRow;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD9BB0
	 * 		Name   -> Function CommonUI.CommonButtonBase.GetCurrentTextStyleClass
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UClass* UCommonButtonBase::GetCurrentTextStyleClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.GetCurrentTextStyleClass"));
		
		UCommonButtonBase_GetCurrentTextStyleClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD9B80
	 * 		Name   -> Function CommonUI.CommonButtonBase.GetCurrentTextStyle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UCommonTextStyle* UCommonButtonBase::GetCurrentTextStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.GetCurrentTextStyle"));
		
		UCommonButtonBase_GetCurrentTextStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD9AE0
	 * 		Name   -> Function CommonUI.CommonButtonBase.GetCurrentCustomPadding
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FMargin                                     OutCustomPadding                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonBase::GetCurrentCustomPadding(struct FMargin* OutCustomPadding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.GetCurrentCustomPadding"));
		
		UCommonButtonBase_GetCurrentCustomPadding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCustomPadding != nullptr)
			*OutCustomPadding = params.OutCustomPadding;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD9A40
	 * 		Name   -> Function CommonUI.CommonButtonBase.GetCurrentButtonPadding
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FMargin                                     OutButtonPadding                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonBase::GetCurrentButtonPadding(struct FMargin* OutButtonPadding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.GetCurrentButtonPadding"));
		
		UCommonButtonBase_GetCurrentButtonPadding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutButtonPadding != nullptr)
			*OutButtonPadding = params.OutButtonPadding;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD97F0
	 * 		Name   -> Function CommonUI.CommonButtonBase.DisableButtonWithReason
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        DisabledReason                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonBase::DisableButtonWithReason(const class FText& DisabledReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.DisableButtonWithReason"));
		
		UCommonButtonBase_DisableButtonWithReason_Params params {};
		params.DisabledReason = DisabledReason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD9790
	 * 		Name   -> Function CommonUI.CommonButtonBase.ClearSelection
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCommonButtonBase::ClearSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.ClearSelection"));
		
		UCommonButtonBase_ClearSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function CommonUI.CommonButtonBase.BP_OnUnhovered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCommonButtonBase::BP_OnUnhovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.BP_OnUnhovered"));
		
		UCommonButtonBase_BP_OnUnhovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function CommonUI.CommonButtonBase.BP_OnSelected
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCommonButtonBase::BP_OnSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.BP_OnSelected"));
		
		UCommonButtonBase_BP_OnSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function CommonUI.CommonButtonBase.BP_OnHovered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCommonButtonBase::BP_OnHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.BP_OnHovered"));
		
		UCommonButtonBase_BP_OnHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function CommonUI.CommonButtonBase.BP_OnEnabled
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCommonButtonBase::BP_OnEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.BP_OnEnabled"));
		
		UCommonButtonBase_BP_OnEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function CommonUI.CommonButtonBase.BP_OnDoubleClicked
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCommonButtonBase::BP_OnDoubleClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.BP_OnDoubleClicked"));
		
		UCommonButtonBase_BP_OnDoubleClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function CommonUI.CommonButtonBase.BP_OnDisabled
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCommonButtonBase::BP_OnDisabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.BP_OnDisabled"));
		
		UCommonButtonBase_BP_OnDisabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function CommonUI.CommonButtonBase.BP_OnDeselected
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCommonButtonBase::BP_OnDeselected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.BP_OnDeselected"));
		
		UCommonButtonBase_BP_OnDeselected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function CommonUI.CommonButtonBase.BP_OnClicked
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCommonButtonBase::BP_OnClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonBase.BP_OnClicked"));
		
		UCommonButtonBase_BP_OnClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonButtonBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonButtonBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonButtonBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function CommonUI.CommonBoundActionButton.OnUpdateInputAction
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCommonBoundActionButton::OnUpdateInputAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonBoundActionButton.OnUpdateInputAction"));
		
		UCommonBoundActionButton_OnUpdateInputAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonBoundActionButton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonBoundActionButton::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonBoundActionButton"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDA420
	 * 		Name   -> Function CommonUI.CommonButtonStyle.GetSelectedTextStyle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UCommonTextStyle* UCommonButtonStyle::GetSelectedTextStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonStyle.GetSelectedTextStyle"));
		
		UCommonButtonStyle_GetSelectedTextStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDA370
	 * 		Name   -> Function CommonUI.CommonButtonStyle.GetSelectedPressedBrush
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FSlateBrush                                 Brush                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonStyle::GetSelectedPressedBrush(struct FSlateBrush* Brush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonStyle.GetSelectedPressedBrush"));
		
		UCommonButtonStyle_GetSelectedPressedBrush_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Brush != nullptr)
			*Brush = params.Brush;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDA340
	 * 		Name   -> Function CommonUI.CommonButtonStyle.GetSelectedHoveredTextStyle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UCommonTextStyle* UCommonButtonStyle::GetSelectedHoveredTextStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonStyle.GetSelectedHoveredTextStyle"));
		
		UCommonButtonStyle_GetSelectedHoveredTextStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDA290
	 * 		Name   -> Function CommonUI.CommonButtonStyle.GetSelectedHoveredBrush
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FSlateBrush                                 Brush                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonStyle::GetSelectedHoveredBrush(struct FSlateBrush* Brush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonStyle.GetSelectedHoveredBrush"));
		
		UCommonButtonStyle_GetSelectedHoveredBrush_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Brush != nullptr)
			*Brush = params.Brush;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDA1E0
	 * 		Name   -> Function CommonUI.CommonButtonStyle.GetSelectedBaseBrush
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FSlateBrush                                 Brush                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonStyle::GetSelectedBaseBrush(struct FSlateBrush* Brush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonStyle.GetSelectedBaseBrush"));
		
		UCommonButtonStyle_GetSelectedBaseBrush_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Brush != nullptr)
			*Brush = params.Brush;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDA180
	 * 		Name   -> Function CommonUI.CommonButtonStyle.GetNormalTextStyle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UCommonTextStyle* UCommonButtonStyle::GetNormalTextStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonStyle.GetNormalTextStyle"));
		
		UCommonButtonStyle_GetNormalTextStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDA0D0
	 * 		Name   -> Function CommonUI.CommonButtonStyle.GetNormalPressedBrush
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FSlateBrush                                 Brush                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonStyle::GetNormalPressedBrush(struct FSlateBrush* Brush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonStyle.GetNormalPressedBrush"));
		
		UCommonButtonStyle_GetNormalPressedBrush_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Brush != nullptr)
			*Brush = params.Brush;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDA0A0
	 * 		Name   -> Function CommonUI.CommonButtonStyle.GetNormalHoveredTextStyle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UCommonTextStyle* UCommonButtonStyle::GetNormalHoveredTextStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonStyle.GetNormalHoveredTextStyle"));
		
		UCommonButtonStyle_GetNormalHoveredTextStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD9FF0
	 * 		Name   -> Function CommonUI.CommonButtonStyle.GetNormalHoveredBrush
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FSlateBrush                                 Brush                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonStyle::GetNormalHoveredBrush(struct FSlateBrush* Brush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonStyle.GetNormalHoveredBrush"));
		
		UCommonButtonStyle_GetNormalHoveredBrush_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Brush != nullptr)
			*Brush = params.Brush;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD9F40
	 * 		Name   -> Function CommonUI.CommonButtonStyle.GetNormalBaseBrush
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FSlateBrush                                 Brush                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonStyle::GetNormalBaseBrush(struct FSlateBrush* Brush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonStyle.GetNormalBaseBrush"));
		
		UCommonButtonStyle_GetNormalBaseBrush_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Brush != nullptr)
			*Brush = params.Brush;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD98F0
	 * 		Name   -> Function CommonUI.CommonButtonStyle.GetMaterialBrush
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FSlateBrush                                 Brush                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonStyle::GetMaterialBrush(struct FSlateBrush* Brush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonStyle.GetMaterialBrush"));
		
		UCommonButtonStyle_GetMaterialBrush_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Brush != nullptr)
			*Brush = params.Brush;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD9D40
	 * 		Name   -> Function CommonUI.CommonButtonStyle.GetDisabledTextStyle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UCommonTextStyle* UCommonButtonStyle::GetDisabledTextStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonStyle.GetDisabledTextStyle"));
		
		UCommonButtonStyle_GetDisabledTextStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD9C90
	 * 		Name   -> Function CommonUI.CommonButtonStyle.GetDisabledBrush
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FSlateBrush                                 Brush                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonStyle::GetDisabledBrush(struct FSlateBrush* Brush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonStyle.GetDisabledBrush"));
		
		UCommonButtonStyle_GetDisabledBrush_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Brush != nullptr)
			*Brush = params.Brush;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD9BF0
	 * 		Name   -> Function CommonUI.CommonButtonStyle.GetCustomPadding
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FMargin                                     OutCustomPadding                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonStyle::GetCustomPadding(struct FMargin* OutCustomPadding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonStyle.GetCustomPadding"));
		
		UCommonButtonStyle_GetCustomPadding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCustomPadding != nullptr)
			*OutCustomPadding = params.OutCustomPadding;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BD99A0
	 * 		Name   -> Function CommonUI.CommonButtonStyle.GetButtonPadding
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FMargin                                     OutButtonPadding                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonStyle::GetButtonPadding(struct FMargin* OutButtonPadding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonStyle.GetButtonPadding"));
		
		UCommonButtonStyle_GetButtonPadding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutButtonPadding != nullptr)
			*OutButtonPadding = params.OutButtonPadding;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonButtonStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonButtonStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonButtonStyle"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonButtonInternalBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonButtonInternalBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonButtonInternalBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE5620
	 * 		Name   -> Function CommonUI.CommonWidgetGroupBase.RemoveWidget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWidget*                                     InWidget                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonWidgetGroupBase::RemoveWidget(class UWidget* InWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonWidgetGroupBase.RemoveWidget"));
		
		UCommonWidgetGroupBase_RemoveWidget_Params params {};
		params.InWidget = InWidget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE5600
	 * 		Name   -> Function CommonUI.CommonWidgetGroupBase.RemoveAll
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCommonWidgetGroupBase::RemoveAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonWidgetGroupBase.RemoveAll"));
		
		UCommonWidgetGroupBase_RemoveAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE49B0
	 * 		Name   -> Function CommonUI.CommonWidgetGroupBase.AddWidget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWidget*                                     InWidget                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonWidgetGroupBase::AddWidget(class UWidget* InWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonWidgetGroupBase.AddWidget"));
		
		UCommonWidgetGroupBase_AddWidget_Params params {};
		params.InWidget = InWidget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonWidgetGroupBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonWidgetGroupBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonWidgetGroupBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE0BF0
	 * 		Name   -> Function CommonUI.CommonButtonGroupBase.SetSelectionRequired
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bRequireSelection                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonGroupBase::SetSelectionRequired(bool bRequireSelection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonGroupBase.SetSelectionRequired"));
		
		UCommonButtonGroupBase_SetSelectionRequired_Params params {};
		params.bRequireSelection = bRequireSelection;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDFE80
	 * 		Name   -> Function CommonUI.CommonButtonGroupBase.SelectPreviousButton
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bAllowWrap                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonGroupBase::SelectPreviousButton(bool bAllowWrap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonGroupBase.SelectPreviousButton"));
		
		UCommonButtonGroupBase_SelectPreviousButton_Params params {};
		params.bAllowWrap = bAllowWrap;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDFDF0
	 * 		Name   -> Function CommonUI.CommonButtonGroupBase.SelectNextButton
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bAllowWrap                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonGroupBase::SelectNextButton(bool bAllowWrap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonGroupBase.SelectNextButton"));
		
		UCommonButtonGroupBase_SelectNextButton_Params params {};
		params.bAllowWrap = bAllowWrap;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDFD60
	 * 		Name   -> Function CommonUI.CommonButtonGroupBase.SelectButtonAtIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            ButtonIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonGroupBase::SelectButtonAtIndex(int32_t ButtonIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonGroupBase.SelectButtonAtIndex"));
		
		UCommonButtonGroupBase_SelectButtonAtIndex_Params params {};
		params.ButtonIndex = ButtonIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDF950
	 * 		Name   -> Function CommonUI.CommonButtonGroupBase.OnSelectionStateChangedBase
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		class UCommonButtonBase*                           BaseButton                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsSelected                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonGroupBase::OnSelectionStateChangedBase(class UCommonButtonBase* BaseButton, bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonGroupBase.OnSelectionStateChangedBase"));
		
		UCommonButtonGroupBase_OnSelectionStateChangedBase_Params params {};
		params.BaseButton = BaseButton;
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDF8A0
	 * 		Name   -> Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseDoubleClicked
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		class UCommonButtonBase*                           BaseButton                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonGroupBase::OnHandleButtonBaseDoubleClicked(class UCommonButtonBase* BaseButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseDoubleClicked"));
		
		UCommonButtonGroupBase_OnHandleButtonBaseDoubleClicked_Params params {};
		params.BaseButton = BaseButton;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDF810
	 * 		Name   -> Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseClicked
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		class UCommonButtonBase*                           BaseButton                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonGroupBase::OnHandleButtonBaseClicked(class UCommonButtonBase* BaseButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseClicked"));
		
		UCommonButtonGroupBase_OnHandleButtonBaseClicked_Params params {};
		params.BaseButton = BaseButton;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDF780
	 * 		Name   -> Function CommonUI.CommonButtonGroupBase.OnButtonBaseUnhovered
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		class UCommonButtonBase*                           BaseButton                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonGroupBase::OnButtonBaseUnhovered(class UCommonButtonBase* BaseButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonGroupBase.OnButtonBaseUnhovered"));
		
		UCommonButtonGroupBase_OnButtonBaseUnhovered_Params params {};
		params.BaseButton = BaseButton;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDF6F0
	 * 		Name   -> Function CommonUI.CommonButtonGroupBase.OnButtonBaseHovered
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		class UCommonButtonBase*                           BaseButton                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonButtonGroupBase::OnButtonBaseHovered(class UCommonButtonBase* BaseButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonGroupBase.OnButtonBaseHovered"));
		
		UCommonButtonGroupBase_OnButtonBaseHovered_Params params {};
		params.BaseButton = BaseButton;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDF480
	 * 		Name   -> Function CommonUI.CommonButtonGroupBase.HasAnyButtons
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCommonButtonGroupBase::HasAnyButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonGroupBase.HasAnyButtons"));
		
		UCommonButtonGroupBase_HasAnyButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDEE30
	 * 		Name   -> Function CommonUI.CommonButtonGroupBase.GetSelectedButtonIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UCommonButtonGroupBase::GetSelectedButtonIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonGroupBase.GetSelectedButtonIndex"));
		
		UCommonButtonGroupBase_GetSelectedButtonIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDEE00
	 * 		Name   -> Function CommonUI.CommonButtonGroupBase.GetSelectedButtonBase
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UCommonButtonBase* UCommonButtonGroupBase::GetSelectedButtonBase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonGroupBase.GetSelectedButtonBase"));
		
		UCommonButtonGroupBase_GetSelectedButtonBase_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDEDA0
	 * 		Name   -> Function CommonUI.CommonButtonGroupBase.GetHoveredButtonIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UCommonButtonGroupBase::GetHoveredButtonIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonGroupBase.GetHoveredButtonIndex"));
		
		UCommonButtonGroupBase_GetHoveredButtonIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDED10
	 * 		Name   -> Function CommonUI.CommonButtonGroupBase.GetButtonCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UCommonButtonGroupBase::GetButtonCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonGroupBase.GetButtonCount"));
		
		UCommonButtonGroupBase_GetButtonCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDEC70
	 * 		Name   -> Function CommonUI.CommonButtonGroupBase.GetButtonBaseAtIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCommonButtonBase* UCommonButtonGroupBase::GetButtonBaseAtIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonGroupBase.GetButtonBaseAtIndex"));
		
		UCommonButtonGroupBase_GetButtonBaseAtIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDEBB0
	 * 		Name   -> Function CommonUI.CommonButtonGroupBase.FindButtonIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UCommonButtonBase*                           ButtonToFind                                               (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UCommonButtonGroupBase::FindButtonIndex(class UCommonButtonBase* ButtonToFind)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonGroupBase.FindButtonIndex"));
		
		UCommonButtonGroupBase_FindButtonIndex_Params params {};
		params.ButtonToFind = ButtonToFind;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDEA80
	 * 		Name   -> Function CommonUI.CommonButtonGroupBase.DeselectAll
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCommonButtonGroupBase::DeselectAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonButtonGroupBase.DeselectAll"));
		
		UCommonButtonGroupBase_DeselectAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonButtonGroupBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonButtonGroupBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonButtonGroupBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonCustomNavigation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonCustomNavigation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonCustomNavigation"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE5B50
	 * 		Name   -> Function CommonUI.CommonTextBlock.SetWrapTextWidth
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InWrapTextAt                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonTextBlock::SetWrapTextWidth(int32_t InWrapTextAt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonTextBlock.SetWrapTextWidth"));
		
		UCommonTextBlock_SetWrapTextWidth_Params params {};
		params.InWrapTextAt = InWrapTextAt;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE5AC0
	 * 		Name   -> Function CommonUI.CommonTextBlock.SetTextCase
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bUseAllCaps                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonTextBlock::SetTextCase(bool bUseAllCaps)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonTextBlock.SetTextCase"));
		
		UCommonTextBlock_SetTextCase_Params params {};
		params.bUseAllCaps = bUseAllCaps;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE5A30
	 * 		Name   -> Function CommonUI.CommonTextBlock.SetStyle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      InStyle                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonTextBlock::SetStyle(class UClass* InStyle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonTextBlock.SetStyle"));
		
		UCommonTextBlock_SetStyle_Params params {};
		params.InStyle = InStyle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE56B0
	 * 		Name   -> Function CommonUI.CommonTextBlock.ResetScrollState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCommonTextBlock::ResetScrollState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonTextBlock.ResetScrollState"));
		
		UCommonTextBlock_ResetScrollState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonTextBlock.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonTextBlock::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonTextBlock"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE0EF0
	 * 		Name   -> Function CommonUI.CommonDateTimeTextBlock.SetTimespanValue
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FTimespan                                   InTimespan                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonDateTimeTextBlock::SetTimespanValue(const struct FTimespan& InTimespan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonDateTimeTextBlock.SetTimespanValue"));
		
		UCommonDateTimeTextBlock_SetTimespanValue_Params params {};
		params.InTimespan = InTimespan;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE0420
	 * 		Name   -> Function CommonUI.CommonDateTimeTextBlock.SetDateTimeValue
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FDateTime                                   InDateTime                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShowAsCountdown                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InRefreshDelay                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonDateTimeTextBlock::SetDateTimeValue(const struct FDateTime& InDateTime, bool bShowAsCountdown, float InRefreshDelay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonDateTimeTextBlock.SetDateTimeValue"));
		
		UCommonDateTimeTextBlock_SetDateTimeValue_Params params {};
		params.InDateTime = InDateTime;
		params.bShowAsCountdown = bShowAsCountdown;
		params.InRefreshDelay = InRefreshDelay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE02C0
	 * 		Name   -> Function CommonUI.CommonDateTimeTextBlock.SetCountDownCompletionText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        InCompletionText                                           (ConstParm, Parm, NativeAccessSpecifierPublic)
	 */
	void UCommonDateTimeTextBlock::SetCountDownCompletionText(const class FText& InCompletionText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonDateTimeTextBlock.SetCountDownCompletionText"));
		
		UCommonDateTimeTextBlock_SetCountDownCompletionText_Params params {};
		params.InCompletionText = InCompletionText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDED60
	 * 		Name   -> Function CommonUI.CommonDateTimeTextBlock.GetDateTime
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FDateTime UCommonDateTimeTextBlock::GetDateTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonDateTimeTextBlock.GetDateTime"));
		
		UCommonDateTimeTextBlock_GetDateTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonDateTimeTextBlock.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonDateTimeTextBlock::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonDateTimeTextBlock"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonGameViewportClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonGameViewportClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonGameViewportClient"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonHierarchicalScrollBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonHierarchicalScrollBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonHierarchicalScrollBox"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE09C0
	 * 		Name   -> Function CommonUI.CommonLazyImage.SetMaterialTextureParamName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        TextureParamName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonLazyImage::SetMaterialTextureParamName(const class FName& TextureParamName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonLazyImage.SetMaterialTextureParamName"));
		
		UCommonLazyImage_SetMaterialTextureParamName_Params params {};
		params.TextureParamName = TextureParamName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE01B0
	 * 		Name   -> Function CommonUI.CommonLazyImage.SetBrushFromLazyTexture
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bMatchSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonLazyImage::SetBrushFromLazyTexture(bool bMatchSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonLazyImage.SetBrushFromLazyTexture"));
		
		UCommonLazyImage_SetBrushFromLazyTexture_Params params {};
		params.bMatchSize = bMatchSize;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE00F0
	 * 		Name   -> Function CommonUI.CommonLazyImage.SetBrushFromLazyMaterial
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 */
	void UCommonLazyImage::SetBrushFromLazyMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonLazyImage.SetBrushFromLazyMaterial"));
		
		UCommonLazyImage_SetBrushFromLazyMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDFFE0
	 * 		Name   -> Function CommonUI.CommonLazyImage.SetBrushFromLazyDisplayAsset
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bMatchTextureSize                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonLazyImage::SetBrushFromLazyDisplayAsset(bool bMatchTextureSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonLazyImage.SetBrushFromLazyDisplayAsset"));
		
		UCommonLazyImage_SetBrushFromLazyDisplayAsset_Params params {};
		params.bMatchTextureSize = bMatchTextureSize;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDF640
	 * 		Name   -> Function CommonUI.CommonLazyImage.IsLoading
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCommonLazyImage::IsLoading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonLazyImage.IsLoading"));
		
		UCommonLazyImage_IsLoading_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonLazyImage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonLazyImage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonLazyImage"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE06C0
	 * 		Name   -> Function CommonUI.CommonLazyWidget.SetLazyContent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCommonLazyWidget::SetLazyContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonLazyWidget.SetLazyContent"));
		
		UCommonLazyWidget_SetLazyContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDF670
	 * 		Name   -> Function CommonUI.CommonLazyWidget.IsLoading
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCommonLazyWidget::IsLoading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonLazyWidget.IsLoading"));
		
		UCommonLazyWidget_IsLoading_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDED40
	 * 		Name   -> Function CommonUI.CommonLazyWidget.GetContent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UUserWidget* UCommonLazyWidget::GetContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonLazyWidget.GetContent"));
		
		UCommonLazyWidget_GetContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonLazyWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonLazyWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonLazyWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE0530
	 * 		Name   -> Function CommonUI.CommonListView.SetEntrySpacing
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InEntrySpacing                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonListView::SetEntrySpacing(float InEntrySpacing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonListView.SetEntrySpacing"));
		
		UCommonListView_SetEntrySpacing_Params params {};
		params.InEntrySpacing = InEntrySpacing;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonListView.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonListView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonListView"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE0F70
	 * 		Name   -> Function CommonUI.LoadGuardSlot.SetVerticalAlignment
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EVerticalAlignment                                 InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoadGuardSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.LoadGuardSlot.SetVerticalAlignment"));
		
		ULoadGuardSlot_SetVerticalAlignment_Params params {};
		params.InVerticalAlignment = InVerticalAlignment;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE0AD0
	 * 		Name   -> Function CommonUI.LoadGuardSlot.SetPadding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULoadGuardSlot::SetPadding(const struct FMargin& InPadding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.LoadGuardSlot.SetPadding"));
		
		ULoadGuardSlot_SetPadding_Params params {};
		params.InPadding = InPadding;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE05B0
	 * 		Name   -> Function CommonUI.LoadGuardSlot.SetHorizontalAlignment
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EHorizontalAlignment                               InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoadGuardSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.LoadGuardSlot.SetHorizontalAlignment"));
		
		ULoadGuardSlot_SetHorizontalAlignment_Params params {};
		params.InHorizontalAlignment = InHorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoadGuardSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadGuardSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.LoadGuardSlot"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE08F0
	 * 		Name   -> Function CommonUI.CommonLoadGuard.SetLoadingText
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        InLoadingText                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCommonLoadGuard::SetLoadingText(const class FText& InLoadingText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonLoadGuard.SetLoadingText"));
		
		UCommonLoadGuard_SetLoadingText_Params params {};
		params.InLoadingText = InLoadingText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE0630
	 * 		Name   -> Function CommonUI.CommonLoadGuard.SetIsLoading
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInIsLoading                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonLoadGuard::SetIsLoading(bool bInIsLoading)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonLoadGuard.SetIsLoading"));
		
		UCommonLoadGuard_SetIsLoading_Params params {};
		params.bInIsLoading = bInIsLoading;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction CommonUI.CommonLoadGuard.OnAssetLoaded__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonLoadGuard::OnAssetLoaded__DelegateSignature(class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction CommonUI.CommonLoadGuard.OnAssetLoaded__DelegateSignature"));
		
		UCommonLoadGuard_OnAssetLoaded__DelegateSignature_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDF6A0
	 * 		Name   -> Function CommonUI.CommonLoadGuard.IsLoading
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCommonLoadGuard::IsLoading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonLoadGuard.IsLoading"));
		
		UCommonLoadGuard_IsLoading_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDE950
	 * 		Name   -> Function CommonUI.CommonLoadGuard.BP_GuardAndLoadAsset
	 * 		Flags  -> (Final, Native, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              OnAssetLoaded                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCommonLoadGuard::BP_GuardAndLoadAsset(const class FScriptDelegate& OnAssetLoaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonLoadGuard.BP_GuardAndLoadAsset"));
		
		UCommonLoadGuard_BP_GuardAndLoadAsset_Params params {};
		params.OnAssetLoaded = OnAssetLoaded;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonLoadGuard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonLoadGuard::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonLoadGuard"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE0A50
	 * 		Name   -> Function CommonUI.CommonNumericTextBlock.SetNumericType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ECommonNumericType                                 InNumericType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonNumericTextBlock::SetNumericType(ECommonNumericType InNumericType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonNumericTextBlock.SetNumericType"));
		
		UCommonNumericTextBlock_SetNumericType_Params params {};
		params.InNumericType = InNumericType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE03A0
	 * 		Name   -> Function CommonUI.CommonNumericTextBlock.SetCurrentValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NewValue                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonNumericTextBlock::SetCurrentValue(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonNumericTextBlock.SetCurrentValue"));
		
		UCommonNumericTextBlock_SetCurrentValue_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction CommonUI.CommonNumericTextBlock.OnOutro__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UCommonNumericTextBlock*                     NumericTextBlock                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonNumericTextBlock::OnOutro__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction CommonUI.CommonNumericTextBlock.OnOutro__DelegateSignature"));
		
		UCommonNumericTextBlock_OnOutro__DelegateSignature_Params params {};
		params.NumericTextBlock = NumericTextBlock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationUpdated__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UCommonNumericTextBlock*                     NumericTextBlock                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LastValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonNumericTextBlock::OnInterpolationUpdated__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationUpdated__DelegateSignature"));
		
		UCommonNumericTextBlock_OnInterpolationUpdated__DelegateSignature_Params params {};
		params.NumericTextBlock = NumericTextBlock;
		params.LastValue = LastValue;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationStarted__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UCommonNumericTextBlock*                     NumericTextBlock                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonNumericTextBlock::OnInterpolationStarted__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationStarted__DelegateSignature"));
		
		UCommonNumericTextBlock_OnInterpolationStarted__DelegateSignature_Params params {};
		params.NumericTextBlock = NumericTextBlock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationEnded__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UCommonNumericTextBlock*                     NumericTextBlock                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               HadCompleted                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonNumericTextBlock::OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationEnded__DelegateSignature"));
		
		UCommonNumericTextBlock_OnInterpolationEnded__DelegateSignature_Params params {};
		params.NumericTextBlock = NumericTextBlock;
		params.HadCompleted = HadCompleted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDF610
	 * 		Name   -> Function CommonUI.CommonNumericTextBlock.IsInterpolatingNumericValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCommonNumericTextBlock::IsInterpolatingNumericValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonNumericTextBlock.IsInterpolatingNumericValue"));
		
		UCommonNumericTextBlock_IsInterpolatingNumericValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDF4B0
	 * 		Name   -> Function CommonUI.CommonNumericTextBlock.InterpolateToValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              TargetValue                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaximumInterpolationDuration                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinimumChangeRate                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutroOffset                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonNumericTextBlock::InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonNumericTextBlock.InterpolateToValue"));
		
		UCommonNumericTextBlock_InterpolateToValue_Params params {};
		params.TargetValue = TargetValue;
		params.MaximumInterpolationDuration = MaximumInterpolationDuration;
		params.MinimumChangeRate = MinimumChangeRate;
		params.OutroOffset = OutroOffset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDF0C0
	 * 		Name   -> Function CommonUI.CommonNumericTextBlock.GetTargetValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UCommonNumericTextBlock::GetTargetValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonNumericTextBlock.GetTargetValue"));
		
		UCommonNumericTextBlock_GetTargetValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonNumericTextBlock.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonNumericTextBlock::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonNumericTextBlock"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDF930
	 * 		Name   -> Function CommonUI.CommonPoolableWidgetInterface.OnReleaseToPool
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void UCommonPoolableWidgetInterface::OnReleaseToPool()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonPoolableWidgetInterface.OnReleaseToPool"));
		
		UCommonPoolableWidgetInterface_OnReleaseToPool_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDF6D0
	 * 		Name   -> Function CommonUI.CommonPoolableWidgetInterface.OnAcquireFromPool
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void UCommonPoolableWidgetInterface::OnAcquireFromPool()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonPoolableWidgetInterface.OnAcquireFromPool"));
		
		UCommonPoolableWidgetInterface_OnAcquireFromPool_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonPoolableWidgetInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonPoolableWidgetInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonPoolableWidgetInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonRichTextBlock.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonRichTextBlock::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonRichTextBlock"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE1010
	 * 		Name   -> Function CommonUI.CommonRotator.ShiftTextRight
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCommonRotator::ShiftTextRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonRotator.ShiftTextRight"));
		
		UCommonRotator_ShiftTextRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE0FF0
	 * 		Name   -> Function CommonUI.CommonRotator.ShiftTextLeft
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCommonRotator::ShiftTextLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonRotator.ShiftTextLeft"));
		
		UCommonRotator_ShiftTextLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE0B60
	 * 		Name   -> Function CommonUI.CommonRotator.SetSelectedItem
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonRotator::SetSelectedItem(int32_t InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonRotator.SetSelectedItem"));
		
		UCommonRotator_SetSelectedItem_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDFA20
	 * 		Name   -> Function CommonUI.CommonRotator.PopulateTextLabels
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FText>                                Labels                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonRotator::PopulateTextLabels(TArray<class FText> Labels)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonRotator.PopulateTextLabels"));
		
		UCommonRotator_PopulateTextLabels_Params params {};
		params.Labels = Labels;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDEEC0
	 * 		Name   -> Function CommonUI.CommonRotator.GetSelectedText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UCommonRotator::GetSelectedText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonRotator.GetSelectedText"));
		
		UCommonRotator_GetSelectedText_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDEE60
	 * 		Name   -> Function CommonUI.CommonRotator.GetSelectedIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UCommonRotator::GetSelectedIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonRotator.GetSelectedIndex"));
		
		UCommonRotator_GetSelectedIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function CommonUI.CommonRotator.BP_OnOptionsPopulated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonRotator::BP_OnOptionsPopulated(int32_t count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonRotator.BP_OnOptionsPopulated"));
		
		UCommonRotator_BP_OnOptionsPopulated_Params params {};
		params.count = count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function CommonUI.CommonRotator.BP_OnOptionSelected
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonRotator::BP_OnOptionSelected(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonRotator.BP_OnOptionSelected"));
		
		UCommonRotator_BP_OnOptionSelected_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonRotator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonRotator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonRotator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE0E20
	 * 		Name   -> Function CommonUI.CommonTabListWidgetBase.SetTabVisibility
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        TabNameID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESlateVisibility                                   NewVisibility                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonTabListWidgetBase::SetTabVisibility(const class FName& TabNameID, ESlateVisibility NewVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonTabListWidgetBase.SetTabVisibility"));
		
		UCommonTabListWidgetBase_SetTabVisibility_Params params {};
		params.TabNameID = TabNameID;
		params.NewVisibility = NewVisibility;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE0D50
	 * 		Name   -> Function CommonUI.CommonTabListWidgetBase.SetTabInteractionEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        TabNameID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonTabListWidgetBase::SetTabInteractionEnabled(const class FName& TabNameID, bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonTabListWidgetBase.SetTabInteractionEnabled"));
		
		UCommonTabListWidgetBase_SetTabInteractionEnabled_Params params {};
		params.TabNameID = TabNameID;
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE0C80
	 * 		Name   -> Function CommonUI.CommonTabListWidgetBase.SetTabEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        TabNameID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonTabListWidgetBase::SetTabEnabled(const class FName& TabNameID, bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonTabListWidgetBase.SetTabEnabled"));
		
		UCommonTabListWidgetBase_SetTabEnabled_Params params {};
		params.TabNameID = TabNameID;
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE0860
	 * 		Name   -> Function CommonUI.CommonTabListWidgetBase.SetListeningForInput
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bShouldListen                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonTabListWidgetBase::SetListeningForInput(bool bShouldListen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonTabListWidgetBase.SetListeningForInput"));
		
		UCommonTabListWidgetBase_SetListeningForInput_Params params {};
		params.bShouldListen = bShouldListen;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE07D0
	 * 		Name   -> Function CommonUI.CommonTabListWidgetBase.SetLinkedSwitcher
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCommonAnimatedSwitcher*                     CommonSwitcher                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonTabListWidgetBase::SetLinkedSwitcher(class UCommonAnimatedSwitcher* CommonSwitcher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonTabListWidgetBase.SetLinkedSwitcher"));
		
		UCommonTabListWidgetBase_SetLinkedSwitcher_Params params {};
		params.CommonSwitcher = CommonSwitcher;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDFF10
	 * 		Name   -> Function CommonUI.CommonTabListWidgetBase.SelectTabByID
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        TabNameID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSuppressClickFeedback                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCommonTabListWidgetBase::SelectTabByID(const class FName& TabNameID, bool bSuppressClickFeedback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonTabListWidgetBase.SelectTabByID"));
		
		UCommonTabListWidgetBase_SelectTabByID_Params params {};
		params.TabNameID = TabNameID;
		params.bSuppressClickFeedback = bSuppressClickFeedback;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDFCC0
	 * 		Name   -> Function CommonUI.CommonTabListWidgetBase.RemoveTab
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        TabNameID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCommonTabListWidgetBase::RemoveTab(const class FName& TabNameID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonTabListWidgetBase.RemoveTab"));
		
		UCommonTabListWidgetBase_RemoveTab_Params params {};
		params.TabNameID = TabNameID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDFCA0
	 * 		Name   -> Function CommonUI.CommonTabListWidgetBase.RemoveAllTabs
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCommonTabListWidgetBase::RemoveAllTabs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonTabListWidgetBase.RemoveAllTabs"));
		
		UCommonTabListWidgetBase_RemoveAllTabs_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDFB90
	 * 		Name   -> Function CommonUI.CommonTabListWidgetBase.RegisterTab
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        TabNameID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ButtonWidgetType                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     ContentWidget                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCommonTabListWidgetBase::RegisterTab(const class FName& TabNameID, class UClass* ButtonWidgetType, class UWidget* ContentWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonTabListWidgetBase.RegisterTab"));
		
		UCommonTabListWidgetBase_RegisterTab_Params params {};
		params.TabNameID = TabNameID;
		params.ButtonWidgetType = ButtonWidgetType;
		params.ContentWidget = ContentWidget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabSelected__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FName                                        TabId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonTabListWidgetBase::OnTabSelected__DelegateSignature(const class FName& TabId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabSelected__DelegateSignature"));
		
		UCommonTabListWidgetBase_OnTabSelected__DelegateSignature_Params params {};
		params.TabId = TabId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonRemoval__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FName                                        TabId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCommonButtonBase*                           TabButton                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonTabListWidgetBase::OnTabButtonRemoval__DelegateSignature(const class FName& TabId, class UCommonButtonBase* TabButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonRemoval__DelegateSignature"));
		
		UCommonTabListWidgetBase_OnTabButtonRemoval__DelegateSignature_Params params {};
		params.TabId = TabId;
		params.TabButton = TabButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonCreation__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FName                                        TabId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCommonButtonBase*                           TabButton                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonTabListWidgetBase::OnTabButtonCreation__DelegateSignature(const class FName& TabId, class UCommonButtonBase* TabButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonCreation__DelegateSignature"));
		
		UCommonTabListWidgetBase_OnTabButtonCreation__DelegateSignature_Params params {};
		params.TabId = TabId;
		params.TabButton = TabButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDF3B0
	 * 		Name   -> Function CommonUI.CommonTabListWidgetBase.HandleTabRemoval
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        TabNameID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCommonButtonBase*                           TabButton                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonTabListWidgetBase::HandleTabRemoval(const class FName& TabNameID, class UCommonButtonBase* TabButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonTabListWidgetBase.HandleTabRemoval"));
		
		UCommonTabListWidgetBase_HandleTabRemoval_Params params {};
		params.TabNameID = TabNameID;
		params.TabButton = TabButton;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDF2E0
	 * 		Name   -> Function CommonUI.CommonTabListWidgetBase.HandleTabCreation
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        TabNameID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCommonButtonBase*                           TabButton                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonTabListWidgetBase::HandleTabCreation(const class FName& TabNameID, class UCommonButtonBase* TabButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonTabListWidgetBase.HandleTabCreation"));
		
		UCommonTabListWidgetBase_HandleTabCreation_Params params {};
		params.TabNameID = TabNameID;
		params.TabButton = TabButton;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDF210
	 * 		Name   -> Function CommonUI.CommonTabListWidgetBase.HandleTabButtonSelected
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UCommonButtonBase*                           SelectedTabButton                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ButtonIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonTabListWidgetBase::HandleTabButtonSelected(class UCommonButtonBase* SelectedTabButton, int32_t ButtonIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonTabListWidgetBase.HandleTabButtonSelected"));
		
		UCommonTabListWidgetBase_HandleTabButtonSelected_Params params {};
		params.SelectedTabButton = SelectedTabButton;
		params.ButtonIndex = ButtonIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDF180
	 * 		Name   -> Function CommonUI.CommonTabListWidgetBase.HandlePreviousTabInputAction
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		bool                                               bPassThrough                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonTabListWidgetBase::HandlePreviousTabInputAction(bool* bPassThrough)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonTabListWidgetBase.HandlePreviousTabInputAction"));
		
		UCommonTabListWidgetBase_HandlePreviousTabInputAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bPassThrough != nullptr)
			*bPassThrough = params.bPassThrough;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function CommonUI.CommonTabListWidgetBase.HandlePreLinkedSwitcherChanged_BP
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCommonTabListWidgetBase::HandlePreLinkedSwitcherChanged_BP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonTabListWidgetBase.HandlePreLinkedSwitcherChanged_BP"));
		
		UCommonTabListWidgetBase_HandlePreLinkedSwitcherChanged_BP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function CommonUI.CommonTabListWidgetBase.HandlePostLinkedSwitcherChanged_BP
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCommonTabListWidgetBase::HandlePostLinkedSwitcherChanged_BP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonTabListWidgetBase.HandlePostLinkedSwitcherChanged_BP"));
		
		UCommonTabListWidgetBase_HandlePostLinkedSwitcherChanged_BP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDF0F0
	 * 		Name   -> Function CommonUI.CommonTabListWidgetBase.HandleNextTabInputAction
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		bool                                               bPassThrough                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonTabListWidgetBase::HandleNextTabInputAction(bool* bPassThrough)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonTabListWidgetBase.HandleNextTabInputAction"));
		
		UCommonTabListWidgetBase_HandleNextTabInputAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bPassThrough != nullptr)
			*bPassThrough = params.bPassThrough;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDF030
	 * 		Name   -> Function CommonUI.CommonTabListWidgetBase.GetTabIdAtIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UCommonTabListWidgetBase::GetTabIdAtIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonTabListWidgetBase.GetTabIdAtIndex"));
		
		UCommonTabListWidgetBase_GetTabIdAtIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDF000
	 * 		Name   -> Function CommonUI.CommonTabListWidgetBase.GetTabCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UCommonTabListWidgetBase::GetTabCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonTabListWidgetBase.GetTabCount"));
		
		UCommonTabListWidgetBase_GetTabCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDEF60
	 * 		Name   -> Function CommonUI.CommonTabListWidgetBase.GetTabButtonBaseByID
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        TabNameID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCommonButtonBase* UCommonTabListWidgetBase::GetTabButtonBaseByID(const class FName& TabNameID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonTabListWidgetBase.GetTabButtonBaseByID"));
		
		UCommonTabListWidgetBase_GetTabButtonBaseByID_Params params {};
		params.TabNameID = TabNameID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDEE80
	 * 		Name   -> Function CommonUI.CommonTabListWidgetBase.GetSelectedTabId
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FName UCommonTabListWidgetBase::GetSelectedTabId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonTabListWidgetBase.GetSelectedTabId"));
		
		UCommonTabListWidgetBase_GetSelectedTabId_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDEDD0
	 * 		Name   -> Function CommonUI.CommonTabListWidgetBase.GetLinkedSwitcher
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UCommonAnimatedSwitcher* UCommonTabListWidgetBase::GetLinkedSwitcher()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonTabListWidgetBase.GetLinkedSwitcher"));
		
		UCommonTabListWidgetBase_GetLinkedSwitcher_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDEC50
	 * 		Name   -> Function CommonUI.CommonTabListWidgetBase.GetActiveTab
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FName UCommonTabListWidgetBase::GetActiveTab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonTabListWidgetBase.GetActiveTab"));
		
		UCommonTabListWidgetBase_GetActiveTab_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BDEAA0
	 * 		Name   -> Function CommonUI.CommonTabListWidgetBase.DisableTabWithReason
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        TabNameID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        reason                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCommonTabListWidgetBase::DisableTabWithReason(const class FName& TabNameID, const class FText& reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonTabListWidgetBase.DisableTabWithReason"));
		
		UCommonTabListWidgetBase_DisableTabWithReason_Params params {};
		params.TabNameID = TabNameID;
		params.reason = reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonTabListWidgetBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonTabListWidgetBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonTabListWidgetBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE5240
	 * 		Name   -> Function CommonUI.CommonTextStyle.GetStrikeBrush
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FSlateBrush                                 OutStrikeBrush                                             (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UCommonTextStyle::GetStrikeBrush(struct FSlateBrush* OutStrikeBrush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonTextStyle.GetStrikeBrush"));
		
		UCommonTextStyle_GetStrikeBrush_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutStrikeBrush != nullptr)
			*OutStrikeBrush = params.OutStrikeBrush;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE51B0
	 * 		Name   -> Function CommonUI.CommonTextStyle.GetShadowOffset
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector2D                                   OutShadowOffset                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonTextStyle::GetShadowOffset(struct FVector2D* OutShadowOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonTextStyle.GetShadowOffset"));
		
		UCommonTextStyle_GetShadowOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutShadowOffset != nullptr)
			*OutShadowOffset = params.OutShadowOffset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE5120
	 * 		Name   -> Function CommonUI.CommonTextStyle.GetShadowColor
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FLinearColor                                OutColor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonTextStyle::GetShadowColor(struct FLinearColor* OutColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonTextStyle.GetShadowColor"));
		
		UCommonTextStyle_GetShadowColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutColor != nullptr)
			*OutColor = params.OutColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE4FF0
	 * 		Name   -> Function CommonUI.CommonTextStyle.GetMargin
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FMargin                                     OutMargin                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCommonTextStyle::GetMargin(struct FMargin* OutMargin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonTextStyle.GetMargin"));
		
		UCommonTextStyle_GetMargin_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMargin != nullptr)
			*OutMargin = params.OutMargin;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE4FC0
	 * 		Name   -> Function CommonUI.CommonTextStyle.GetLineHeightPercentage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UCommonTextStyle::GetLineHeightPercentage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonTextStyle.GetLineHeightPercentage"));
		
		UCommonTextStyle_GetLineHeightPercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE4D70
	 * 		Name   -> Function CommonUI.CommonTextStyle.GetFont
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FSlateFontInfo                              OutFont                                                    (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonTextStyle::GetFont(struct FSlateFontInfo* OutFont)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonTextStyle.GetFont"));
		
		UCommonTextStyle_GetFont_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutFont != nullptr)
			*OutFont = params.OutFont;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE4CE0
	 * 		Name   -> Function CommonUI.CommonTextStyle.GetColor
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FLinearColor                                OutColor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonTextStyle::GetColor(struct FLinearColor* OutColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonTextStyle.GetColor"));
		
		UCommonTextStyle_GetColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutColor != nullptr)
			*OutColor = params.OutColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonTextStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonTextStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonTextStyle"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonTextScrollStyle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonTextScrollStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonTextScrollStyle"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonTileView.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonTileView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonTileView"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonTreeView.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonTreeView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonTreeView"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonUIActionRouterBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonUIActionRouterBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonUIActionRouterBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonUIEditorSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonUIEditorSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonUIEditorSettings"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonUIInputSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonUIInputSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonUIInputSettings"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE4B90
	 * 		Name   -> Function CommonUI.CommonUILibrary.FindParentWidgetOfType
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWidget*                                     StartingWidget                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWidget* UCommonUILibrary::STATIC_FindParentWidgetOfType(class UWidget* StartingWidget, class UClass* Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonUILibrary.FindParentWidgetOfType"));
		
		UCommonUILibrary_FindParentWidgetOfType_Params params {};
		params.StartingWidget = StartingWidget;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonUILibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonUILibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonUILibrary"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonUIRichTextData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonUIRichTextData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonUIRichTextData"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonUISettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonUISettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonUISettings"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE4E40
	 * 		Name   -> Function CommonUI.CommonUISubsystemBase.GetInputActionButtonIcon
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FDataTableRowHandle                         InputActionRowHandle                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ECommonInputType                                   InputType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        GamepadName                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSlateBrush UCommonUISubsystemBase::GetInputActionButtonIcon(const struct FDataTableRowHandle& InputActionRowHandle, ECommonInputType InputType, const class FName& GamepadName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonUISubsystemBase.GetInputActionButtonIcon"));
		
		UCommonUISubsystemBase_GetInputActionButtonIcon_Params params {};
		params.InputActionRowHandle = InputActionRowHandle;
		params.InputType = InputType;
		params.GamepadName = GamepadName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonUISubsystemBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonUISubsystemBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonUISubsystemBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonVideoPlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonVideoPlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonVideoPlayer"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE57F0
	 * 		Name   -> Function CommonUI.CommonVisibilitySwitcher.SetActiveWidgetIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonVisibilitySwitcher::SetActiveWidgetIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonVisibilitySwitcher.SetActiveWidgetIndex"));
		
		UCommonVisibilitySwitcher_SetActiveWidgetIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE56D0
	 * 		Name   -> Function CommonUI.CommonVisibilitySwitcher.SetActiveWidget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonVisibilitySwitcher::SetActiveWidget(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonVisibilitySwitcher.SetActiveWidget"));
		
		UCommonVisibilitySwitcher_SetActiveWidget_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE5530
	 * 		Name   -> Function CommonUI.CommonVisibilitySwitcher.IncrementActiveWidgetIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bAllowWrapping                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonVisibilitySwitcher::IncrementActiveWidgetIndex(bool bAllowWrapping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonVisibilitySwitcher.IncrementActiveWidgetIndex"));
		
		UCommonVisibilitySwitcher_IncrementActiveWidgetIndex_Params params {};
		params.bAllowWrapping = bAllowWrapping;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE4C90
	 * 		Name   -> Function CommonUI.CommonVisibilitySwitcher.GetActiveWidgetIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UCommonVisibilitySwitcher::GetActiveWidgetIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonVisibilitySwitcher.GetActiveWidgetIndex"));
		
		UCommonVisibilitySwitcher_GetActiveWidgetIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE4C60
	 * 		Name   -> Function CommonUI.CommonVisibilitySwitcher.GetActiveWidget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UWidget* UCommonVisibilitySwitcher::GetActiveWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonVisibilitySwitcher.GetActiveWidget"));
		
		UCommonVisibilitySwitcher_GetActiveWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE4AE0
	 * 		Name   -> Function CommonUI.CommonVisibilitySwitcher.DecrementActiveWidgetIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bAllowWrapping                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonVisibilitySwitcher::DecrementActiveWidgetIndex(bool bAllowWrapping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonVisibilitySwitcher.DecrementActiveWidgetIndex"));
		
		UCommonVisibilitySwitcher_DecrementActiveWidgetIndex_Params params {};
		params.bAllowWrapping = bAllowWrapping;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE4AC0
	 * 		Name   -> Function CommonUI.CommonVisibilitySwitcher.DeactivateVisibleSlot
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCommonVisibilitySwitcher::DeactivateVisibleSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonVisibilitySwitcher.DeactivateVisibleSlot"));
		
		UCommonVisibilitySwitcher_DeactivateVisibleSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE4990
	 * 		Name   -> Function CommonUI.CommonVisibilitySwitcher.ActivateVisibleSlot
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCommonVisibilitySwitcher::ActivateVisibleSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonVisibilitySwitcher.ActivateVisibleSlot"));
		
		UCommonVisibilitySwitcher_ActivateVisibleSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonVisibilitySwitcher.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonVisibilitySwitcher::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonVisibilitySwitcher"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonVisibilitySwitcherSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonVisibilitySwitcherSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonVisibilitySwitcherSlot"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE5090
	 * 		Name   -> Function CommonUI.CommonVisibilityWidgetBase.GetRegisteredPlatforms
	 * 		Flags  -> (Final, Native, Static, Protected)
	 */
	TArray<class FName> UCommonVisibilityWidgetBase::STATIC_GetRegisteredPlatforms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonVisibilityWidgetBase.GetRegisteredPlatforms"));
		
		UCommonVisibilityWidgetBase_GetRegisteredPlatforms_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonVisibilityWidgetBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonVisibilityWidgetBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonVisibilityWidgetBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonVisualAttachment.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonVisualAttachment::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonVisualAttachment"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE5880
	 * 		Name   -> Function CommonUI.CommonWidgetCarousel.SetActiveWidgetIndex
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonWidgetCarousel::SetActiveWidgetIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonWidgetCarousel.SetActiveWidgetIndex"));
		
		UCommonWidgetCarousel_SetActiveWidgetIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE5760
	 * 		Name   -> Function CommonUI.CommonWidgetCarousel.SetActiveWidget
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonWidgetCarousel::SetActiveWidget(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonWidgetCarousel.SetActiveWidget"));
		
		UCommonWidgetCarousel_SetActiveWidget_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE55E0
	 * 		Name   -> Function CommonUI.CommonWidgetCarousel.PreviousPage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCommonWidgetCarousel::PreviousPage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonWidgetCarousel.PreviousPage"));
		
		UCommonWidgetCarousel_PreviousPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE55C0
	 * 		Name   -> Function CommonUI.CommonWidgetCarousel.NextPage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCommonWidgetCarousel::NextPage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonWidgetCarousel.NextPage"));
		
		UCommonWidgetCarousel_NextPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE52F0
	 * 		Name   -> Function CommonUI.CommonWidgetCarousel.GetWidgetAtIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWidget* UCommonWidgetCarousel::GetWidgetAtIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonWidgetCarousel.GetWidgetAtIndex"));
		
		UCommonWidgetCarousel_GetWidgetAtIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE4CB0
	 * 		Name   -> Function CommonUI.CommonWidgetCarousel.GetActiveWidgetIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UCommonWidgetCarousel::GetActiveWidgetIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonWidgetCarousel.GetActiveWidgetIndex"));
		
		UCommonWidgetCarousel_GetActiveWidgetIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE4B70
	 * 		Name   -> Function CommonUI.CommonWidgetCarousel.EndAutoScrolling
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCommonWidgetCarousel::EndAutoScrolling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonWidgetCarousel.EndAutoScrolling"));
		
		UCommonWidgetCarousel_EndAutoScrolling_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE4A40
	 * 		Name   -> Function CommonUI.CommonWidgetCarousel.BeginAutoScrolling
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              ScrollInterval                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonWidgetCarousel::BeginAutoScrolling(float ScrollInterval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonWidgetCarousel.BeginAutoScrolling"));
		
		UCommonWidgetCarousel_BeginAutoScrolling_Params params {};
		params.ScrollInterval = ScrollInterval;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonWidgetCarousel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonWidgetCarousel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonWidgetCarousel"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE59A0
	 * 		Name   -> Function CommonUI.CommonWidgetCarouselNavBar.SetLinkedCarousel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCommonWidgetCarousel*                       CommonCarousel                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonWidgetCarouselNavBar::SetLinkedCarousel(class UCommonWidgetCarousel* CommonCarousel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonWidgetCarouselNavBar.SetLinkedCarousel"));
		
		UCommonWidgetCarouselNavBar_SetLinkedCarousel_Params params {};
		params.CommonCarousel = CommonCarousel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE5460
	 * 		Name   -> Function CommonUI.CommonWidgetCarouselNavBar.HandlePageChanged
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UCommonWidgetCarousel*                       CommonCarousel                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PageIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonWidgetCarouselNavBar::HandlePageChanged(class UCommonWidgetCarousel* CommonCarousel, int32_t PageIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonWidgetCarouselNavBar.HandlePageChanged"));
		
		UCommonWidgetCarouselNavBar_HandlePageChanged_Params params {};
		params.CommonCarousel = CommonCarousel;
		params.PageIndex = PageIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00BE5390
	 * 		Name   -> Function CommonUI.CommonWidgetCarouselNavBar.HandleButtonClicked
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UCommonButtonBase*                           AssociatedButton                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ButtonIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCommonWidgetCarouselNavBar::HandleButtonClicked(class UCommonButtonBase* AssociatedButton, int32_t ButtonIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CommonUI.CommonWidgetCarouselNavBar.HandleButtonClicked"));
		
		UCommonWidgetCarouselNavBar_HandleButtonClicked_Params params {};
		params.AssociatedButton = AssociatedButton;
		params.ButtonIndex = ButtonIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonWidgetCarouselNavBar.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonWidgetCarouselNavBar::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class CommonUI.CommonWidgetCarouselNavBar"));
		return ptr;
	}

}


