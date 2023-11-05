#pragma once

/**
 * Name: FL84
 * Version: 15.1
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
	 * Function BP_QuickSummon_Forward.BP_QuickSummon_Forward_C.TryGetSummonHitResult
	 */
	struct UBP_QuickSummon_Forward_C_TryGetSummonHitResult_Params
	{
	public:
		struct FHitResult                                          OutHitResult;                                            // 0x0000(0x0088)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		class AActor*                                              InSummoner;                                              // 0x0088(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USolarSummonDetectionConfig*                         InSummonConfig;                                          // 0x0090(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0098(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OVN0[0x3];                                   // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
