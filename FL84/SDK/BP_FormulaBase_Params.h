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
	 * Function BP_FormulaBase.BP_FormulaBase_C.GetCollectionItemRewards
	 */
	struct ABP_FormulaBase_C_GetCollectionItemRewards_Params
	{
	public:
		class ASolarPlayerState*                                   InPS;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TMap<int32_t, int32_t>                                     ReturnValue;                                             // 0x0008(0x0050)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_FormulaBase.BP_FormulaBase_C.GetFixedLevelExp
	 */
	struct ABP_FormulaBase_C_GetFixedLevelExp_Params
	{
	public:
		int32_t                                                    Origin;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9AU4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ASolarPlayerState*                                   Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FormulaBase.BP_FormulaBase_C.GetStrategyGuideConditions
	 */
	struct ABP_FormulaBase_C_GetStrategyGuideConditions_Params
	{
	public:
		class ASolarPlayerState*                                   InPS;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<int32_t>                                            OutResult;                                               // 0x0008(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
