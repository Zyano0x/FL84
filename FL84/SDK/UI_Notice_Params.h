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
	 * Function UI_Notice.UI_Notice_C.SetStyle
	 */
	struct UUI_Notice_C_SetStyle_Params
	{
	public:
		struct FS_Notice                                           S_Notice;                                                // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Notice.UI_Notice_C.设置
	 */
	struct UUI_Notice_C__Params_
	{
	public:
		struct FS_Notice                                           S_Notice;                                                // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Notice.UI_Notice_C.移除
	 */
	struct UUI_Notice_C__Params__
	{	};

	/**
	 * Function UI_Notice.UI_Notice_C.新增
	 */
	struct UUI_Notice_C__Params___
	{
	public:
		struct FS_Notice                                           S_Notice;                                                // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Notice.UI_Notice_C.触发提示
	 */
	struct UUI_Notice_C__Params
	{
	};

	/**
	 * Function UI_Notice.UI_Notice_C.ShowNext
	 */
	struct UUI_Notice_C_ShowNext_Params
	{	};

	/**
	 * Function UI_Notice.UI_Notice_C.PreConstruct
	 */
	struct UUI_Notice_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Notice.UI_Notice_C.ExecuteUbergraph_UI_Notice
	 */
	struct UUI_Notice_C_ExecuteUbergraph_UI_Notice_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B6NV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
