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
// Function UI_Lobby_Banner_Slot2.UI_Lobby_Banner_Slot2_C.GetModuleName
struct UUI_Lobby_Banner_Slot2_C_GetModuleName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_Lobby_Banner_Slot2.UI_Lobby_Banner_Slot2_C.BP_OnItemExpansionChanged
struct UUI_Lobby_Banner_Slot2_C_BP_OnItemExpansionChanged_Params
{
public:
	bool                                         bIsExpanded;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UI_Lobby_Banner_Slot2.UI_Lobby_Banner_Slot2_C.BP_OnItemSelectionChanged
struct UUI_Lobby_Banner_Slot2_C_BP_OnItemSelectionChanged_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UI_Lobby_Banner_Slot2.UI_Lobby_Banner_Slot2_C.OnListItemObjectSet
struct UUI_Lobby_Banner_Slot2_C_OnListItemObjectSet_Params
{
public:
	class UObject*                               ListItemObject;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function UI_Lobby_Banner_Slot2.UI_Lobby_Banner_Slot2_C.ExecuteUbergraph_UI_Lobby_Banner_Slot2
struct UUI_Lobby_Banner_Slot2_C_ExecuteUbergraph_UI_Lobby_Banner_Slot2_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23B2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Temp_struct_Variable;                              // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_1;                            // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsExpanded;                          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bIsSelected;                          // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23B3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_Event_ListItemObject;                       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select_Default;                             // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


