#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.5.503427
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
	 * Function AiPal.AiPalComponent.SetUserID
	 */
	struct UAiPalComponent_SetUserID_Params
	{
	public:
		class FString                                              UserId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AiPal.AiPalComponent.SetThreshold
	 */
	struct UAiPalComponent_SetThreshold_Params
	{
	public:
		float                                                      ThresholdPer;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AiPal.AiPalComponent.SetMaxDetectTimes
	 */
	struct UAiPalComponent_SetMaxDetectTimes_Params
	{
	public:
		int32_t                                                    DetectGap_ms;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AiPal.AiPalComponent.SetDetectGap_ms
	 */
	struct UAiPalComponent_SetDetectGap_ms_Params
	{
	public:
		int32_t                                                    DetectGap_ms;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AiPal.AiPalComponent.EndDetect
	 */
	struct UAiPalComponent_EndDetect_Params
	{	};

	/**
	 * Function AiPal.AiPalComponent.Capture
	 */
	struct UAiPalComponent_Capture_Params
	{	};

	/**
	 * Function AiPal.AiPalComponent.BeginDetect
	 */
	struct UAiPalComponent_BeginDetect_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
