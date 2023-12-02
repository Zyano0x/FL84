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
	 * Function BP_CustomroomManager.BP_CustomroomManager_C.GetSpawnList
	 */
	struct ABP_CustomroomManager_C_GetSpawnList_Params
	{
	public:
		TArray<int32_t>                                            ID;                                                      // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
		TArray<int32_t>                                            ID2;                                                     // 0x0010(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
		TArray<int32_t>                                            ID3;                                                     // 0x0020(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
		TArray<int32_t>                                            ID4;                                                     // 0x0030(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CustomroomManager.BP_CustomroomManager_C.GetModeRoomUIType
	 */
	struct ABP_CustomroomManager_C_GetModeRoomUIType_Params
	{
	public:
		EModeRoomUIType                                            NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QS06[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_CustomroomManager.BP_CustomroomManager_C.GetRoomInfo
	 */
	struct ABP_CustomroomManager_C_GetRoomInfo_Params
	{
	public:
		struct FCustomRoomData                                     ReturnValue;                                             // 0x0000(0x00D8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_CustomroomManager.BP_CustomroomManager_C.IsPlayerLocalPendingKill
	 */
	struct ABP_CustomroomManager_C_IsPlayerLocalPendingKill_Params
	{
	public:
		class ASCMPlayerState*                                     Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JQ6C[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_CustomroomManager.BP_CustomroomManager_C.IsRoomOwner
	 */
	struct ABP_CustomroomManager_C_IsRoomOwner_Params
	{
	public:
		class ASCMPlayerState*                                     Player;                                                  // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CustomroomManager.BP_CustomroomManager_C.Switch Mgmt UI Display
	 */
	struct ABP_CustomroomManager_C_SwitchMgmtUIDisplay_Params
	{	};

	/**
	 * Function BP_CustomroomManager.BP_CustomroomManager_C.RemoveRoomUI
	 */
	struct ABP_CustomroomManager_C_RemoveRoomUI_Params
	{	};

	/**
	 * Function BP_CustomroomManager.BP_CustomroomManager_C.Get Team Member Count
	 */
	struct ABP_CustomroomManager_C_GetTeamMemberCount_Params
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CustomroomManager.BP_CustomroomManager_C.TEMP Delayed Flag Update
	 */
	struct ABP_CustomroomManager_C_TEMPDelayedFlagUpdate_Params
	{	};

	/**
	 * Function BP_CustomroomManager.BP_CustomroomManager_C.PreUpdateOB
	 */
	struct ABP_CustomroomManager_C_PreUpdateOB_Params
	{	};

	/**
	 * Function BP_CustomroomManager.BP_CustomroomManager_C.Refresh All Teams on UI
	 */
	struct ABP_CustomroomManager_C_RefreshAllTeamsonUI_Params
	{	};

	/**
	 * Function BP_CustomroomManager.BP_CustomroomManager_C.Init CustomRoom Info
	 */
	struct ABP_CustomroomManager_C_InitCustomRoomInfo_Params
	{	};

	/**
	 * Function BP_CustomroomManager.BP_CustomroomManager_C.Get Custom Room Mode
	 */
	struct ABP_CustomroomManager_C_GetCustomRoomMode_Params
	{
	public:
		ERoomModeType                                              RoomMode;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7X1M[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_CustomroomManager.BP_CustomroomManager_C.Get Mode Name Localization
	 */
	struct ABP_CustomroomManager_C_GetModeNameLocalization_Params
	{
	public:
		int32_t                                                    ModeLocalID;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    GroupLocalID;                                            // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CustomroomManager.BP_CustomroomManager_C.Refresh START in Top HUD
	 */
	struct ABP_CustomroomManager_C_RefreshSTARTinTopHUD_Params
	{	};

	/**
	 * Function BP_CustomroomManager.BP_CustomroomManager_C.Create Room Manager Operate UI
	 */
	struct ABP_CustomroomManager_C_CreateRoomManagerOperateUI_Params
	{	};

	/**
	 * Function BP_CustomroomManager.BP_CustomroomManager_C.Create Room Manager HUD
	 */
	struct ABP_CustomroomManager_C_CreateRoomManagerHUD_Params
	{	};

	/**
	 * Function BP_CustomroomManager.BP_CustomroomManager_C.OnGameStart
	 */
	struct ABP_CustomroomManager_C_OnGameStart_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CustomroomManager.BP_CustomroomManager_C.OnTournamentDealy
	 */
	struct ABP_CustomroomManager_C_OnTournamentDealy_Params
	{	};

	/**
	 * Function BP_CustomroomManager.BP_CustomroomManager_C.Manual Trigger Refresh
	 */
	struct ABP_CustomroomManager_C_ManualTriggerRefresh_Params
	{
	public:
		class FString                                              DEBUGReason;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CustomroomManager.BP_CustomroomManager_C.RefreshOB
	 */
	struct ABP_CustomroomManager_C_RefreshOB_Params
	{	};

	/**
	 * Function BP_CustomroomManager.BP_CustomroomManager_C.RefreshRoomData
	 */
	struct ABP_CustomroomManager_C_RefreshRoomData_Params
	{
	public:
		struct FCustomRoomData                                     RoomData;                                                // 0x0000(0x00D8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_CustomroomManager.BP_CustomroomManager_C.UnbaindAllEvents
	 */
	struct ABP_CustomroomManager_C_UnbaindAllEvents_Params
	{	};

	/**
	 * Function BP_CustomroomManager.BP_CustomroomManager_C.RefreshTeamPlayers
	 */
	struct ABP_CustomroomManager_C_RefreshTeamPlayers_Params
	{
	public:
		class ASCMPlayerState*                                     Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CustomroomManager.BP_CustomroomManager_C.OnClientRoomDataReady
	 */
	struct ABP_CustomroomManager_C_OnClientRoomDataReady_Params
	{	};

	/**
	 * Function BP_CustomroomManager.BP_CustomroomManager_C.ReceiveBeginPlay
	 */
	struct ABP_CustomroomManager_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_CustomroomManager.BP_CustomroomManager_C.OnTeamsInfoPostChanged
	 */
	struct ABP_CustomroomManager_C_OnTeamsInfoPostChanged_Params
	{	};

	/**
	 * Function BP_CustomroomManager.BP_CustomroomManager_C.ExecuteUbergraph_BP_CustomroomManager
	 */
	struct ABP_CustomroomManager_C_ExecuteUbergraph_BP_CustomroomManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7DJC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
