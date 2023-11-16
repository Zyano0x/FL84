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
	 * Function Crosshair_CarWeapon_IronGun_New.Crosshair_CarWeapon_IronGun_New_C.ChangeProgressBarColor
	 */
	struct UCrosshair_CarWeapon_IronGun_New_C_ChangeProgressBarColor_Params
	{
	public:
		class UProgressBar*                                        InProgressBar;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        InBackgroundColor;                                       // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        InFillImageColor;                                        // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Crosshair_CarWeapon_IronGun_New.Crosshair_CarWeapon_IronGun_New_C.SetPrograssPrecent
	 */
	struct UCrosshair_CarWeapon_IronGun_New_C_SetPrograssPrecent_Params
	{
	public:
		float                                                      Percent;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UProgressBar*                                        InProgressBar;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Crosshair_CarWeapon_IronGun_New.Crosshair_CarWeapon_IronGun_New_C.GetChargeWidget
	 */
	struct UCrosshair_CarWeapon_IronGun_New_C_GetChargeWidget_Params
	{
	public:
		class UUserWidget*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Crosshair_CarWeapon_IronGun_New.Crosshair_CarWeapon_IronGun_New_C.SetWidgetResources
	 */
	struct UCrosshair_CarWeapon_IronGun_New_C_SetWidgetResources_Params
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
	 * Function Crosshair_CarWeapon_IronGun_New.Crosshair_CarWeapon_IronGun_New_C.OnUpdateChargeProgress
	 */
	struct UCrosshair_CarWeapon_IronGun_New_C_OnUpdateChargeProgress_Params
	{
	public:
		bool                                                       InbCharging;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LCB5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InChargeMode;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InChargeProgress;                                        // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InChargeBurstCount;                                      // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Crosshair_CarWeapon_IronGun_New.Crosshair_CarWeapon_IronGun_New_C.OnUpdateAimState
	 */
	struct UCrosshair_CarWeapon_IronGun_New_C_OnUpdateAimState_Params
	{
	public:
		bool                                                       InbLockEnemy;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crosshair_CarWeapon_IronGun_New.Crosshair_CarWeapon_IronGun_New_C.OnPlayWeaponSpecialFire
	 */
	struct UCrosshair_CarWeapon_IronGun_New_C_OnPlayWeaponSpecialFire_Params
	{
	public:
		ECrossHairSpecialFireState                                 InState;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZT8R[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      PlayRate;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Crosshair_CarWeapon_IronGun_New.Crosshair_CarWeapon_IronGun_New_C.OnCrosshairInNormalState
	 */
	struct UCrosshair_CarWeapon_IronGun_New_C_OnCrosshairInNormalState_Params
	{	};

	/**
	 * Function Crosshair_CarWeapon_IronGun_New.Crosshair_CarWeapon_IronGun_New_C.OnShowVehicleWeaponCrossHair
	 */
	struct UCrosshair_CarWeapon_IronGun_New_C_OnShowVehicleWeaponCrossHair_Params
	{	};

	/**
	 * Function Crosshair_CarWeapon_IronGun_New.Crosshair_CarWeapon_IronGun_New_C.ExecuteUbergraph_Crosshair_CarWeapon_IronGun_New
	 */
	struct UCrosshair_CarWeapon_IronGun_New_C_ExecuteUbergraph_Crosshair_CarWeapon_IronGun_New_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
