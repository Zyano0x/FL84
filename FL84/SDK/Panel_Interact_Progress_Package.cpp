/**
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
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function Panel_Interact_Progress.Panel_Interact_Progress_C.RefreshToNonCancellableInteracting
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPanel_Interact_Progress_C::RefreshToNonCancellableInteracting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Panel_Interact_Progress.Panel_Interact_Progress_C.RefreshToNonCancellableInteracting"));
		
		UPanel_Interact_Progress_C_RefreshToNonCancellableInteracting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function Panel_Interact_Progress.Panel_Interact_Progress_C.RefreshToCancellableInteracting
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPanel_Interact_Progress_C::RefreshToCancellableInteracting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Panel_Interact_Progress.Panel_Interact_Progress_C.RefreshToCancellableInteracting"));
		
		UPanel_Interact_Progress_C_RefreshToCancellableInteracting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function Panel_Interact_Progress.Panel_Interact_Progress_C.RefreshToPreInteract
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPanel_Interact_Progress_C::RefreshToPreInteract()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Panel_Interact_Progress.Panel_Interact_Progress_C.RefreshToPreInteract"));
		
		UPanel_Interact_Progress_C_RefreshToPreInteract_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function Panel_Interact_Progress.Panel_Interact_Progress_C.PlayFadeInAnim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPanel_Interact_Progress_C::PlayFadeInAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Panel_Interact_Progress.Panel_Interact_Progress_C.PlayFadeInAnim"));
		
		UPanel_Interact_Progress_C_PlayFadeInAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function Panel_Interact_Progress.Panel_Interact_Progress_C.HidePassiveBuff
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPanel_Interact_Progress_C::HidePassiveBuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Panel_Interact_Progress.Panel_Interact_Progress_C.HidePassiveBuff"));
		
		UPanel_Interact_Progress_C_HidePassiveBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function Panel_Interact_Progress.Panel_Interact_Progress_C.ShowPassiveBuff
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CharacterId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            LocalTextId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPanel_Interact_Progress_C::ShowPassiveBuff(int32_t CharacterId, int32_t LocalTextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Panel_Interact_Progress.Panel_Interact_Progress_C.ShowPassiveBuff"));
		
		UPanel_Interact_Progress_C_ShowPassiveBuff_Params params {};
		params.CharacterId = CharacterId;
		params.LocalTextId = LocalTextId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function Panel_Interact_Progress.Panel_Interact_Progress_C.EnablePassiveBuffDisplay
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CharacterId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            LocalTextId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPanel_Interact_Progress_C::EnablePassiveBuffDisplay(int32_t CharacterId, int32_t LocalTextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Panel_Interact_Progress.Panel_Interact_Progress_C.EnablePassiveBuffDisplay"));
		
		UPanel_Interact_Progress_C_EnablePassiveBuffDisplay_Params params {};
		params.CharacterId = CharacterId;
		params.LocalTextId = LocalTextId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function Panel_Interact_Progress.Panel_Interact_Progress_C.SetProgressBarRatio
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Ratio                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPanel_Interact_Progress_C::SetProgressBarRatio(float Ratio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Panel_Interact_Progress.Panel_Interact_Progress_C.SetProgressBarRatio"));
		
		UPanel_Interact_Progress_C_SetProgressBarRatio_Params params {};
		params.Ratio = Ratio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function Panel_Interact_Progress.Panel_Interact_Progress_C.SetProgressBarVisiblity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bShow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPanel_Interact_Progress_C::SetProgressBarVisiblity(bool bShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Panel_Interact_Progress.Panel_Interact_Progress_C.SetProgressBarVisiblity"));
		
		UPanel_Interact_Progress_C_SetProgressBarVisiblity_Params params {};
		params.bShow = bShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function Panel_Interact_Progress.Panel_Interact_Progress_C.SetInteractType
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_Interact_Type                                    InteractType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPanel_Interact_Progress_C::SetInteractType(E_Interact_Type InteractType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Panel_Interact_Progress.Panel_Interact_Progress_C.SetInteractType"));
		
		UPanel_Interact_Progress_C_SetInteractType_Params params {};
		params.InteractType = InteractType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function Panel_Interact_Progress.Panel_Interact_Progress_C.UpdateStateView
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECountDownState                                    InState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPanel_Interact_Progress_C::UpdateStateView(ECountDownState InState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Panel_Interact_Progress.Panel_Interact_Progress_C.UpdateStateView"));
		
		UPanel_Interact_Progress_C_UpdateStateView_Params params {};
		params.InState = InState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function Panel_Interact_Progress.Panel_Interact_Progress_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPanel_Interact_Progress_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Panel_Interact_Progress.Panel_Interact_Progress_C.PreConstruct"));
		
		UPanel_Interact_Progress_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function Panel_Interact_Progress.Panel_Interact_Progress_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UPanel_Interact_Progress_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Panel_Interact_Progress.Panel_Interact_Progress_C.Construct"));
		
		UPanel_Interact_Progress_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function Panel_Interact_Progress.Panel_Interact_Progress_C.BP_UpdateStateView
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECountDownState                                    InState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPanel_Interact_Progress_C::BP_UpdateStateView(ECountDownState InState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Panel_Interact_Progress.Panel_Interact_Progress_C.BP_UpdateStateView"));
		
		UPanel_Interact_Progress_C_BP_UpdateStateView_Params params {};
		params.InState = InState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function Panel_Interact_Progress.Panel_Interact_Progress_C.BndEvt__Btn_Interact_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UPanel_Interact_Progress_C::BndEvt__Btn_Interact_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Panel_Interact_Progress.Panel_Interact_Progress_C.BndEvt__Btn_Interact_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature"));
		
		UPanel_Interact_Progress_C_BndEvt__Btn_Interact_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function Panel_Interact_Progress.Panel_Interact_Progress_C.OnAnimationFinished
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPanel_Interact_Progress_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Panel_Interact_Progress.Panel_Interact_Progress_C.OnAnimationFinished"));
		
		UPanel_Interact_Progress_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function Panel_Interact_Progress.Panel_Interact_Progress_C.OnAnimationStarted
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPanel_Interact_Progress_C::OnAnimationStarted(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Panel_Interact_Progress.Panel_Interact_Progress_C.OnAnimationStarted"));
		
		UPanel_Interact_Progress_C_OnAnimationStarted_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function Panel_Interact_Progress.Panel_Interact_Progress_C.ExecuteUbergraph_Panel_Interact_Progress
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPanel_Interact_Progress_C::ExecuteUbergraph_Panel_Interact_Progress(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Panel_Interact_Progress.Panel_Interact_Progress_C.ExecuteUbergraph_Panel_Interact_Progress"));
		
		UPanel_Interact_Progress_C_ExecuteUbergraph_Panel_Interact_Progress_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPanel_Interact_Progress_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPanel_Interact_Progress_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass Panel_Interact_Progress.Panel_Interact_Progress_C"));
		return ptr;
	}

}


