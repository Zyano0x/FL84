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
	 * Function Lobby_Script.Lobby_Script_C.ReceiveEndPlay
	 */
	struct ALobby_Script_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lobby_Script.Lobby_Script_C.ReceiveBeginPlayCopy
	 */
	struct ALobby_Script_C_ReceiveBeginPlayCopy_Params
	{	};

	/**
	 * Function Lobby_Script.Lobby_Script_C.GetModuleName
	 */
	struct ALobby_Script_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function Lobby_Script.Lobby_Script_C.ReceiveBeginPlay
	 */
	struct ALobby_Script_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Lobby_Script.Lobby_Script_C.ExecuteUbergraph_Lobby_Script
	 */
	struct ALobby_Script_C_ExecuteUbergraph_Lobby_Script_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
