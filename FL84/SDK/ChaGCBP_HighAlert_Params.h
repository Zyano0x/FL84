#pragma once

/**
 * Name: FL84
 * Version: 1.15.1.6
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ChaGCBP_HighAlert.ChaGCBP_HighAlert_C.ReceiveAlertEvent
	 */
	struct AChaGCBP_HighAlert_C_ReceiveAlertEvent_Params
	{
	public:
		EAlertDirection                                            InDirection;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChaGCBP_HighAlert.ChaGCBP_HighAlert_C.ExecuteUbergraph_ChaGCBP_HighAlert
	 */
	struct AChaGCBP_HighAlert_C_ExecuteUbergraph_ChaGCBP_HighAlert_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
