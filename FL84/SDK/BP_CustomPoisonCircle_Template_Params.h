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
	 * Function BP_CustomPoisonCircle_Template.BP_CustomPoisonCircle_Template_C.GetModuleName
	 */
	struct ABP_CustomPoisonCircle_Template_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CustomPoisonCircle_Template.BP_CustomPoisonCircle_Template_C.SetMeshVisibility
	 */
	struct ABP_CustomPoisonCircle_Template_C_SetMeshVisibility_Params
	{	};

	/**
	 * Function BP_CustomPoisonCircle_Template.BP_CustomPoisonCircle_Template_C.DataTrace
	 */
	struct ABP_CustomPoisonCircle_Template_C_DataTrace_Params
	{
	public:
		int32_t                                                    inInt;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Vector;                                                  // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InFloat;                                                 // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GHIA[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_CustomPoisonCircle_Template.BP_CustomPoisonCircle_Template_C.OnLoaded_2CF9BD9E4D7B992D773DE7AE62F29135
	 */
	struct ABP_CustomPoisonCircle_Template_C_OnLoaded_2CF9BD9E4D7B992D773DE7AE62F29135_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CustomPoisonCircle_Template.BP_CustomPoisonCircle_Template_C.ReceiveBeginPlay
	 */
	struct ABP_CustomPoisonCircle_Template_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_CustomPoisonCircle_Template.BP_CustomPoisonCircle_Template_C.ReceiveTick
	 */
	struct ABP_CustomPoisonCircle_Template_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CustomPoisonCircle_Template.BP_CustomPoisonCircle_Template_C.[S]SetNextArea
	 */
	struct ABP_CustomPoisonCircle_Template_C_SSetNextArea_Params
	{
	public:
		struct FVector                                             Center;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Radius;                                                  // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WaitTime;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MoveTime;                                                // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DamageLevel;                                             // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CustomPoisonCircle_Template.BP_CustomPoisonCircle_Template_C.ShowEffectInside
	 */
	struct ABP_CustomPoisonCircle_Template_C_ShowEffectInside_Params
	{
	public:
		bool                                                       bInside;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CustomPoisonCircle_Template.BP_CustomPoisonCircle_Template_C.Evnet_ResetMaterial
	 */
	struct ABP_CustomPoisonCircle_Template_C_Evnet_ResetMaterial_Params
	{	};

	/**
	 * Function BP_CustomPoisonCircle_Template.BP_CustomPoisonCircle_Template_C.ExecuteUbergraph_BP_CustomPoisonCircle_Template
	 */
	struct ABP_CustomPoisonCircle_Template_C_ExecuteUbergraph_BP_CustomPoisonCircle_Template_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
