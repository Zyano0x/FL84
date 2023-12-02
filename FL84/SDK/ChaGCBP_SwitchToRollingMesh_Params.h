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
	 * Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.TryStopAirLoop
	 */
	struct AChaGCBP_SwitchToRollingMesh_C_TryStopAirLoop_Params
	{	};

	/**
	 * Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.TryStopRollingLoop
	 */
	struct AChaGCBP_SwitchToRollingMesh_C_TryStopRollingLoop_Params
	{	};

	/**
	 * Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.TryStartAirLoop
	 */
	struct AChaGCBP_SwitchToRollingMesh_C_TryStartAirLoop_Params
	{	};

	/**
	 * Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.TryStartRollingLoop
	 */
	struct AChaGCBP_SwitchToRollingMesh_C_TryStartRollingLoop_Params
	{	};

	/**
	 * Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.StopLoopSound
	 */
	struct AChaGCBP_SwitchToRollingMesh_C_StopLoopSound_Params
	{	};

	/**
	 * Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.UpdateRollingSound
	 */
	struct AChaGCBP_SwitchToRollingMesh_C_UpdateRollingSound_Params
	{	};

	/**
	 * Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.UpdateParticleParamsBySpeed
	 */
	struct AChaGCBP_SwitchToRollingMesh_C_UpdateParticleParamsBySpeed_Params
	{
	public:
		float                                                      Speed;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.OnRemoveInternal
	 */
	struct AChaGCBP_SwitchToRollingMesh_C_OnRemoveInternal_Params
	{
	public:
		class ASolarCharacter*                                     NullableCharacter;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00C0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		bool                                                       ReturnValue;                                             // 0x00C8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.WhileActiveInternal
	 */
	struct AChaGCBP_SwitchToRollingMesh_C_WhileActiveInternal_Params
	{
	public:
		class ASolarCharacter*                                     Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00C0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		bool                                                       ReturnValue;                                             // 0x00C8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.OnActiveInternal
	 */
	struct AChaGCBP_SwitchToRollingMesh_C_OnActiveInternal_Params
	{
	public:
		class ASolarCharacter*                                     Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00C0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		bool                                                       ReturnValue;                                             // 0x00C8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.Timeline_0__FinishedFunc
	 */
	struct AChaGCBP_SwitchToRollingMesh_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.Timeline_0__UpdateFunc
	 */
	struct AChaGCBP_SwitchToRollingMesh_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.ReceiveTick
	 */
	struct AChaGCBP_SwitchToRollingMesh_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.ReceiveEndPlay
	 */
	struct AChaGCBP_SwitchToRollingMesh_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.FadeIn
	 */
	struct AChaGCBP_SwitchToRollingMesh_C_FadeIn_Params
	{	};

	/**
	 * Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.FadeOut
	 */
	struct AChaGCBP_SwitchToRollingMesh_C_FadeOut_Params
	{	};

	/**
	 * Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.ExecuteUbergraph_ChaGCBP_SwitchToRollingMesh
	 */
	struct AChaGCBP_SwitchToRollingMesh_C_ExecuteUbergraph_ChaGCBP_SwitchToRollingMesh_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
