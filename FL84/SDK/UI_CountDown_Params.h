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
	 * Function UI_CountDown.UI_CountDown_C.SequenceEvent__ENTRYPOINTUI_CountDown_1
	 */
	struct UUI_CountDown_C_SequenceEvent__ENTRYPOINTUI_CountDown_1_Params
	{
	public:
		class UOverlay*                                            NumberContainer;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CountDown.UI_CountDown_C.SetMiniCountDownText
	 */
	struct UUI_CountDown_C_SetMiniCountDownText_Params
	{
	public:
		class FString                                              InText;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CountDown.UI_CountDown_C.SetCountDownStyle
	 */
	struct UUI_CountDown_C_SetCountDownStyle_Params
	{
	public:
		E_CountDownStyle                                           Style;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T1FY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CountDown.UI_CountDown_C.Finish
	 */
	struct UUI_CountDown_C_Finish_Params
	{	};

	/**
	 * Function UI_CountDown.UI_CountDown_C.NumberContainer_Event_2
	 */
	struct UUI_CountDown_C_NumberContainer_Event_2_Params
	{
	public:
		class UOverlay*                                            NumberContainer;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CountDown.UI_CountDown_C.PreConstruct
	 */
	struct UUI_CountDown_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CountDown.UI_CountDown_C.通过参数倒数
	 */
	struct UUI_CountDown_C__Params_
	{
	public:
		int32_t                                                    Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CountDown.UI_CountDown_C.CustomEvent_3
	 */
	struct UUI_CountDown_C_CustomEvent_3_Params
	{	};

	/**
	 * Function UI_CountDown.UI_CountDown_C.通过数据模块倒数
	 */
	struct UUI_CountDown_C__Params
	{
	};

	/**
	 * Function UI_CountDown.UI_CountDown_C.CountDownBySingleNumber
	 */
	struct UUI_CountDown_C_CountDownBySingleNumber_Params
	{
	public:
		int32_t                                                    Number;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CountDown.UI_CountDown_C.CustomEvent_1
	 */
	struct UUI_CountDown_C_CustomEvent_1_Params
	{
	public:
		ESCMDataChangeType                                         ChangeType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1NFY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    OldValue;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewValue;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CountDown.UI_CountDown_C.CustomEvent_2
	 */
	struct UUI_CountDown_C_CustomEvent_2_Params
	{
	public:
		ESCMDataChangeType                                         ChangeType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9QV6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    OldValue;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewValue;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CountDown.UI_CountDown_C.ExecuteUbergraph_UI_CountDown
	 */
	struct UUI_CountDown_C_ExecuteUbergraph_UI_CountDown_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
