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
// DelegateFunction UI_Lobby_Banner.UI_Lobby_Banner_C.OnURLDownloadFinish_D0B3E8F54C02B48E23F6E19AADE0C269
struct UUI_Lobby_Banner_C_OnURLDownloadFinish_D0B3E8F54C02B48E23F6E19AADE0C269_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x160 (0x160 - 0x0)
// Function UI_Lobby_Banner.UI_Lobby_Banner_C.OnMouseButtonDown
struct UUI_Lobby_Banner_C_OnMouseButtonDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x160 (0x160 - 0x0)
// Function UI_Lobby_Banner.UI_Lobby_Banner_C.OnMouseButtonUp
struct UUI_Lobby_Banner_C_OnMouseButtonUp_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function UI_Lobby_Banner.UI_Lobby_Banner_C.GetModuleName
struct UUI_Lobby_Banner_C_GetModuleName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function UI_Lobby_Banner.UI_Lobby_Banner_C.SetStateHD
struct UUI_Lobby_Banner_C_SetStateHD_Params
{
public:
	enum class E_TabLobbyItemState               State;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_TabLobbyItemState               Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_Lobby_Banner.UI_Lobby_Banner_C.PreConstruct
struct UUI_Lobby_Banner_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA8 (0xA8 - 0x0)
// Function UI_Lobby_Banner.UI_Lobby_Banner_C.OnMouseEnter
struct UUI_Lobby_Banner_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x70 (0x70 - 0x0)
// Function UI_Lobby_Banner.UI_Lobby_Banner_C.OnMouseLeave
struct UUI_Lobby_Banner_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x128 (0x128 - 0x0)
// Function UI_Lobby_Banner.UI_Lobby_Banner_C.ExecuteUbergraph_UI_Lobby_Banner
struct UUI_Lobby_Banner_C_ExecuteUbergraph_UI_Lobby_Banner_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2200[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0x8(0x70)(ConstParm)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPlatformSwitch_ReturnValue;             // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2201[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x7C(0x38)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_2202[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         K2Node_Event_MouseEvent_1;                         // 0xB8(0x70)(ConstParm)
};

}
}


