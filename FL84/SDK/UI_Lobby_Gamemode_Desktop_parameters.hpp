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

// 0x70 (0x70 - 0x0)
// Function UI_Lobby_Gamemode_Desktop.UI_Lobby_Gamemode_Desktop_C.SetGameModeInfo
struct UUI_Lobby_Gamemode_Desktop_C_SetGameModeInfo_Params
{
public:
	class FString                                ModeName;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                GroupName;                                         // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                        Num;                                               // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x26(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21D4[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x28(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x40(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x58(0x18)(None)
};

// 0x120 (0x120 - 0x0)
// Function UI_Lobby_Gamemode_Desktop.UI_Lobby_Gamemode_Desktop_C.SetStateDesktop
struct UUI_Lobby_Gamemode_Desktop_C_SetStateDesktop_Params
{
public:
	enum class E_Type_State_Desktop              StateDesktop;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21D8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Temp_struct_Variable;                              // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_1;                            // 0x14(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Type_State_Desktop              Temp_byte_Variable;                                // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21D9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Temp_struct_Variable_2;                            // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_3;                            // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_4;                            // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Type_State_Desktop              Temp_byte_Variable_1;                              // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21DA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Temp_struct_Variable_5;                            // 0x5C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_6;                            // 0x6C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_7;                            // 0x7C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_8;                            // 0x8C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Type_State_Desktop              Temp_byte_Variable_2;                              // 0x9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21DB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          K2Node_Select_Default;                             // 0xA0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select_Default_1;                           // 0xB0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0xC0(0x28)(None)
	struct FLinearColor                          K2Node_Select_Default_2;                           // 0xE8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0xF8(0x28)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_Lobby_Gamemode_Desktop.UI_Lobby_Gamemode_Desktop_C.PreConstruct
struct UUI_Lobby_Gamemode_Desktop_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function UI_Lobby_Gamemode_Desktop.UI_Lobby_Gamemode_Desktop_C.ExecuteUbergraph_UI_Lobby_Gamemode_Desktop
struct UUI_Lobby_Gamemode_Desktop_C_ExecuteUbergraph_UI_Lobby_Gamemode_Desktop_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


