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
	 * Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.OnOverloadChanged
	 */
	struct UCrosshair_CarWeapon_Float_C_OnOverloadChanged_Params
	{
	public:
		bool                                                       InOverload;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.Set Charge Panel Size
	 */
	struct UCrosshair_CarWeapon_Float_C_SetChargePanelSize_Params
	{	};

	/**
	 * Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.SetChargeProgress
	 */
	struct UCrosshair_CarWeapon_Float_C_SetChargeProgress_Params
	{	};

	/**
	 * Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.SetWidgetResources
	 */
	struct UCrosshair_CarWeapon_Float_C_SetWidgetResources_Params
	{
	public:
		class UCanvasPanel*                                        InSecondReticlePanel;                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UImage*                                              InReticleDirectionImage;                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UImage*                                              InRangedImage;                                           // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USizeBox*                                            InAssistLockSizeBox;                                     // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCanvasPanel*                                        InChangeNewAssistLockPawnPanel;                          // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCanvasPanel*                                        InEnterLockPawnPanel;                                    // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCanvasPanel*                                        InCanvas_Dynamic;                                        // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.Construct
	 */
	struct UCrosshair_CarWeapon_Float_C_Construct_Params
	{	};

	/**
	 * Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.OnUpdateChargeProgress
	 */
	struct UCrosshair_CarWeapon_Float_C_OnUpdateChargeProgress_Params
	{
	public:
		bool                                                       InbCharging;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9QKG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InChargeMode;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InChargeProgress;                                        // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InChargeBurstCount;                                      // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.OnOverloadStateChanged
	 */
	struct UCrosshair_CarWeapon_Float_C_OnOverloadStateChanged_Params
	{
	public:
		bool                                                       bEnter;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.OnCrosshairInNormalState
	 */
	struct UCrosshair_CarWeapon_Float_C_OnCrosshairInNormalState_Params
	{	};

	/**
	 * Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.OnAnimationFinished
	 */
	struct UCrosshair_CarWeapon_Float_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.OnUpdateAimState
	 */
	struct UCrosshair_CarWeapon_Float_C_OnUpdateAimState_Params
	{
	public:
		bool                                                       InbLockEnemy;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.ExecuteUbergraph_Crosshair_CarWeapon_Float
	 */
	struct UCrosshair_CarWeapon_Float_C_ExecuteUbergraph_Crosshair_CarWeapon_Float_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X1G6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
