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

// 0x1 (0x1 - 0x0)
// Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.SetSpeedUpBuff
struct UBP_HUD_ReloadBase_C_SetSpeedUpBuff_Params
{
public:
	bool                                         bHaveBuff;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.StopReloadAnimation
struct UBP_HUD_ReloadBase_C_StopReloadAnimation_Params
{
public:
	class UWidgetAnimation*                      CallFunc_GetReloadAnimation_OutReloadAnimation;    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.GetReloadAnimation
struct UBP_HUD_ReloadBase_C_GetReloadAnimation_Params
{
public:
	class UWidgetAnimation*                      OutReloadAnimation;                                // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.PlayReloadAnimation
struct UBP_HUD_ReloadBase_C_PlayReloadAnimation_Params
{
public:
	class UWidgetAnimation*                      CallFunc_GetReloadAnimation_OutReloadAnimation;    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23AE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnActiveCrosshair
struct UBP_HUD_ReloadBase_C_OnActiveCrosshair_Params
{
public:
	class UUserWidget*                           InActiveCrosshair;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnChangeOverloadState
struct UBP_HUD_ReloadBase_C_OnChangeOverloadState_Params
{
public:
	bool                                         InbQuitState;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x14 (0x14 - 0x0)
// Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnReloadFinish
struct UBP_HUD_ReloadBase_C_OnReloadFinish_Params
{
public:
	bool                                         InbReloadSuccess;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23AF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InReloadAmmo;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InReservedAmmo;                                    // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InMaxAmmo;                                         // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InAmmoProgress;                                    // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD (0xD - 0x0)
// Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnUpdateAmmo
struct UBP_HUD_ReloadBase_C_OnUpdateAmmo_Params
{
public:
	int32                                        InReservedAmmo;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InMaxAmmo;                                         // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InAmmoProgress;                                    // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InbFirst;                                          // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnUpdateCharge
struct UBP_HUD_ReloadBase_C_OnUpdateCharge_Params
{
public:
	bool                                         InbCharging;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23B1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InChargeMode;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InChargeProgress;                                  // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnUpdateCoolDown
struct UBP_HUD_ReloadBase_C_OnUpdateCoolDown_Params
{
public:
	float                                        InReloadProgress;                                  // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnUpdateOverload
struct UBP_HUD_ReloadBase_C_OnUpdateOverload_Params
{
public:
	float                                        InOverloadProgress;                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InOverloadWarningRate;                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InbOverloadState;                                  // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnUpdateReload
struct UBP_HUD_ReloadBase_C_OnUpdateReload_Params
{
public:
	float                                        InReloadProgress;                                  // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InReloadAmmo;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InMaxAmmo;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnChangeReloadState
struct UBP_HUD_ReloadBase_C_OnChangeReloadState_Params
{
public:
	bool                                         InbQuitState;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bReloadSpeedup;                                    // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x58 (0x58 - 0x0)
// Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.ExecuteUbergraph_BP_HUD_ReloadBase
struct UBP_HUD_ReloadBase_C_ExecuteUbergraph_BP_HUD_ReloadBase_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_InbQuitState;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bReloadSpeedup;                       // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23BA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           K2Node_Event_InActiveCrosshair;                    // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_InbQuitState_1;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_InbReloadSuccess;                     // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23BB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Event_InReloadAmmo_1;                       // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_InReservedAmmo_1;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_InMaxAmmo_2;                          // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_InAmmoProgress_1;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_InReservedAmmo;                       // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_InMaxAmmo_1;                          // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_InAmmoProgress;                       // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_InbFirst;                             // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_InbCharging;                          // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23BC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Event_InChargeMode;                         // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_InChargeProgress;                     // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_InReloadProgress_1;                   // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_InOverloadProgress;                   // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_InOverloadWarningRate;                // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_InbOverloadState;                     // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_InReloadProgress;                     // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_InReloadAmmo;                         // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_InMaxAmmo;                            // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


