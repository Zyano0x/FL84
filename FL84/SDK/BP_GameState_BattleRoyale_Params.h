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
	 * Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.Get Actual UICount Down Time
	 */
	struct ABP_GameState_BattleRoyale_C_GetActualUICountDownTime_Params
	{
	public:
		float                                                      CountDownTime;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DPW0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.CloseEmptyVictoryUI
	 */
	struct ABP_GameState_BattleRoyale_C_CloseEmptyVictoryUI_Params
	{	};

	/**
	 * Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.OnRep_HasTop3Team
	 */
	struct ABP_GameState_BattleRoyale_C_OnRep_HasTop3Team_Params
	{	};

	/**
	 * Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.ShowEmptyVictoryUI
	 */
	struct ABP_GameState_BattleRoyale_C_ShowEmptyVictoryUI_Params
	{	};

	/**
	 * Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.OnRep_WinTeam
	 */
	struct ABP_GameState_BattleRoyale_C_OnRep_WinTeam_Params
	{	};

	/**
	 * Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.ShowVictoryUI
	 */
	struct ABP_GameState_BattleRoyale_C_ShowVictoryUI_Params
	{	};

	/**
	 * Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.OnRep_BattleState
	 */
	struct ABP_GameState_BattleRoyale_C_OnRep_BattleState_Params
	{	};

	/**
	 * Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.OnRep_MapID
	 */
	struct ABP_GameState_BattleRoyale_C_OnRep_MapID_Params
	{	};

	/**
	 * Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.ReceiveBeginPlay
	 */
	struct ABP_GameState_BattleRoyale_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.OnBattleStateChange
	 */
	struct ABP_GameState_BattleRoyale_C_OnBattleStateChange_Params
	{
	public:
		E_BattleState_BattleRoyale                                 ChangeType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.StartCountdown
	 */
	struct ABP_GameState_BattleRoyale_C_StartCountdown_Params
	{
	public:
		int32_t                                                    Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.BattleEnd
	 */
	struct ABP_GameState_BattleRoyale_C_BattleEnd_Params
	{
	public:
		class FString                                              WinTeam;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.OnConfigInit
	 */
	struct ABP_GameState_BattleRoyale_C_OnConfigInit_Params
	{	};

	/**
	 * Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.OnShowVictoryUI
	 */
	struct ABP_GameState_BattleRoyale_C_OnShowVictoryUI_Params
	{	};

	/**
	 * Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.NetMulticastCelebrateBattleEnd
	 */
	struct ABP_GameState_BattleRoyale_C_NetMulticastCelebrateBattleEnd_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.CelebrateBattleEnd
	 */
	struct ABP_GameState_BattleRoyale_C_CelebrateBattleEnd_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.ExecuteUbergraph_BP_GameState_BattleRoyale
	 */
	struct ABP_GameState_BattleRoyale_C_ExecuteUbergraph_BP_GameState_BattleRoyale_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3VU1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.BroadcastBattleStateChange__DelegateSignature
	 */
	struct ABP_GameState_BattleRoyale_C_BroadcastBattleStateChange__DelegateSignature_Params
	{
	public:
		E_BattleState_BattleRoyale                                 NowState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
