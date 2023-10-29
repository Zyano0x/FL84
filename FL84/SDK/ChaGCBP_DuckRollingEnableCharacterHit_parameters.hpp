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

// 0xCA (0xCA - 0x0)
// Function ChaGCBP_DuckRollingEnableCharacterHit.ChaGCBP_DuckRollingEnableCharacterHit_C.OnRemove
struct AChaGCBP_DuckRollingEnableCharacterHit_C_OnRemove_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xC0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0xC8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xE8 (0xE8 - 0x0)
// Function ChaGCBP_DuckRollingEnableCharacterHit.ChaGCBP_DuckRollingEnableCharacterHit_C.WhileActive
struct AChaGCBP_DuckRollingEnableCharacterHit_C_WhileActive_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xC0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0xC8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_251B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UB_DuckRollingMeshComponent_C*         CallFunc_GetComponentByClass_ReturnValue;          // 0xD0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_251C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue;         // 0xE0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ChaGCBP_DuckRollingEnableCharacterHit.ChaGCBP_DuckRollingEnableCharacterHit_C.ReceiveTick
struct AChaGCBP_DuckRollingEnableCharacterHit_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ChaGCBP_DuckRollingEnableCharacterHit.ChaGCBP_DuckRollingEnableCharacterHit_C.ReceiveEndPlay
struct AChaGCBP_DuckRollingEnableCharacterHit_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function ChaGCBP_DuckRollingEnableCharacterHit.ChaGCBP_DuckRollingEnableCharacterHit_C.ExecuteUbergraph_ChaGCBP_DuckRollingEnableCharacterHit
struct AChaGCBP_DuckRollingEnableCharacterHit_C_ExecuteUbergraph_ChaGCBP_DuckRollingEnableCharacterHit_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaSeconds;                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_251E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                            K2Node_DynamicCast_AsCharacter;                    // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EEndPlayReason                    K2Node_Event_EndPlayReason;                        // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_251F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x24(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2520[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue;              // 0x34(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x40(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


