#pragma once

/**
 * Name: FL84
 * Version: 15.1
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
	 * Size -> 0x0000 (FullSize[0x0588] - InheritedSize[0x0588])
	 */
	class UBP_SolarReplayManager_C : public USolarReplayManager
	{
	public:
		void OnRecordingStartedDelegate_DD34485E41D59AA9D3937BB410808836();
		void OnRecordingStartedDelegate_F5FD3C0D4FE2610F54B0A3B21DFE78CF();
		void OnPlayingStartedDelegate_B41E66A84FEA4BE8BAF5F6A0889D786F();
		bool IsRequestingReplayDownloadInfo();
		void OnLiveWatchTargetLost();
		bool NotifyBackendPlayReplayFinished();
		void ReceivePlayingStartFailed();
		bool IsHighlightVersionOut(const class FString& HighlightFileName);
		void SetRequestTryStrategy(float Interval, int32_t Times);
		bool ReceivePlayingFinished(EReplayPlayingFinishReason reason, unsigned char StreamerErrorCode, const class FString& StreamerErrorMsg);
		void GetStartRecordingParams(struct FStartRecordingParams* OutParams);
		void RequestWatchingLiveOfPlayer(const class FString& SolarPlayerID);
		class FString GetBattleIDByIndex(int32_t Index);
		void RequestPlayReplayOfCurrentBattle();
		void RequestBattleList(int32_t PageIndex, int32_t PageSize);
		void SetReadyToRecord(bool bIsReady, TArray<class FString> OBPlayerIDs);
		void LuaOnPostLoadMapWithWorld(const class FString& LevelName);
		void RequestPlayReplay(const class FString& InBattleID, bool IsLive);
		void RequestCheckpointForLiveWatch();
		void LuaBindDelegates();
		bool IsReady();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
