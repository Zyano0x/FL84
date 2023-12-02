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
	 * Function GC_SuperRadarScan.GC_SuperRadarScan_C.PlayEmitterEffect
	 */
	struct AGC_SuperRadarScan_C_PlayEmitterEffect_Params
	{	};

	/**
	 * Function GC_SuperRadarScan.GC_SuperRadarScan_C.OnRemove
	 */
	struct AGC_SuperRadarScan_C_OnRemove_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00C0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		bool                                                       ReturnValue;                                             // 0x00C8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GC_SuperRadarScan.GC_SuperRadarScan_C.OnActive
	 */
	struct AGC_SuperRadarScan_C_OnActive_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00C0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		bool                                                       ReturnValue;                                             // 0x00C8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EUD2[0x3];                                   // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GC_SuperRadarScan.GC_SuperRadarScan_C.ReceiveBeginPlay
	 */
	struct AGC_SuperRadarScan_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function GC_SuperRadarScan.GC_SuperRadarScan_C.ReceiveTick
	 */
	struct AGC_SuperRadarScan_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GC_SuperRadarScan.GC_SuperRadarScan_C.ExecuteUbergraph_GC_SuperRadarScan
	 */
	struct AGC_SuperRadarScan_C_ExecuteUbergraph_GC_SuperRadarScan_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
