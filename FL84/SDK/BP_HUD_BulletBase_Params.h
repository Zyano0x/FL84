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
	 * Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.GetReloadBulletAnimation
	 */
	struct UBP_HUD_BulletBase_C_GetReloadBulletAnimation_Params
	{
	public:
		class UWidgetAnimation*                                    OutReloadAniamtion;                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.PlayReloadBulletAnimation
	 */
	struct UBP_HUD_BulletBase_C_PlayReloadBulletAnimation_Params
	{	};

	/**
	 * Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.SetBulletVisible
	 */
	struct UBP_HUD_BulletBase_C_SetBulletVisible_Params
	{
	public:
		bool                                                       InbVisilble;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.ReloadFinish
	 */
	struct UBP_HUD_BulletBase_C_ReloadFinish_Params
	{
	public:
		int32_t                                                    InReservedAmmo;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InMaxAmmo;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.SetBulletLightEffect
	 */
	struct UBP_HUD_BulletBase_C_SetBulletLightEffect_Params
	{
	public:
		float                                                      InProgress;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.GetBulletGaugeWidget
	 */
	struct UBP_HUD_BulletBase_C_GetBulletGaugeWidget_Params
	{
	public:
		class UUserWidget*                                         OutBulletGaugeWidget;                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.UpdateBulletGaugeProgress
	 */
	struct UBP_HUD_BulletBase_C_UpdateBulletGaugeProgress_Params
	{
	public:
		float                                                      InBulletGaugeProgress;                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_06G0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.GetUpdateBulletStateAnimation
	 */
	struct UBP_HUD_BulletBase_C_GetUpdateBulletStateAnimation_Params
	{
	public:
		class UWidgetAnimation*                                    OutUpdateBulletStateAnimation;                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.PlayUpdateBulletStateAnimation
	 */
	struct UBP_HUD_BulletBase_C_PlayUpdateBulletStateAnimation_Params
	{
	public:
		bool                                                       InbReload;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnActiveCrosshair
	 */
	struct UBP_HUD_BulletBase_C_OnActiveCrosshair_Params
	{
	public:
		class UUserWidget*                                         InActiveCrosshair;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnChangeOverloadState
	 */
	struct UBP_HUD_BulletBase_C_OnChangeOverloadState_Params
	{
	public:
		bool                                                       InbQuitState;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnChangeReloadState
	 */
	struct UBP_HUD_BulletBase_C_OnChangeReloadState_Params
	{
	public:
		bool                                                       InbQuitState;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bReloadSpeedup;                                          // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnInsufficientAmmo
	 */
	struct UBP_HUD_BulletBase_C_OnInsufficientAmmo_Params
	{	};

	/**
	 * Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnUpdateCharge
	 */
	struct UBP_HUD_BulletBase_C_OnUpdateCharge_Params
	{
	public:
		bool                                                       InbCharging;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PG1K[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InChargeMode;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InChargeProgress;                                        // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnUpdateCoolDown
	 */
	struct UBP_HUD_BulletBase_C_OnUpdateCoolDown_Params
	{
	public:
		float                                                      InReloadProgress;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnUpdateOverload
	 */
	struct UBP_HUD_BulletBase_C_OnUpdateOverload_Params
	{
	public:
		float                                                      InOverloadProgress;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InOverloadWarningRate;                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InbOverloadState;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnUpdateAmmo
	 */
	struct UBP_HUD_BulletBase_C_OnUpdateAmmo_Params
	{
	public:
		int32_t                                                    InReservedAmmo;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InMaxAmmo;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InAmmoProgress;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InbFirst;                                                // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnUpdateReload
	 */
	struct UBP_HUD_BulletBase_C_OnUpdateReload_Params
	{
	public:
		float                                                      InReloadProgress;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InReloadAmmo;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InMaxAmmo;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnReloadFinish
	 */
	struct UBP_HUD_BulletBase_C_OnReloadFinish_Params
	{
	public:
		bool                                                       InbReloadSuccess;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UWEG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InReloadAmmo;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InReservedAmmo;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InMaxAmmo;                                               // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InAmmoProgress;                                          // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.ExecuteUbergraph_BP_HUD_BulletBase
	 */
	struct UBP_HUD_BulletBase_C_ExecuteUbergraph_BP_HUD_BulletBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
