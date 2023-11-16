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
		void OnRecordingStartedDelegate_2F7AA7B246902429F358668E4DA06888();
		void OnRecordingStartedDelegate_11936E9749980E8F3EDCFBA433DAD452();
		void OnPlayingStartedDelegate_883EC4FB4D75A5406B44D29065739CA5();
		void GetStartRecordingParams(struct FStartRecordingParams* OutParams);
		void SetReadyToRecord(bool bIsReady, TArray<class FString> OBPlayerIDs);
		void ReceivePlayingStartFailed();
		void LuaBindDelegates();
		bool IsHighlightVersionOut(const class FString& HighlightFileName);
		bool NotifyBackendPlayReplayFinished();
		void SetRequestTryStrategy(float Interval, int32_t Times);
		void RequestPlayReplay(const class FString& InBattleID, bool IsLive);
		void LuaOnPostLoadMapWithWorld(const class FString& LevelName);
		bool IsReady();
		bool IsRequestingReplayDownloadInfo();
		void RequestWatchingLiveOfPlayer(const class FString& SolarPlayerID);
		void RequestBattleList(int32_t PageIndex, int32_t PageSize);
		bool ReceivePlayingFinished(EReplayPlayingFinishReason reason, unsigned char StreamerErrorCode, const class FString& StreamerErrorMsg);
		void OnLiveWatchTargetLost();
		void RequestPlayReplayOfCurrentBattle();
		void RequestCheckpointForLiveWatch();
		class FString GetBattleIDByIndex(int32_t Index);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
