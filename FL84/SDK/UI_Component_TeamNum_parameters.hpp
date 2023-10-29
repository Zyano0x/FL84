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
// Function UI_Component_TeamNum.UI_Component_TeamNum_C.GetModuleName
struct UUI_Component_TeamNum_C_GetModuleName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function UI_Component_TeamNum.UI_Component_TeamNum_C.Set Team Num
struct UUI_Component_TeamNum_C_Set_Team_Num_Params
{
public:
	enum class E_Type_TeamNum                    Index;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Type_TeamNum                    Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D83[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable_1;                            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable_2;                            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_Select_Default;                             // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function UI_Component_TeamNum.UI_Component_TeamNum_C.SetSelected
struct UUI_Component_TeamNum_C_SetSelected_Params
{
public:
	bool                                         Selected;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_Type_TeamNum                    Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Type_TeamNum                    Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D8A[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_Select_Default;                             // 0x8(0x28)(None)
	struct FSlateColor                           K2Node_Select_Default_1;                           // 0x30(0x28)(None)
};

// 0x10 (0x10 - 0x0)
// Function UI_Component_TeamNum.UI_Component_TeamNum_C.SetColor
struct UUI_Component_TeamNum_C_SetColor_Params
{
public:
	struct FLinearColor                          InColorAndOpacity;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Component_TeamNum.UI_Component_TeamNum_C.SetType
struct UUI_Component_TeamNum_C_SetType_Params
{
public:
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_Component_TeamNum.UI_Component_TeamNum_C.PreConstruct
struct UUI_Component_TeamNum_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function UI_Component_TeamNum.UI_Component_TeamNum_C.ExecuteUbergraph_UI_Component_TeamNum
struct UUI_Component_TeamNum_C_ExecuteUbergraph_UI_Component_TeamNum_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


