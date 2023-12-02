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
	 * Function BP_BTS_TeamTaskAllocator.BP_BTS_TeamTaskAllocator_C.DebugEachTaskScoreItem
	 */
	struct UBP_BTS_TeamTaskAllocator_C_DebugEachTaskScoreItem_Params
	{
	public:
		struct FSolarScoringItemStruct                             TaskScore;                                               // 0x0000(0x0014)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		ESolarTaskScoringItemType                                  ItemType;                                                // 0x0014(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YAFY[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Score;                                                   // 0x0018(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Value;                                                   // 0x001C(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BTS_TeamTaskAllocator.BP_BTS_TeamTaskAllocator_C.DebugAllTaskScore
	 */
	struct UBP_BTS_TeamTaskAllocator_C_DebugAllTaskScore_Params
	{
	public:
		TArray<struct FSolarScoringItemStruct>                     TaskScoresList;                                          // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BTS_TeamTaskAllocator.BP_BTS_TeamTaskAllocator_C.CheckIfRescueBot
	 */
	struct UBP_BTS_TeamTaskAllocator_C_CheckIfRescueBot_Params
	{
	public:
		class ASolarBotAIController*                               InController;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              InState;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BTS_TeamTaskAllocator.BP_BTS_TeamTaskAllocator_C.GetSuitableRescueBot
	 */
	struct UBP_BTS_TeamTaskAllocator_C_GetSuitableRescueBot_Params
	{
	public:
		class ASolarCharacter*                                     TeammateInDanger;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USolarBotAITeamManager*                              TeamManager;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASolarBotAIController*                               ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BTS_TeamTaskAllocator.BP_BTS_TeamTaskAllocator_C.SelfUpdateTaskState
	 */
	struct UBP_BTS_TeamTaskAllocator_C_SelfUpdateTaskState_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
