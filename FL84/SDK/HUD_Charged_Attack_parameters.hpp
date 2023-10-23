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

// 0x20 (0x20 - 0x0)
// Function HUD_Charged_Attack.HUD_Charged_Attack_C.SetPercent
struct UHUD_Charged_Attack_C_SetPercent_Params
{
public:
	float                                        InPercent;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InChargeMode;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InbFirstEnter;                                     // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2266[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function HUD_Charged_Attack.HUD_Charged_Attack_C.OnActiveCrosshair
struct UHUD_Charged_Attack_C_OnActiveCrosshair_Params
{
public:
	class UUserWidget*                           InActiveCrosshair;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function HUD_Charged_Attack.HUD_Charged_Attack_C.OnChangeOverloadState
struct UHUD_Charged_Attack_C_OnChangeOverloadState_Params
{
public:
	bool                                         InbQuitState;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function HUD_Charged_Attack.HUD_Charged_Attack_C.OnChangeReloadState
struct UHUD_Charged_Attack_C_OnChangeReloadState_Params
{
public:
	bool                                         InbQuitState;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bReloadSpeedup;                                    // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x14 (0x14 - 0x0)
// Function HUD_Charged_Attack.HUD_Charged_Attack_C.OnReloadFinish
struct UHUD_Charged_Attack_C_OnReloadFinish_Params
{
public:
	bool                                         InbReloadSuccess;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2267[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InReloadAmmo;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InReservedAmmo;                                    // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InMaxAmmo;                                         // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InAmmoProgress;                                    // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD (0xD - 0x0)
// Function HUD_Charged_Attack.HUD_Charged_Attack_C.OnUpdateAmmo
struct UHUD_Charged_Attack_C_OnUpdateAmmo_Params
{
public:
	int32                                        InReservedAmmo;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InMaxAmmo;                                         // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InAmmoProgress;                                    // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InbFirst;                                          // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function HUD_Charged_Attack.HUD_Charged_Attack_C.OnUpdateCoolDown
struct UHUD_Charged_Attack_C_OnUpdateCoolDown_Params
{
public:
	float                                        InReloadProgress;                                  // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function HUD_Charged_Attack.HUD_Charged_Attack_C.OnUpdateOverload
struct UHUD_Charged_Attack_C_OnUpdateOverload_Params
{
public:
	float                                        InOverloadProgress;                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InOverloadWarningRate;                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InbOverloadState;                                  // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function HUD_Charged_Attack.HUD_Charged_Attack_C.OnUpdateReload
struct UHUD_Charged_Attack_C_OnUpdateReload_Params
{
public:
	float                                        InReloadProgress;                                  // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InReloadAmmo;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InMaxAmmo;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function HUD_Charged_Attack.HUD_Charged_Attack_C.OnUpdateCharge
struct UHUD_Charged_Attack_C_OnUpdateCharge_Params
{
public:
	bool                                         InbCharging;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_226C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InChargeMode;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InChargeProgress;                                  // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function HUD_Charged_Attack.HUD_Charged_Attack_C.ExecuteUbergraph_HUD_Charged_Attack
struct UHUD_Charged_Attack_C_ExecuteUbergraph_HUD_Charged_Attack_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_InbReloadSuccess;                     // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_226D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Event_InReloadAmmo_1;                       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_InReservedAmmo_1;                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_InMaxAmmo_2;                          // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_InAmmoProgress_1;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_InReservedAmmo;                       // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_InMaxAmmo_1;                          // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_InAmmoProgress;                       // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_InbFirst;                             // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_226E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_InReloadProgress_1;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_InOverloadProgress;                   // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_InOverloadWarningRate;                // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_InbOverloadState;                     // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_226F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_InReloadProgress;                     // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_InReloadAmmo;                         // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_InMaxAmmo;                            // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_InbCharging;                          // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2270[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Event_InChargeMode;                         // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_InChargeProgress;                     // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue_1;                  // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x53(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_InbQuitState;                         // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bReloadSpeedup;                       // 0x55(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_InbQuitState_1;                       // 0x56(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2271[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           K2Node_Event_InActiveCrosshair;                    // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


