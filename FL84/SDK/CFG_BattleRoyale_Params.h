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
	 * Function CFG_BattleRoyale.CFG_BattleRoyale_C.GetSkillStateByNameEnum
	 */
	struct UCFG_BattleRoyale_C_GetSkillStateByNameEnum_Params
	{
	public:
		ESkillStateNameEnum                                        Enum;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FS_SkillState                                       Out;                                                     // 0x0001(0x0002)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
