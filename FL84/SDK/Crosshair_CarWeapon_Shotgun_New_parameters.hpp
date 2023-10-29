#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0xB (0xB - 0x0)
// Function Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C.ChangeAmmoCount
struct UCrosshair_CarWeapon_Shotgun_New_C_ChangeAmmoCount_Params
{
public:
	int32                                        ReloadCount;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AmmoCount;                                         // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C.SetWidgetResources
struct UCrosshair_CarWeapon_Shotgun_New_C_SetWidgetResources_Params
{
public:
	class UCanvasPanel*                          InSecondReticlePanel;                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                InReticleDirectionImage;                           // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                InRangedImage;                                     // 0x10(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USizeBox*                              InAssistLockSizeBox;                               // 0x18(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          InChangeNewAssistLockPawnPanel;                    // 0x20(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          InEnterLockPawnPanel;                              // 0x28(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          InCanvas_Dynamic;                                  // 0x30(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C.OnAmmoChanged
struct UCrosshair_CarWeapon_Shotgun_New_C_OnAmmoChanged_Params
{
public:
	int32                                        InReservedAmmo;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InMaxAmmo;                                         // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InbFirst;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C.OnReloadStarted
struct UCrosshair_CarWeapon_Shotgun_New_C_OnReloadStarted_Params
{
public:
	float                                        InReloadTime;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InReservedAmmo;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C.OnReloadFinished
struct UCrosshair_CarWeapon_Shotgun_New_C_OnReloadFinished_Params
{
public:
	bool                                         InbReloadSuccess;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2276[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InReloadAmmo;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InReservedAmmo;                                    // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InMaxAmmo;                                         // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C.ExecuteUbergraph_Crosshair_CarWeapon_Shotgun_New
struct UCrosshair_CarWeapon_Shotgun_New_C_ExecuteUbergraph_Crosshair_CarWeapon_Shotgun_New_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_InReservedAmmo_2;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_InMaxAmmo_1;                          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_InbFirst;                             // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2277[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_InReloadTime;                         // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_InReservedAmmo_1;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_InbReloadSuccess;                     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2278[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Event_InReloadAmmo;                         // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_InReservedAmmo;                       // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_InMaxAmmo;                            // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetEndTime_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


