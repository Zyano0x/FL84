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
// Function UI_KeyPrompt.UI_KeyPrompt_C.SetActionName
struct UUI_KeyPrompt_C_SetActionName_Params
{
public:
	class FString                                InActionName;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function UI_KeyPrompt.UI_KeyPrompt_C.RefreshKeyPromptUI
struct UUI_KeyPrompt_C_RefreshKeyPromptUI_Params
{
public:
	TArray<struct FWidgetOverrideParam>          CallFunc_BuildOverrideParams_Array;                // 0x0(0x10)(ReferenceParm, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_GetAdapteeWidget_ReturnValue;             // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_KeyMappingPrompt_C*                K2Node_DynamicCast_AsUI_Key_Mapping_Prompt;        // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x41 (0x41 - 0x0)
// Function UI_KeyPrompt.UI_KeyPrompt_C.GetSplitActionName
struct UUI_KeyPrompt_C_GetSplitActionName_Params
{
public:
	class FString                                SourceString;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                NewParam;                                          // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Split_LeftS;                              // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Split_RightS;                             // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Split_ReturnValue;                        // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x290 (0x290 - 0x0)
// Function UI_KeyPrompt.UI_KeyPrompt_C.BuildOverrideActionDescParam
struct UUI_KeyPrompt_C_BuildOverrideActionDescParam_Params
{
public:
	int32                                        LocTextID;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1031[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWidgetOverrideParam                  WidgetOverrideParam;                               // 0x10(0x140)(Parm, OutParm)
	struct FWidgetOverrideParam                  K2Node_MakeStruct_WidgetOverrideParam;             // 0x150(0x140)(None)
};

// 0x4B0 (0x4B0 - 0x0)
// Function UI_KeyPrompt.UI_KeyPrompt_C.BuildOverrideParams
struct UUI_KeyPrompt_C_BuildOverrideParams_Params
{
public:
	TArray<struct FWidgetOverrideParam>          Array;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, HasGetValueTypeHash)
	class USolarTables_TablesReader*             CallFunc__A_GetExcelTableReader_TablesReader;      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_103F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWidgetOverrideParam                  CallFunc_BuildOverrideActionDescParam_WidgetOverrideParam; // 0x20(0x140)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1040[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetSplitActionName_NewParam;              // 0x168(0x10)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_1041[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWidgetOverrideParam                  K2Node_MakeStruct_WidgetOverrideParam;             // 0x180(0x140)(None)
	bool                                         CallFunc_TryGetRowData_HasKey;                     // 0x2C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1042[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSolarTablesData_InputMapping         CallFunc_TryGetRowData_ReturnValue;                // 0x2C8(0x98)(ConstParm)
	struct FWidgetOverrideParam                  CallFunc_BuildOverrideActionDescParam_WidgetOverrideParam_1; // 0x360(0x140)(None)
	TArray<struct FWidgetOverrideParam>          K2Node_MakeArray_Array;                            // 0x4A0(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function UI_KeyPrompt.UI_KeyPrompt_C.SetOperationType
struct UUI_KeyPrompt_C_SetOperationType_Params
{
public:
	enum class E_InputOperationType              Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1047[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           CallFunc_GetAdapteeWidget_ReturnValue;             // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_KeyMappingPrompt_C*                K2Node_DynamicCast_AsUI_Key_Mapping_Prompt;        // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UI_KeyPrompt.UI_KeyPrompt_C.PreConstruct
struct UUI_KeyPrompt_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function UI_KeyPrompt.UI_KeyPrompt_C.ExecuteUbergraph_UI_KeyPrompt
struct UUI_KeyPrompt_C_ExecuteUbergraph_UI_KeyPrompt_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


