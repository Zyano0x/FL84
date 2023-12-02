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
	 * 		Name   -> Function BPC_CountDown.BPC_CountDown_C.OnRep_CountSoundName
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_CountDown_C::OnRep_CountSoundName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_CountDown.BPC_CountDown_C.OnRep_CountSoundName"));
		
		UBPC_CountDown_C_OnRep_CountSoundName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_CountDown.BPC_CountDown_C.[C]CountEnd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_CountDown_C::CCountEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_CountDown.BPC_CountDown_C.[C]CountEnd"));
		
		UBPC_CountDown_C_CCountEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_CountDown.BPC_CountDown_C.[S]StopMatchCountDown
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_CountDown_C::SStopMatchCountDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_CountDown.BPC_CountDown_C.[S]StopMatchCountDown"));
		
		UBPC_CountDown_C_SStopMatchCountDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_CountDown.BPC_CountDown_C.[S]StartMatchCountDown
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            MatchTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void UBPC_CountDown_C::SStartMatchCountDown(int32_t MatchTime, const class FScriptDelegate& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_CountDown.BPC_CountDown_C.[S]StartMatchCountDown"));
		
		UBPC_CountDown_C_SStartMatchCountDown_Params params {};
		params.MatchTime = MatchTime;
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_CountDown.BPC_CountDown_C.[S]StartCountDown
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      SoundName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void UBPC_CountDown_C::SStartCountDown(int32_t Time, const class FString& SoundName, const class FScriptDelegate& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_CountDown.BPC_CountDown_C.[S]StartCountDown"));
		
		UBPC_CountDown_C_SStartCountDown_Params params {};
		params.Time = Time;
		params.SoundName = SoundName;
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_CountDown.BPC_CountDown_C.[C]StopCountDown
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_CountDown_C::CStopCountDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_CountDown.BPC_CountDown_C.[C]StopCountDown"));
		
		UBPC_CountDown_C_CStopCountDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_CountDown.BPC_CountDown_C.OnRep_Time
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_CountDown_C::OnRep_Time()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_CountDown.BPC_CountDown_C.OnRep_Time"));
		
		UBPC_CountDown_C_OnRep_Time_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_CountDown.BPC_CountDown_C.GetCountDownWidget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UUI_CountDown_C*                             Output_Get1                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_CountDown_C::GetCountDownWidget(class UUI_CountDown_C** Output_Get1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_CountDown.BPC_CountDown_C.GetCountDownWidget"));
		
		UBPC_CountDown_C_GetCountDownWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output_Get1 != nullptr)
			*Output_Get1 = params.Output_Get1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_CountDown.BPC_CountDown_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPC_CountDown_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_CountDown.BPC_CountDown_C.ReceiveBeginPlay"));
		
		UBPC_CountDown_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_CountDown.BPC_CountDown_C.StartCountdown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_CountDown_C::StartCountdown(int32_t Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_CountDown.BPC_CountDown_C.StartCountdown"));
		
		UBPC_CountDown_C_StartCountdown_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_CountDown.BPC_CountDown_C.OnCountDownTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_CountDown_C::OnCountDownTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_CountDown.BPC_CountDown_C.OnCountDownTime"));
		
		UBPC_CountDown_C_OnCountDownTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_CountDown.BPC_CountDown_C.[C]ClientCountDown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_CountDown_C::CClientCountDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_CountDown.BPC_CountDown_C.[C]ClientCountDown"));
		
		UBPC_CountDown_C_CClientCountDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_CountDown.BPC_CountDown_C.CountDownTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_CountDown_C::CountDownTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_CountDown.BPC_CountDown_C.CountDownTick"));
		
		UBPC_CountDown_C_CountDownTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_CountDown.BPC_CountDown_C.MCountDownTick
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_CountDown_C::MCountDownTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_CountDown.BPC_CountDown_C.MCountDownTick"));
		
		UBPC_CountDown_C_MCountDownTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_CountDown.BPC_CountDown_C.CustomEvent_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESCMInGameState                                    NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_CountDown_C::CustomEvent_1(ESCMInGameState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_CountDown.BPC_CountDown_C.CustomEvent_1"));
		
		UBPC_CountDown_C_CustomEvent_1_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_CountDown.BPC_CountDown_C.ExecuteUbergraph_BPC_CountDown
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_CountDown_C::ExecuteUbergraph_BPC_CountDown(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_CountDown.BPC_CountDown_C.ExecuteUbergraph_BPC_CountDown"));
		
		UBPC_CountDown_C_ExecuteUbergraph_BPC_CountDown_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_CountDown.BPC_CountDown_C.OnMatchCountDownFinished__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_CountDown_C::OnMatchCountDownFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_CountDown.BPC_CountDown_C.OnMatchCountDownFinished__DelegateSignature"));
		
		UBPC_CountDown_C_OnMatchCountDownFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_CountDown.BPC_CountDown_C.OnCountDownFinished__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_CountDown_C::OnCountDownFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_CountDown.BPC_CountDown_C.OnCountDownFinished__DelegateSignature"));
		
		UBPC_CountDown_C_OnCountDownFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_CountDown.BPC_CountDown_C.OnLocalTimeChange__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_CountDown_C::OnLocalTimeChange__DelegateSignature(int32_t Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_CountDown.BPC_CountDown_C.OnLocalTimeChange__DelegateSignature"));
		
		UBPC_CountDown_C_OnLocalTimeChange__DelegateSignature_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_CountDown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_CountDown_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BPC_CountDown.BPC_CountDown_C"));
		return ptr;
	}

}


