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
// Function UI_BattlePass_Upgrade_Pop_Next.UI_BattlePass_Upgrade_Pop_Next_C.GetModuleName
struct UUI_BattlePass_Upgrade_Pop_Next_C_GetModuleName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UI_BattlePass_Upgrade_Pop_Next.UI_BattlePass_Upgrade_Pop_Next_C.ExecuteUbergraph_UI_BattlePass_Upgrade_Pop_Next
struct UUI_BattlePass_Upgrade_Pop_Next_C_ExecuteUbergraph_UI_BattlePass_Upgrade_Pop_Next_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1945[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


