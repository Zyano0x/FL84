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
	 * Function ChaGCBP_RapidBoost.ChaGCBP_RapidBoost_C.WhileActive_Impl
	 */
	struct AChaGCBP_RapidBoost_C_WhileActive_Impl_Params
	{	};

	/**
	 * Function ChaGCBP_RapidBoost.ChaGCBP_RapidBoost_C.OnActive_Impl
	 */
	struct AChaGCBP_RapidBoost_C_OnActive_Impl_Params
	{	};

	/**
	 * Function ChaGCBP_RapidBoost.ChaGCBP_RapidBoost_C.OnPlayEndSound
	 */
	struct AChaGCBP_RapidBoost_C_OnPlayEndSound_Params
	{	};

	/**
	 * Function ChaGCBP_RapidBoost.ChaGCBP_RapidBoost_C.SpawnEmitter
	 */
	struct AChaGCBP_RapidBoost_C_SpawnEmitter_Params
	{
	public:
		class UParticleSystem*                                     EmitterTemplate;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     Mesh;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BoneName;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPSCPoolMethod                                             PoolingMethod;                                           // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAbsoluteRotation;                                       // 0x0019(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2GIY[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UParticleSystemComponent*                            ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChaGCBP_RapidBoost.ChaGCBP_RapidBoost_C.OnRemove
	 */
	struct AChaGCBP_RapidBoost_C_OnRemove_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayCueParameters                              Parameters;                                              // 0x0008(0x00C0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		bool                                                       ReturnValue;                                             // 0x00C8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0Z3J[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ChaGCBP_RapidBoost.ChaGCBP_RapidBoost_C.K2_HandleGameplayCue
	 */
	struct AChaGCBP_RapidBoost_C_K2_HandleGameplayCue_Params
	{
	public:
		class AActor*                                              MyTarget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EGameplayCueEvent                                          EventType;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TCIK[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayCueParameters                              Parameters;                                              // 0x0010(0x00C0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function ChaGCBP_RapidBoost.ChaGCBP_RapidBoost_C.ExecuteUbergraph_ChaGCBP_RapidBoost
	 */
	struct AChaGCBP_RapidBoost_C_ExecuteUbergraph_ChaGCBP_RapidBoost_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9K0E[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
