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
	 * 		Name   -> Function BPC_BuyResurrection.BPC_BuyResurrection_C.CheckAllTeammateDied
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IfAllDied                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_BuyResurrection_C::CheckAllTeammateDied(bool* IfAllDied)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_BuyResurrection.BPC_BuyResurrection_C.CheckAllTeammateDied"));
		
		UBPC_BuyResurrection_C_CheckAllTeammateDied_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IfAllDied != nullptr)
			*IfAllDied = params.IfAllDied;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_BuyResurrection.BPC_BuyResurrection_C.RefreshUI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_BuyResurrection_C::RefreshUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_BuyResurrection.BPC_BuyResurrection_C.RefreshUI"));
		
		UBPC_BuyResurrection_C_RefreshUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_BuyResurrection.BPC_BuyResurrection_C.GetTeammatesArr
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	TArray<class ASCMPlayerState*> UBPC_BuyResurrection_C::GetTeammatesArr()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_BuyResurrection.BPC_BuyResurrection_C.GetTeammatesArr"));
		
		UBPC_BuyResurrection_C_GetTeammatesArr_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_BuyResurrection.BPC_BuyResurrection_C.On All Teammates Killed
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_BuyResurrection_C::OnAllTeammatesKilled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_BuyResurrection.BPC_BuyResurrection_C.On All Teammates Killed"));
		
		UBPC_BuyResurrection_C_OnAllTeammatesKilled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_BuyResurrection.BPC_BuyResurrection_C.Get Alive Team Player Num
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASCMPlayerState*                             OutPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Num                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_BuyResurrection_C::GetAliveTeamPlayerNum(class ASCMPlayerState* OutPlayer, int32_t* Num)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_BuyResurrection.BPC_BuyResurrection_C.Get Alive Team Player Num"));
		
		UBPC_BuyResurrection_C_GetAliveTeamPlayerNum_Params params {};
		params.OutPlayer = OutPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Num != nullptr)
			*Num = params.Num;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_BuyResurrection.BPC_BuyResurrection_C.Show Buy Resurrection UI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_BuyResurrection_C::ShowBuyResurrectionUI(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_BuyResurrection.BPC_BuyResurrection_C.Show Buy Resurrection UI"));
		
		UBPC_BuyResurrection_C_ShowBuyResurrectionUI_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_BuyResurrection.BPC_BuyResurrection_C.Event_LeaveWhileWaiting
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_BuyResurrection_C::Event_LeaveWhileWaiting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_BuyResurrection.BPC_BuyResurrection_C.Event_LeaveWhileWaiting"));
		
		UBPC_BuyResurrection_C_Event_LeaveWhileWaiting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_BuyResurrection.BPC_BuyResurrection_C.ClientDoCameraFade
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_BuyResurrection_C::ClientDoCameraFade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_BuyResurrection.BPC_BuyResurrection_C.ClientDoCameraFade"));
		
		UBPC_BuyResurrection_C_ClientDoCameraFade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_BuyResurrection.BPC_BuyResurrection_C.Event_OnRevivingComplete
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      PlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPC_BuyResurrection_C::Event_OnRevivingComplete(const class FString& PlayerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_BuyResurrection.BPC_BuyResurrection_C.Event_OnRevivingComplete"));
		
		UBPC_BuyResurrection_C_Event_OnRevivingComplete_Params params {};
		params.PlayerId = PlayerId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_BuyResurrection.BPC_BuyResurrection_C.Event_OnRevivedComplete
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBPC_BuyResurrection_C::Event_OnRevivedComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_BuyResurrection.BPC_BuyResurrection_C.Event_OnRevivedComplete"));
		
		UBPC_BuyResurrection_C_Event_OnRevivedComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_BuyResurrection.BPC_BuyResurrection_C.Event_OnResurrectionStateChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EResurrectionState                                 LastState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_BuyResurrection_C::Event_OnResurrectionStateChanged(EResurrectionState LastState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_BuyResurrection.BPC_BuyResurrection_C.Event_OnResurrectionStateChanged"));
		
		UBPC_BuyResurrection_C_Event_OnResurrectionStateChanged_Params params {};
		params.LastState = LastState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_BuyResurrection.BPC_BuyResurrection_C.SetCharacterResVis
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Vis                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_BuyResurrection_C::SetCharacterResVis(bool Vis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_BuyResurrection.BPC_BuyResurrection_C.SetCharacterResVis"));
		
		UBPC_BuyResurrection_C_SetCharacterResVis_Params params {};
		params.Vis = Vis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_BuyResurrection.BPC_BuyResurrection_C.OnReviveSelf
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bOverrideLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     ReviveLocation                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_BuyResurrection_C::OnReviveSelf(bool bOverrideLocation, const struct FVector& ReviveLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_BuyResurrection.BPC_BuyResurrection_C.OnReviveSelf"));
		
		UBPC_BuyResurrection_C_OnReviveSelf_Params params {};
		params.bOverrideLocation = bOverrideLocation;
		params.ReviveLocation = ReviveLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_BuyResurrection.BPC_BuyResurrection_C.ExecuteUbergraph_BPC_BuyResurrection
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_BuyResurrection_C::ExecuteUbergraph_BPC_BuyResurrection(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_BuyResurrection.BPC_BuyResurrection_C.ExecuteUbergraph_BPC_BuyResurrection"));
		
		UBPC_BuyResurrection_C_ExecuteUbergraph_BPC_BuyResurrection_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_BuyResurrection_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_BuyResurrection_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BPC_BuyResurrection.BPC_BuyResurrection_C"));
		return ptr;
	}

}


