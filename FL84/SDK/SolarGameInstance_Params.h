#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.6.511026
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
	 * Function SolarGameInstance.SolarGameInstance_C.LuaOnBroadcastModeChanged
	 */
	struct USolarGameInstance_C_LuaOnBroadcastModeChanged_Params
	{	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastPlayerName
	 */
	struct USolarGameInstance_C_LuaGetBroadcastPlayerName_Params
	{
	public:
		class FString                                              SolarPlayerID;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              BroadcastPlayerName;                                     // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastHeroName
	 */
	struct USolarGameInstance_C_LuaGetBroadcastHeroName_Params
	{
	public:
		class FString                                              SolarPlayerID;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              BroadcastPlayerName;                                     // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.SolarGM_TestCrashWithBP
	 */
	struct USolarGameInstance_C_SolarGM_TestCrashWithBP_Params
	{	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.SolarGM_TestEnsureMsgWithBP
	 */
	struct USolarGameInstance_C_SolarGM_TestEnsureMsgWithBP_Params
	{	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.ExecuteUbergraph_SolarGameInstance
	 */
	struct USolarGameInstance_C_ExecuteUbergraph_SolarGameInstance_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.OnBroadcastModeChanged__DelegateSignature
	 */
	struct USolarGameInstance_C_OnBroadcastModeChanged__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
