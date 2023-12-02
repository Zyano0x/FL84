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
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.GetWeaponIDByCharacter
	 */
	struct UBP_Logic_BattleRoyale_C_GetWeaponIDByCharacter_Params
	{
	public:
		class ASolarCharacter*                                     InCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSlot;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutWeaponID;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.GetPlayerDataTraceByPlayer
	 */
	struct UBP_Logic_BattleRoyale_C_GetPlayerDataTraceByPlayer_Params
	{
	public:
		class ABP_PlayerState_BattleRoyale_C*                      InPlayerState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TMap<class FString, class FString>                         Map;                                                     // 0x0008(0x0050)  (Parm, OutParm)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.HandleWinnerTeamPostSlomo
	 */
	struct UBP_Logic_BattleRoyale_C_HandleWinnerTeamPostSlomo_Params
	{
	public:
		class ASolarTeamInfo*                                      WinnerTeam;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.HandleWinnerTeamPreSlomo
	 */
	struct UBP_Logic_BattleRoyale_C_HandleWinnerTeamPreSlomo_Params
	{
	public:
		class ASolarTeamInfo*                                      WinnerTeam;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.PresettleAll
	 */
	struct UBP_Logic_BattleRoyale_C_PresettleAll_Params
	{	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.DealTeammateAISettle
	 */
	struct UBP_Logic_BattleRoyale_C_DealTeammateAISettle_Params
	{
	public:
		class ASolarPlayerState*                                   Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.Custom Room Start
	 */
	struct UBP_Logic_BattleRoyale_C_CustomRoomStart_Params
	{	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.SendItemToPlayer
	 */
	struct UBP_Logic_BattleRoyale_C_SendItemToPlayer_Params
	{
	public:
		class ASolarPlayerState*                                   Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TMap<int32_t, int32_t>                                     ItemMap;                                                 // 0x0008(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.GetVehicleDataTrace
	 */
	struct UBP_Logic_BattleRoyale_C_GetVehicleDataTrace_Params
	{
	public:
		TMap<class FString, class FString>                         Map;                                                     // 0x0000(0x0050)  (ConstParm, Parm, OutParm)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.Init Poison Circle
	 */
	struct UBP_Logic_BattleRoyale_C_InitPoisonCircle_Params
	{
	public:
		class UBP_MapInfoComponent_C*                              MapInfo;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.GetAiManager
	 */
	struct UBP_Logic_BattleRoyale_C_GetAiManager_Params
	{
	public:
		class UBPC_AiManagerBattleRoyale_C*                        Output_Get;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.SetSkillStateByBattleState
	 */
	struct UBP_Logic_BattleRoyale_C_SetSkillStateByBattleState_Params
	{	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.Get Shrink Index
	 */
	struct UBP_Logic_BattleRoyale_C_GetShrinkIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.TryPushBattleState
	 */
	struct UBP_Logic_BattleRoyale_C_TryPushBattleState_Params
	{
	public:
		E_BattleState_BattleRoyale                                 TargetState;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ForcePush;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.GetWeaponID
	 */
	struct UBP_Logic_BattleRoyale_C_GetWeaponID_Params
	{
	public:
		int32_t                                                    ItemID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    weaponid;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.VehicleDataTrace
	 */
	struct UBP_Logic_BattleRoyale_C_VehicleDataTrace_Params
	{	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.GetPlayerDataTrace
	 */
	struct UBP_Logic_BattleRoyale_C_GetPlayerDataTrace_Params
	{
	public:
		class ABP_PlayerState_BattleRoyale_C*                      Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TMap<class FString, class FString>                         Map;                                                     // 0x0008(0x0050)  (Parm, OutParm)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.KickOutExcessAI
	 */
	struct UBP_Logic_BattleRoyale_C_KickOutExcessAI_Params
	{	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.ReceivePlayerReJoinRequest
	 */
	struct UBP_Logic_BattleRoyale_C_ReceivePlayerReJoinRequest_Params
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ErrorMsg;                                                // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.GetAiLevel
	 */
	struct UBP_Logic_BattleRoyale_C_GetAiLevel_Params
	{
	public:
		class ASolarPlayerState*                                   Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DefaultDifficultyLevel;                                  // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V0OI[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.Get Config
	 */
	struct UBP_Logic_BattleRoyale_C_GetConfig_Params
	{
	public:
		class UCFG_BattleRoyale_C*                                 CFG;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.DataTrace
	 */
	struct UBP_Logic_BattleRoyale_C_DataTrace_Params
	{	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.UpdatePlayerData
	 */
	struct UBP_Logic_BattleRoyale_C_UpdatePlayerData_Params
	{
	public:
		class ASolarPlayerState*                                   Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.PreSettleDeal
	 */
	struct UBP_Logic_BattleRoyale_C_PreSettleDeal_Params
	{
	public:
		class ASCMPlayerState*                                     Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESCMPlayerOutType                                          OutType;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.Will Master Leaving Disband Room
	 */
	struct UBP_Logic_BattleRoyale_C_WillMasterLeavingDisbandRoom_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.Is Master Disbanding Legal
	 */
	struct UBP_Logic_BattleRoyale_C_IsMasterDisbandingLegal_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.Is Kick Out Legal
	 */
	struct UBP_Logic_BattleRoyale_C_IsKickOutLegal_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.Is Side Switch Legal
	 */
	struct UBP_Logic_BattleRoyale_C_IsSideSwitchLegal_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.BuyResurrectionDeal
	 */
	struct UBP_Logic_BattleRoyale_C_BuyResurrectionDeal_Params
	{
	public:
		class APlayerState*                                        Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.UpdateWinnerData
	 */
	struct UBP_Logic_BattleRoyale_C_UpdateWinnerData_Params
	{
	public:
		class FString                                              Team;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.IsLamster
	 */
	struct UBP_Logic_BattleRoyale_C_IsLamster_Params
	{
	public:
		class ASCMPlayerState*                                     Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESCMPlayerOutType                                          Index;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.CanPlayerBattle
	 */
	struct UBP_Logic_BattleRoyale_C_CanPlayerBattle_Params
	{
	public:
		class ASCMPlayerState*                                     Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.UpdateTeamData
	 */
	struct UBP_Logic_BattleRoyale_C_UpdateTeamData_Params
	{
	public:
		class FString                                              Team;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bAced;                                                   // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P0RJ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.GetConiReviveManager
	 */
	struct UBP_Logic_BattleRoyale_C_GetConiReviveManager_Params
	{
	public:
		class ABP_ReviveItemManger_BattleRoyale_C*                 Output_Get;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.IsAllowReconnectGame
	 */
	struct UBP_Logic_BattleRoyale_C_IsAllowReconnectGame_Params
	{
	public:
		class ASCMPlayerState*                                     InPC;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.QuitImmediately
	 */
	struct UBP_Logic_BattleRoyale_C_QuitImmediately_Params
	{
	public:
		ESCMPlayerOutType                                          Index;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DN7Q[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ASCMPlayerState*                                     InputPin;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SendToSettle;                                            // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.Update Player Data Trace
	 */
	struct UBP_Logic_BattleRoyale_C_UpdatePlayerDataTrace_Params
	{
	public:
		class ASCMPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.Create Airdrop
	 */
	struct UBP_Logic_BattleRoyale_C_CreateAirdrop_Params
	{
	public:
		int32_t                                                    ChestID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UKMF[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.StartCruising
	 */
	struct UBP_Logic_BattleRoyale_C_StartCruising_Params
	{	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.InitElements
	 */
	struct UBP_Logic_BattleRoyale_C_InitElements_Params
	{	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.Get Map Info
	 */
	struct UBP_Logic_BattleRoyale_C_GetMapInfo_Params
	{
	public:
		class UBP_MapInfoComponent_C*                              MapInfo;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.Init Timeline Event
	 */
	struct UBP_Logic_BattleRoyale_C_InitTimelineEvent_Params
	{
	public:
		class UDataTable*                                          BattleTimeline;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.ExecuteBattleEvent
	 */
	struct UBP_Logic_BattleRoyale_C_ExecuteBattleEvent_Params
	{
	public:
		struct FS_Event_BattleRoyale                               S_Event_BattleRoyale;                                    // 0x0000(0x0058)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.UpdateBattleState
	 */
	struct UBP_Logic_BattleRoyale_C_UpdateBattleState_Params
	{
	public:
		E_BattleState_BattleRoyale                                 NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CXDE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.GetGameState
	 */
	struct UBP_Logic_BattleRoyale_C_GetGameState_Params
	{
	public:
		class ABP_GameState_BattleRoyale_C*                        Output_Get;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.GetPlayerStartOnWaitingland
	 */
	struct UBP_Logic_BattleRoyale_C_GetPlayerStartOnWaitingland_Params
	{
	public:
		TArray<class APlayerStart*>                                PlayerStarts;                                            // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.GetBattleRoyaleMode
	 */
	struct UBP_Logic_BattleRoyale_C_GetBattleRoyaleMode_Params
	{
	public:
		class ABP_Mode_BattleRoyale_C*                             AsBPSCMBattleRoyale;                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.InitModeSetting
	 */
	struct UBP_Logic_BattleRoyale_C_InitModeSetting_Params
	{	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.GMSpawnAI
	 */
	struct UBP_Logic_BattleRoyale_C_GMSpawnAI_Params
	{	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.OnMatchEnd
	 */
	struct UBP_Logic_BattleRoyale_C_OnMatchEnd_Params
	{
	public:
		int32_t                                                    RPCID;                                                   // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.OnBattleStateChanged
	 */
	struct UBP_Logic_BattleRoyale_C_OnBattleStateChanged_Params
	{
	public:
		E_BattleState_BattleRoyale                                 OldState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_BattleState_BattleRoyale                                 NewState;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.ReceiveBattleTick
	 */
	struct UBP_Logic_BattleRoyale_C_ReceiveBattleTick_Params
	{
	public:
		float                                                      BattleTime;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DeltaTime;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.PreSettle
	 */
	struct UBP_Logic_BattleRoyale_C_PreSettle_Params
	{
	public:
		class ASCMPlayerState*                                     Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESCMPlayerOutType                                          OutType;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.BattleInitFinished
	 */
	struct UBP_Logic_BattleRoyale_C_BattleInitFinished_Params
	{	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.OnDSClose
	 */
	struct UBP_Logic_BattleRoyale_C_OnDSClose_Params
	{	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.ReceivePlayerJoinBattle
	 */
	struct UBP_Logic_BattleRoyale_C_ReceivePlayerJoinBattle_Params
	{
	public:
		class ASCMPlayerState*                                     NewPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsAI;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.ReceivePlayerBattleEnd
	 */
	struct UBP_Logic_BattleRoyale_C_ReceivePlayerBattleEnd_Params
	{
	public:
		class ASCMPlayerState*                                     Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESCMPlayerOutType                                          OutType;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.UpdateAliveTeamsAndPlayers
	 */
	struct UBP_Logic_BattleRoyale_C_UpdateAliveTeamsAndPlayers_Params
	{	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.MatchEnd
	 */
	struct UBP_Logic_BattleRoyale_C_MatchEnd_Params
	{	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.VehicleSnapshot
	 */
	struct UBP_Logic_BattleRoyale_C_VehicleSnapshot_Params
	{	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.Snapshot
	 */
	struct UBP_Logic_BattleRoyale_C_Snapshot_Params
	{	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.CustomEvent_1
	 */
	struct UBP_Logic_BattleRoyale_C_CustomEvent_1_Params
	{	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.OnCountDownFinished
	 */
	struct UBP_Logic_BattleRoyale_C_OnCountDownFinished_Params
	{	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.ExecuteUbergraph_BP_Logic_BattleRoyale
	 */
	struct UBP_Logic_BattleRoyale_C_ExecuteUbergraph_BP_Logic_BattleRoyale_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XOO2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.BattleStateChanged__DelegateSignature
	 */
	struct UBP_Logic_BattleRoyale_C_BattleStateChanged__DelegateSignature_Params
	{
	public:
		E_BattleState_BattleRoyale                                 NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.OnGoInToBattleState__DelegateSignature
	 */
	struct UBP_Logic_BattleRoyale_C_OnGoInToBattleState__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
