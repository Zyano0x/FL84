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
	 * BlueprintGeneratedClass BP_BotTeamManager.BP_BotTeamManager_C
	 * Size -> 0x0009 (FullSize[0x0269] - InheritedSize[0x0260])
	 */
	class UBP_BotTeamManager_C : public USolarBotAITeamManager
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       bEnableBotTeamManager;                                   // 0x0268(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool ShouldTeamActivate(const struct FSolarBotTeamInfo& BotInfo);
		void OnTeamDeactive(const struct FSolarBotTeamInfo& TeamInfo);
		void OnBotUnRegister(const struct FSolarBotMemberInfo& BotInfo);
		void OnBotStateChanged(const struct FSolarBotMemberInfo& BotInfo, ESolarBotMemberState OldState);
		void OnTeamActivate(const struct FSolarBotTeamInfo& TeamInfo);
		void OnBotRegister(const struct FSolarBotMemberInfo& BotInfo);
		void ExecuteUbergraph_BP_BotTeamManager(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
