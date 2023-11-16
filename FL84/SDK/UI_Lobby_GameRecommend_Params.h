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
	 * Function UI_Lobby_GameRecommend.UI_Lobby_GameRecommend_C.Destruct
	 */
	struct UUI_Lobby_GameRecommend_C_Destruct_Params
	{	};

	/**
	 * Function UI_Lobby_GameRecommend.UI_Lobby_GameRecommend_C.ConstructCopy
	 */
	struct UUI_Lobby_GameRecommend_C_ConstructCopy_Params
	{	};

	/**
	 * Function UI_Lobby_GameRecommend.UI_Lobby_GameRecommend_C.GetModuleName
	 */
	struct UUI_Lobby_GameRecommend_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Lobby_GameRecommend.UI_Lobby_GameRecommend_C.PreConstruct
	 */
	struct UUI_Lobby_GameRecommend_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Lobby_GameRecommend.UI_Lobby_GameRecommend_C.Construct
	 */
	struct UUI_Lobby_GameRecommend_C_Construct_Params
	{	};

	/**
	 * Function UI_Lobby_GameRecommend.UI_Lobby_GameRecommend_C.ExecuteUbergraph_UI_Lobby_GameRecommend
	 */
	struct UUI_Lobby_GameRecommend_C_ExecuteUbergraph_UI_Lobby_GameRecommend_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FD3T[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
