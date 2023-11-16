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
	 * Function Crosshair_CarWeapon_Sroll05_Missile.Crosshair_CarWeapon_Sroll05_Missile_C.ChangeAmmoCount
	 */
	struct UCrosshair_CarWeapon_Sroll05_Missile_C_ChangeAmmoCount_Params
	{
	public:
		int32_t                                                    AmmoCount;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Crosshair_CarWeapon_Sroll05_Missile.Crosshair_CarWeapon_Sroll05_Missile_C.OnAmmoChanged
	 */
	struct UCrosshair_CarWeapon_Sroll05_Missile_C_OnAmmoChanged_Params
	{
	public:
		int32_t                                                    InReservedAmmo;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InMaxAmmo;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InbFirst;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crosshair_CarWeapon_Sroll05_Missile.Crosshair_CarWeapon_Sroll05_Missile_C.OnUpdateVehicleRotationPitch
	 */
	struct UCrosshair_CarWeapon_Sroll05_Missile_C_OnUpdateVehicleRotationPitch_Params
	{
	public:
		float                                                      InPitch;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Crosshair_CarWeapon_Sroll05_Missile.Crosshair_CarWeapon_Sroll05_Missile_C.OnReloadFinished
	 */
	struct UCrosshair_CarWeapon_Sroll05_Missile_C_OnReloadFinished_Params
	{
	public:
		bool                                                       InbReloadSuccess;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZR0E[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InReloadAmmo;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InReservedAmmo;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InMaxAmmo;                                               // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Crosshair_CarWeapon_Sroll05_Missile.Crosshair_CarWeapon_Sroll05_Missile_C.OnUpdateReloadProgress
	 */
	struct UCrosshair_CarWeapon_Sroll05_Missile_C_OnUpdateReloadProgress_Params
	{
	public:
		float                                                      InReloadProgress;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InReservedAmmo;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InMaxAmmo;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Crosshair_CarWeapon_Sroll05_Missile.Crosshair_CarWeapon_Sroll05_Missile_C.ExecuteUbergraph_Crosshair_CarWeapon_Sroll05_Missile
	 */
	struct UCrosshair_CarWeapon_Sroll05_Missile_C_ExecuteUbergraph_Crosshair_CarWeapon_Sroll05_Missile_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
