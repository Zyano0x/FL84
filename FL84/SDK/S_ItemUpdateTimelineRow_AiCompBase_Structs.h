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
	 * UserDefinedStruct S_ItemUpdateTimelineRow_AiCompBase.S_ItemUpdateTimelineRow_AiCompBase
	 * Size -> 0x00F8
	 */
	struct FS_ItemUpdateTimelineRow_AiCompBase
	{
	public:
		int32_t                                                    Time_2_7FFBDA824D664BA9DCAEF3BAFA087E84;                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_E71T[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FS_AiItemSetting_AiCompBase                         ItemSetting_5_71BA01FC444A9137E6955BA3B5EA68F6;          // 0x0008(0x00F0) Edit, BlueprintVisible, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
