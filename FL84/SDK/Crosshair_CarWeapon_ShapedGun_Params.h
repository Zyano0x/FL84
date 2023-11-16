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
	 * Function Crosshair_CarWeapon_ShapedGun.Crosshair_CarWeapon_ShapedGun_C.SetPrograssPrecent
	 */
	struct UCrosshair_CarWeapon_ShapedGun_C_SetPrograssPrecent_Params
	{
	public:
		float                                                      Percent;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UProgressBar*                                        InProgressBar;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Crosshair_CarWeapon_ShapedGun.Crosshair_CarWeapon_ShapedGun_C.GetChargeWidget
	 */
	struct UCrosshair_CarWeapon_ShapedGun_C_GetChargeWidget_Params
	{
	public:
		class UUserWidget*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Crosshair_CarWeapon_ShapedGun.Crosshair_CarWeapon_ShapedGun_C.SetWidgetResources
	 */
	struct UCrosshair_CarWeapon_ShapedGun_C_SetWidgetResources_Params
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
	 * Function Crosshair_CarWeapon_ShapedGun.Crosshair_CarWeapon_ShapedGun_C.OnUpdateChargeProgress
	 */
	struct UCrosshair_CarWeapon_ShapedGun_C_OnUpdateChargeProgress_Params
	{
	public:
		bool                                                       InbCharging;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6E10[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InChargeMode;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InChargeProgress;                                        // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InChargeBurstCount;                                      // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Crosshair_CarWeapon_ShapedGun.Crosshair_CarWeapon_ShapedGun_C.ExecuteUbergraph_Crosshair_CarWeapon_ShapedGun
	 */
	struct UCrosshair_CarWeapon_ShapedGun_C_ExecuteUbergraph_Crosshair_CarWeapon_ShapedGun_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
