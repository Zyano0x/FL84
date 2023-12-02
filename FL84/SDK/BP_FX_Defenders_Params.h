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
	 * Function BP_FX_Defenders.BP_FX_Defenders_C.OnFinished
	 */
	struct ABP_FX_Defenders_C_OnFinished_Params
	{	};

	/**
	 * Function BP_FX_Defenders.BP_FX_Defenders_C.GetTrackingTransform
	 */
	struct ABP_FX_Defenders_C_GetTrackingTransform_Params
	{
	public:
		class ASolarCharacter*                                     Character;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z37Q[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_FX_Defenders.BP_FX_Defenders_C.GetFXDistance
	 */
	struct ABP_FX_Defenders_C_GetFXDistance_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B1UL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_FX_Defenders.BP_FX_Defenders_C.ReceiveBeginPlay
	 */
	struct ABP_FX_Defenders_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_FX_Defenders.BP_FX_Defenders_C.ReceiveTick
	 */
	struct ABP_FX_Defenders_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FX_Defenders.BP_FX_Defenders_C.AttachToCharacter
	 */
	struct ABP_FX_Defenders_C_AttachToCharacter_Params
	{
	public:
		class ASolarCharacter*                                     Character;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FX_Defenders.BP_FX_Defenders_C.ExecuteUbergraph_BP_FX_Defenders
	 */
	struct ABP_FX_Defenders_C_ExecuteUbergraph_BP_FX_Defenders_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JM11[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
