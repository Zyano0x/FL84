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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct S_WarmGameAiConfig.S_WarmGameAiConfig
	 * Size -> 0x0014
	 */
	struct FS_WarmGameAiConfig
	{
	public:
		class USolarBotAIConfig*                                   ConfigPreset_9_3A28EF82445B053255E222A49DE8116E;         // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Difficulty_2_BC1C176F4C7CBB4D6FC889B2806BF007;           // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Preference_6_7DE61082428EF32F3BEFE6AFA07875B9;           // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Substitute_5_5FA843ED4EF730ADF049548C170D13E7;           // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
