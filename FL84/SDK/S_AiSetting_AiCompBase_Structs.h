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
	 * UserDefinedStruct S_AiSetting_AiCompBase.S_AiSetting_AiCompBase
	 * Size -> 0x01BC
	 */
	struct FS_AiSetting_AiCompBase
	{
	public:
		int32_t                                                    AiDifficulty_8_4974E4014585827DEEE7C4A2DD04C574;         // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_228S[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FS_VehicleSetting_AiCompBase                        Vehicle_31_62776A384FE3DF706792D787ECE21400;             // 0x0008(0x0058) Edit, BlueprintVisible, HasGetValueTypeHash
		int32_t                                                    Character_5_1C83A7F644D28AEAEDC0E5A7C719F40D;            // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MEJW[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<E_AiDataSettingType_AiCompBase, struct FIntPoint>     AiDataSetting_19_CE7523924778F4A2E8FB8E98FB609BC9;       // 0x0068(0x0050) Edit, BlueprintVisible
		struct FS_AiItemSetting_AiCompBase                         AiItemSetting_24_C13AF7C7447904A20998EFA0633681A8;       // 0x00B8(0x00F0) Edit, BlueprintVisible, HasGetValueTypeHash
		struct FS_TeleCenterSetting_AiCompBase                     TeleCenterSetting_29_19DB9A7E4832B3643DA07E85E3B0B87E;   // 0x01A8(0x0014) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
