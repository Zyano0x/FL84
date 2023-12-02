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
	 * 		Name   -> Function UI_Shop_Tips_Video.UI_Shop_Tips_Video_C.SetSpecialEffect
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsSpecial_Effect                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Shop_Tips_Video_C::SetSpecialEffect(bool IsSpecial_Effect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Shop_Tips_Video.UI_Shop_Tips_Video_C.SetSpecialEffect"));
		
		UUI_Shop_Tips_Video_C_SetSpecialEffect_Params params {};
		params.IsSpecial_Effect = IsSpecial_Effect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Shop_Tips_Video.UI_Shop_Tips_Video_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Shop_Tips_Video_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Shop_Tips_Video.UI_Shop_Tips_Video_C.PreConstruct"));
		
		UUI_Shop_Tips_Video_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Shop_Tips_Video.UI_Shop_Tips_Video_C.BndEvt__Btn_Play_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Shop_Tips_Video_C::BndEvt__Btn_Play_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Shop_Tips_Video.UI_Shop_Tips_Video_C.BndEvt__Btn_Play_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
		
		UUI_Shop_Tips_Video_C_BndEvt__Btn_Play_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Shop_Tips_Video.UI_Shop_Tips_Video_C.ExecuteUbergraph_UI_Shop_Tips_Video
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Shop_Tips_Video_C::ExecuteUbergraph_UI_Shop_Tips_Video(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Shop_Tips_Video.UI_Shop_Tips_Video_C.ExecuteUbergraph_UI_Shop_Tips_Video"));
		
		UUI_Shop_Tips_Video_C_ExecuteUbergraph_UI_Shop_Tips_Video_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Shop_Tips_Video.UI_Shop_Tips_Video_C.OnBtnPlayVideoClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Shop_Tips_Video_C::OnBtnPlayVideoClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Shop_Tips_Video.UI_Shop_Tips_Video_C.OnBtnPlayVideoClicked__DelegateSignature"));
		
		UUI_Shop_Tips_Video_C_OnBtnPlayVideoClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Shop_Tips_Video_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Shop_Tips_Video_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_Shop_Tips_Video.UI_Shop_Tips_Video_C"));
		return ptr;
	}

}


