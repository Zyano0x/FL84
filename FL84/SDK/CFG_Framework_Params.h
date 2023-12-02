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
	 * Function CFG_Framework.CFG_Framework_C.GetSkillStateByNameEnum
	 */
	struct UCFG_Framework_C_GetSkillStateByNameEnum_Params
	{
	public:
		ESkillStateNameEnum                                        Enum;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FS_SkillState                                       Out;                                                     // 0x0001(0x0002)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CFG_Framework.CFG_Framework_C.GetCustomRoomData
	 */
	struct UCFG_Framework_C_GetCustomRoomData_Params
	{
	public:
		struct FCustomRoomData                                     ReturnValue;                                             // 0x0000(0x00D8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function CFG_Framework.CFG_Framework_C.IsCustomRoomMode
	 */
	struct UCFG_Framework_C_IsCustomRoomMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CFG_Framework.CFG_Framework_C.GetSavedConfig
	 */
	struct UCFG_Framework_C_GetSavedConfig_Params
	{
	public:
		class UBP_ConfigSave_C*                                    AsBPConfigSave;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSuccess;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NAEX[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
