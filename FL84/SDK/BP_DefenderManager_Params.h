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
	 * Function BP_DefenderManager.BP_DefenderManager_C.OnRep_BattleStarted
	 */
	struct ABP_DefenderManager_C_OnRep_BattleStarted_Params
	{	};

	/**
	 * Function BP_DefenderManager.BP_DefenderManager_C.DataTraceDefender
	 */
	struct ABP_DefenderManager_C_DataTraceDefender_Params
	{
	public:
		class ASolarPlayerState*                                   Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Name;                                                    // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Data;                                                    // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DefenderManager.BP_DefenderManager_C.GetExtraReward
	 */
	struct ABP_DefenderManager_C_GetExtraReward_Params
	{
	public:
		int32_t                                                    Reward;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DefenderManager.BP_DefenderManager_C.SetShowTime
	 */
	struct ABP_DefenderManager_C_SetShowTime_Params
	{
	public:
		float                                                      ShowTimeSelf;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ShowTimeDefender;                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DefenderManager.BP_DefenderManager_C.GetTotalTime
	 */
	struct ABP_DefenderManager_C_GetTotalTime_Params
	{
	public:
		float                                                      TotalTime;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DefenderManager.BP_DefenderManager_C.GetUI
	 */
	struct ABP_DefenderManager_C_GetUI_Params
	{
	public:
		class UUI_OpeningShow_C*                                   Output_Get;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DefenderManager.BP_DefenderManager_C.OnRep_UIState
	 */
	struct ABP_DefenderManager_C_OnRep_UIState_Params
	{	};

	/**
	 * Function BP_DefenderManager.BP_DefenderManager_C.ReceiveBeginPlay
	 */
	struct ABP_DefenderManager_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_DefenderManager.BP_DefenderManager_C.[S]ShowDefenderUI
	 */
	struct ABP_DefenderManager_C_SShowDefenderUI_Params
	{	};

	/**
	 * Function BP_DefenderManager.BP_DefenderManager_C.OnUIStateChanged
	 */
	struct ABP_DefenderManager_C_OnUIStateChanged_Params
	{
	public:
		E_State_DefenderManager                                    UiState;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DefenderManager.BP_DefenderManager_C.OnDefenderDataReady
	 */
	struct ABP_DefenderManager_C_OnDefenderDataReady_Params
	{	};

	/**
	 * Function BP_DefenderManager.BP_DefenderManager_C.ShowDefenderUIForReplay
	 */
	struct ABP_DefenderManager_C_ShowDefenderUIForReplay_Params
	{	};

	/**
	 * Function BP_DefenderManager.BP_DefenderManager_C.OnSideHeroPickEnd_Event_1
	 */
	struct ABP_DefenderManager_C_OnSideHeroPickEnd_Event_1_Params
	{
	public:
		class FString                                              Side;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DefenderManager.BP_DefenderManager_C.CustomEvent_1
	 */
	struct ABP_DefenderManager_C_CustomEvent_1_Params
	{
	public:
		ESCMInGameState                                            NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DefenderManager.BP_DefenderManager_C.ExecuteUbergraph_BP_DefenderManager
	 */
	struct ABP_DefenderManager_C_ExecuteUbergraph_BP_DefenderManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1KTT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
