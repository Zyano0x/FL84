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
	 * UserDefinedStruct S_AiGroup_AiCompBase.S_AiGroup_AiCompBase
	 * Size -> 0x001C
	 */
	struct FS_AiGroup_AiCompBase
	{
	public:
		TArray<struct FS_AiGroupSetting_AiCompBase>                AiGroupSetting_14_A687F5C94BF1C7F5840FBB8AC4334C0A;      // 0x0000(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash
		int32_t                                                    TimeOut_9_F640B9744B21E97226F07583CDB4F870;              // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NextWave_12_966ADD384DED2C469CAF52BC47BCDEB6;            // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AiCapacity_18_F09CC6AC401197E66B6BB98EBC38EAE8;          // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
