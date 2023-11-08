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
	 * Function BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C.InitCharacterByLua
	 */
	struct ABP_SolarLobbyCharacter_C_InitCharacterByLua_Params
	{	};

	/**
	 * Function BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C.ClearCharacterByLua
	 */
	struct ABP_SolarLobbyCharacter_C_ClearCharacterByLua_Params
	{	};

	/**
	 * Function BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C.IsCanOpenChangeAnim
	 */
	struct ABP_SolarLobbyCharacter_C_IsCanOpenChangeAnim_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C.IsCanOpenMirror
	 */
	struct ABP_SolarLobbyCharacter_C_IsCanOpenMirror_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C.GetModuleName
	 */
	struct ABP_SolarLobbyCharacter_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C.ReceiveBeginPlay
	 */
	struct ABP_SolarLobbyCharacter_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C.ExecuteUbergraph_BP_SolarLobbyCharacter
	 */
	struct ABP_SolarLobbyCharacter_C_ExecuteUbergraph_BP_SolarLobbyCharacter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
