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
// Function UI_MicroPhoneOperation_Item.UI_MicroPhoneOperation_Item_C.GetModuleName
struct UUI_MicroPhoneOperation_Item_C_GetModuleName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// 0x271 (0x271 - 0x0)
// Function UI_MicroPhoneOperation_Item.UI_MicroPhoneOperation_Item_C.SetOrder
struct UUI_MicroPhoneOperation_Item_C_SetOrder_Params
{
public:
	int32                                        OrderId;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_264C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x10(0x98)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_1;                    // 0xA8(0x98)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_2;                    // 0x140(0x98)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_3;                    // 0x1D8(0x98)(None)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UI_MicroPhoneOperation_Item.UI_MicroPhoneOperation_Item_C.PreConstruct
struct UUI_MicroPhoneOperation_Item_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function UI_MicroPhoneOperation_Item.UI_MicroPhoneOperation_Item_C.ExecuteUbergraph_UI_MicroPhoneOperation_Item
struct UUI_MicroPhoneOperation_Item_C_ExecuteUbergraph_UI_MicroPhoneOperation_Item_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


