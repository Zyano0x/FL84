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
	 * Function GC_Freeze.GC_Freeze_C.RemoveFunc
	 */
	struct AGC_Freeze_C_RemoveFunc_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GC_Freeze.GC_Freeze_C.ActiveFunc
	 */
	struct AGC_Freeze_C_ActiveFunc_Params
	{
	public:
		class AActor*                                              TartgetActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GC_Freeze.GC_Freeze_C.Is Teammate
	 */
	struct AGC_Freeze_C_IsTeammate_Params
	{
	public:
		class ASolarCharacter*                                     Actor1;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Actor2;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsTeammate;                                              // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GC_Freeze.GC_Freeze_C.PlaySoundEvent
	 */
	struct AGC_Freeze_C_PlaySoundEvent_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bPlay;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N923[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GC_Freeze.GC_Freeze_C.ReceiveBeginPlay
	 */
	struct AGC_Freeze_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function GC_Freeze.GC_Freeze_C.ReceiveEndPlay
	 */
	struct AGC_Freeze_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GC_Freeze.GC_Freeze_C.ExecuteUbergraph_GC_Freeze
	 */
	struct AGC_Freeze_C_ExecuteUbergraph_GC_Freeze_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
