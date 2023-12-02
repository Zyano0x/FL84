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
	 * Function BP_DBox_Default.BP_DBox_Default_C.CanBuyResurrect
	 */
	struct ABP_DBox_Default_C_CanBuyResurrect_Params
	{
	public:
		class ASolarCharacter*                                     InReqCharacter;                                          // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M6Z6[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_DBox_Default.BP_DBox_Default_C.IsSameTeam
	 */
	struct ABP_DBox_Default_C_IsSameTeam_Params
	{
	public:
		unsigned char                                              CharacterTeamID;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3D6T[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_DBox_Default.BP_DBox_Default_C.UserConstructionScript
	 */
	struct ABP_DBox_Default_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_DBox_Default.BP_DBox_Default_C.ReceiveBeginPlay
	 */
	struct ABP_DBox_Default_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_DBox_Default.BP_DBox_Default_C.ExecuteUbergraph_BP_DBox_Default
	 */
	struct ABP_DBox_Default_C_ExecuteUbergraph_BP_DBox_Default_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
