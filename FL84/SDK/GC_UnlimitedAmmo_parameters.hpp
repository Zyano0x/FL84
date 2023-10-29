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

// 0x138 (0x138 - 0x0)
// Function GC_UnlimitedAmmo.GC_UnlimitedAmmo_C.OnRemove
struct AGC_UnlimitedAmmo_C_OnRemove_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xC0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0xC8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2106[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASolarCharacter*                       K2Node_DynamicCast_AsSolar_Character;              // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2107[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable;                              // 0xE0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlayerLocallyControlledOrSpectated_ReturnValue; // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_InSameTeamWithFirstPlayerController_ReturnValue; // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0xF2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2108[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable_1;                            // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_2;                            // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_Select_Default;                             // 0x118(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_Select_Default_1;                           // 0x128(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x140 (0x140 - 0x0)
// Function GC_UnlimitedAmmo.GC_UnlimitedAmmo_C.OnActive
struct AGC_UnlimitedAmmo_C_OnActive_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xC0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0xC8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2109[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASolarCharacter*                       K2Node_DynamicCast_AsSolar_Character;              // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_210A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable;                              // 0xE0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_StartActorEffect_ReturnValue;             // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlayerLocallyControlledOrSpectated_ReturnValue; // 0xF4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPlayerLocallyControlled_ReturnValue;    // 0xF5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_InSameTeamWithFirstPlayerController_ReturnValue; // 0xF6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0xF7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                Temp_string_Variable_1;                            // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_2;                            // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_StartScreenEffect_ReturnValue;            // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_210B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Select_Default;                             // 0x120(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_Select_Default_1;                           // 0x130(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

}
}


