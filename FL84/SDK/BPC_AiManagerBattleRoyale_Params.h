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
	 * Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.ReplenishAITeammate
	 */
	struct UBPC_AiManagerBattleRoyale_C_ReplenishAITeammate_Params
	{	};

	/**
	 * Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.GetCountDownComponent
	 */
	struct UBPC_AiManagerBattleRoyale_C_GetCountDownComponent_Params
	{
	public:
		class UBPC_CountDown_C*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.StopAiBehavior
	 */
	struct UBPC_AiManagerBattleRoyale_C_StopAiBehavior_Params
	{	};

	/**
	 * Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.CanModeSpawnAiTeammate
	 */
	struct UBPC_AiManagerBattleRoyale_C_CanModeSpawnAiTeammate_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.GetAIController
	 */
	struct UBPC_AiManagerBattleRoyale_C_GetAIController_Params
	{
	public:
		class ASolarPlayerState*                                   PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASolarBotAIController*                               Controller;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.SpawnAI
	 */
	struct UBPC_AiManagerBattleRoyale_C_SpawnAI_Params
	{
	public:
		bool                                                       bTeammateAI;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IVR9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Team;                                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class ASCMPlayerState*                                     PlayerState;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.GetSpawnInterval
	 */
	struct UBPC_AiManagerBattleRoyale_C_GetSpawnInterval_Params
	{
	public:
		float                                                      Interval;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.UpdatePureAiOrder
	 */
	struct UBPC_AiManagerBattleRoyale_C_UpdatePureAiOrder_Params
	{	};

	/**
	 * Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.Pick Team
	 */
	struct UBPC_AiManagerBattleRoyale_C_PickTeam_Params
	{
	public:
		bool                                                       RealPlayerTeam;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NPR9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Team;                                                    // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.DeleteTempAI
	 */
	struct UBPC_AiManagerBattleRoyale_C_DeleteTempAI_Params
	{
	public:
		int32_t                                                    count;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.RunBehaviourTree
	 */
	struct UBPC_AiManagerBattleRoyale_C_RunBehaviourTree_Params
	{
	public:
		class ASCMPlayerState*                                     Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBehaviorTree*                                       BTAsset;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.SpawnLocation
	 */
	struct UBPC_AiManagerBattleRoyale_C_SpawnLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XDG6[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.IsPlayerFull
	 */
	struct UBPC_AiManagerBattleRoyale_C_IsPlayerFull_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1A6V[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.GetLogicComponent
	 */
	struct UBPC_AiManagerBattleRoyale_C_GetLogicComponent_Params
	{
	public:
		class UBP_Logic_BattleRoyale_C*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.MatchFinished
	 */
	struct UBPC_AiManagerBattleRoyale_C_MatchFinished_Params
	{	};

	/**
	 * Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.PreSpawnAI
	 */
	struct UBPC_AiManagerBattleRoyale_C_PreSpawnAI_Params
	{	};

	/**
	 * Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.ReceiveBeginPlay
	 */
	struct UBPC_AiManagerBattleRoyale_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.SpawnAIDynamic
	 */
	struct UBPC_AiManagerBattleRoyale_C_SpawnAIDynamic_Params
	{	};

	/**
	 * Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.OnBattleStateChanged
	 */
	struct UBPC_AiManagerBattleRoyale_C_OnBattleStateChanged_Params
	{
	public:
		E_BattleState_BattleRoyale                                 NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.CustomEvent_2
	 */
	struct UBPC_AiManagerBattleRoyale_C_CustomEvent_2_Params
	{	};

	/**
	 * Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.OnPlayerJoin
	 */
	struct UBPC_AiManagerBattleRoyale_C_OnPlayerJoin_Params
	{
	public:
		class ASCMPlayerState*                                     NewPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsAi;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.ExecuteUbergraph_BPC_AiManagerBattleRoyale
	 */
	struct UBPC_AiManagerBattleRoyale_C_ExecuteUbergraph_BPC_AiManagerBattleRoyale_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
