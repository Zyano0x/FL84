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
	 * DelegateFunction UI_Lobby_Banner.UI_Lobby_Banner_C.OnURLDownloadFinish_93060E3F46F47D3F119D36942F9AF1C4
	 */
	struct UUI_Lobby_Banner_C_OnURLDownloadFinish_93060E3F46F47D3F119D36942F9AF1C4_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UI_Lobby_Banner.UI_Lobby_Banner_C.OnSolarUIOpened
	 */
	struct UUI_Lobby_Banner_C_OnSolarUIOpened_Params
	{	};

	/**
	 * Function UI_Lobby_Banner.UI_Lobby_Banner_C.OnMouseButtonDown
	 */
	struct UUI_Lobby_Banner_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UI_Lobby_Banner.UI_Lobby_Banner_C.OnMouseButtonUp
	 */
	struct UUI_Lobby_Banner_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UI_Lobby_Banner.UI_Lobby_Banner_C.OnSolarUIClosed
	 */
	struct UUI_Lobby_Banner_C_OnSolarUIClosed_Params
	{	};

	/**
	 * Function UI_Lobby_Banner.UI_Lobby_Banner_C.GetModuleName
	 */
	struct UUI_Lobby_Banner_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Lobby_Banner.UI_Lobby_Banner_C.SetStateHD
	 */
	struct UUI_Lobby_Banner_C_SetStateHD_Params
	{
	public:
		E_TabLobbyItemState                                        State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Lobby_Banner.UI_Lobby_Banner_C.PreConstruct
	 */
	struct UUI_Lobby_Banner_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Lobby_Banner.UI_Lobby_Banner_C.OnMouseEnter
	 */
	struct UUI_Lobby_Banner_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_Lobby_Banner.UI_Lobby_Banner_C.OnMouseLeave
	 */
	struct UUI_Lobby_Banner_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_Lobby_Banner.UI_Lobby_Banner_C.ExecuteUbergraph_UI_Lobby_Banner
	 */
	struct UUI_Lobby_Banner_C_ExecuteUbergraph_UI_Lobby_Banner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GFRT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
