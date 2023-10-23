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
// Function UI_ChatPanel.UI_ChatPanel_C.GetModuleName
struct UUI_ChatPanel_C_GetModuleName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// 0xC0 (0xC0 - 0x0)
// Function UI_ChatPanel.UI_ChatPanel_C.SetMsgText
struct UUI_ChatPanel_C_SetMsgText_Params
{
public:
	uint8                                        ChatType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_271A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PlayerName;                                        // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Msg;                                               // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                OutputText;                                        // 0x28(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_271B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_7;              // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

}
}


