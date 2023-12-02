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
	 * UserDefinedStruct S_TeleCenterSetting_AiCompBase.S_TeleCenterSetting_AiCompBase
	 * Size -> 0x0014
	 */
	struct FS_TeleCenterSetting_AiCompBase
	{
	public:
		bool                                                       SetTeleCenter_1_934127A647EC01FB0575C181F0207AD2;        // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RLGZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIntPoint                                           TeleportRadius_6_B6A052FC42B8B1735E5AFF9F69A260B8;       // 0x0004(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FIntPoint                                           TeleportAngle_7_E56785284B82170AB9B865A013E3A222;        // 0x000C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
