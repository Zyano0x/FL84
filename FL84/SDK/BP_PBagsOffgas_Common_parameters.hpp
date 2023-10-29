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

// 0x2 (0x2 - 0x0)
// Function BP_PBagsOffgas_Common.BP_PBagsOffgas_Common_C.BackpackSFXBegin
struct ABP_PBagsOffgas_Common_C_BackpackSFXBegin_Params
{
public:
	enum class EFXJetType                        InJetType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GroundDetected;                                    // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA9 (0xA9 - 0x0)
// Function BP_PBagsOffgas_Common.BP_PBagsOffgas_Common_C.OnBackpackTrailAssembling
struct ABP_PBagsOffgas_Common_C_OnBackpackTrailAssembling_Params
{
public:
	struct FBackpackTrailAssemblingParams        Params;                                            // 0x0(0xA8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class EBackpackPropellingMode           PropellingMode;                                    // 0xA8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE3 (0xE3 - 0x0)
// Function BP_PBagsOffgas_Common.BP_PBagsOffgas_Common_C.ExecuteUbergraph_BP_PBagsOffgas_Common
struct ABP_PBagsOffgas_Common_C_ExecuteUbergraph_BP_PBagsOffgas_Common_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFXJetType                        K2Node_Event_InJetType;                            // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_GroundDetected;                       // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_253A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBackpackTrailAssemblingParams        K2Node_Event_Params;                               // 0x8(0xA8)(ConstParm)
	enum class EBackpackPropellingMode           K2Node_Event_PropellingMode;                       // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_253B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1; // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       K2Node_DynamicCast_AsParticle_System;              // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_253C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       K2Node_DynamicCast_AsParticle_System_1;            // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xE2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


