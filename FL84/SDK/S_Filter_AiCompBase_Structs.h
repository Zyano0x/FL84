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
	 * UserDefinedStruct S_Filter_AiCompBase.S_Filter_AiCompBase
	 * Size -> 0x0018
	 */
	struct FS_Filter_AiCompBase
	{
	public:
		TArray<struct FS_FilterGroup_AiCompBase>                   FilterGroup_5_1C1B853F44EB9276E78146B9041C055E;          // 0x0000(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash
		class UBPC_FilterBase_AiComp_C*                            FilterBP_11_A0A6C68E4056DF7081A4EB94A976515C;            // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
