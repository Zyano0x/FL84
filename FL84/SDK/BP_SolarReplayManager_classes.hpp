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

	void OnRecordingStartedDelegate_6967C5D44ACCAC06F4ABCF9D7E4F020C();
	void OnPlayingStartedDelegate_66D42B5943126CECB1A2419AAB37B80A();
	void SetRequestTryStrategy(float Interval, int32 Times);
	bool ReceivePlayingFinished(enum class EReplayPlayingFinishReason Reason, uint8 StreamerErrorCode, const class FString& StreamerErrorMsg);
	void GetStartRecordingParams(struct FStartRecordingParams* OutParams);
	void LuaBindDelegates();
	void RequestBattleList(int32 PageIndex, int32 PageSize);
	void ReceivePlayingStartFailed();
	bool IsReady();
	void RequestWatchingLiveOfPlayer(const class FString& SolarPlayerID);
	void RequestPlayReplay(const class FString& InBattleID, bool IsLive);
	void LuaOnPostLoadMapWithWorld(const class FString& LevelName);
	void SetReadyToRecord(bool bIsReady, TArray<class FString>& OBPlayerIDs);
	bool IsRequestingReplayDownloadInfo();
	bool NotifyBackendPlayReplayFinished();
	void RequestCheckpointForLiveWatch();
	void OnLiveWatchTargetLost();
	class FString GetBattleIDByIndex(int32 Index);
	void RequestPlayReplayOfCurrentBattle();
};

}


