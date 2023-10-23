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

// 0x1 (0x1 - 0x0)
// Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetIsKilled
struct UUI_Component_PlayerName_C_SetIsKilled_Params
{
public:
	bool                                         IsKilled;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetIsCheater
struct UUI_Component_PlayerName_C_SetIsCheater_Params
{
public:
	bool                                         bCheater;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetVipStyle
struct UUI_Component_PlayerName_C_SetVipStyle_Params
{
public:
	enum class E_Type_PlayerName_Vip_Color       VIP_Type;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x13 (0x13 - 0x0)
// Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetPlayerNameAndStyle
struct UUI_Component_PlayerName_C_SetPlayerNameAndStyle_Params
{
public:
	class FString                                NickName;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         bCheat;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_Type_PlayerName_Vip_Color       VIP_Type;                                          // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bKilled;                                           // 0x12(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetPlayerName
struct UUI_Component_PlayerName_C_SetPlayerName_Params
{
public:
	class FString                                NickName;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x10(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetDefaultStyle
struct UUI_Component_PlayerName_C_SetDefaultStyle_Params
{
public:
	bool                                         bSpecialSelf;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x91 (0x91 - 0x0)
// Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetNameStyle
struct UUI_Component_PlayerName_C_SetNameStyle_Params
{
public:
	bool                                         bCheater;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_Type_PlayerName_Vip_Color       VIP_State;                                         // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bKilled;                                           // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_206D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_VIP_TxtInfo                        CallFunc_Map_Find_Value;                           // 0x8(0x88)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UI_Component_PlayerName.UI_Component_PlayerName_C.PreConstruct
struct UUI_Component_PlayerName_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x13 (0x13 - 0x0)
// Function UI_Component_PlayerName.UI_Component_PlayerName_C.UpdatePlayerNameAndStyle
struct UUI_Component_PlayerName_C_UpdatePlayerNameAndStyle_Params
{
public:
	class FString                                NickName;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	uint8                                        VipType;                                           // 0x10(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bCheat;                                            // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bKilled;                                           // 0x12(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetText
struct UUI_Component_PlayerName_C_SetText_Params
{
public:
	class FString                                Content;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetTextColorAndOpacity
struct UUI_Component_PlayerName_C_SetTextColorAndOpacity_Params
{
public:
	struct FSlateColor                           InColor;                                           // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x3 (0x3 - 0x0)
// Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetStyle
struct UUI_Component_PlayerName_C_SetStyle_Params
{
public:
	uint8                                        VipType;                                           // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bCheat;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bKilled;                                           // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetDeath
struct UUI_Component_PlayerName_C_SetDeath_Params
{
public:
	bool                                         bDeath;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetVip
struct UUI_Component_PlayerName_C_SetVip_Params
{
public:
	uint8                                        VipType;                                           // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetCheater
struct UUI_Component_PlayerName_C_SetCheater_Params
{
public:
	bool                                         bCheat;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC8 (0xC8 - 0x0)
// Function UI_Component_PlayerName.UI_Component_PlayerName_C.ExecuteUbergraph_UI_Component_PlayerName
struct UUI_Component_PlayerName_C_ExecuteUbergraph_UI_Component_PlayerName_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bCheat;                               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2073[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo;                   // 0x8(0x60)(HasGetValueTypeHash)
	class FString                                K2Node_Event_NickName;                             // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                        K2Node_Event_VipType_2;                            // 0x78(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bCheat_2;                             // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bKilled_1;                            // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2074[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Event_Content;                              // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2075[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_Event_InColor;                              // 0x98(0x28)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        K2Node_Event_VipType_1;                            // 0xC1(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bCheat_1;                             // 0xC2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bKilled;                              // 0xC3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        CallFunc_GetValidValue_ReturnValue_1;              // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bDeath;                               // 0xC5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        K2Node_Event_VipType;                              // 0xC6(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue_2;              // 0xC7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


