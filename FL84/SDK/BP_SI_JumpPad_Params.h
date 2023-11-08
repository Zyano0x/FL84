#pragma once

/**
 * Name: FL84
 * Version: 15.1
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
	 * Function BP_SI_JumpPad.BP_SI_JumpPad_C.ServerCheckLaunch
	 */
	struct ABP_SI_JumpPad_C_ServerCheckLaunch_Params
	{
	public:
		bool                                                       Launch;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2WMZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SI_JumpPad.BP_SI_JumpPad_C.UpdateProgress
	 */
	struct ABP_SI_JumpPad_C_UpdateProgress_Params
	{
	public:
		float                                                      Percent;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SI_JumpPad.BP_SI_JumpPad_C.ShowInCD
	 */
	struct ABP_SI_JumpPad_C_ShowInCD_Params
	{
	public:
		bool                                                       InCD;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L087[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SI_JumpPad.BP_SI_JumpPad_C.Timeline_0__FinishedFunc
	 */
	struct ABP_SI_JumpPad_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_SI_JumpPad.BP_SI_JumpPad_C.Timeline_0__UpdateFunc
	 */
	struct ABP_SI_JumpPad_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_SI_JumpPad.BP_SI_JumpPad_C.ReceiveBeginPlay
	 */
	struct ABP_SI_JumpPad_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_SI_JumpPad.BP_SI_JumpPad_C.ReceiveTick
	 */
	struct ABP_SI_JumpPad_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SI_JumpPad.BP_SI_JumpPad_C.BreakLoop
	 */
	struct ABP_SI_JumpPad_C_BreakLoop_Params
	{	};

	/**
	 * Function BP_SI_JumpPad.BP_SI_JumpPad_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_SI_JumpPad_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T1JI[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_SI_JumpPad.BP_SI_JumpPad_C.BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_SI_JumpPad_C_BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SI_JumpPad.BP_SI_JumpPad_C.Launch
	 */
	struct ABP_SI_JumpPad_C_Launch_Params
	{
	public:
		TArray<class ASolarCharacter*>                             Characters;                                              // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SI_JumpPad.BP_SI_JumpPad_C.ClientFinishLaunch
	 */
	struct ABP_SI_JumpPad_C_ClientFinishLaunch_Params
	{	};

	/**
	 * Function BP_SI_JumpPad.BP_SI_JumpPad_C.LaunchEffect
	 */
	struct ABP_SI_JumpPad_C_LaunchEffect_Params
	{	};

	/**
	 * Function BP_SI_JumpPad.BP_SI_JumpPad_C.Set_CD
	 */
	struct ABP_SI_JumpPad_C_Set_CD_Params
	{
	public:
		float                                                      CD;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SI_JumpPad.BP_SI_JumpPad_C.Set_State
	 */
	struct ABP_SI_JumpPad_C_Set_State_Params
	{
	public:
		bool                                                       InCD;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W3B7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CD;                                                      // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SI_JumpPad.BP_SI_JumpPad_C.ExecuteUbergraph_BP_SI_JumpPad
	 */
	struct ABP_SI_JumpPad_C_ExecuteUbergraph_BP_SI_JumpPad_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
