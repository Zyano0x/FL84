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
	 * Function SolarRedHint_General.SolarRedHint_General_C.GetModuleName
	 */
	struct USolarRedHint_General_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function SolarRedHint_General.SolarRedHint_General_C.OnSetHintDataComplete
	 */
	struct USolarRedHint_General_C_OnSetHintDataComplete_Params
	{	};

	/**
	 * Function SolarRedHint_General.SolarRedHint_General_C.SetStyle
	 */
	struct USolarRedHint_General_C_SetStyle_Params
	{
	public:
		E_Type_RedHint                                             Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SolarRedHint_General.SolarRedHint_General_C.SetHintData
	 */
	struct USolarRedHint_General_C_SetHintData_Params
	{
	public:
		int64_t                                                    Key;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ERedHintPath                                               Path;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAutoRefresh;                                            // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		E_Type_RedHint                                             Type;                                                    // 0x000A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SolarRedHint_General.SolarRedHint_General_C.PreConstruct
	 */
	struct USolarRedHint_General_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SolarRedHint_General.SolarRedHint_General_C.Construct
	 */
	struct USolarRedHint_General_C_Construct_Params
	{	};

	/**
	 * Function SolarRedHint_General.SolarRedHint_General_C.ExecuteUbergraph_SolarRedHint_General
	 */
	struct USolarRedHint_General_C_ExecuteUbergraph_SolarRedHint_General_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
