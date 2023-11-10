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
		void OnRecordingStartedDelegate_369E13824E3178FDDD5B17ABE1FFE01F();
		void OnRecordingStartedDelegate_E9F149AF4D2698F660EF9BA2745FBB34();
		void OnPlayingStartedDelegate_77E10C4948CABDCB3A7034B044174976();
		bool IsHighlightVersionOut(const class FString& HighlightFileName);
		bool NotifyBackendPlayReplayFinished();
		void RequestBattleList(int32_t PageIndex, int32_t PageSize);
		void ReceivePlayingStartFailed();
		bool IsReady();
		void RequestCheckpointForLiveWatch();
		class FString GetBattleIDByIndex(int32_t Index);
		void LuaBindDelegates();
		bool IsRequestingReplayDownloadInfo();
		void SetReadyToRecord(bool bIsReady, TArray<class FString> OBPlayerIDs);
		void RequestPlayReplayOfCurrentBattle();
		void OnLiveWatchTargetLost();
		void SetRequestTryStrategy(float Interval, int32_t Times);
		void RequestWatchingLiveOfPlayer(const class FString& SolarPlayerID);
		bool ReceivePlayingFinished(EReplayPlayingFinishReason reason, unsigned char StreamerErrorCode, const class FString& StreamerErrorMsg);
		void GetStartRecordingParams(struct FStartRecordingParams* OutParams);
		void RequestPlayReplay(const class FString& InBattleID, bool IsLive);
		void LuaOnPostLoadMapWithWorld(const class FString& LevelName);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
