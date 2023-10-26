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

// 0xC (0xC - 0x0)
// DelegateFunction UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInputDeviceChanged_23398FFD420D186E9747759B1A805FC5
struct UUI_KeyMappingPrompt_C_OnInputDeviceChanged_23398FFD420D186E9747759B1A805FC5_Params
{
public:
	struct FInputDeviceProxy                     InputDeviceProxy;                                  // 0x0(0xC)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// DelegateFunction UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInputDeviceChanged_E9B9F5B2439FFE5A72C866B91A3B40BE
struct UUI_KeyMappingPrompt_C_OnInputDeviceChanged_E9B9F5B2439FFE5A72C866B91A3B40BE_Params
{
public:
	struct FInputDeviceProxy                     InputDeviceProxy;                                  // 0x0(0xC)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// DelegateFunction UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInputDeviceChanged_5A8CC4444F30EFCB33D1FA8FE5AFA493
struct UUI_KeyMappingPrompt_C_OnInputDeviceChanged_5A8CC4444F30EFCB33D1FA8FE5AFA493_Params
{
public:
	struct FInputDeviceProxy                     InputDeviceProxy;                                  // 0x0(0xC)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnChangeAdapterSlotWidgetParametersCopy
struct UUI_KeyMappingPrompt_C_OnChangeAdapterSlotWidgetParametersCopy_Params
{
public:
	TArray<struct FWidgetOverrideParam>          Params;                                            // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.GetModuleName
struct UUI_KeyMappingPrompt_C_GetModuleName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.SetEnableInputSettingHide
struct UUI_KeyMappingPrompt_C_SetEnableInputSettingHide_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.SetOperationTypeImpl
struct UUI_KeyMappingPrompt_C_SetOperationTypeImpl_Params
{
public:
	enum class E_InputOperationType              InType;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_InputOperationType              Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.RefreshEmptyDisplay
struct UUI_KeyMappingPrompt_C_RefreshEmptyDisplay_Params
{
public:
	bool                                         bInEmpty;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2941[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                               K2Node_MakeStruct_Margin_1;                        // 0x14(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2942[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHorizontalBoxSlot*                    CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;      // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.SetEnableEmptyDispaly
struct UUI_KeyMappingPrompt_C_SetEnableEmptyDispaly_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x181 (0x181 - 0x0)
// Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.SetStyle
struct UUI_KeyMappingPrompt_C_SetStyle_Params
{
public:
	enum class E_KeyPromptStyle                  Style;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2945[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               Temp_struct_Variable;                              // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_KeyPromptStyle                  Temp_byte_Variable;                                // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2946[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               Temp_struct_Variable_1;                            // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                               Temp_struct_Variable_2;                            // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                               Temp_struct_Variable_3;                            // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_KeyPromptStyle                  Temp_byte_Variable_1;                              // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2948[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelWidget*                          Temp_object_Variable;                              // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_KeyPromptStyle                  Temp_byte_Variable_2;                              // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2949[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               Temp_object_Variable_1;                            // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_KeyPromptStyle                  Temp_byte_Variable_3;                              // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_294A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               Temp_object_Variable_2;                            // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_KeyPromptStyle                  Temp_byte_Variable_4;                              // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_5;                              // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_6;                              // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_7;                              // 0x7B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_8;                              // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_9;                              // 0x7D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_294B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x80(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                               K2Node_MakeStruct_Margin_1;                        // 0x90(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_294C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               K2Node_MakeStruct_Margin_2;                        // 0xA4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_294D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBoxSlot*                      CallFunc_SlotAsVerticalBoxSlot_ReturnValue;        // 0xB8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_MakeStruct_Margin_3;                        // 0xC0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UHorizontalBoxSlot*                    CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;      // 0xD0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_Select_Default_1;                           // 0xD8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                               Temp_struct_Variable_4;                            // 0xE8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                               Temp_struct_Variable_5;                            // 0xF8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_KeyPromptStyle                  Temp_byte_Variable_10;                             // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_294E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelWidget*                          K2Node_Select_Default_2;                           // 0x110(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               K2Node_Select_Default_3;                           // 0x118(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWidget*                               K2Node_Select_Default_4;                           // 0x128(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               K2Node_Select_Default_5;                           // 0x130(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x138(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue_1;                   // 0x140(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      K2Node_DynamicCast_AsVertical_Box_Slot;            // 0x148(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_294F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBoxSlot*                      K2Node_DynamicCast_AsVertical_Box_Slot_1;          // 0x158(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2950[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHorizontalBoxSlot*                    K2Node_DynamicCast_AsHorizontal_Box_Slot;          // 0x168(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2951[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHorizontalBoxSlot*                    K2Node_DynamicCast_AsHorizontal_Box_Slot_1;        // 0x178(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnChangeAdapterSlotWidgetGameplayTag
struct UUI_KeyMappingPrompt_C_OnChangeAdapterSlotWidgetGameplayTag_Params
{
public:
	struct FGameplayTag                          InGameplayTag;                                     // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        MetaData;                                          // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnChangeAdapterSlotWidgetParameters
struct UUI_KeyMappingPrompt_C_OnChangeAdapterSlotWidgetParameters_Params
{
public:
	TArray<struct FWidgetOverrideParam>          Params;                                            // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.PreConstruct
struct UUI_KeyMappingPrompt_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x33 (0x33 - 0x0)
// Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.ExecuteUbergraph_UI_KeyMappingPrompt
struct UUI_KeyMappingPrompt_C_ExecuteUbergraph_UI_KeyMappingPrompt_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2952[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          K2Node_Event_InGameplayTag;                        // 0x8(0x8)(ConstParm, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        K2Node_Event_MetaData;                             // 0x10(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	TArray<struct FWidgetOverrideParam>          K2Node_Event_Params;                               // 0x20(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


