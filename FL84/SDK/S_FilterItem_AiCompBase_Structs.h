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
	 * UserDefinedStruct S_FilterItem_AiCompBase.S_FilterItem_AiCompBase
	 * Size -> 0x0058
	 */
	struct FS_FilterItem_AiCompBase
	{
	public:
		E_FilterType_AiCompBase                                    Type_2_5F710F734E5DE42D8867F89EAEF8EDDA;                 // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VADW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<E_FilterParameterType_AiCompBase, class FString>      Parameter_9_BF9075834B62C964411A2E904F36CE16;            // 0x0008(0x0050) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
