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
	 * Function LimNativeWidget.AudioPermissionHelperProxy.OnAndroidPermissionResult
	 */
	struct UAudioPermissionHelperProxy_OnAndroidPermissionResult_Params
	{
	public:
		TArray<class FString>                                      Permissions;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<bool>                                               Results;                                                 // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.AudioPermissionHelperProxy.CheckIOSAudioPermission
	 */
	struct UAudioPermissionHelperProxy_CheckIOSAudioPermission_Params
	{
	public:
		EIOSAudioPermissionState                                   ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.AudioPermissionHelperProxy.CheckAndroidAudioPermission
	 */
	struct UAudioPermissionHelperProxy_CheckAndroidAudioPermission_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.AudioPermissionHelperProxy.AcquireIOSAudioPermission
	 */
	struct UAudioPermissionHelperProxy_AcquireIOSAudioPermission_Params
	{	};

	/**
	 * Function LimNativeWidget.AudioPermissionHelperProxy.AcquireAndroidAudioPermission
	 */
	struct UAudioPermissionHelperProxy_AcquireAndroidAudioPermission_Params
	{	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.UpdateSelfPosition
	 */
	struct UChatGMEManager_UpdateSelfPosition_Params
	{
	public:
		struct FVector                                             InSelfPosition;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.UpdateAudioRecvRange
	 */
	struct UChatGMEManager_UpdateAudioRecvRange_Params
	{
	public:
		int32_t                                                    InRange;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.UnRegisterLuaEvent
	 */
	struct UChatGMEManager_UnRegisterLuaEvent_Params
	{	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.Uninit
	 */
	struct UChatGMEManager_Uninit_Params
	{	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.SwitchRoomCompatible
	 */
	struct UChatGMEManager_SwitchRoomCompatible_Params
	{
	public:
		class FString                                              InRoomId;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              GmeToken;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.SwitchRoom
	 */
	struct UChatGMEManager_SwitchRoom_Params
	{
	public:
		class FString                                              InRoomId;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.SetRangeAudioTeamID
	 */
	struct UChatGMEManager_SetRangeAudioTeamID_Params
	{
	public:
		int32_t                                                    InTeamId;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.SetRangeAudioMode
	 */
	struct UChatGMEManager_SetRangeAudioMode_Params
	{
	public:
		EChatGMERangeAudioMode                                     InAudioMode;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.SetAudioSendAndRecvRules
	 */
	struct UChatGMEManager_SetAudioSendAndRecvRules_Params
	{
	public:
		EChatGMEAudioRouteSendType                                 SendType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1G49[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      SendOpenIDList;                                          // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EChatGMEAudioRouteRecvType                                 RecvType;                                                // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LZN2[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      RecvOpenIDList;                                          // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.SelectSpeak
	 */
	struct UChatGMEManager_SelectSpeak_Params
	{
	public:
		class FString                                              InDeviceID;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.SelectMic
	 */
	struct UChatGMEManager_SelectMic_Params
	{
	public:
		class FString                                              InDeviceID;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.PreInit
	 */
	struct UChatGMEManager_PreInit_Params
	{	};

	/**
	 * DelegateFunction LimNativeWidget.ChatGMEManager.OnUserVolumesDelegate__DelegateSignature
	 */
	struct UChatGMEManager_OnUserVolumesDelegate__DelegateSignature_Params
	{
	public:
		struct FChatGMEDataUserVolumes                             InData;                                                  // 0x0000(0x0058)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNativeWidget.ChatGMEManager.OnUserUpdateDelegate__DelegateSignature
	 */
	struct UChatGMEManager_OnUserUpdateDelegate__DelegateSignature_Params
	{
	public:
		struct FChatGMEDataUserUpdate                              InData;                                                  // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNativeWidget.ChatGMEManager.OnRoomManagementOperatorDelegate__DelegateSignature
	 */
	struct UChatGMEManager_OnRoomManagementOperatorDelegate__DelegateSignature_Params
	{
	public:
		struct FChatGMEDataRoomOperator                            InData;                                                  // 0x0000(0x0050)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNativeWidget.ChatGMEManager.OnResultDelegate__DelegateSignature
	 */
	struct UChatGMEManager_OnResultDelegate__DelegateSignature_Params
	{
	public:
		struct FChatGMEDataResult                                  Result;                                                  // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNativeWidget.ChatGMEManager.OnRecordCompletedDelegate__DelegateSignature
	 */
	struct UChatGMEManager_OnRecordCompletedDelegate__DelegateSignature_Params
	{
	public:
		struct FChatGMEDataRecordCompleted                         InData;                                                  // 0x0000(0x0048)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNativeWidget.ChatGMEManager.OnNumberOfUsersUpdateDelegate__DelegateSignature
	 */
	struct UChatGMEManager_OnNumberOfUsersUpdateDelegate__DelegateSignature_Params
	{
	public:
		struct FChatGMEDataNumberOfUserUpdate                      InData;                                                  // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNativeWidget.ChatGMEManager.OnNumberOfAudioStreamsUpdateDelegate__DelegateSignature
	 */
	struct UChatGMEManager_OnNumberOfAudioStreamsUpdateDelegate__DelegateSignature_Params
	{
	public:
		struct FChatGMEDataNumberOfAudioStreamsUpdate              InData;                                                  // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNativeWidget.ChatGMEManager.OnNotifyFileInfoDelegate__DelegateSignature
	 */
	struct UChatGMEManager_OnNotifyFileInfoDelegate__DelegateSignature_Params
	{
	public:
		struct FChatGMEDataFileInfo                                InData;                                                  // 0x0000(0x0058)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNativeWidget.ChatGMEManager.OnNotifyDelegate__DelegateSignature
	 */
	struct UChatGMEManager_OnNotifyDelegate__DelegateSignature_Params
	{
	public:
		class FString                                              InData;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.OnGetAuthBuffer
	 */
	struct UChatGMEManager_OnGetAuthBuffer_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeGetGMETokenCallBack                       RetData;                                                 // 0x0010(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNativeWidget.ChatGMEManager.OnDeviceChangedDelegate__DelegateSignature
	 */
	struct UChatGMEManager_OnDeviceChangedDelegate__DelegateSignature_Params
	{
	public:
		struct FChatGMEDataDeviceInfo                              InData;                                                  // 0x0000(0x0050)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNativeWidget.ChatGMEManager.OnChangeRoomTypeDelegate__DelegateSignature
	 */
	struct UChatGMEManager_OnChangeRoomTypeDelegate__DelegateSignature_Params
	{
	public:
		struct FChatGMEDataChangeRoomType                          InData;                                                  // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNativeWidget.ChatGMEManager.OnChangeRoomQualityDelegate__DelegateSignature
	 */
	struct UChatGMEManager_OnChangeRoomQualityDelegate__DelegateSignature_Params
	{
	public:
		struct FChatGMEDataRoomQuality                             InData;                                                  // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNativeWidget.ChatGMEManager.OnAndroidPermissionResult__DelegateSignature
	 */
	struct UChatGMEManager_OnAndroidPermissionResult__DelegateSignature_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.MediaMute
	 */
	struct UChatGMEManager_MediaMute_Params
	{
	public:
		class FString                                              InUserId;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       InMute;                                                  // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.IsRoomEntered
	 */
	struct UChatGMEManager_IsRoomEntered_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.IsAudioSendEnabled
	 */
	struct UChatGMEManager_IsAudioSendEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.IsAudioRecvEnabled
	 */
	struct UChatGMEManager_IsAudioRecvEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.IsAudioPlayDeviceEnabled
	 */
	struct UChatGMEManager_IsAudioPlayDeviceEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.IsAudioCaptureDeviceEnabled
	 */
	struct UChatGMEManager_IsAudioCaptureDeviceEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.InnerEnableMic
	 */
	struct UChatGMEManager_InnerEnableMic_Params
	{
	public:
		bool                                                       InEnable;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.InitGME
	 */
	struct UChatGMEManager_InitGME_Params
	{
	public:
		class FString                                              InEnvId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InGMEUserID;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.Init
	 */
	struct UChatGMEManager_Init_Params
	{
	public:
		class FString                                              InUserId;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InAppId;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InEnvId;                                                 // 0x0020(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.GetSpeakerState
	 */
	struct UChatGMEManager_GetSpeakerState_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.GetSpeakerList
	 */
	struct UChatGMEManager_GetSpeakerList_Params
	{
	public:
		TArray<struct FChatGMEDataDeviceInfo>                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.GetRecordingLocalFilePath
	 */
	struct UChatGMEManager_GetRecordingLocalFilePath_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.GetMicState
	 */
	struct UChatGMEManager_GetMicState_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.GetMicList
	 */
	struct UChatGMEManager_GetMicList_Params
	{
	public:
		TArray<struct FChatGMEDataDeviceInfo>                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.GetInstance
	 */
	struct UChatGMEManager_GetInstance_Params
	{
	public:
		class UChatGMEManager*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.GameUploadRecordedFileCompatible
	 */
	struct UChatGMEManager_GameUploadRecordedFileCompatible_Params
	{
	public:
		class FString                                              FilePath;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Token;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.GameUploadRecordedFile
	 */
	struct UChatGMEManager_GameUploadRecordedFile_Params
	{
	public:
		class FString                                              FilePath;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.GameStopRecording
	 */
	struct UChatGMEManager_GameStopRecording_Params
	{	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.GameStopPlayFile
	 */
	struct UChatGMEManager_GameStopPlayFile_Params
	{	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.GameStartRecording
	 */
	struct UChatGMEManager_GameStartRecording_Params
	{
	public:
		class FString                                              FilePath;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.GameSetSpeakerVolume
	 */
	struct UChatGMEManager_GameSetSpeakerVolume_Params
	{
	public:
		int32_t                                                    Volume;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.GameSetMicVolume
	 */
	struct UChatGMEManager_GameSetMicVolume_Params
	{
	public:
		int32_t                                                    MicVolume;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.GameResumeRecording
	 */
	struct UChatGMEManager_GameResumeRecording_Params
	{	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.GamePlayRecordedFile
	 */
	struct UChatGMEManager_GamePlayRecordedFile_Params
	{
	public:
		class FString                                              FilePath;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.GamePauseRecording
	 */
	struct UChatGMEManager_GamePauseRecording_Params
	{	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.GameGetVoiceFileDuration
	 */
	struct UChatGMEManager_GameGetVoiceFileDuration_Params
	{
	public:
		class FString                                              FilePath;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.GameGetSpeakerVolume
	 */
	struct UChatGMEManager_GameGetSpeakerVolume_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.GameGetSpeakerLevel
	 */
	struct UChatGMEManager_GameGetSpeakerLevel_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.GameGetMicVolume
	 */
	struct UChatGMEManager_GameGetMicVolume_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.GameGetMicLevel
	 */
	struct UChatGMEManager_GameGetMicLevel_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.GameDownloadRecordedFileeCompatible
	 */
	struct UChatGMEManager_GameDownloadRecordedFileeCompatible_Params
	{
	public:
		class FString                                              FileID;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              FilePath;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Token;                                                   // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.GameDownloadRecordedFile
	 */
	struct UChatGMEManager_GameDownloadRecordedFile_Params
	{
	public:
		class FString                                              FileID;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              FilePath;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.GameCancleRecording
	 */
	struct UChatGMEManager_GameCancleRecording_Params
	{	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.ExitRoom
	 */
	struct UChatGMEManager_ExitRoom_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.EnterRoomCompatible
	 */
	struct UChatGMEManager_EnterRoomCompatible_Params
	{
	public:
		class FString                                              InRoomId;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              GmeToken;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.EnterRoom
	 */
	struct UChatGMEManager_EnterRoom_Params
	{
	public:
		class FString                                              InRoomId;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EChatGMERoomType                                           InRoomType;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.EnableSpeaker
	 */
	struct UChatGMEManager_EnableSpeaker_Params
	{
	public:
		bool                                                       InEnable;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.EnableMic
	 */
	struct UChatGMEManager_EnableMic_Params
	{
	public:
		bool                                                       InEnable;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.EnableAudioSend
	 */
	struct UChatGMEManager_EnableAudioSend_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.EnableAudioRecv
	 */
	struct UChatGMEManager_EnableAudioRecv_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.EnableAudioPlayDevice
	 */
	struct UChatGMEManager_EnableAudioPlayDevice_Params
	{
	public:
		bool                                                       InEnable;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.EnableAudioCaptureDevice
	 */
	struct UChatGMEManager_EnableAudioCaptureDevice_Params
	{
	public:
		bool                                                       InEnable;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.DestroyInstance
	 */
	struct UChatGMEManager_DestroyInstance_Params
	{	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.DeleteCacheFiles
	 */
	struct UChatGMEManager_DeleteCacheFiles_Params
	{	};

	/**
	 * Function LimNativeWidget.ChatGMEManager.CheckPlatformMicPermission
	 */
	struct UChatGMEManager_CheckPlatformMicPermission_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.UnRegisterLuaEvent
	 */
	struct ULimChatManager_UnRegisterLuaEvent_Params
	{	};

	/**
	 * Function LimNativeWidget.LimChatManager.UnInitChatManager
	 */
	struct ULimChatManager_UnInitChatManager_Params
	{	};

	/**
	 * Function LimNativeWidget.LimChatManager.TranslateText
	 */
	struct ULimChatManager_TranslateText_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Lang;                                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ExtraInfo;                                               // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.SwitchConvTo
	 */
	struct ULimChatManager_SwitchConvTo_Params
	{
	public:
		struct FChatListConvData                                   InConvData;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       RefreshConvList;                                         // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.SetCtxLanguage
	 */
	struct ULimChatManager_SetCtxLanguage_Params
	{
	public:
		class FString                                              Lang;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.SetConvRead
	 */
	struct ULimChatManager_SetConvRead_Params
	{
	public:
		struct FChatListConvData                                   ConvData;                                                // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.SetConvMsgRead
	 */
	struct ULimChatManager_SetConvMsgRead_Params
	{
	public:
		class FString                                              ConvID;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELimNativeConvType                                         ConvType;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_A9CQ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              MsgId;                                                   // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Extra;                                                   // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.SendVoiceMessageToConv
	 */
	struct ULimChatManager_SendVoiceMessageToConv_Params
	{
	public:
		class FString                                              ConvID;                                                  // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELimNativeConvType                                         ConvType;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JZYP[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              FileID;                                                  // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Extra;                                                   // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.SendTextMessageToConv
	 */
	struct ULimChatManager_SendTextMessageToConv_Params
	{
	public:
		class FString                                              ConvID;                                                  // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELimNativeConvType                                         ConvType;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Q62O[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Message;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Extra;                                                   // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.SendTextMessage
	 */
	struct ULimChatManager_SendTextMessage_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Extra;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.PostInitChatManager
	 */
	struct ULimChatManager_PostInitChatManager_Params
	{
	public:
		struct FLimNativeReportConfig                              ReportConfig;                                            // 0x0000(0x00C8)  (Parm, NativeAccessSpecifierPublic)
		struct FLimNativeParkConfig                                ParkConfig;                                              // 0x00C8(0x0058)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.OpenChatUI
	 */
	struct ULimChatManager_OpenChatUI_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ChatWidgetPath;                                          // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ZOrder;                                                  // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UJSX[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUserWidget*                                         ReturnValue;                                             // 0x0020(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNativeWidget.LimChatManager.OnTextTranslateDynamicDelegate__DelegateSignature
	 */
	struct ULimChatManager_OnTextTranslateDynamicDelegate__DelegateSignature_Params
	{
	public:
		bool                                                       TranslateRes;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_24GU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              TranslatedText;                                          // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Translator;                                              // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ExtraInfo;                                               // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNativeWidget.LimChatManager.OnSendMessageCallBackDynamicDelegate__DelegateSignature
	 */
	struct ULimChatManager_OnSendMessageCallBackDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FChatListMessageData                                MsgCallBack;                                             // 0x0000(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNativeWidget.LimChatManager.OnRedHintUpdateDynamicDelegate__DelegateSignature
	 */
	struct ULimChatManager_OnRedHintUpdateDynamicDelegate__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction LimNativeWidget.LimChatManager.OnReceiveMessageDynamicDelegate__DelegateSignature
	 */
	struct ULimChatManager_OnReceiveMessageDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FChatListMessageData                                Msg;                                                     // 0x0000(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNativeWidget.LimChatManager.OnReceiveLogicMessageDynamicDelegate__DelegateSignature
	 */
	struct ULimChatManager_OnReceiveLogicMessageDynamicDelegate__DelegateSignature_Params
	{
	public:
		int32_t                                                    MsgType;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_D330[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLimNativeDataBizFullObj                            NativeMsg;                                               // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.OnOpenChatUI
	 */
	struct ULimChatManager_OnOpenChatUI_Params
	{	};

	/**
	 * DelegateFunction LimNativeWidget.LimChatManager.OnNewSendMessageCallBackDynamicDelegate__DelegateSignature
	 */
	struct ULimChatManager_OnNewSendMessageCallBackDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FNewChatListMessageData                             MsgCallBack;                                             // 0x0000(0x0178)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              RetData;                                                 // 0x0178(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Code;                                                    // 0x0188(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNativeWidget.LimChatManager.OnNewReceiveMessageDynamicDelegate__DelegateSignature
	 */
	struct ULimChatManager_OnNewReceiveMessageDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FNewChatListMessageData                             Msg;                                                     // 0x0000(0x0178)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.OnMiscConfigInfoHandle
	 */
	struct ULimChatManager_OnMiscConfigInfoHandle_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeGetMiscConfigInfoCallBack                 RetData;                                                 // 0x0010(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.OnMessageSend
	 */
	struct ULimChatManager_OnMessageSend_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnSendMsgCallBack                         RetData;                                                 // 0x0010(0x00C0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.OnMessageReceived
	 */
	struct ULimChatManager_OnMessageReceived_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnMsgReceivedEventCallBack                RetData;                                                 // 0x0010(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNativeWidget.LimChatManager.OnLoginDynamicDelegate__DelegateSignature
	 */
	struct ULimChatManager_OnLoginDynamicDelegate__DelegateSignature_Params
	{
	public:
		bool                                                       LoginRes;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_G4MF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Code;                                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              RetData;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.OnLogin
	 */
	struct ULimChatManager_OnLogin_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnLoginCallBack                           RetData;                                                 // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.OnLogicMsgReceived
	 */
	struct ULimChatManager_OnLogicMsgReceived_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnMsgLogicReceivedEventCallBack           RetData;                                                 // 0x0010(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.OnLog
	 */
	struct ULimChatManager_OnLog_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Data;                                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNativeWidget.LimChatManager.OnInputBoxStateChangeDelegate__DelegateSignature
	 */
	struct ULimChatManager_OnInputBoxStateChangeDelegate__DelegateSignature_Params
	{
	public:
		bool                                                       bUp;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0UAN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Left;                                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Top;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Right;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Bottom;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNativeWidget.LimChatManager.OnGetUsersStateCallBackDynamicDelegate__DelegateSignature
	 */
	struct ULimChatManager_OnGetUsersStateCallBackDynamicDelegate__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction LimNativeWidget.LimChatManager.OnGetUsersCallBackDynamicDelegate__DelegateSignature
	 */
	struct ULimChatManager_OnGetUsersCallBackDynamicDelegate__DelegateSignature_Params
	{
	public:
		TArray<struct FChatListUserData>                           UserDataList;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.OnGetUserListState
	 */
	struct ULimChatManager_OnGetUserListState_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnGetUsersStateCallBack                   RetData;                                                 // 0x0010(0x00A8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.OnGetUserListInfo
	 */
	struct ULimChatManager_OnGetUserListInfo_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnGetUsersCallBack                        RetData;                                                 // 0x0010(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.OnGetUserInfo
	 */
	struct ULimChatManager_OnGetUserInfo_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnGetUserCallBack                         RetData;                                                 // 0x0010(0x0168)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNativeWidget.LimChatManager.OnGetUserCallBackDynamicDelegate__DelegateSignature
	 */
	struct ULimChatManager_OnGetUserCallBackDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FChatListUserData                                   UserData;                                                // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.OnGetTextTranslateHandle
	 */
	struct ULimChatManager_OnGetTextTranslateHandle_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeTextTranslateCallBack                     RetData;                                                 // 0x0010(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.OnGetNetStatHandle
	 */
	struct ULimChatManager_OnGetNetStatHandle_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    RetData;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNativeWidget.LimChatManager.OnGetNetStatDynamicDelegate__DelegateSignature
	 */
	struct ULimChatManager_OnGetNetStatDynamicDelegate__DelegateSignature_Params
	{
	public:
		int32_t                                                    val;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.OnGetMessageInRange
	 */
	struct ULimChatManager_OnGetMessageInRange_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnGetMsgsCallBack                         RetData;                                                 // 0x0010(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNativeWidget.LimChatManager.OnGetMessageDataDynamicDelegate__DelegateSignature
	 */
	struct ULimChatManager_OnGetMessageDataDynamicDelegate__DelegateSignature_Params
	{
	public:
		int32_t                                                    Code;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RD61[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ConvID;                                                  // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELimNativeConvType                                         ConvType;                                                // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNativeWidget.LimChatManager.OnGetFriendsCallBackDynamicDelegate__DelegateSignature
	 */
	struct ULimChatManager_OnGetFriendsCallBackDynamicDelegate__DelegateSignature_Params
	{
	public:
		TArray<struct FChatListUserData>                           FriendList;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.OnGetFriends
	 */
	struct ULimChatManager_OnGetFriends_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnGetFriendCallBack                       RetData;                                                 // 0x0010(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.OnGetConnStateHandle
	 */
	struct ULimChatManager_OnGetConnStateHandle_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeGetConnStateCallBack                      RetData;                                                 // 0x0010(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNativeWidget.LimChatManager.OnGetConnStatDynamicDelegate__DelegateSignature
	 */
	struct ULimChatManager_OnGetConnStatDynamicDelegate__DelegateSignature_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SSSC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    val;                                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNativeWidget.LimChatManager.OnConvsGetDynamicDelegate__DelegateSignature
	 */
	struct ULimChatManager_OnConvsGetDynamicDelegate__DelegateSignature_Params
	{
	public:
		bool                                                       GetConvRes;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.OnConvRead
	 */
	struct ULimChatManager_OnConvRead_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnSetConvReadCallBack                     RetData;                                                 // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.OnConvListGet
	 */
	struct ULimChatManager_OnConvListGet_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnConvsGetCallBack                        RetData;                                                 // 0x0010(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNativeWidget.LimChatManager.OnConvHandleDynamicDelegate__DelegateSignature
	 */
	struct ULimChatManager_OnConvHandleDynamicDelegate__DelegateSignature_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VKBP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLimNativeConvHandleCallBackData                    Data;                                                    // 0x0008(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.OnConvHandle
	 */
	struct ULimChatManager_OnConvHandle_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnConvHandleCallBack                      RetData;                                                 // 0x0010(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.OnConvChatLevelConfig
	 */
	struct ULimChatManager_OnConvChatLevelConfig_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnGetConvChatLevelConfigCallBack          RetData;                                                 // 0x0010(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNativeWidget.LimChatManager.OnConfigInfoHandleDynamicDelegate__DelegateSignature
	 */
	struct ULimChatManager_OnConfigInfoHandleDynamicDelegate__DelegateSignature_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OLQ0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    val;                                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNativeWidget.LimChatManager.OnConfigGetChatLevlDynamicDelegate__DelegateSignature
	 */
	struct ULimChatManager_OnConfigGetChatLevlDynamicDelegate__DelegateSignature_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.Logout
	 */
	struct ULimChatManager_Logout_Params
	{	};

	/**
	 * Function LimNativeWidget.LimChatManager.Login
	 */
	struct ULimChatManager_Login_Params
	{
	public:
		class FString                                              InAppId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InAppUserID;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InToken;                                                 // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InRoleID;                                                // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InExtra;                                                 // 0x0040(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.InitChatManager
	 */
	struct ULimChatManager_InitChatManager_Params
	{
	public:
		struct FLimNativeInitConfig                                InitConfig;                                              // 0x0000(0x0078)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              InEnvId;                                                 // 0x0078(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InGMEUserID;                                             // 0x0088(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.GetUserListState
	 */
	struct ULimChatManager_GetUserListState_Params
	{
	public:
		TArray<class FString>                                      InUserIDList;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.GetUserListInfo
	 */
	struct ULimChatManager_GetUserListInfo_Params
	{
	public:
		TArray<class FString>                                      InUserIDList;                                            // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.GetUserInfo
	 */
	struct ULimChatManager_GetUserInfo_Params
	{
	public:
		class FString                                              InUserId;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.GetMiscConfigInfo
	 */
	struct ULimChatManager_GetMiscConfigInfo_Params
	{	};

	/**
	 * Function LimNativeWidget.LimChatManager.GetMessageInRange
	 */
	struct ULimChatManager_GetMessageInRange_Params
	{
	public:
		class FString                                              ConvID;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELimNativeConvType                                         ConvType;                                                // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_64DR[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              FromMsgId;                                               // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ToMsgId;                                                 // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.GetMessage
	 */
	struct ULimChatManager_GetMessage_Params
	{
	public:
		struct FChatListConvData                                   TargetConv;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.GetLimSlssvrTest
	 */
	struct ULimChatManager_GetLimSlssvrTest_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.GetLimSlssvrDomesticTest
	 */
	struct ULimChatManager_GetLimSlssvrDomesticTest_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.GetLimSlssvrDomestic
	 */
	struct ULimChatManager_GetLimSlssvrDomestic_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.GetLimSlssvr
	 */
	struct ULimChatManager_GetLimSlssvr_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.GetLimSDKRegionDomestic
	 */
	struct ULimChatManager_GetLimSDKRegionDomestic_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.GetLimSDKRegion
	 */
	struct ULimChatManager_GetLimSDKRegion_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.GetLimGameID
	 */
	struct ULimChatManager_GetLimGameID_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.GetInstance
	 */
	struct ULimChatManager_GetInstance_Params
	{
	public:
		class ULimChatManager*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.GetFriendList
	 */
	struct ULimChatManager_GetFriendList_Params
	{	};

	/**
	 * Function LimNativeWidget.LimChatManager.GetFarlightDomainDomestic
	 */
	struct ULimChatManager_GetFarlightDomainDomestic_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.GetFarlightDomain
	 */
	struct ULimChatManager_GetFarlightDomain_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.GetConvMessage
	 */
	struct ULimChatManager_GetConvMessage_Params
	{
	public:
		class FString                                              ConvID;                                                  // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELimNativeConvType                                         ConvType;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QM6I[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              FromMsgId;                                               // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ToMsgId;                                                 // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.GetConvList
	 */
	struct ULimChatManager_GetConvList_Params
	{	};

	/**
	 * Function LimNativeWidget.LimChatManager.GetConvChatLevelConfig
	 */
	struct ULimChatManager_GetConvChatLevelConfig_Params
	{	};

	/**
	 * Function LimNativeWidget.LimChatManager.GetConnState
	 */
	struct ULimChatManager_GetConnState_Params
	{	};

	/**
	 * Function LimNativeWidget.LimChatManager.DiscardConv
	 */
	struct ULimChatManager_DiscardConv_Params
	{
	public:
		class FString                                              ConvID;                                                  // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELimNativeConvType                                         ConvType;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimChatManager.DestroyInstance
	 */
	struct ULimChatManager_DestroyInstance_Params
	{	};

	/**
	 * Function LimNativeWidget.LimChatManager.CheckTargetIsContainIn
	 */
	struct ULimChatManager_CheckTargetIsContainIn_Params
	{
	public:
		struct FChatListConvData                                   InConvData;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.LimNativeWidgetSettings.GetInstance
	 */
	struct ULimNativeWidgetSettings_GetInstance_Params
	{
	public:
		class ULimNativeWidgetSettings*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.NertcManager.UpdateSelfPosition
	 */
	struct UNertcManager_UpdateSelfPosition_Params
	{
	public:
		struct FVector                                             InSelfPosition;                                          // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            InSelfRotator;                                           // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.NertcManager.UpdateAudioRecvRange
	 */
	struct UNertcManager_UpdateAudioRecvRange_Params
	{
	public:
		int32_t                                                    InRange;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.NertcManager.UnRegisterLuaEvent
	 */
	struct UNertcManager_UnRegisterLuaEvent_Params
	{	};

	/**
	 * Function LimNativeWidget.NertcManager.Uninit
	 */
	struct UNertcManager_Uninit_Params
	{	};

	/**
	 * Function LimNativeWidget.NertcManager.SwitchRoom
	 */
	struct UNertcManager_SwitchRoom_Params
	{
	public:
		class FString                                              RoomID;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              AppToken;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Uid;                                                     // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TeamID;                                                  // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AudioDistance;                                           // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.NertcManager.SetSubscribeAudioOnlyBy
	 */
	struct UNertcManager_SetSubscribeAudioOnlyBy_Params
	{
	public:
		TArray<int32_t>                                            OpenIDList;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.NertcManager.SetSubscribeAudioBlocklist
	 */
	struct UNertcManager_SetSubscribeAudioBlocklist_Params
	{
	public:
		TArray<int32_t>                                            OpenIDList;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.NertcManager.SetSubscribeAudioAllowlist
	 */
	struct UNertcManager_SetSubscribeAudioAllowlist_Params
	{
	public:
		TArray<int32_t>                                            OpenIDList;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.NertcManager.SetRangeAudioTeamID
	 */
	struct UNertcManager_SetRangeAudioTeamID_Params
	{
	public:
		int32_t                                                    TeamID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.NertcManager.SetRangeAudioMode
	 */
	struct UNertcManager_SetRangeAudioMode_Params
	{
	public:
		EChatGMERangeAudioMode                                     InAudioMode;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.NertcManager.SetClientRole
	 */
	struct UNertcManager_SetClientRole_Params
	{
	public:
		bool                                                       bBroadCast;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.NertcManager.SetAudioSessionRestriction
	 */
	struct UNertcManager_SetAudioSessionRestriction_Params
	{	};

	/**
	 * Function LimNativeWidget.NertcManager.SetAudioSendAndRecvRules
	 */
	struct UNertcManager_SetAudioSendAndRecvRules_Params
	{
	public:
		EChatGMEAudioRouteSendType                                 InSendType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QUVJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<int32_t>                                            InSendOpenIDList;                                        // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EChatGMEAudioRouteRecvType                                 InRecvType;                                              // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_M9SX[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<int32_t>                                            InRecvOpenIDList;                                        // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.NertcManager.SelectSpeak
	 */
	struct UNertcManager_SelectSpeak_Params
	{
	public:
		class FString                                              InDeviceID;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.NertcManager.SelectMic
	 */
	struct UNertcManager_SelectMic_Params
	{
	public:
		class FString                                              InDeviceID;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNativeWidget.NertcManager.OnUserRoomStateChange__DelegateSignature
	 */
	struct UNertcManager_OnUserRoomStateChange__DelegateSignature_Params
	{
	public:
		bool                                                       EnterRoom;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_64RO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Uid;                                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNativeWidget.NertcManager.OnUserInfoUpdateDelegate__DelegateSignature
	 */
	struct UNertcManager_OnUserInfoUpdateDelegate__DelegateSignature_Params
	{
	public:
		struct FNertcUserUpdateData                                UserData;                                                // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNativeWidget.NertcManager.OnNertcConnectionChange__DelegateSignature
	 */
	struct UNertcManager_OnNertcConnectionChange__DelegateSignature_Params
	{
	public:
		int32_t                                                    State;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    reason;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNativeWidget.NertcManager.OnLocalUserVolumeChanged__DelegateSignature
	 */
	struct UNertcManager_OnLocalUserVolumeChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Volume;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bVad;                                                    // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNativeWidget.NertcManager.OnExitRoomDelegate__DelegateSignature
	 */
	struct UNertcManager_OnExitRoomDelegate__DelegateSignature_Params
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TSZV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int64_t                                                    reason;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNativeWidget.NertcManager.OnEnterRoomDelegate__DelegateSignature
	 */
	struct UNertcManager_OnEnterRoomDelegate__DelegateSignature_Params
	{
	public:
		int64_t                                                    RoomID;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Uid;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Result;                                                  // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    Elapsed;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNativeWidget.NertcManager.OnAudioDeviceStateChanged__DelegateSignature
	 */
	struct UNertcManager_OnAudioDeviceStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bChanged;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNativeWidget.NertcManager.OnAndroidPermissionResult__DelegateSignature
	 */
	struct UNertcManager_OnAndroidPermissionResult__DelegateSignature_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.NertcManager.MuteLocalStream
	 */
	struct UNertcManager_MuteLocalStream_Params
	{
	public:
		bool                                                       bMute;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.NertcManager.MediaMute
	 */
	struct UNertcManager_MediaMute_Params
	{
	public:
		int32_t                                                    Uid;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMute;                                                   // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.NertcManager.IsRoomEntered
	 */
	struct UNertcManager_IsRoomEntered_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.NertcManager.IsInRTCRoom
	 */
	struct UNertcManager_IsInRTCRoom_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.NertcManager.InnerEnterRoom
	 */
	struct UNertcManager_InnerEnterRoom_Params
	{
	public:
		class FString                                              RoomID;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              AppToken;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Uid;                                                     // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.NertcManager.InnerEnableMic
	 */
	struct UNertcManager_InnerEnableMic_Params
	{
	public:
		bool                                                       InEnable;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.NertcManager.Init
	 */
	struct UNertcManager_Init_Params
	{
	public:
		class FString                                              Appkey;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.NertcManager.GetSpeakerList
	 */
	struct UNertcManager_GetSpeakerList_Params
	{
	public:
		TArray<struct FChatGMEDataDeviceInfo>                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.NertcManager.GetMicList
	 */
	struct UNertcManager_GetMicList_Params
	{
	public:
		TArray<struct FChatGMEDataDeviceInfo>                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.NertcManager.GetInstance
	 */
	struct UNertcManager_GetInstance_Params
	{
	public:
		class UNertcManager*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.NertcManager.GameSetSpeakerVolume
	 */
	struct UNertcManager_GameSetSpeakerVolume_Params
	{
	public:
		int32_t                                                    Volume;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.NertcManager.GameSetMicVolume
	 */
	struct UNertcManager_GameSetMicVolume_Params
	{
	public:
		int32_t                                                    MicVolume;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.NertcManager.ExitRoom
	 */
	struct UNertcManager_ExitRoom_Params
	{	};

	/**
	 * Function LimNativeWidget.NertcManager.EnterRoom
	 */
	struct UNertcManager_EnterRoom_Params
	{
	public:
		class FString                                              RoomID;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              AppToken;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Uid;                                                     // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.NertcManager.EnableSpeaker
	 */
	struct UNertcManager_EnableSpeaker_Params
	{
	public:
		bool                                                       InEnable;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.NertcManager.EnableRangeVoice
	 */
	struct UNertcManager_EnableRangeVoice_Params
	{
	public:
		bool                                                       bEnbale;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.NertcManager.EnableMic
	 */
	struct UNertcManager_EnableMic_Params
	{
	public:
		bool                                                       InEnable;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.NertcManager.EnabelAudioIndication
	 */
	struct UNertcManager_EnabelAudioIndication_Params
	{
	public:
		bool                                                       InEnable;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3L01[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    millions;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bEnbaleLocal;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNativeWidget.NertcManager.DestroyInstance
	 */
	struct UNertcManager_DestroyInstance_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
