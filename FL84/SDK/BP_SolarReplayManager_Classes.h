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
		void OnRecordingStartedDelegate_86FFFEA34B1CD49EDE4B69A080A966E5();
		void OnRecordingStartedDelegate_27DEB101494EAFBF476057859DF95A66();
		void OnPlayingStartedDelegate_AE9D838B428DB59DB0AEB7AEC16F1D7F();
		void SetReadyToRecord(bool bIsReady, TArray<class FString> OBPlayerIDs);
		void OnLiveWatchTargetLost();
		void LuaBindDelegates();
		void SetRequestTryStrategy(float Interval, int32_t Times);
		bool IsReady();
		void ReceivePlayingStartFailed();
		void RequestPlayReplay(const class FString& InBattleID, bool IsLive);
		void RequestPlayReplayOfCurrentBattle();
		void RequestBattleList(int32_t PageIndex, int32_t PageSize);
		class FString GetBattleIDByIndex(int32_t Index);
		bool IsRequestingReplayDownloadInfo();
		bool ReceivePlayingFinished(EReplayPlayingFinishReason reason, unsigned char StreamerErrorCode, const class FString& StreamerErrorMsg);
		void LuaOnPostLoadMapWithWorld(const class FString& LevelName);
		void RequestWatchingLiveOfPlayer(const class FString& SolarPlayerID);
		void GetStartRecordingParams(struct FStartRecordingParams* OutParams);
		bool NotifyBackendPlayReplayFinished();
		void RequestCheckpointForLiveWatch();
		bool IsHighlightVersionOut(const class FString& HighlightFileName);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
