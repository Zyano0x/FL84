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
	 * Function BP_Logic_Framework.BP_Logic_Framework_C.Custom Room Start
	 */
	struct UBP_Logic_Framework_C_CustomRoomStart_Params
	{	};

	/**
	 * Function BP_Logic_Framework.BP_Logic_Framework_C.OnPlayerQuit
	 */
	struct UBP_Logic_Framework_C_OnPlayerQuit_Params
	{
	public:
		class ASCMPlayerState*                                     Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Logic_Framework.BP_Logic_Framework_C.PresettleAll
	 */
	struct UBP_Logic_Framework_C_PresettleAll_Params
	{	};

	/**
	 * Function BP_Logic_Framework.BP_Logic_Framework_C.FinishConfigInitiate
	 */
	struct UBP_Logic_Framework_C_FinishConfigInitiate_Params
	{	};

	/**
	 * Function BP_Logic_Framework.BP_Logic_Framework_C.Update
	 */
	struct UBP_Logic_Framework_C_Update_Params
	{	};

	/**
	 * Function BP_Logic_Framework.BP_Logic_Framework_C.Get Current Player Count
	 */
	struct UBP_Logic_Framework_C_GetCurrentPlayerCount_Params
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7A5Y[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Logic_Framework.BP_Logic_Framework_C.ReceiveBeginPlay
	 */
	struct UBP_Logic_Framework_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Logic_Framework.BP_Logic_Framework_C.OnPlayerOfflineTimeOut
	 */
	struct UBP_Logic_Framework_C_OnPlayerOfflineTimeOut_Params
	{
	public:
		class ASCMPlayerState*                                     OfflineTimeoutPlayer;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Logic_Framework.BP_Logic_Framework_C.OnPlayerGiveUp
	 */
	struct UBP_Logic_Framework_C_OnPlayerGiveUp_Params
	{
	public:
		class ASCMPlayerState*                                     OfflineTimeoutPlayer;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Logic_Framework.BP_Logic_Framework_C.PreSettle
	 */
	struct UBP_Logic_Framework_C_PreSettle_Params
	{
	public:
		class ASCMPlayerState*                                     Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESCMPlayerOutType                                          OutType;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Logic_Framework.BP_Logic_Framework_C.ReceivePlayerBattleEnd
	 */
	struct UBP_Logic_Framework_C_ReceivePlayerBattleEnd_Params
	{
	public:
		class ASCMPlayerState*                                     Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESCMPlayerOutType                                          OutType;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Logic_Framework.BP_Logic_Framework_C.BattleInitFinished
	 */
	struct UBP_Logic_Framework_C_BattleInitFinished_Params
	{	};

	/**
	 * Function BP_Logic_Framework.BP_Logic_Framework_C.ReceiveServerLevelLoaded
	 */
	struct UBP_Logic_Framework_C_ReceiveServerLevelLoaded_Params
	{
	public:
		class FString                                              LevelName;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Logic_Framework.BP_Logic_Framework_C.ReceiveBattleBegin
	 */
	struct UBP_Logic_Framework_C_ReceiveBattleBegin_Params
	{	};

	/**
	 * Function BP_Logic_Framework.BP_Logic_Framework_C.OnPlayerDisconnect
	 */
	struct UBP_Logic_Framework_C_OnPlayerDisconnect_Params
	{
	public:
		class ASCMPlayerState*                                     OfflinePlayer;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Logic_Framework.BP_Logic_Framework_C.OnMatchEnd
	 */
	struct UBP_Logic_Framework_C_OnMatchEnd_Params
	{
	public:
		int32_t                                                    RPCID;                                                   // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Logic_Framework.BP_Logic_Framework_C.ReceivePlayerJoinBattle
	 */
	struct UBP_Logic_Framework_C_ReceivePlayerJoinBattle_Params
	{
	public:
		class ASCMPlayerState*                                     NewPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsAI;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Logic_Framework.BP_Logic_Framework_C.OnDSClose
	 */
	struct UBP_Logic_Framework_C_OnDSClose_Params
	{	};

	/**
	 * Function BP_Logic_Framework.BP_Logic_Framework_C.OnPlayerCheat
	 */
	struct UBP_Logic_Framework_C_OnPlayerCheat_Params
	{
	public:
		class ASCMPlayerState*                                     CheatPlayer;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Logic_Framework.BP_Logic_Framework_C.OnPlayerReconnect
	 */
	struct UBP_Logic_Framework_C_OnPlayerReconnect_Params
	{
	public:
		class ASCMPlayerState*                                     Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Logic_Framework.BP_Logic_Framework_C.OnPlayerAbnormal
	 */
	struct UBP_Logic_Framework_C_OnPlayerAbnormal_Params
	{
	public:
		class ASCMPlayerState*                                     CheatPlayer;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Logic_Framework.BP_Logic_Framework_C.ExecuteUbergraph_BP_Logic_Framework
	 */
	struct UBP_Logic_Framework_C_ExecuteUbergraph_BP_Logic_Framework_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MAJP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Logic_Framework.BP_Logic_Framework_C.OnZeroMatchFinished__DelegateSignature
	 */
	struct UBP_Logic_Framework_C_OnZeroMatchFinished__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Logic_Framework.BP_Logic_Framework_C.OnPlayerJoin__DelegateSignature
	 */
	struct UBP_Logic_Framework_C_OnPlayerJoin__DelegateSignature_Params
	{
	public:
		class ASCMPlayerState*                                     NewPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsAi;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
