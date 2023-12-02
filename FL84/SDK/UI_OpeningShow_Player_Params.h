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
	 * Function UI_OpeningShow_Player.UI_OpeningShow_Player_C.GetNameCardCharacterPathByCharacterIDAndCardPose
	 */
	struct UUI_OpeningShow_Player_C_GetNameCardCharacterPathByCharacterIDAndCardPose_Params
	{
	public:
		int32_t                                                    CharacterId;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    CardPoseID;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UI_OpeningShow_Player.UI_OpeningShow_Player_C.SetPlayerBusinessInfo
	 */
	struct UUI_OpeningShow_Player_C_SetPlayerBusinessInfo_Params
	{
	public:
		class ASolarPlayerState*                                   ps;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PlayerNumber;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_36W9[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FExpRankMedalData                                   ExpRankMedalData;                                        // 0x0010(0x0038)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UI_OpeningShow_Player.UI_OpeningShow_Player_C.SetBusinessCard
	 */
	struct UUI_OpeningShow_Player_C_SetBusinessCard_Params
	{
	public:
		int32_t                                                    PoseId;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    BackgroundId;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SkinId;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_99RH[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UScaleBox*                                           ParentPanel;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UI_OpeningShow_Player.UI_OpeningShow_Player_C.GetModuleName
	 */
	struct UUI_OpeningShow_Player_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_OpeningShow_Player.UI_OpeningShow_Player_C.SetBGLight
	 */
	struct UUI_OpeningShow_Player_C_SetBGLight_Params
	{	};

	/**
	 * Function UI_OpeningShow_Player.UI_OpeningShow_Player_C.SetTeamPos
	 */
	struct UUI_OpeningShow_Player_C_SetTeamPos_Params
	{
	public:
		int32_t                                                    TeamPos;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y00U[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_OpeningShow_Player.UI_OpeningShow_Player_C.Construct
	 */
	struct UUI_OpeningShow_Player_C_Construct_Params
	{	};

	/**
	 * Function UI_OpeningShow_Player.UI_OpeningShow_Player_C.ExecuteUbergraph_UI_OpeningShow_Player
	 */
	struct UUI_OpeningShow_Player_C_ExecuteUbergraph_UI_OpeningShow_Player_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
