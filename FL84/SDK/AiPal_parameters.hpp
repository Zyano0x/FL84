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
// Function AiPal.AiPalComponent.SetUserID
struct UAiPalComponent_SetUserID_Params
{
public:
	class FString                                UserId;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AiPal.AiPalComponent.SetThreshold
struct UAiPalComponent_SetThreshold_Params
{
public:
	float                                        ThresholdPer;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AiPal.AiPalComponent.SetMaxDetectTimes
struct UAiPalComponent_SetMaxDetectTimes_Params
{
public:
	int32                                        DetectGap_ms;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AiPal.AiPalComponent.SetDetectGap_ms
struct UAiPalComponent_SetDetectGap_ms_Params
{
public:
	int32                                        DetectGap_ms;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


