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
	 * BlueprintGeneratedClass BP_BTS_TeamTaskAllocator.BP_BTS_TeamTaskAllocator_C
	 * Size -> 0x0050 (FullSize[0x01B8] - InheritedSize[0x0168])
	 */
	class UBP_BTS_TeamTaskAllocator_C : public USolarBTS_TeamTaskAllocation
	{
	public:
		struct FBlackboardKeySelector                              DyingTeammate;                                           // 0x0168(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              AccompanyPlayer;                                         // 0x0190(0x0028) Edit, BlueprintVisible

	public:
		void DebugEachTaskScoreItem(const struct FSolarScoringItemStruct& TaskScore, ESolarTaskScoringItemType ItemType, float Score, float Value);
		void DebugAllTaskScore(TArray<struct FSolarScoringItemStruct> TaskScoresList);
		bool CheckIfRescueBot(class ASolarBotAIController* InController, unsigned char InState);
		class ASolarBotAIController* GetSuitableRescueBot(class ASolarCharacter* TeammateInDanger, class USolarBotAITeamManager* TeamManager);
		void SelfUpdateTaskState();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
