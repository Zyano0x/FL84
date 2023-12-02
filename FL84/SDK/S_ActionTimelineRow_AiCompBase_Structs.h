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
	 * UserDefinedStruct S_ActionTimelineRow_AiCompBase.S_ActionTimelineRow_AiCompBase
	 * Size -> 0x0018
	 */
	struct FS_ActionTimelineRow_AiCompBase
	{
	public:
		int32_t                                                    StartTime_2_F4B379F640944FDACE2AC89FD6E2A76B;            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SJ59[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FS_TriggerItem_AiCompBase>                   Trigger_18_BE912C8040E1D41DD75E3B8044133BBC;             // 0x0008(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
