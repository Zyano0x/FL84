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
	 * Function UI_CreateRoom_Management_Solo.UI_CreateRoom_Management_Solo_C.GetTeams
	 */
	struct UUI_CreateRoom_Management_Solo_C_GetTeams_Params
	{
	public:
		TArray<class UUI_CreateRoom_Management_Team_C*>            Teams;                                                   // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_Management_Solo.UI_CreateRoom_Management_Solo_C.InitTeams
	 */
	struct UUI_CreateRoom_Management_Solo_C_InitTeams_Params
	{	};

	/**
	 * Function UI_CreateRoom_Management_Solo.UI_CreateRoom_Management_Solo_C.PreConstruct
	 */
	struct UUI_CreateRoom_Management_Solo_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CreateRoom_Management_Solo.UI_CreateRoom_Management_Solo_C.ExecuteUbergraph_UI_CreateRoom_Management_Solo
	 */
	struct UUI_CreateRoom_Management_Solo_C_ExecuteUbergraph_UI_CreateRoom_Management_Solo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W4HS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
