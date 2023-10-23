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
// Function HUD_OverLoad.HUD_Overload_C.PlayOverloadAnima
struct UHUD_Overload_C_PlayOverloadAnima_Params
{
public:
	bool                                         InOverload;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1161[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1162[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function HUD_OverLoad.HUD_Overload_C.SetCoolDownProgress
struct UHUD_Overload_C_SetCoolDownProgress_Params
{
public:
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_K2_GetVectorParameterValue_ReturnValue;   // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_R;                             // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_G;                             // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_B;                             // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_A;                             // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function HUD_OverLoad.HUD_Overload_C.SetOverLoadImageSize
struct UHUD_Overload_C_SetOverLoadImageSize_Params
{
public:
	float                                        InProgress;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1164[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_K2_GetVectorParameterValue_ReturnValue;   // 0x14(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1165[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakColor_R;                             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_G;                             // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_B;                             // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_A;                             // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetLinearColorValue_ReturnValue;          // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function HUD_OverLoad.HUD_Overload_C.OnChangeReloadState
struct UHUD_Overload_C_OnChangeReloadState_Params
{
public:
	bool                                         InbQuitState;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bReloadSpeedup;                                    // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x14 (0x14 - 0x0)
// Function HUD_OverLoad.HUD_Overload_C.OnReloadFinish
struct UHUD_Overload_C_OnReloadFinish_Params
{
public:
	bool                                         InbReloadSuccess;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1166[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InReloadAmmo;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InReservedAmmo;                                    // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InMaxAmmo;                                         // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InAmmoProgress;                                    // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD (0xD - 0x0)
// Function HUD_OverLoad.HUD_Overload_C.OnUpdateAmmo
struct UHUD_Overload_C_OnUpdateAmmo_Params
{
public:
	int32                                        InReservedAmmo;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InMaxAmmo;                                         // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InAmmoProgress;                                    // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InbFirst;                                          // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function HUD_OverLoad.HUD_Overload_C.OnUpdateCharge
struct UHUD_Overload_C_OnUpdateCharge_Params
{
public:
	bool                                         InbCharging;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1168[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InChargeMode;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InChargeProgress;                                  // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function HUD_OverLoad.HUD_Overload_C.OnUpdateCoolDown
struct UHUD_Overload_C_OnUpdateCoolDown_Params
{
public:
	float                                        InReloadProgress;                                  // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function HUD_OverLoad.HUD_Overload_C.OnUpdateReload
struct UHUD_Overload_C_OnUpdateReload_Params
{
public:
	float                                        InReloadProgress;                                  // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InReloadAmmo;                                      // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InMaxAmmo;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function HUD_OverLoad.HUD_Overload_C.PreConstruct
struct UHUD_Overload_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function HUD_OverLoad.HUD_Overload_C.OnUpdateOverload
struct UHUD_Overload_C_OnUpdateOverload_Params
{
public:
	float                                        InOverloadProgress;                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InOverloadWarningRate;                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InbOverloadState;                                  // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function HUD_OverLoad.HUD_Overload_C.OnChangeOverloadState
struct UHUD_Overload_C_OnChangeOverloadState_Params
{
public:
	bool                                         InbQuitState;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function HUD_OverLoad.HUD_Overload_C.OnActiveCrosshair
struct UHUD_Overload_C_OnActiveCrosshair_Params
{
public:
	class UUserWidget*                           InActiveCrosshair;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD8 (0xD8 - 0x0)
// Function HUD_OverLoad.HUD_Overload_C.ExecuteUbergraph_HUD_Overload
struct UHUD_Overload_C_ExecuteUbergraph_HUD_Overload_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1169[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Temp_class_Variable;                               // 0x8(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Temp_struct_Variable;                              // 0x10(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable_1;                             // 0x18(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Temp_struct_Variable_1;                            // 0x20(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable_2;                             // 0x28(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Temp_struct_Variable_2;                            // 0x30(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable_3;                             // 0x38(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_InbQuitState_1;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bReloadSpeedup;                       // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_InbReloadSuccess;                     // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_116A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Event_InReloadAmmo_1;                       // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_InReservedAmmo_1;                     // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_InMaxAmmo_2;                          // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_InAmmoProgress_1;                     // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_InReservedAmmo;                       // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_InMaxAmmo_1;                          // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_InAmmoProgress;                       // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_InbFirst;                             // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_InbCharging;                          // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_116B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Event_InChargeMode;                         // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_InChargeProgress;                     // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_InReloadProgress_1;                   // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_InReloadProgress;                     // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_InReloadAmmo;                         // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_InMaxAmmo;                            // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_116C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_InOverloadProgress;                   // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_InOverloadWarningRate;                // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_InbOverloadState;                     // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_InbQuitState;                         // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  CallFunc_GetVisibility_ReturnValue;                // 0x8A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x8B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_116D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           K2Node_Event_InActiveCrosshair;                    // 0x98(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVehicleWeaponCrossHairWidget*         K2Node_DynamicCast_AsVehicle_Weapon_Cross_Hair_Widget; // 0xA0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_116E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_Map_Find_Value;                           // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_116F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Temp_struct_Variable_3;                            // 0xC4(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1170[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


