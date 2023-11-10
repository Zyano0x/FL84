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
	 * Function Crosshair_CarWeapon_Trans_MachineGun.Crosshair_CarWeapon_Trans_MachineGun_C.SetWidgetResources
	 */
	struct UCrosshair_CarWeapon_Trans_MachineGun_C_SetWidgetResources_Params
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
	 * Function Crosshair_CarWeapon_Trans_MachineGun.Crosshair_CarWeapon_Trans_MachineGun_C.Construct
	 */
	struct UCrosshair_CarWeapon_Trans_MachineGun_C_Construct_Params
	{	};

	/**
	 * Function Crosshair_CarWeapon_Trans_MachineGun.Crosshair_CarWeapon_Trans_MachineGun_C.OnTransformerWeaponChanged
	 */
	struct UCrosshair_CarWeapon_Trans_MachineGun_C_OnTransformerWeaponChanged_Params
	{
	public:
		ETransformerType                                           InType;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Crosshair_CarWeapon_Trans_MachineGun.Crosshair_CarWeapon_Trans_MachineGun_C.ExecuteUbergraph_Crosshair_CarWeapon_Trans_MachineGun
	 */
	struct UCrosshair_CarWeapon_Trans_MachineGun_C_ExecuteUbergraph_Crosshair_CarWeapon_Trans_MachineGun_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DWOH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
