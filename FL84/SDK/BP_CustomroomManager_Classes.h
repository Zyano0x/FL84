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
	 * BlueprintGeneratedClass BP_CustomroomManager.BP_CustomroomManager_C
	 * Size -> 0x0084 (FullSize[0x04C4] - InheritedSize[0x0440])
	 */
	class ABP_CustomroomManager_C : public ACustomRoomManager
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       HUDInitialized;                                          // 0x0448(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AWFI[0x7];                                   // 0x0449(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              UI_RoomHUD[0x28];                                        // 0x0450(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              UI_RoomOperate[0x28];                                    // 0x0478(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		E_Type_Team_Member                                         TeamMemberCount;                                         // 0x04A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsLocalPlayerOB;                                         // 0x04A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TEMPFlagUIRefreshed;                                     // 0x04A2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FFL9[0x5];                                   // 0x04A3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      PlayerPendingRemoval;                                    // 0x04A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    TeamCount;                                               // 0x04B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    DeathmatchModeGroupID;                                   // 0x04BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SoloGameModeID;                                          // 0x04C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetSpawnList(TArray<int32_t>* ID, TArray<int32_t>* ID2, TArray<int32_t>* ID3, TArray<int32_t>* ID4);
		void GetModeRoomUIType(EModeRoomUIType* NewParam);
		struct FCustomRoomData GetRoomInfo();
		void IsPlayerLocalPendingKill(class ASCMPlayerState* Player, bool* Result);
		bool IsRoomOwner(class ASCMPlayerState* Player);
		void SwitchMgmtUIDisplay();
		void RemoveRoomUI();
		void GetTeamMemberCount(int32_t* Result);
		void TEMPDelayedFlagUpdate();
		void PreUpdateOB();
		void RefreshAllTeamsonUI();
		void InitCustomRoomInfo();
		void GetCustomRoomMode(ERoomModeType* RoomMode);
		void GetModeNameLocalization(int32_t* ModeLocalID, int32_t* GroupLocalID);
		void RefreshSTARTinTopHUD();
		void CreateRoomManagerOperateUI();
		void CreateRoomManagerHUD();
		bool OnGameStart();
		void OnTournamentDealy();
		void ManualTriggerRefresh(const class FString& DEBUGReason);
		void RefreshOB();
		void RefreshRoomData(const struct FCustomRoomData& RoomData);
		void UnbaindAllEvents();
		void RefreshTeamPlayers(class ASCMPlayerState* Player);
		void OnClientRoomDataReady();
		void ReceiveBeginPlay();
		void OnTeamsInfoPostChanged();
		void ExecuteUbergraph_BP_CustomroomManager(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
