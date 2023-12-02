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
	 * BlueprintGeneratedClass BP_AchievementFormula.BP_AchievementFormula_C
	 * Size -> 0x0008 (FullSize[0x0230] - InheritedSize[0x0228])
	 */
	class ABP_AchievementFormula_C : public AAchievementFormula
	{
	public:
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void AchAdvancedWeapon(int32_t AchievementID);
		void AchTBubbleKill(int32_t AchievementID);
		void AchTAirSpeed(int32_t AchievementID);
		void AchTAirTrapeze(int32_t AchievementID);
		void AchTAirUmbrella(int32_t AchievementID);
		void AchTRevengeKill(int32_t AchievementID);
		void AchTBombingDie(int32_t AchievementID);
		void AchTFistKill(int32_t AchievementID);
		void AchTMarsWin(int32_t AchievementID);
		void AchTDie(int32_t AchievementID);
		void AchTenemyVehicle(int32_t AchievementID);
		void AchTOpenBoxNum(int32_t AchievementID);
		void AchTBlindSniper(int32_t AchievementID);
		void AchTFirstKill(int32_t AchievementID);
		void AchTOnlyLiveWin(int32_t AchievementID);
		void AchTSkyKill(int32_t AchievementID);
		void AchTRescue(int32_t AchievementID);
		void AchTAssistWin(int32_t AchievementID);
		void AchTDyingWin(int32_t AchievementID);
		void AchTLimitWin(int32_t AchievementID);
		void GetSolarGameState(class ASolarGameState** Out);
		void GetPlayerData(class UPlayerStatisticsData** Out);
		void GetAchievement(class USolarAchievementComponent** AchievementComponent);
		void GetSolarPlayerState(class ASolarPlayerState** OutResult);
		void AchTHPKill(int32_t AchievementID);
		void AchTUseVehicle(int32_t AchievementID);
		void AchTMinuteKill(int32_t AchievementID);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
