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
	 * 		Name   -> Function BP_HUD_Framework.BP_HUD_Framework_C.RemoveInputActionFlagTeamDeath
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HUD_Framework_C::RemoveInputActionFlagTeamDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_HUD_Framework.BP_HUD_Framework_C.RemoveInputActionFlagTeamDeath"));
		
		ABP_HUD_Framework_C_RemoveInputActionFlagTeamDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_HUD_Framework.BP_HUD_Framework_C.AddInputActionFlagTeamDeath
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HUD_Framework_C::AddInputActionFlagTeamDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_HUD_Framework.BP_HUD_Framework_C.AddInputActionFlagTeamDeath"));
		
		ABP_HUD_Framework_C_AddInputActionFlagTeamDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_HUD_Framework.BP_HUD_Framework_C.BP_SCustomHUDBase_AutoGenFunc
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Publisher                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              MetaData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void ABP_HUD_Framework_C::BP_SCustomHUDBase_AutoGenFunc(class UObject* Publisher, class UObject* Payload, TArray<class FString> MetaData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_HUD_Framework.BP_HUD_Framework_C.BP_SCustomHUDBase_AutoGenFunc"));
		
		ABP_HUD_Framework_C_BP_SCustomHUDBase_AutoGenFunc_Params params {};
		params.Publisher = Publisher;
		params.Payload = Payload;
		params.MetaData = MetaData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_HUD_Framework.BP_HUD_Framework_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_HUD_Framework_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_HUD_Framework.BP_HUD_Framework_C.ReceiveBeginPlay"));
		
		ABP_HUD_Framework_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_HUD_Framework.BP_HUD_Framework_C.EventOnWindowVisibiltyChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_BattleUIType                                     UIType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_WidgetVisibility                                 Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HUD_Framework_C::EventOnWindowVisibiltyChanged(E_BattleUIType UIType, E_WidgetVisibility Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_HUD_Framework.BP_HUD_Framework_C.EventOnWindowVisibiltyChanged"));
		
		ABP_HUD_Framework_C_EventOnWindowVisibiltyChanged_Params params {};
		params.UIType = UIType;
		params.Visibility = Visibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_HUD_Framework.BP_HUD_Framework_C.ExecuteUbergraph_BP_HUD_Framework
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HUD_Framework_C::ExecuteUbergraph_BP_HUD_Framework(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_HUD_Framework.BP_HUD_Framework_C.ExecuteUbergraph_BP_HUD_Framework"));
		
		ABP_HUD_Framework_C_ExecuteUbergraph_BP_HUD_Framework_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_HUD_Framework.BP_HUD_Framework_C.OnWindowVisibiltyChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_BattleUIType                                     UIType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_WidgetVisibility                                 Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HUD_Framework_C::OnWindowVisibiltyChanged__DelegateSignature(E_BattleUIType UIType, E_WidgetVisibility Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_HUD_Framework.BP_HUD_Framework_C.OnWindowVisibiltyChanged__DelegateSignature"));
		
		ABP_HUD_Framework_C_OnWindowVisibiltyChanged__DelegateSignature_Params params {};
		params.UIType = UIType;
		params.Visibility = Visibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_HUD_Framework_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HUD_Framework_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_HUD_Framework.BP_HUD_Framework_C"));
		return ptr;
	}

}


