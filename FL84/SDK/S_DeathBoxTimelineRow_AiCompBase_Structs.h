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
	 * UserDefinedStruct S_DeathBoxTimelineRow_AiCompBase.S_DeathBoxTimelineRow_AiCompBase
	 * Size -> 0x00F8
	 */
	struct FS_DeathBoxTimelineRow_AiCompBase
	{
	public:
		int32_t                                                    Time_2_928EF68248A34D329E295D8A369D8D2F;                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KOGI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FS_AiItemSetting_AiCompBase                         Item_10_9E2EF34E44E80CF3DF7A459098D75A9C;                // 0x0008(0x00F0) Edit, BlueprintVisible, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
