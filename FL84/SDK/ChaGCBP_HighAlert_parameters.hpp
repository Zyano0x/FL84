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
// Function ChaGCBP_HighAlert.ChaGCBP_HighAlert_C.ReceiveAlertEvent
struct AChaGCBP_HighAlert_C_ReceiveAlertEvent_Params
{
public:
	enum class EAlertDirection                   InDirection;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function ChaGCBP_HighAlert.ChaGCBP_HighAlert_C.ExecuteUbergraph_ChaGCBP_HighAlert
struct AChaGCBP_HighAlert_C_ExecuteUbergraph_ChaGCBP_HighAlert_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAlertDirection                   K2Node_Event_InDirection;                          // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


