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
	 * DelegateFunction BP_SolarReplayManager.BP_SolarReplayManager_C.OnRecordingStartedDelegate_AE6F7B614EC71BD9E8EE58B2ED3BA5ED
	 */
	struct UBP_SolarReplayManager_C_OnRecordingStartedDelegate_AE6F7B614EC71BD9E8EE58B2ED3BA5ED_Params
	{	};

	/**
	 * DelegateFunction BP_SolarReplayManager.BP_SolarReplayManager_C.OnRecordingStartedDelegate_05FA0E164F9BFCE227D9298B6C694CC6
	 */
	struct UBP_SolarReplayManager_C_OnRecordingStartedDelegate_05FA0E164F9BFCE227D9298B6C694CC6_Params
	{	};

	/**
	 * DelegateFunction BP_SolarReplayManager.BP_SolarReplayManager_C.OnPlayingStartedDelegate_DD902EC047F0EDE3D20E3480AA4C6793
	 */
	struct UBP_SolarReplayManager_C_OnPlayingStartedDelegate_DD902EC047F0EDE3D20E3480AA4C6793_Params
	{	};

	/**
	 * Function BP_SolarReplayManager.BP_SolarReplayManager_C.LuaOnPostLoadMapWithWorld
	 */
	struct UBP_SolarReplayManager_C_LuaOnPostLoadMapWithWorld_Params
	{
	public:
		class FString                                              LevelName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_SolarReplayManager.BP_SolarReplayManager_C.ReceivePlayingStartFailed
	 */
	struct UBP_SolarReplayManager_C_ReceivePlayingStartFailed_Params
	{	};

	/**
	 * Function BP_SolarReplayManager.BP_SolarReplayManager_C.ReceivePlayingFinished
	 */
	struct UBP_SolarReplayManager_C_ReceivePlayingFinished_Params
	{
	public:
		EReplayPlayingFinishReason                                 reason;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              StreamerErrorCode;                                       // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MK8W[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              StreamerErrorMsg;                                        // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_SolarReplayManager.BP_SolarReplayManager_C.RequestPlayReplay
	 */
	struct UBP_SolarReplayManager_C_RequestPlayReplay_Params
	{
	public:
		class FString                                              InBattleID;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsLive;                                                  // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_SolarReplayManager.BP_SolarReplayManager_C.RequestPlayReplayOfCurrentBattle
	 */
	struct UBP_SolarReplayManager_C_RequestPlayReplayOfCurrentBattle_Params
	{	};

	/**
	 * Function BP_SolarReplayManager.BP_SolarReplayManager_C.NotifyBackendPlayReplayFinished
	 */
	struct UBP_SolarReplayManager_C_NotifyBackendPlayReplayFinished_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_SolarReplayManager.BP_SolarReplayManager_C.SetRequestTryStrategy
	 */
	struct UBP_SolarReplayManager_C_SetRequestTryStrategy_Params
	{
	public:
		float                                                      Interval;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Times;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_SolarReplayManager.BP_SolarReplayManager_C.RequestBattleList
	 */
	struct UBP_SolarReplayManager_C_RequestBattleList_Params
	{
	public:
		int32_t                                                    PageIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PageSize;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_SolarReplayManager.BP_SolarReplayManager_C.IsHighlightVersionOut
	 */
	struct UBP_SolarReplayManager_C_IsHighlightVersionOut_Params
	{
	public:
		class FString                                              HighlightFileName;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_SolarReplayManager.BP_SolarReplayManager_C.IsRequestingReplayDownloadInfo
	 */
	struct UBP_SolarReplayManager_C_IsRequestingReplayDownloadInfo_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_SolarReplayManager.BP_SolarReplayManager_C.SetReadyToRecord
	 */
	struct UBP_SolarReplayManager_C_SetReadyToRecord_Params
	{
	public:
		bool                                                       bIsReady;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SZXA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      OBPlayerIDs;                                             // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_SolarReplayManager.BP_SolarReplayManager_C.ReportHighlightConversion
	 */
	struct UBP_SolarReplayManager_C_ReportHighlightConversion_Params
	{
	public:
		struct FHighlightReportData                                HighlightReportData;                                     // 0x0000(0x0050)  (ConstParm, Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_SolarReplayManager.BP_SolarReplayManager_C.GetBattleIDByIndex
	 */
	struct UBP_SolarReplayManager_C_GetBattleIDByIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DB3Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_SolarReplayManager.BP_SolarReplayManager_C.IsReady
	 */
	struct UBP_SolarReplayManager_C_IsReady_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_SolarReplayManager.BP_SolarReplayManager_C.GetStartRecordingParams
	 */
	struct UBP_SolarReplayManager_C_GetStartRecordingParams_Params
	{
	public:
		struct FStartRecordingParams                               OutParams;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_SolarReplayManager.BP_SolarReplayManager_C.LuaBindDelegates
	 */
	struct UBP_SolarReplayManager_C_LuaBindDelegates_Params
	{	};

	/**
	 * Function BP_SolarReplayManager.BP_SolarReplayManager_C.OnLiveWatchTargetLost
	 */
	struct UBP_SolarReplayManager_C_OnLiveWatchTargetLost_Params
	{	};

	/**
	 * Function BP_SolarReplayManager.BP_SolarReplayManager_C.SendLiveWatchOnlyMsg
	 */
	struct UBP_SolarReplayManager_C_SendLiveWatchOnlyMsg_Params
	{
	public:
		class FString                                              Msg;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_SolarReplayManager.BP_SolarReplayManager_C.RequestWatchingLiveOfPlayer
	 */
	struct UBP_SolarReplayManager_C_RequestWatchingLiveOfPlayer_Params
	{
	public:
		class FString                                              SolarPlayerID;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_SolarReplayManager.BP_SolarReplayManager_C.RequestCheckpointForLiveWatch
	 */
	struct UBP_SolarReplayManager_C_RequestCheckpointForLiveWatch_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
