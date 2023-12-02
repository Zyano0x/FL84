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
	 * Function BPC_BuyResurrection.BPC_BuyResurrection_C.CheckAllTeammateDied
	 */
	struct UBPC_BuyResurrection_C_CheckAllTeammateDied_Params
	{
	public:
		bool                                                       IfAllDied;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LPF8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_BuyResurrection.BPC_BuyResurrection_C.RefreshUI
	 */
	struct UBPC_BuyResurrection_C_RefreshUI_Params
	{	};

	/**
	 * Function BPC_BuyResurrection.BPC_BuyResurrection_C.GetTeammatesArr
	 */
	struct UBPC_BuyResurrection_C_GetTeammatesArr_Params
	{
	public:
		TArray<class ASCMPlayerState*>                             ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_BuyResurrection.BPC_BuyResurrection_C.On All Teammates Killed
	 */
	struct UBPC_BuyResurrection_C_OnAllTeammatesKilled_Params
	{	};

	/**
	 * Function BPC_BuyResurrection.BPC_BuyResurrection_C.Get Alive Team Player Num
	 */
	struct UBPC_BuyResurrection_C_GetAliveTeamPlayerNum_Params
	{
	public:
		class ASCMPlayerState*                                     OutPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Num;                                                     // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_BuyResurrection.BPC_BuyResurrection_C.Show Buy Resurrection UI
	 */
	struct UBPC_BuyResurrection_C_ShowBuyResurrectionUI_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_BuyResurrection.BPC_BuyResurrection_C.Event_LeaveWhileWaiting
	 */
	struct UBPC_BuyResurrection_C_Event_LeaveWhileWaiting_Params
	{	};

	/**
	 * Function BPC_BuyResurrection.BPC_BuyResurrection_C.ClientDoCameraFade
	 */
	struct UBPC_BuyResurrection_C_ClientDoCameraFade_Params
	{	};

	/**
	 * Function BPC_BuyResurrection.BPC_BuyResurrection_C.Event_OnRevivingComplete
	 */
	struct UBPC_BuyResurrection_C_Event_OnRevivingComplete_Params
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_BuyResurrection.BPC_BuyResurrection_C.Event_OnRevivedComplete
	 */
	struct UBPC_BuyResurrection_C_Event_OnRevivedComplete_Params
	{	};

	/**
	 * Function BPC_BuyResurrection.BPC_BuyResurrection_C.Event_OnResurrectionStateChanged
	 */
	struct UBPC_BuyResurrection_C_Event_OnResurrectionStateChanged_Params
	{
	public:
		EResurrectionState                                         LastState;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_BuyResurrection.BPC_BuyResurrection_C.SetCharacterResVis
	 */
	struct UBPC_BuyResurrection_C_SetCharacterResVis_Params
	{
	public:
		bool                                                       Vis;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_BuyResurrection.BPC_BuyResurrection_C.OnReviveSelf
	 */
	struct UBPC_BuyResurrection_C_OnReviveSelf_Params
	{
	public:
		bool                                                       bOverrideLocation;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GDQA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ReviveLocation;                                          // 0x0004(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_BuyResurrection.BPC_BuyResurrection_C.ExecuteUbergraph_BPC_BuyResurrection
	 */
	struct UBPC_BuyResurrection_C_ExecuteUbergraph_BPC_BuyResurrection_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RNGG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
