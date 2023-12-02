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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_SolarReplayManager.BP_SolarReplayManager_C
	 * Size -> 0x0000 (FullSize[0x05C0] - InheritedSize[0x05C0])
	 */
	class UBP_SolarReplayManager_C : public USolarReplayManager
	{
	public:
		void OnRecordingStartedDelegate_AE6F7B614EC71BD9E8EE58B2ED3BA5ED();
		void OnRecordingStartedDelegate_05FA0E164F9BFCE227D9298B6C694CC6();
		void OnPlayingStartedDelegate_DD902EC047F0EDE3D20E3480AA4C6793();
		void LuaOnPostLoadMapWithWorld(const class FString& LevelName);
		void ReceivePlayingStartFailed();
		bool ReceivePlayingFinished(EReplayPlayingFinishReason reason, unsigned char StreamerErrorCode, const class FString& StreamerErrorMsg);
		void RequestPlayReplay(const class FString& InBattleID, bool IsLive);
		void RequestPlayReplayOfCurrentBattle();
		bool NotifyBackendPlayReplayFinished();
		void SetRequestTryStrategy(float Interval, int32_t Times);
		void RequestBattleList(int32_t PageIndex, int32_t PageSize);
		bool IsHighlightVersionOut(const class FString& HighlightFileName);
		bool IsRequestingReplayDownloadInfo();
		void SetReadyToRecord(bool bIsReady, TArray<class FString> OBPlayerIDs);
		void ReportHighlightConversion(const struct FHighlightReportData& HighlightReportData);
		class FString GetBattleIDByIndex(int32_t Index);
		bool IsReady();
		void GetStartRecordingParams(struct FStartRecordingParams* OutParams);
		void LuaBindDelegates();
		void OnLiveWatchTargetLost();
		void SendLiveWatchOnlyMsg(const class FString& Msg);
		void RequestWatchingLiveOfPlayer(const class FString& SolarPlayerID);
		void RequestCheckpointForLiveWatch();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
