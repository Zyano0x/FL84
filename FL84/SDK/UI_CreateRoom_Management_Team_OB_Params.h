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
	 * Function UI_CreateRoom_Management_Team_OB.UI_CreateRoom_Management_Team_OB_C.UpdateOB
	 */
	struct UUI_CreateRoom_Management_Team_OB_C_UpdateOB_Params
	{
	public:
		TArray<class ASCMPlayerState*>                             PlayerStateList;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_Management_Team_OB.UI_CreateRoom_Management_Team_OB_C.PreConstruct
	 */
	struct UUI_CreateRoom_Management_Team_OB_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CreateRoom_Management_Team_OB.UI_CreateRoom_Management_Team_OB_C.Construct
	 */
	struct UUI_CreateRoom_Management_Team_OB_C_Construct_Params
	{	};

	/**
	 * Function UI_CreateRoom_Management_Team_OB.UI_CreateRoom_Management_Team_OB_C.ExecuteUbergraph_UI_CreateRoom_Management_Team_OB
	 */
	struct UUI_CreateRoom_Management_Team_OB_C_ExecuteUbergraph_UI_CreateRoom_Management_Team_OB_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
