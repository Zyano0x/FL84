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
	 * 		Name   -> Function UI_CreateRoom_Mangement_Btn.UI_CreateRoom_Mangement_Btn_C.SetBtnTxt
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Mangement_Btn_C::SetBtnTxt(const class FString& NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Mangement_Btn.UI_CreateRoom_Mangement_Btn_C.SetBtnTxt"));
		
		UUI_CreateRoom_Mangement_Btn_C_SetBtnTxt_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Mangement_Btn.UI_CreateRoom_Mangement_Btn_C.SetInCD
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CD                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CreateRoom_Mangement_Btn_C::SetInCD(bool CD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Mangement_Btn.UI_CreateRoom_Mangement_Btn_C.SetInCD"));
		
		UUI_CreateRoom_Mangement_Btn_C_SetInCD_Params params {};
		params.CD = CD;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Mangement_Btn.UI_CreateRoom_Mangement_Btn_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CreateRoom_Mangement_Btn_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Mangement_Btn.UI_CreateRoom_Mangement_Btn_C.PreConstruct"));
		
		UUI_CreateRoom_Mangement_Btn_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Mangement_Btn.UI_CreateRoom_Mangement_Btn_C.BndEvt__Btn_Random_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_CreateRoom_Mangement_Btn_C::BndEvt__Btn_Random_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Mangement_Btn.UI_CreateRoom_Mangement_Btn_C.BndEvt__Btn_Random_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
		
		UUI_CreateRoom_Mangement_Btn_C_BndEvt__Btn_Random_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Mangement_Btn.UI_CreateRoom_Mangement_Btn_C.ExecuteUbergraph_UI_CreateRoom_Mangement_Btn
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Mangement_Btn_C::ExecuteUbergraph_UI_CreateRoom_Mangement_Btn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Mangement_Btn.UI_CreateRoom_Mangement_Btn_C.ExecuteUbergraph_UI_CreateRoom_Mangement_Btn"));
		
		UUI_CreateRoom_Mangement_Btn_C_ExecuteUbergraph_UI_CreateRoom_Mangement_Btn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Mangement_Btn.UI_CreateRoom_Mangement_Btn_C.OnClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CreateRoom_Mangement_Btn_C::OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Mangement_Btn.UI_CreateRoom_Mangement_Btn_C.OnClicked__DelegateSignature"));
		
		UUI_CreateRoom_Mangement_Btn_C_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CreateRoom_Mangement_Btn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CreateRoom_Mangement_Btn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_CreateRoom_Mangement_Btn.UI_CreateRoom_Mangement_Btn_C"));
		return ptr;
	}

}


