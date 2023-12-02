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
	 * 		Name   -> Function UI_BuyResurrectionPanel.UI_BuyResurrectionPanel_C.Set Btn Vis
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BuyResurrectionPanel_C::SetBtnVis(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_BuyResurrectionPanel.UI_BuyResurrectionPanel_C.Set Btn Vis"));
		
		UUI_BuyResurrectionPanel_C_SetBtnVis_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_BuyResurrectionPanel.UI_BuyResurrectionPanel_C.Set Btna And Tip Visibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BuyResurrectionPanel_C::SetBtnaAndTipVisibility(bool Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_BuyResurrectionPanel.UI_BuyResurrectionPanel_C.Set Btna And Tip Visibility"));
		
		UUI_BuyResurrectionPanel_C_SetBtnaAndTipVisibility_Params params {};
		params.Visibility = Visibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_BuyResurrectionPanel.UI_BuyResurrectionPanel_C.Event_Init
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPC_BuyResurrection_C*                      BuyComp                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BuyResurrectionPanel_C::Event_Init(class UBPC_BuyResurrection_C* BuyComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_BuyResurrectionPanel.UI_BuyResurrectionPanel_C.Event_Init"));
		
		UUI_BuyResurrectionPanel_C_Event_Init_Params params {};
		params.BuyComp = BuyComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_BuyResurrectionPanel.UI_BuyResurrectionPanel_C.EventOnStateChange
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EResurrectionState                                 NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BuyResurrectionPanel_C::EventOnStateChange(EResurrectionState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_BuyResurrectionPanel.UI_BuyResurrectionPanel_C.EventOnStateChange"));
		
		UUI_BuyResurrectionPanel_C_EventOnStateChange_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_BuyResurrectionPanel.UI_BuyResurrectionPanel_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BuyResurrectionPanel_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_BuyResurrectionPanel.UI_BuyResurrectionPanel_C.Tick"));
		
		UUI_BuyResurrectionPanel_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_BuyResurrectionPanel.UI_BuyResurrectionPanel_C.OnReviveStateChange
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarPlayerState*                           RevivingMePlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BuyResurrectionPanel_C::OnReviveStateChange(class ASolarPlayerState* RevivingMePlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_BuyResurrectionPanel.UI_BuyResurrectionPanel_C.OnReviveStateChange"));
		
		UUI_BuyResurrectionPanel_C_OnReviveStateChange_Params params {};
		params.RevivingMePlayer = RevivingMePlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_BuyResurrectionPanel.UI_BuyResurrectionPanel_C.BndEvt__Panel_Interact_Progress_K2Node_ComponentBoundEvent_1_SimpleDynamicMulticastDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_BuyResurrectionPanel_C::BndEvt__Panel_Interact_Progress_K2Node_ComponentBoundEvent_1_SimpleDynamicMulticastDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_BuyResurrectionPanel.UI_BuyResurrectionPanel_C.BndEvt__Panel_Interact_Progress_K2Node_ComponentBoundEvent_1_SimpleDynamicMulticastDelegate__DelegateSignature"));
		
		UUI_BuyResurrectionPanel_C_BndEvt__Panel_Interact_Progress_K2Node_ComponentBoundEvent_1_SimpleDynamicMulticastDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_BuyResurrectionPanel.UI_BuyResurrectionPanel_C.Notify Teammate Revive
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_BuyResurrectionPanel_C::NotifyTeammateRevive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_BuyResurrectionPanel.UI_BuyResurrectionPanel_C.Notify Teammate Revive"));
		
		UUI_BuyResurrectionPanel_C_NotifyTeammateRevive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_BuyResurrectionPanel.UI_BuyResurrectionPanel_C.ExecuteUbergraph_UI_BuyResurrectionPanel
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BuyResurrectionPanel_C::ExecuteUbergraph_UI_BuyResurrectionPanel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_BuyResurrectionPanel.UI_BuyResurrectionPanel_C.ExecuteUbergraph_UI_BuyResurrectionPanel"));
		
		UUI_BuyResurrectionPanel_C_ExecuteUbergraph_UI_BuyResurrectionPanel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_BuyResurrectionPanel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_BuyResurrectionPanel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_BuyResurrectionPanel.UI_BuyResurrectionPanel_C"));
		return ptr;
	}

}


