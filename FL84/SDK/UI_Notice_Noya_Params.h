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
	 * Function UI_Notice_Noya.UI_Notice_Noya_C.Init
	 */
	struct UUI_Notice_Noya_C_Init_Params
	{	};

	/**
	 * Function UI_Notice_Noya.UI_Notice_Noya_C.随机选择一个可触发的提示
	 */
	struct UUI_Notice_Noya_C__Params_
	{
	public:
		struct FS_NoyaNoticeInfo                                   Output;                                                  // 0x0000(0x0070)  (Parm, OutParm, HasGetValueTypeHash)
		bool                                                       IsNotEmpty;                                              // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0ALC[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Notice_Noya.UI_Notice_Noya_C.判断触发条件是否达成
	 */
	struct UUI_Notice_Noya_C__Params__
	{
	public:
		struct FS_NoyaNoticeInfo                                   S_NoyaNoticeInfo;                                        // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G8U1[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Notice_Noya.UI_Notice_Noya_C.Construct
	 */
	struct UUI_Notice_Noya_C_Construct_Params
	{	};

	/**
	 * Function UI_Notice_Noya.UI_Notice_Noya_C.刷新显示CD
	 */
	struct UUI_Notice_Noya_C_CD_Params
	{	};

	/**
	 * Function UI_Notice_Noya.UI_Notice_Noya_C.注册被动提示
	 */
	struct UUI_Notice_Noya_C__Params
	{
	public:
		struct FS_NoyaNoticeInfo                                   NoticeInfo;                                              // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Notice_Noya.UI_Notice_Noya_C.ExecuteUbergraph_UI_Notice_Noya
	 */
	struct UUI_Notice_Noya_C_ExecuteUbergraph_UI_Notice_Noya_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
