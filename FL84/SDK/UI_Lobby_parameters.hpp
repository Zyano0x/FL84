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

// 0x10 (0x10 - 0x0)
// Function UI_Lobby.UI_Lobby_C.GetModuleName
struct UUI_Lobby_C_GetModuleName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function UI_Lobby.UI_Lobby_C.SetLevel
struct UUI_Lobby_C_SetLevel_Params
{
public:
	int32                                        Level;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2725[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable;                               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_1;                             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2726[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default;                             // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x1C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        Temp_float_Variable_2;                             // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_3;                             // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2727[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default_1;                           // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_4;                             // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2728[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default_2;                           // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_5;                             // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2729[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default_3;                           // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_6;                             // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_SlotAsVerticalBoxSlot_ReturnValue;        // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default_4;                           // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x64(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_272A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UI_Lobby.UI_Lobby_C.SetClanLock
struct UUI_Lobby_C_SetClanLock_Params
{
public:
	int32                                        ClanLock;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function UI_Lobby.UI_Lobby_C.AddVideoPanel
struct UUI_Lobby_C_AddVideoPanel_Params
{
public:
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FAnchors                              K2Node_MakeStruct_Anchors;                         // 0x10(0x10)(NoDestructor)
	class UUI_Lobby_Video_Hunt_C*                CallFunc_Create_ReturnValue;                       // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function UI_Lobby.UI_Lobby_C.GetAnimTargetLocation
struct UUI_Lobby_C_GetAnimTargetLocation_Params
{
public:
	class UWidget*                               TargetObject;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               UserObject;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             TargetLocation;                                    // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             CallFunc_GetPaintSpaceGeometry_ReturnValue;        // 0x18(0x38)(ConstParm, IsPlainOldData, NoDestructor)
	struct FGeometry                             CallFunc_GetPaintSpaceGeometry_ReturnValue_1;      // 0x50(0x38)(ConstParm, IsPlainOldData, NoDestructor)
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x88(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetPosition_ReturnValue;                  // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_LocalToAbsolute_ReturnValue;              // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_AbsoluteToLocal_ReturnValue;              // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_Lobby.UI_Lobby_C.PreConstruct
struct UUI_Lobby_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function UI_Lobby.UI_Lobby_C.ExecuteUbergraph_UI_Lobby
struct UUI_Lobby_C_ExecuteUbergraph_UI_Lobby_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_272F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2730[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


