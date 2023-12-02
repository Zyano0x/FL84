#pragma once

/**
 * Name: FL84
 * Version: 1.15.1.6
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BPC_CountDown.BPC_CountDown_C.OnRep_CountSoundName
	 */
	struct UBPC_CountDown_C_OnRep_CountSoundName_Params
	{	};

	/**
	 * Function BPC_CountDown.BPC_CountDown_C.[C]CountEnd
	 */
	struct UBPC_CountDown_C_CCountEnd_Params
	{	};

	/**
	 * Function BPC_CountDown.BPC_CountDown_C.[S]StopMatchCountDown
	 */
	struct UBPC_CountDown_C_SStopMatchCountDown_Params
	{	};

	/**
	 * Function BPC_CountDown.BPC_CountDown_C.[S]StartMatchCountDown
	 */
	struct UBPC_CountDown_C_SStartMatchCountDown_Params
	{
	public:
		int32_t                                                    MatchTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FScriptDelegate                                      Event;                                                   // 0x0004(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BPC_CountDown.BPC_CountDown_C.[S]StartCountDown
	 */
	struct UBPC_CountDown_C_SStartCountDown_Params
	{
	public:
		int32_t                                                    Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SSAZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              SoundName;                                               // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FScriptDelegate                                      Event;                                                   // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BPC_CountDown.BPC_CountDown_C.[C]StopCountDown
	 */
	struct UBPC_CountDown_C_CStopCountDown_Params
	{	};

	/**
	 * Function BPC_CountDown.BPC_CountDown_C.OnRep_Time
	 */
	struct UBPC_CountDown_C_OnRep_Time_Params
	{	};

	/**
	 * Function BPC_CountDown.BPC_CountDown_C.GetCountDownWidget
	 */
	struct UBPC_CountDown_C_GetCountDownWidget_Params
	{
	public:
		class UUI_CountDown_C*                                     Output_Get1;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_CountDown.BPC_CountDown_C.ReceiveBeginPlay
	 */
	struct UBPC_CountDown_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_CountDown.BPC_CountDown_C.StartCountdown
	 */
	struct UBPC_CountDown_C_StartCountdown_Params
	{
	public:
		int32_t                                                    Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_CountDown.BPC_CountDown_C.OnCountDownTime
	 */
	struct UBPC_CountDown_C_OnCountDownTime_Params
	{	};

	/**
	 * Function BPC_CountDown.BPC_CountDown_C.[C]ClientCountDown
	 */
	struct UBPC_CountDown_C_CClientCountDown_Params
	{	};

	/**
	 * Function BPC_CountDown.BPC_CountDown_C.CountDownTick
	 */
	struct UBPC_CountDown_C_CountDownTick_Params
	{	};

	/**
	 * Function BPC_CountDown.BPC_CountDown_C.MCountDownTick
	 */
	struct UBPC_CountDown_C_MCountDownTick_Params
	{	};

	/**
	 * Function BPC_CountDown.BPC_CountDown_C.CustomEvent_1
	 */
	struct UBPC_CountDown_C_CustomEvent_1_Params
	{
	public:
		ESCMInGameState                                            NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_CountDown.BPC_CountDown_C.ExecuteUbergraph_BPC_CountDown
	 */
	struct UBPC_CountDown_C_ExecuteUbergraph_BPC_CountDown_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_CountDown.BPC_CountDown_C.OnMatchCountDownFinished__DelegateSignature
	 */
	struct UBPC_CountDown_C_OnMatchCountDownFinished__DelegateSignature_Params
	{	};

	/**
	 * Function BPC_CountDown.BPC_CountDown_C.OnCountDownFinished__DelegateSignature
	 */
	struct UBPC_CountDown_C_OnCountDownFinished__DelegateSignature_Params
	{	};

	/**
	 * Function BPC_CountDown.BPC_CountDown_C.OnLocalTimeChange__DelegateSignature
	 */
	struct UBPC_CountDown_C_OnLocalTimeChange__DelegateSignature_Params
	{
	public:
		int32_t                                                    Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
