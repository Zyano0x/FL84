#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.6.511026
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
	 * Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.SetSpeedUpBuff
	 */
	struct UBP_HUD_ReloadBase_C_SetSpeedUpBuff_Params
	{
	public:
		bool                                                       bHaveBuff;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.StopReloadAnimation
	 */
	struct UBP_HUD_ReloadBase_C_StopReloadAnimation_Params
	{	};

	/**
	 * Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.GetReloadAnimation
	 */
	struct UBP_HUD_ReloadBase_C_GetReloadAnimation_Params
	{
	public:
		class UWidgetAnimation*                                    OutReloadAnimation;                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.PlayReloadAnimation
	 */
	struct UBP_HUD_ReloadBase_C_PlayReloadAnimation_Params
	{	};

	/**
	 * Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnActiveCrosshair
	 */
	struct UBP_HUD_ReloadBase_C_OnActiveCrosshair_Params
	{
	public:
		class UUserWidget*                                         InActiveCrosshair;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnChangeOverloadState
	 */
	struct UBP_HUD_ReloadBase_C_OnChangeOverloadState_Params
	{
	public:
		bool                                                       InbQuitState;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnInsufficientAmmo
	 */
	struct UBP_HUD_ReloadBase_C_OnInsufficientAmmo_Params
	{	};

	/**
	 * Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnReloadFinish
	 */
	struct UBP_HUD_ReloadBase_C_OnReloadFinish_Params
	{
	public:
		bool                                                       InbReloadSuccess;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RM80[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InReloadAmmo;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InReservedAmmo;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InMaxAmmo;                                               // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InAmmoProgress;                                          // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnUpdateAmmo
	 */
	struct UBP_HUD_ReloadBase_C_OnUpdateAmmo_Params
	{
	public:
		int32_t                                                    InReservedAmmo;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InMaxAmmo;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InAmmoProgress;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InbFirst;                                                // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnUpdateCharge
	 */
	struct UBP_HUD_ReloadBase_C_OnUpdateCharge_Params
	{
	public:
		bool                                                       InbCharging;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H24B[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InChargeMode;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InChargeProgress;                                        // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnUpdateCoolDown
	 */
	struct UBP_HUD_ReloadBase_C_OnUpdateCoolDown_Params
	{
	public:
		float                                                      InReloadProgress;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnUpdateOverload
	 */
	struct UBP_HUD_ReloadBase_C_OnUpdateOverload_Params
	{
	public:
		float                                                      InOverloadProgress;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InOverloadWarningRate;                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InbOverloadState;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnUpdateReload
	 */
	struct UBP_HUD_ReloadBase_C_OnUpdateReload_Params
	{
	public:
		float                                                      InReloadProgress;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InReloadAmmo;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InMaxAmmo;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnChangeReloadState
	 */
	struct UBP_HUD_ReloadBase_C_OnChangeReloadState_Params
	{
	public:
		bool                                                       InbQuitState;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bReloadSpeedup;                                          // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.ExecuteUbergraph_BP_HUD_ReloadBase
	 */
	struct UBP_HUD_ReloadBase_C_ExecuteUbergraph_BP_HUD_ReloadBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
