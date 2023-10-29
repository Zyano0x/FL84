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
// Function UI_AvatarFrame_SB19.UI_AvatarFrame_SB19_C.GetModuleName
struct UUI_AvatarFrame_SB19_C_GetModuleName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UI_AvatarFrame_SB19.UI_AvatarFrame_SB19_C.SetAvatarIcon
struct UUI_AvatarFrame_SB19_C_SetAvatarIcon_Params
{
public:
	int32                                        InAvatarID;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_AvatarFrame_SB19.UI_AvatarFrame_SB19_C.SetEmptyState
struct UUI_AvatarFrame_SB19_C_SetEmptyState_Params
{
public:
	bool                                         IsEmpty;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UI_AvatarFrame_SB19.UI_AvatarFrame_SB19_C.SetPlayerGender
struct UUI_AvatarFrame_SB19_C_SetPlayerGender_Params
{
public:
	enum class E_Type_Gender                     Gender;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_AvatarFrame_SB19.UI_AvatarFrame_SB19_C.SetSocialIcon
struct UUI_AvatarFrame_SB19_C_SetSocialIcon_Params
{
public:
	enum class E_Type_Social                     Social;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_AvatarFrame_SB19.UI_AvatarFrame_SB19_C.PreConstruct
struct UUI_AvatarFrame_SB19_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function UI_AvatarFrame_SB19.UI_AvatarFrame_SB19_C.ExecuteUbergraph_UI_AvatarFrame_SB19
struct UUI_AvatarFrame_SB19_C_ExecuteUbergraph_UI_AvatarFrame_SB19_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27CC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

