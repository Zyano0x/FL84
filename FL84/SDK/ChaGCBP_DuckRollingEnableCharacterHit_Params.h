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
	 * Function ChaGCBP_DuckRollingEnableCharacterHit.ChaGCBP_DuckRollingEnableCharacterHit_C.OnRemove
	 */
	struct AChaGCBP_DuckRollingEnableCharacterHit_C_OnRemove_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00C0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		bool                                                       ReturnValue;                                             // 0x00C8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChaGCBP_DuckRollingEnableCharacterHit.ChaGCBP_DuckRollingEnableCharacterHit_C.WhileActive
	 */
	struct AChaGCBP_DuckRollingEnableCharacterHit_C_WhileActive_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00C0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		bool                                                       ReturnValue;                                             // 0x00C8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OWYO[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ChaGCBP_DuckRollingEnableCharacterHit.ChaGCBP_DuckRollingEnableCharacterHit_C.ReceiveTick
	 */
	struct AChaGCBP_DuckRollingEnableCharacterHit_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChaGCBP_DuckRollingEnableCharacterHit.ChaGCBP_DuckRollingEnableCharacterHit_C.ReceiveEndPlay
	 */
	struct AChaGCBP_DuckRollingEnableCharacterHit_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChaGCBP_DuckRollingEnableCharacterHit.ChaGCBP_DuckRollingEnableCharacterHit_C.ExecuteUbergraph_ChaGCBP_DuckRollingEnableCharacterHit
	 */
	struct AChaGCBP_DuckRollingEnableCharacterHit_C_ExecuteUbergraph_ChaGCBP_DuckRollingEnableCharacterHit_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
