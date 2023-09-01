/**
 * Name: FL84
 * Version: 1.14.4.6.511026
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_AvatarFrame_Yuyan.UI_AvatarFrame_Yuyan_C.GetModuleName
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString UUI_AvatarFrame_Yuyan_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AvatarFrame_Yuyan.UI_AvatarFrame_Yuyan_C.GetModuleName");
		
		UUI_AvatarFrame_Yuyan_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_AvatarFrame_Yuyan.UI_AvatarFrame_Yuyan_C.SetAvatarIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            InAvatarID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_AvatarFrame_Yuyan_C::SetAvatarIcon(int32_t InAvatarID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AvatarFrame_Yuyan.UI_AvatarFrame_Yuyan_C.SetAvatarIcon");
		
		UUI_AvatarFrame_Yuyan_C_SetAvatarIcon_Params params {};
		params.InAvatarID = InAvatarID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_AvatarFrame_Yuyan.UI_AvatarFrame_Yuyan_C.SetEmptyState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsEmpty                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_AvatarFrame_Yuyan_C::SetEmptyState(bool IsEmpty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AvatarFrame_Yuyan.UI_AvatarFrame_Yuyan_C.SetEmptyState");
		
		UUI_AvatarFrame_Yuyan_C_SetEmptyState_Params params {};
		params.IsEmpty = IsEmpty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_AvatarFrame_Yuyan.UI_AvatarFrame_Yuyan_C.SetPlayerGender
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_Type_Gender                                      Gender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_AvatarFrame_Yuyan_C::SetPlayerGender(E_Type_Gender Gender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AvatarFrame_Yuyan.UI_AvatarFrame_Yuyan_C.SetPlayerGender");
		
		UUI_AvatarFrame_Yuyan_C_SetPlayerGender_Params params {};
		params.Gender = Gender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_AvatarFrame_Yuyan.UI_AvatarFrame_Yuyan_C.SetSocialIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_Type_Social                                      Social                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_AvatarFrame_Yuyan_C::SetSocialIcon(E_Type_Social Social)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AvatarFrame_Yuyan.UI_AvatarFrame_Yuyan_C.SetSocialIcon");
		
		UUI_AvatarFrame_Yuyan_C_SetSocialIcon_Params params {};
		params.Social = Social;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_AvatarFrame_Yuyan.UI_AvatarFrame_Yuyan_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_AvatarFrame_Yuyan_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AvatarFrame_Yuyan.UI_AvatarFrame_Yuyan_C.PreConstruct");
		
		UUI_AvatarFrame_Yuyan_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_AvatarFrame_Yuyan.UI_AvatarFrame_Yuyan_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_AvatarFrame_Yuyan_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AvatarFrame_Yuyan.UI_AvatarFrame_Yuyan_C.Construct");
		
		UUI_AvatarFrame_Yuyan_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_AvatarFrame_Yuyan.UI_AvatarFrame_Yuyan_C.Update
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_AvatarFrame_Yuyan_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AvatarFrame_Yuyan.UI_AvatarFrame_Yuyan_C.Update");
		
		UUI_AvatarFrame_Yuyan_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_AvatarFrame_Yuyan.UI_AvatarFrame_Yuyan_C.ExecuteUbergraph_UI_AvatarFrame_Yuyan
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_AvatarFrame_Yuyan_C::ExecuteUbergraph_UI_AvatarFrame_Yuyan(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AvatarFrame_Yuyan.UI_AvatarFrame_Yuyan_C.ExecuteUbergraph_UI_AvatarFrame_Yuyan");
		
		UUI_AvatarFrame_Yuyan_C_ExecuteUbergraph_UI_AvatarFrame_Yuyan_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_AvatarFrame_Yuyan.UI_AvatarFrame_Yuyan_C.On Released__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_AvatarFrame_Yuyan_C::OnReleased__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AvatarFrame_Yuyan.UI_AvatarFrame_Yuyan_C.On Released__DelegateSignature");
		
		UUI_AvatarFrame_Yuyan_C_OnReleased__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_AvatarFrame_Yuyan.UI_AvatarFrame_Yuyan_C.On Clicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_AvatarFrame_Yuyan_C::OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_AvatarFrame_Yuyan.UI_AvatarFrame_Yuyan_C.On Clicked__DelegateSignature");
		
		UUI_AvatarFrame_Yuyan_C_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_AvatarFrame_Yuyan_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_AvatarFrame_Yuyan_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_AvatarFrame_Yuyan.UI_AvatarFrame_Yuyan_C");
		return ptr;
	}

}


