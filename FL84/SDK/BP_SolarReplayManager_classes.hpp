#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x588 - 0x588)
// BlueprintGeneratedClass BP_SolarReplayManager.BP_SolarReplayManager_C
class UBP_SolarReplayManager_C : public USolarReplayManager
{
public:

	static class UClass* StaticClass();
	static class UBP_SolarReplayManager_C* GetDefaultObj();

	void OnRecordingStartedDelegate_91627A7341B32ACFBC3B179B76F76DC7();
	void OnPlayingStartedDelegate_9D73D9064DCCBCE70705F991C815897C();
	void RequestBattleList(int32 PageIndex, int32 PageSize);
	bool NotifyBackendPlayReplayFinished();
	void ReceivePlayingStartFailed();
	void RequestCheckpointForLiveWatch();
	void RequestPlayReplayOfCurrentBattle();
	void SetReadyToRecord(bool bIsReady, TArray<class FString>& OBPlayerIDs);
	bool IsReady();
	void LuaBindDelegates();
	class FString GetBattleIDByIndex(int32 Index);
	void GetStartRecordingParams(struct FStartRecordingParams* OutParams);
	bool ReceivePlayingFinished(enum class EReplayPlayingFinishReason Reason, uint8 StreamerErrorCode, const class FString& StreamerErrorMsg);
	void RequestWatchingLiveOfPlayer(const class FString& SolarPlayerID);
	void LuaOnPostLoadMapWithWorld(const class FString& LevelName);
	bool IsRequestingReplayDownloadInfo();
	void OnLiveWatchTargetLost();
	void RequestPlayReplay(const class FString& InBattleID, bool IsLive);
	void SetRequestTryStrategy(float Interval, int32 Times);
};

}


