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
	 * 		Name   -> Function UI_Resurrect.UI_Resurrect_C.RemoveInputFlag
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Resurrect_C::RemoveInputFlag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Resurrect.UI_Resurrect_C.RemoveInputFlag"));
		
		UUI_Resurrect_C_RemoveInputFlag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Resurrect.UI_Resurrect_C.AddInputFlag
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Resurrect_C::AddInputFlag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Resurrect.UI_Resurrect_C.AddInputFlag"));
		
		UUI_Resurrect_C_AddInputFlag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Resurrect.UI_Resurrect_C.TryCloseByPlayer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_PlayerState_Framework_C*                 OldPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Resurrect_C::TryCloseByPlayer(class ABP_PlayerState_Framework_C* OldPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Resurrect.UI_Resurrect_C.TryCloseByPlayer"));
		
		UUI_Resurrect_C_TryCloseByPlayer_Params params {};
		params.OldPlayer = OldPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Resurrect.UI_Resurrect_C.Visible and Invisible Protection
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Exec                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Resurrect_C::VisibleandInvisibleProtection(bool* Exec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Resurrect.UI_Resurrect_C.Visible and Invisible Protection"));
		
		UUI_Resurrect_C_VisibleandInvisibleProtection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Exec != nullptr)
			*Exec = params.Exec;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Resurrect.UI_Resurrect_C.SetIcon
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ResurrectType                                    Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Resurrect_C::SetIcon(E_ResurrectType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Resurrect.UI_Resurrect_C.SetIcon"));
		
		UUI_Resurrect_C_SetIcon_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Resurrect.UI_Resurrect_C.UIEvent_Show
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ReviveWaitTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Resurrect_C::UIEvent_Show(int32_t ReviveWaitTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Resurrect.UI_Resurrect_C.UIEvent_Show"));
		
		UUI_Resurrect_C_UIEvent_Show_Params params {};
		params.ReviveWaitTime = ReviveWaitTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Resurrect.UI_Resurrect_C.ShowResurrectUI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_ResurrectType                                    Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_PlayerState_Framework_C*                 Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Resurrect_C::ShowResurrectUI(int32_t Time, E_ResurrectType Type, class ABP_PlayerState_Framework_C* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Resurrect.UI_Resurrect_C.ShowResurrectUI"));
		
		UUI_Resurrect_C_ShowResurrectUI_Params params {};
		params.Time = Time;
		params.Type = Type;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Resurrect.UI_Resurrect_C.RebirthCountDown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Resurrect_C::RebirthCountDown(int32_t Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Resurrect.UI_Resurrect_C.RebirthCountDown"));
		
		UUI_Resurrect_C_RebirthCountDown_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Resurrect.UI_Resurrect_C.CloseUI
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Resurrect_C::CloseUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Resurrect.UI_Resurrect_C.CloseUI"));
		
		UUI_Resurrect_C_CloseUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Resurrect.UI_Resurrect_C.BeginCountDown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Resurrect_C::BeginCountDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Resurrect.UI_Resurrect_C.BeginCountDown"));
		
		UUI_Resurrect_C_BeginCountDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Resurrect.UI_Resurrect_C.EndEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Resurrect_C::EndEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Resurrect.UI_Resurrect_C.EndEvent"));
		
		UUI_Resurrect_C_EndEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Resurrect.UI_Resurrect_C.ExecuteUbergraph_UI_Resurrect
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Resurrect_C::ExecuteUbergraph_UI_Resurrect(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Resurrect.UI_Resurrect_C.ExecuteUbergraph_UI_Resurrect"));
		
		UUI_Resurrect_C_ExecuteUbergraph_UI_Resurrect_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Resurrect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Resurrect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_Resurrect.UI_Resurrect_C"));
		return ptr;
	}

}


