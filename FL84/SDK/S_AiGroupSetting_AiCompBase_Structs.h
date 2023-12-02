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
	 * UserDefinedStruct S_AiGroupSetting_AiCompBase.S_AiGroupSetting_AiCompBase
	 * Size -> 0x0010
	 */
	struct FS_AiGroupSetting_AiCompBase
	{
	public:
		TArray<struct FS_AiSetting_AiCompBase>                     Group_3_B8320C5A4C8302EBED3BC19B28B28E7E;                // 0x0000(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
