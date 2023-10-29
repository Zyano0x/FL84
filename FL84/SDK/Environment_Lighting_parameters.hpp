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
// Function Environment_Lighting.Environment_Lighting_C.ReceiveEndPlay
struct AEnvironment_Lighting_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Environment_Lighting.Environment_Lighting_C.GetModuleName
struct AEnvironment_Lighting_C_GetModuleName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function Environment_Lighting.Environment_Lighting_C.SetLight
struct AEnvironment_Lighting_C_SetLight_Params
{
public:
	class FString                                SceneName;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function Environment_Lighting.Environment_Lighting_C.SetCardSkyLightData
struct AEnvironment_Lighting_C_SetCardSkyLightData_Params
{
public:
	float                                        Indensity;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function Environment_Lighting.Environment_Lighting_C.ExecuteUbergraph_Environment_Lighting
struct AEnvironment_Lighting_C_ExecuteUbergraph_Environment_Lighting_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_283D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_SceneName;                      // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_Indensity;                      // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


