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
	 * BlueprintGeneratedClass BPC_AiManagerBase.BPC_AiManagerBase_C
	 * Size -> 0x0038 (FullSize[0x00E8] - InheritedSize[0x00B0])
	 */
	class UBPC_AiManagerBase_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FString                                              PreSpawnAiTeams;                                         // 0x00B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    TeammateCount;                                           // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZOI4[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ASCMPlayerState*>                             AIList;                                                  // 0x00D0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    AILevelMax;                                              // 0x00E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    DefaultAiLevel;                                          // 0x00E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		int32_t GetMatchTeammateCount();
		void GetRandomDifficulty(int32_t* Difficulty);
		void GetMemberAIOrder(TMap<class FString, int32_t>* TeamCount);
		void ReceiveBeginPlay();
		void OnPlayerJoin(class ASCMPlayerState* NewPlayer, bool bIsAi);
		void CustomEvent_1();
		void ExecuteUbergraph_BPC_AiManagerBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
