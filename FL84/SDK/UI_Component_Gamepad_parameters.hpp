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
// Function UI_Component_Gamepad.UI_Component_Gamepad_C.GetModuleName
struct UUI_Component_Gamepad_C_GetModuleName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function UI_Component_Gamepad.UI_Component_Gamepad_C.GetGamepadIconByKey
struct UUI_Component_Gamepad_C_GetGamepadIconByKey_Params
{
public:
	struct FKey                                  InKey;                                             // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UPaperSprite*                          GamepadIcon;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x79 (0x79 - 0x0)
// Function UI_Component_Gamepad.UI_Component_Gamepad_C.SetData
struct UUI_Component_Gamepad_C_SetData_Params
{
public:
	struct FKey                                  ModifierKey;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FKey                                  MainKey;                                           // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FKey                                  LocalMainKey;                                      // 0x30(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FKey                                  LocalModifierKey;                                  // 0x48(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class UPaperSprite*                          CallFunc_GetGamepadIconByKey_GamepadIcon;          // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_25E9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPaperSprite*                          CallFunc_GetGamepadIconByKey_GamepadIcon_1;        // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UI_Component_Gamepad.UI_Component_Gamepad_C.PreConstruct
struct UUI_Component_Gamepad_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function UI_Component_Gamepad.UI_Component_Gamepad_C.ExecuteUbergraph_UI_Component_Gamepad
struct UUI_Component_Gamepad_C_ExecuteUbergraph_UI_Component_Gamepad_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


