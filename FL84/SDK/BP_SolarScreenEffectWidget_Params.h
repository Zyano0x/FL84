#pragma once

/**
 * Name: FL84
 * Version: 15.1
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
	 * Function BP_SolarScreenEffectWidget.BP_SolarScreenEffectWidget_C.FadeOutScreenEffect
	 */
	struct UBP_SolarScreenEffectWidget_C_FadeOutScreenEffect_Params
	{	};

	/**
	 * Function BP_SolarScreenEffectWidget.BP_SolarScreenEffectWidget_C.IsFadeOutFinished
	 */
	struct UBP_SolarScreenEffectWidget_C_IsFadeOutFinished_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SolarScreenEffectWidget.BP_SolarScreenEffectWidget_C.IsInstantEffectComplete
	 */
	struct UBP_SolarScreenEffectWidget_C_IsInstantEffectComplete_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
