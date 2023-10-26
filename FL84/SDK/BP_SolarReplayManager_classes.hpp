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

	void OnRecordingStartedDelegate_C0EA34124EAD7B2F77A39EB7F4F11F34();
	void OnPlayingStartedDelegate_09171EDE4609FB410EF59DA6D16337F6();
	bool NotifyBackendPlayReplayFinished();
	bool IsReady();
	void LuaOnPostLoadMapWithWorld(const class FString& LevelName);
	void OnLiveWatchTargetLost();
	bool ReceivePlayingFinished(enum class EReplayPlayingFinishReason Reason, uint8 StreamerErrorCode, const class FString& StreamerErrorMsg);
	class FString GetBattleIDByIndex(int32 Index);
	void RequestWatchingLiveOfPlayer(const class FString& SolarPlayerID);
	void LuaBindDelegates();
	void RequestPlayReplay(const class FString& InBattleID, bool IsLive);
	void GetStartRecordingParams(struct FStartRecordingParams* OutParams);
	void RequestCheckpointForLiveWatch();
	void SetRequestTryStrategy(float Interval, int32 Times);
	void ReceivePlayingStartFailed();
	void RequestPlayReplayOfCurrentBattle();
	bool IsRequestingReplayDownloadInfo();
	void SetReadyToRecord(bool bIsReady, TArray<class FString>& OBPlayerIDs);
	void RequestBattleList(int32 PageIndex, int32 PageSize);
};

}


