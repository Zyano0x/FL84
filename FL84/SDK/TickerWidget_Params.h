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
	 * Function TickerWidget.TickerWidget_C.UpdateText
	 */
	struct UTickerWidget_C_UpdateText_Params
	{	};

	/**
	 * Function TickerWidget.TickerWidget_C.ApplyJustification
	 */
	struct UTickerWidget_C_ApplyJustification_Params
	{	};

	/**
	 * Function TickerWidget.TickerWidget_C.CanTicker
	 */
	struct UTickerWidget_C_CanTicker_Params
	{	};

	/**
	 * Function TickerWidget.TickerWidget_C.PlayerTickerAnimHelper
	 */
	struct UTickerWidget_C_PlayerTickerAnimHelper_Params
	{	};

	/**
	 * Function TickerWidget.TickerWidget_C.SetTextEditorLoc
	 */
	struct UTickerWidget_C_SetTextEditorLoc_Params
	{	};

	/**
	 * Function TickerWidget.TickerWidget_C.StopTickerAnimation
	 */
	struct UTickerWidget_C_StopTickerAnimation_Params
	{	};

	/**
	 * Function TickerWidget.TickerWidget_C.PlayTickerAnimation
	 */
	struct UTickerWidget_C_PlayTickerAnimation_Params
	{	};

	/**
	 * Function TickerWidget.TickerWidget_C.SetText
	 */
	struct UTickerWidget_C_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function TickerWidget.TickerWidget_C.OnSynchronizeProperties
	 */
	struct UTickerWidget_C_OnSynchronizeProperties_Params
	{	};

	/**
	 * Function TickerWidget.TickerWidget_C.PreConstruct
	 */
	struct UTickerWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TickerWidget.TickerWidget_C.OnHide
	 */
	struct UTickerWidget_C_OnHide_Params
	{	};

	/**
	 * Function TickerWidget.TickerWidget_C.OnSolarUIClosed
	 */
	struct UTickerWidget_C_OnSolarUIClosed_Params
	{	};

	/**
	 * Function TickerWidget.TickerWidget_C.Tick
	 */
	struct UTickerWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TickerWidget.TickerWidget_C.Construct
	 */
	struct UTickerWidget_C_Construct_Params
	{	};

	/**
	 * Function TickerWidget.TickerWidget_C.OnLocalLangChangedEx
	 */
	struct UTickerWidget_C_OnLocalLangChangedEx_Params
	{
	public:
		class FString                                              InLang;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function TickerWidget.TickerWidget_C.ExecuteUbergraph_TickerWidget
	 */
	struct UTickerWidget_C_ExecuteUbergraph_TickerWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D81J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
